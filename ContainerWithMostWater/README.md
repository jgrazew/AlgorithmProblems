From Leet Code:

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

This is basically telling you to find the max area

the brute force method is O(n^2) complexity while the single pass approach is just O(n)
