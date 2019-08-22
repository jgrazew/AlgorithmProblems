One approach here is the iterative approach at O(n). 
I think this was a contender for the sliding window approach since the Brute Force method would have been O(n^2) but I did nt use a sliding window.
This was solved by keeping a running total and running it against the previous result. If the running total went negative then we reset it to 0.
