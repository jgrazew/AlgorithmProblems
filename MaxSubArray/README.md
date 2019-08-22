One approach here is the Dynamic Programming approach which is the iterative approach at O(n). it is dynamic programming because we are storing the result as we go. 
I think this was a contender for the sliding window approach since the Brute Force method would have been O(n^2) but I did nt use a sliding window.
This was solved by keeping a running total and running it against the previous result. If the running total went negative then we reset it to 0.
If we wanted a maximum substring of something like 5 integers the sliding window approach would have to be used. 
I think this solution is sightly different then Kadane’s Algorithm (which is O(n)) which takes the local_max and the global_max (But definitely similiar if not the same).

Note that this can also be solved using Divide and Conquer...  
