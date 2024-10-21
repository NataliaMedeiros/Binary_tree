# Binary_tree

## Tree
The tree is a non-linear data structure that contains nodes that are connected hierarchically (not lianerly). The node thai is at the upper level is considered a parent and the lower one is considered a children node. I this case a parent node can have many children nodes

### Threes terminology:
- Root: is the first node of a tree and we cannot have more than one root per tree.
- Edge: is the connecting link between the two nodes the the tree. If there are n nodes in a tree, then it will be a total of n-1 edges.
- Parent: is a node that have a connection link to another node in the level bellow.
- Child: is any node that is connected to a node one level above. Every node present in a tree can be considered a child, except for the root node.
- Siblings: The children node that shares de same parent.
- Leaf: is a node whith no children. It is the terminal node of a tree.
- Internal nodes: are the nodes with at least one child node. Every node, except for the leaf node are internal node
- External node: is the same as a leaf node
- Ancestor: are the node in between the root and the current node (including the root node).
- Descendants: are the nodes below a node's level.
- Level: the level represents  the number of steps from the top/root. Root is on level 0, their children are on level 1 and so on.

## Binary tree
Binany tree is a hierarchical data structure with nodes limited to two children each, that is a special case of three, which can have only 2 children nodes to each parent node.

### Representation of a binary tree in c:
A binary three can be represented using a linked list or an array.

#### Linked list representation:
For this kind of representation is used the double linked list, so ww can point to the right and left children of a binary tree node. NULL is given to the the pointer where there ar eno children connected.

## Implementation of a binary tree
The binary tree is implemented using a struct. Where each node contains 3 elemnents the data, the pointer to the right node and the pointer to the left pointer. The pointer will pointer NULL if it there's no children.

