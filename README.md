# 0x1D. C - Binary Trees

> Holberton School Low-Level Programming project focused on implementing basic binary tree operations in C.

---

## 📚 Project Description

This project covers the implementation of a variety of binary tree operations in C. You will work with the `binary_tree_t` structure to build, manipulate, and analyze binary trees (not necessarily binary search trees).

You will also reinforce:
- Recursion
- Memory management
- Tree traversals
- Tree properties (full, perfect, height, balance, etc.)

---

## ⚙️ Data Structure

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
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

