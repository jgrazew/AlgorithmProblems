//XORing n numbers is like counting the number of 1 bits in each position, and setting the corresponding output bit to 1 if the count is odd. The order in which you are XORing them doesn't matter.

//If an array contains x pairs of equal numbers and one unique number, the bits of the equal pairs cancel each other (since they contribute an even number of 1s in each position), leaving you with just the bits of the unique number.

//For example, take the following list of numbers :

//100100101
//010110110
//101101100 // the unique number
//100100101
//010110110
//Count the number of 1s in each position:

//321521522
//Result of XOR (1 bit in for each odd count) :

//101101100 
//which is the single unique number in the list.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int returnNum = 0;
        
        for(int i : nums){
            returnNum ^= i;
        }
        
        return returnNum;
    }
};
