//this solution uses Kahns Algorithm 

class Solution {
private:
    struct Edge{
        int destination;        
        Edge(int destination) : destination(destination)  { }
    }; 
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        std::vector<std::vector<Edge>> graph(numCourses);
        std::vector<int> inDegreeCount(numCourses, 0); //inDegreeCount is number of dependencies for a given node
        std::queue<int> q;
        
        //create the graph
        for(int i = 0; i < prerequisites.size(); i++){
            graph[prerequisites[i][1]].push_back(Edge(prerequisites[i][0]));
        }        
        
        for(int i = 0; i < graph.size(); i++){
            for(auto node : graph[i]){
                inDegreeCount[node.destination]++;
            }
        }
        
        for(int i = 0; i < inDegreeCount.size(); i++){
            if(inDegreeCount[i] == 0){
                q.push(i);
            }
        }
         
        std::vector<int> topologicalOrder;
        
        while(!q.empty()){
            int nodeToAdd = q.front();
            q.pop();
            topologicalOrder.push_back(nodeToAdd);
            
            //since we are going to remove the node we add to the topological order 
            //then we want to decrease each of its dependents inDegreeCount by 1
            for(auto dependentNode : graph[nodeToAdd]){
                inDegreeCount[dependentNode.destination]--;
                if(inDegreeCount[dependentNode.destination] == 0){
                    q.push(dependentNode.destination);
                }
            }
        }
        
        //if we have not added every node to the toplogical order then we have a cycle
        if(topologicalOrder.size() != numCourses){
            return false;
        }
        
        return true;
    }
};
