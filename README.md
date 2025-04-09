# 0x1D. C - Binary Trees

> A Holberton School project focused on building and understanding binary trees in C — from creating nodes to calculating height, balance, and perfection.

---

## 📚 Project Overview

This project is part of the Low-Level Programming track at Holberton School.  
It involves implementing multiple operations on binary trees, including traversal, measurement, and structural analysis.

You’ll learn:
- Recursion
- Tree-based data structures
- Memory management
- How to check if a binary tree is full, perfect, balanced, etc.

---

## ⚙️ Data Structures

All tasks use the following `struct` from `binary_trees.h`:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;    /* Binary Search Tree */
typedef struct binary_tree_s avl_t;    /* AVL Tree */
typedef struct binary_tree_s heap_t;   /* Max Binary Heap */
🚀 Implemented Tasks
File	Description
0-binary_tree_node.c	Create a binary tree node
1-binary_tree_insert_left.c	Insert a node as the left child
2-binary_tree_insert_right.c	Insert a node as the right child
3-binary_tree_delete.c	Delete an entire binary tree
4-binary_tree_is_leaf.c	Check if a node is a leaf
5-binary_tree_is_root.c	Check if a node is the root
6-binary_tree_preorder.c	Pre-order traversal
7-binary_tree_inorder.c	In-order traversal
8-binary_tree_postorder.c	Post-order traversal
9-binary_tree_height.c	Measure the height of a binary tree
10-binary_tree_depth.c	Measure the depth of a node
11-binary_tree_size.c	Count the total number of nodes
12-binary_tree_leaves.c	Count the number of leaves
13-binary_tree_nodes.c	Count the number of internal nodes
14-binary_tree_balance.c	Measure the balance factor of a node
15-binary_tree_is_full.c	Check if a binary tree is full
16-binary_tree_is_perfect.c	Check if a binary tree is perfect
17-binary_tree_sibling.c	Find the sibling of a node
18-binary_tree_uncle.c	Find the uncle of a node
🧪 Compilation Example
All .c files are compiled using:

bash
Copy
Edit
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <file>.c -o <output>
🧑‍💻 Authors
Mohammed Al Yousef, Mohammed Alzahrani — Holberton School Student
