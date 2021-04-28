Problem from LeetCode:
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.


A way to visualize what we are going to do here is pick up the matrix in our hands and just turn in 90 degrees.

This can be done in 2 steps. First we will transpose the matrix around the main diagnol then we will reflect it horzinally (essentially reverse it).

These operations are called transpose and reflect in linear algebra. 
