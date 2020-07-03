---------------------------------------------------FULL BINARY TREE-----------------------------------------
every node contain two child nodes except root nodes


-----------------------------------------------COMPLETE BINARY TREE-----------------------------------------
Henhence we proceed in the following manner in order to check if the binary tree is complete binary tree.

Cal1.Caculate the number of nodes (count) in the binary tree.
Sta2.Start recursion of the binary tree from the root node of the binary tree with index (i) being set as 0 and the number of nodes in the binary (count).
If 3.If the current node under examination is NULL, then the tree is a complete binary tree. Return true.
If 4.Ifindex (i) of the current node is greater than or equal to the number of nodes in the binary tree (count) i.e. (i>= count), then the tree is not a complete binary. Return false.
Rec5.Reursively check the left and right sub-trees of the binary tree for same condition. For the left sub-tree use the index as (2*i + 1) while for the right sub-tree use the index as (2*i + 2).

---------------------------------------------Skewed Binary Tree---------------------------------------------

A skewed binary tree is a type of binary tree in which all the nodes have only either one child or no child.

Types of Skewed Binary trees
There are 2 special types of skewed tree:
left skewed or right skewed
