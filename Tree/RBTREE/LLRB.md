## Review
- 2-3-4 Tree:
  - Every Node contains 2-4 children and children-1 keys except for the root( which can have one children and no  keys)
  - Ascending order

## Def and Prop
- ==Def:== PBT augmented with an extra boolean value at each node -> representing the prop of red or black
  - Root and leaves are black
  - Inner node have two children
  - Every child of a red node is black
  - The path from root to a leaf must traverses the same number of black nodes
  - N -> h<= 2lgN -> Ave~1.00lgN
  - Nearly all the method will be done under O(logN)

## Transform
- 2-3-4 -> 1-3 RBTree


## Deletion

See a RBTree as a 2-3-4 tree(which will be breach afterward)
for a 2-3-4 tree, It's insertion method , we will first make sure that the node we're at now is not 4-node
- So, when the root is 4-node,we will divide a 4-node into three 2-node(mid one becomes the parents, h+1) 
- when meeting a 4-node with its 2-node parents, we elevate the mid value to its parent and divide it into two 2-node
- 4-node with 3-node, we do the same
So lastly, the leaf will be only 2- or 3-node, which can be easier inserted
Apply it on RBTree,we just have to divide 4- to three 2-nodes(linked with red) When Descending, divide all the 4-node
When upgoing, we rotate to make 4-node well-defined in RBTree.

To deletemin from a 2-3tree
1. if 3-node, easy to delete
2. if 2-node, firstly trying to borrow from brother, if brother is plentiful, do what should do.
  Otherwise, merging the two brother with the minimum key of parents.
3. Lastly, divide all the 4-node(3*2-node)

As for ==Deletion==
it becomes easier to understand
1. Use the same transformation as the deletemin method. So that if we find the key, it wouldn't be the 2-node
2. Swap the key with its Successor(Rchild's smallest)
3. Lastly, divide all the 4-node
