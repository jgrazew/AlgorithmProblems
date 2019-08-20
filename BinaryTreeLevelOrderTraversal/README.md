A Level Order Traversal of a Binary Tree from Leet code.
This is a Breadth-first search traversal which is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root, and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level (Wikipedia).
I solved this using a queue, initially I thought I could solve using a stack but then I loose integrity of the data postion that way. using a queue we know that the first in is the first out rather then last in last out.

Question from LeetCode:
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
