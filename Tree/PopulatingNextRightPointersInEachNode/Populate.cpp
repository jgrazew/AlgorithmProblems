/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

//in this solution i take the same approach as finding the depth of a binary tree
//i do a BFS and track each level by taking the size of a queue before entering the second while loop
//I populate a vector with the nodes on each level
//I then iterate through the vector(like it is a linked list) and set the next pointer 
//I think the time complexity is still O(n) here

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return root;
        
        std::queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){           
            int size = q.size();
            std::vector<Node*> vec;
            
            while(size > 0){
                Node* temp = q.front();
                q.pop();
                vec.push_back(temp);
                
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                
                if(temp->right != NULL){
                    q.push(temp->right);
                }
                
                size--;
                
            }
            
            for(int i = 0; i < vec.size(); i++){
                //check if we are at the last element in the vector
                if(i == vec.size() - 1){
                    vec[i]->next = NULL;
                } else {
                    vec[i]->next = vec[i+1];
                }
            }
            
        }
           
        return root;
    }
};
