#ifndef _BINARY_TREES_H
#define _BINARY_TREES_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
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

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;
/* AVL  Tree */
typedef struct binary_tree_s avl_t;
/* MAX_BINARY HEAP */
typedef struct binary_tree_s heap_t;
/* binary_tree_print */
void binary_tree_print(const binary_tree_t *);
/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* Task 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* Task 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* Task 3 */
void binary_tree_delete(binary_tree_t *tree);
/*Task 4*/
int binary_tree_is_leaf(const binary_tree_t *node);
/* Task 5 */
int binary_tree_is_root(const binary_tree_t *node);
/* Task 6  Preorder Traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); 
/* Task 7 Inorder Traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* Task 8 PostOrder Traversal 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* Task 9 Height of Binary Tree */
size_t binary_tree_height(const binary_tree_t *tree);
/* Task 10 */
size_t binary_tree_depth(const binary_tree_t *tree); 
/* Task 11 */
size_t binary_tree_size(const binary_tree_t *tree);
/* Task 12 */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* Task 13 */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* Task 14 Tree Balance */
int binary_tree_balance(const binary_tree_t *tree);
/* Task 15 Tree is Full */
int binary_tree_is_full(const binary_tree_t *tree);
/* Task 16 Tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* Task 17 Node Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* Task 18 Uncle of Node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
#endif /* _BINARY_TREE_H */
