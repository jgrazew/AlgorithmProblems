//solution is mostly from LeetCode referenced in the ReadMe but important to have a backtracking solution for the future

#include "pch.h"
#include <iostream>
#include <vector>;
#include <fstream>

using namespace std;
ofstream outputFile;
	void explore(vector<int>& candidates, int start, int target);

	vector<int> combination;
	vector<vector<int>> combinations;

	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		explore(candidates, 0, target);
		return combinations;
	}

	void explore(vector<int>& candidates, int start, int target) {
		/*logging*/
		for (auto c : combination)
		{
			outputFile << c << " ";
		}
		outputFile << "end combo " << endl;
		outputFile << "start " << start << " target " << target << std::endl;
		/*end logging*/

		if (target == 0) {
			combinations.push_back(combination); // yes! a valid solution found
			return;
		}
		if (target < 0) return; // this is when we lose hope and backtrack :(

		for (int i = start; i < candidates.size(); i++) {
			// explore all solutions using candidates[i] at least once
			combination.push_back(candidates[i]);
			explore(candidates, i, target - candidates[i]);

			// explore solutions that don't use candidates[i]
			combination.pop_back();
		}
	}

	int main()
	{		
		outputFile.open("ConoleAppOutput.txt");
		vector<int> ar;
		ar.push_back(2);
		ar.push_back(4);
		ar.push_back(6);
		ar.push_back(8);
		int n = ar.size();

		int sum = 8; // set value of sum 
		vector<vector<int> > res = combinationSum(ar, sum);

		// If result is empty, then 
		if (res.size() == 0)
		{
			cout << "Emptyn";
			return 0;
		}

		// Print all combinations stored in res. 
		for (int i = 0; i < res.size(); i++)
		{
			if (res[i].size() > 0)
			{
				cout << " ( ";
				for (int j = 0; j < res[i].size(); j++)
					cout << res[i][j] << " ";
				cout << ")";
			}
		}
	}
