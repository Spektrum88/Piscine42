<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" href="42.css" type="text/css">
<title>42 Intermediate C Exam Review</title>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
</head>

<body>
<center><a href="exam-review.php">Piscine C Exam Review</a><br>
<a href="http://nigal.freeshell.org/42/exam-solutions/" target="_blank">Piscine C Exam Review Solutions</a><br><br>
<a href="exam-review-intermediate.php">C Intermediate Exam Review</a><br>
</center>
<h1>42 Intermediate C Exam Review:</h1>

<pre> 
======================================./level00-count_of_2.txt=========================================
Assignment name  : count_of_2
Expected files   : count_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------
Implement a function which counts, for a given integer n, the number of 2s
that appear in all the numbers between 0 and n (inclusive).
Your function must be declared as follows:
int    count_of_2(int n);
If n <= 1, the function returns 0;
Examples:
input  = 25
output =  9
because there are 9 2s in (2, 12, 20, 21, 22, 23, 24 and 25)
Note:
the number 22 counts as 2 because it has two 2s, number 202 count as 2, number 22022 count as 4 etc
==========================================================================================




======================================./level00-equation.txt=========================================
Assignment name  : equation
Expected files   : equation.c
Allowed functions: printf
-------------------------------------------------------------------------------
The goal of this exercise is to find all possible answers to the following
equation :

	AB + CA = n

where A, B, and C are individual digits [0-9] and n is an integer.
Note that here AB is not the product of A and B. It is merely a two digit number
with A being the first digit (tens place) and B the second digit (ones place).

Implement a function that, given an integer n, prints on the standard
output all the possible values of A, B, C for which the equation is true.

Your function must be declared as follows:

void    equation(int n);

If a solution could not be found, nothing is printed.
Examples:
For the value n = 42, the output would be :
$> ./equation 42
A = 0, B = 2, C = 4
A = 1, B = 1, C = 3
A = 2, B = 0, C = 2
A = 3, B = 9, C = 0
$>
For the value n = 111, the output would be :
$> ./equation 111
A = 2, B = 9, C = 8
A = 3, B = 8, C = 7
A = 4, B = 7, C = 6
A = 5, B = 6, C = 5
A = 6, B = 5, C = 4
A = 7, B = 4, C = 3
A = 8, B = 3, C = 2
A = 9, B = 2, C = 1
$>
For the value n = 0, the output would be :
$> ./equation 0 | cat -e
A = 0, B = 0, C = 0$
$>

Note:
- The displayed output will always be sorted in ascending order beginning with A, then B and then C.
(as shown in the examples above)
==========================================================================================




======================================./level00-find_pivot.txt=========================================
Assignment name  : find_pivot
Expected files   : find_pivot.c
Allowed functions: 
--------------------------------------------------------------------------------
ALERT: OPTIMIZED SOLUTION REQUIRED.
Given an array of integers and its size passed as parameters,
create a function able to return the pivot index of this array.
The pivot index is the index where the sum of the numbers on the left
is equal to the sum of the numbers on the right.
The function must be declared as follows:
    int find_pivot(int *arr, int n);
If there is no pivot present, return -1.
Considerations:
- Be careful: the naive solution won't work on our big input, you have to
find an optimized solution which will run in O(n) time (where n is the
length of the array). 
- The array will always have a length bigger than 1.
- You don't have to take care of overflow or underflow of sums,
it will stay in an range of an int.
- The bigger test we will do is on an array of 1.000.000 elements.
It should run in less than 2 seconds.
 
Example 1:
    arr = [ 1, 2, 3, 4, 0, 6 ] , n = 6
In this case, your function should return 3.
Because at index 3, the sum of the elements on the left is equals
to the sum of the elements on the right:
    = 6        = 6
  _______     ____
[ 1, 2, 3, 4, 0, 6 ]
           ^
           |
     with pivot = 3
Example 2: 
arr = [ -5, 10, 2, 5 ] , n = 4
In this case, your function should return 2.
Example 3:
arr = [ 1, 100, 0, 0, 1 ] , n = 5
In this case, your function should return 1.
Example 4:
arr = [ 7, 9, 8 ] , n = 3
In this case, your function should return -1.
Example 5:
arr = [ 1 , 2 ] , n = 2
In this case, your function should return -1.
==========================================================================================




======================================./level00-is_anagram.txt=========================================
Assignment name  : is_anagram
Expected files   : is_anagram.c
Allowed functions: 
--------------------------------------------------------------------------------
ALERT: OPTIMIZED SOLUTION REQUIRED.
An anagram is a sequence of characters formed by rearranging the letters of
another sequence, such as 'cinema', formed from 'iceman'.
Given two strings as parameters, create a function able to tell whether or
not the first string is an anagram of the second.
The function must be declared as follows:
int is_anagram(char *a, char *b);
Considerations:
- Be careful: the naive solution won't work on our big input, you have to
find an optimized solution which will run in O(sa + sb) time (where sa is
the length of a and sb length of b).
- Our tested string will always be a sequence of ascii characters between 32
and 126 inclusive.
- The bigger test we will do is on 2 sequences of 1.000.000 characteres each.
It should run in less than 2 seconds.
Example 1:
a='abcdef'
b='fabcde'
In this case, these two strings are anagrams, your function should return 1.
Example 2: 
a='.123?.'
b='?321..'
In this case, these two strings are anagrams, your function should return 1.
Example 3:
a='abca'
b='bcab'
In this case, these two strings are not anagrams, your function should return 0.
==========================================================================================




======================================./level00-print_doublon.txt=========================================
Assignment name  : print_doublon
Expected files   : print_doublon.c
Allowed functions: printf
--------------------------------------------------------------------------------
ALERT: OPTIMIZED SOLUTION REQUIRED.
Given two sorted arrays passed as parameters,
create a function able to print all the number that are present
in one array and in the other, separated by a space.
Then print a new line.
The function must be declared as follows (with 'na' the length of the array 'a',
and 'nb' the length of the array 'b'):
void    print_doublon(int *a, int na, int *b, int nb);
Considerations:
- Be careful: the naive solution won't work on our big input, you have to
find an optimized solution which will run in O(n) time (where n is
the length of the longest array between a and b).
- All elements of an array are unique. The same number will not repeat in an array. 
- If there is no doublon, just print a new line '\n'.
- The bigger test we will run will be on 2 arrays of 500 000 elements each,
it should run in less than 2 seconds.
Example 1:
a = [ 1,  2, 10, 15 ] , na = 4
b = [ 2, 20, 40, 70 ] , nb = 4
In this case, by using a main file that use your function with the above input,
the output should be (using cat -e):
$> ./example1 | cat -e
2$
Example 2: 
a = [ -5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000 ] , na = 11
b = [  2,  4,  5,  6,  7, 10,  40,  70 ]                  , nb = 8 
In this case, by using a main file that use your function with the above input,
the output should be (using cat -e):
$> ./example2 | cat -e
2 10 70$
Example 3:
a = [ 100,  200, 300 ]    , na = 3
b = [   1,    2,   3, 4 ] , nb = 4
In this case, by using a main file that use your function with the above input,
the output should be (using cat -e):
$> ./example3 | cat -e
$
==========================================================================================




======================================./level01-count_alpha.txt=========================================
Assignment name  : count_alpha
Expected files   : count_alpha.c
Allowed functions: write, printf
--------------------------------------------------------------------------------

Write a program called count_alpha that takes a string and displays the number
of occurences of its alphabetical characters. Other characters are not counted.
The order is the order of occurence in the string. The display must be ended by
a newline.

The format is in the examples.

If the number of arguments is not 1, display only a newline.

Examples :
$> ./count_alpha abbcc
1a, 2b, 2c
$> ./count_alpha "abbcc"
1a, 2b, 2c
$> ./count_alpha "abbcc" "dddeef" | cat -e
$
$> ./count_alpha "My Hyze 47y 7." | cat -e
1m, 3y, 1h, 1z, 1e$
$> ./count_alpha "" | cat -e
$
==========================================================================================




======================================./level01-height_tree.txt=========================================
Assignment name  : height_tree
Expected files   : height_tree.c
Allowed functions: 
--------------------------------------------------------------------------------
Implement a function to calculate the height of an n-ary tree.
Your should use the following node structure in your code for the n-ary tree:
    struct s_node {
        int           value;
        struct s_node **nodes;
    };
In this struct nodes is a null-terminated array.
Note that the height of a tree is the number of EDGES on the longest path from
the root node to a leaf. A tree with a single node will have a height of 0.
An empty tree should have height -1;
The function must be declared as follows:
    int height_tree(struct s_node *root);
EXAMPLE:
The Input Tree :
       94
           / \
          /   \
         34   52
        / \ \
       /   \     \
      1    99    11
         /
        /
           13
Output : 3
==========================================================================================




======================================./level01-queue.txt=========================================
Assignment name  : queue
Expected files   : queue.c
Allowed functions: malloc free
--------------------------------------------------------------------------------
Implement a queue data structure in C, using the following structures in your 
code:
    struct s_node {
        void *content;
        struct s_node *next;
    };
    struct s_queue {
        struct s_node *first;
        struct s_node *last;
    };
A queue uses FIFO (first-in fist-out) ordering :
items are removed from the data structure in the same order that they are added.
Implement 5 functions for the following queue operations :
    - init() : Initialize the queue.
      The first and last pointers are set to NULL.
    - enqueue(queue, item) : Add an item to the end of the queue.
    - dequeue(queue) : Remove the first item from the queue and return it.
      If the queue is empty, the function returns NULL.
    - peek(queue) : Return the first item of the queue.
      If the queue is empty, the function returns NULL.
    - isEmpty(queue) : Return 1 if the queue is empty, 0 otherwise.
These functions must be declared as follows:
    struct s_queue *init(void);
    void enqueue(struct s_queue *queue, void *content);
    void *dequeue(struct s_queue *queue);
    void *peek(struct s_queue *queue);
    int isEmpty(struct s_queue *queue);
==========================================================================================




======================================./level01-stack.txt=========================================
Assignment name  : stack
Expected files   : stack.c
Allowed functions: malloc free
--------------------------------------------------------------------------------
Implement a stack data structure in C, using the following structures in your
code:
    struct s_node {
        void          *content;
        struct s_node *next;
    };
    struct s_stack {
        struct s_node *top;
    };
A stack uses LIFO (last-in fist-out) ordering :
the most recent item added to the stack is the first item to be removed.
Implement 5 functions for the following stack operations :
    - init() : Initialize the stack.
      The top pointer is set to NULL.
    - pop(stack) : Remove the top item from the stack and return it.
      If the stack is empty, the function returns NULL.
    - push(stack, item) : Add an item to the top of the stack.
    - peek(stack) : Return the top of the stack.
      If the stack is empty, the function returns NULL.
    - isEmpty(stack) : Return 1 if the stack is empty, 0 otherwise.
These functions must be declared as follows:
    struct s_stack *init(void);
    void *pop(struct s_stack *stack);
    void push(struct s_stack *stack, void *content);
    void *peek(struct s_stack *stack);
    int isEmpty(struct s_stack *stack);
==========================================================================================




======================================./level02-is_looping.txt=========================================
Assignment name  : is_looping
Expected files   : is_looping.c
Allowed functions: 
--------------------------------------------------------------------------------
ALERT: OPTIMIZED SOLUTION REQUIRED.
Given the first node of a linked list as parameter, create a function which
returns 1 if the linked list is looping, otherwise 0.
The linked list uses the following structure:
struct s_node {
    int value;
    struct s_node *next;
};
The function must be declared as follows:
int is_looping(struct s_node *node);
Considerations:
- Be careful: the naive solution won't work on our big input, you have to
find a solution with better complexity than O(N^2) time (where N is the
number of nodes).
- The values of each node does not matter.
- The bigger test we will do is on a linked list of 500.000 nodes, with the
beginning of the loop at the middle. It should run in less than 2 seconds.
Example 1:
1 -> 2 -> 3 -> 4 -> 5
          ^         |
          |         v
          |         6
           \        |
            \______/
In this case, it should return 1 (at the node 3 begins the loop).
Example 2: 
12 -> 150 -> 30 -> 50 -> 345 -> 120
       ^                         |
       |                         v
       |                        200
        \                      /
         \____________________/
In this case, it should return 1 (the loop begins at node 150).
Example 3:
12 -> 150 -> 30 -> 50 -> 345 -> 120
In this case, it should return 0 (no loop begins).
Example 4:
12 -> 19 -> 14
            ^ \
            | |
            \/
In this case, it should return 1 (the loop begins at node 14).
==========================================================================================




======================================./level02-longest_sequence.txt=========================================
Assignment name  : longest_sequence
Expected files   : longest_sequence.c
Allowed functions: 
--------------------------------------------------------------------------------

Given the root node of a binary tree, create a function that return the length of the longest path which comprises of nodes with consecutive values in increasing order.
Every node is considered as a path of length 1.

The binary tree uses the following node structure :

struct s_node 
{
	int value;
	struct s_node *left;
	struct s_node *right;
};

The function must be declared as follows:

int	longest_sequence(struct s_node *node);


Example 1:

       10
       /
      5
     / \
    /   \
   6    9
  / \
 /   \
7   13

In this case, it should return 3 (because the longest consecutive sequence is: 5 -> 6 -> 7).

Example 2:

   5
  / \
 /   \
6     4
    /  \
   9    3
 /  \    \
3    2    2

In this case, your function return 2 (because the longest consecutive sequence is: 5 -> 6 ).

Example 3: 

    30
    / \
   /   \
  15   41
 /     /
61    80

In this case, it should return 1.

Example 4:

NULL

In this case, as the root node is null, your function should return 0.
==========================================================================================




======================================./level02-ord_alphlong.txt=========================================
Assignment name  : ord_alphlong
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes a string as a parameter and prints its words sorted
in order of their length first and then in alphabetical order on each line:
when we say alphabetical order we ignore the case of letters.
For example aA and Aa are the same but the  original order must remain
(lower and upper case are the same in alphabetical order). If there are
duplicates, they must remain.
If number of parameters is different from 1, the program prints 
\n.
There will be only spaces, tabs and alphanumeric caracters in strings.
You'll print only one space between each word. Nothing before the first and 
after the last word of each line.
Examples:
$>./ord_alphlong
$
$>./ord_alphlong "De son baton il frappa la pierre et l eau jaillit" | cat -e
l$
De et il la$
eau son$
baton$
frappa pierre$
jaillit$
$>./ord_alphlong "A a b B cc ca cd" | cat -e
A a b B$
ca cc cd$
$>./ord_alphlong "Pour l Imperium de l humanite" | cat -e
l l$
de$
Pour$
humanite Imperium$
$>
==========================================================================================




======================================./level02-reverse_tree.txt=========================================
Assignment name  : reverse_tree
Expected files   : reverse_tree.c
Allowed functions: 
--------------------------------------------------------------------------------
Implement a function to reverse a binary tree (i.e., flip it from right to left).
You must declare the following node structure for the binary tree in your code:
    struct s_node {
        int           value;
        struct s_node *right;
        struct s_node *left;
    };
The function must be declared as follows:
    void reverse_tree(struct s_node *root);
You must include the struct in your file.
EXAMPLE :
    The following tree :
           94
           / \
          /   \
         34   52
        / \
       /   \
      1    99
     /     / \
    20    /   \
         /     \
        83     39
         \     / \
         61   /   \
             37   67
    would become :
          94
          / \
         /   \
        52   34
             / \
            /   \
           99    1
          / \     \
         /   \    20
        /     \
       39     83
      / \     /
     /   \   61
    67   37
==========================================================================================




======================================./level02-str_maxlenoc.txt=========================================
Assignment name  : str_maxlenoc
Expected files   : str_maxlenoc.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes one or more strings and displays, followed by a
newline, the longest string that appears in every parameter. If more that one
string qualifies, it will display the one that appears first in the first
parameter. Note that the empty string technically appears in any string.

If there are no parameters, the program displays \n.

Examples:

$>./str_maxlenoc ab bac abacabccabcb
a
$>./str_maxlenoc bonjour salut bonjour bonjour
u
$>./str_maxlenoc xoxAoxo xoxAox  oxAox oxo  A ooxAoxx oxooxo Axo | cat -e
$
$>./str_maxlenoc bosdsdfnjodur atehhellosd afkuonjosurafg headfgllosf fghellosag afdfbosnjourafg
os
$>./str_maxlenoc | cat -e
$
==========================================================================================




======================================./level03-can_split.txt=========================================
Assignment name  : can_split
Expected files   : can_split.c
Allowed functions: 
--------------------------------------------------------------------------------
ALERT: OPTIMIZED SOLUTION REQUIRED.
Given the root node of a binary tree, create a function that returns 1 if, by
removing one edge of the tree, it can be splitted in two trees with the same
number of nodes (same 'size'). 
The binary tree uses the following node structure :
struct s_node 
{
    int value;
    struct s_node *left;
    struct s_node *right;
};
The function must be declared as follows:
int can_split(struct s_node *n);
Consideration:
- Be careful: the naive solution won't work on our big input, you have to find
an optimized solution which will run in O(N) time (where N is the number of nodes).
- The bigger test we will do is about 250 000 nodes. It should run in less
than 2 seconds.
Example 1:
       28
       /
      51
     / \
    /   \
   26   48
  / \
 /   \
76   13
In this case, it should return 1 (remove the edge between 51 and 26 will split the tree
in 2 trees with each a size of 3).
Example 2: 
    30
    / \
   /   \
  15   41
 /     /
61    80
In this case, it should return 0 (you can't split the tree and make 2 trees with the
same size).
Example 3:
10
  \
   12
In this case, your function return 1.
Example 4:
   5
  / \
 /   \
1     6    
    /  \
   7    4
 /  \    \
3    2    8
In this case, your function should return 0.
==========================================================================================




======================================./level03-convert_bst.txt=========================================
Assignment name  : convert_bst
Expected files   : convert_bst.c
Allowed functions: 
--------------------------------------------------------------------------------
A binary search tree (BST) is a binary tree in which every node fits
a specific ordering property :
all left descendants <= n < all right descendants
This must be true for each node n.
Implement a function to convert a binary search tree to a sorted, circular,
doubly-linked list.
This conversion must be in-place (using the tree nodes as the new list nodes).
The binary search tree uses the following node structure :
    struct s_node {
        int           value;
        struct s_node *right;
        struct s_node *left;
    };
The function must be declared as follows:
    struct s_node *convert_bst(struct s_node *bst);
The function must return a pointer to the smallest element of the sorted,
circular, doubly-linked list.
For each node of the linked list, the right pointer points to the next node
and the left pointer points to the previous node.
The sort is in increasing order.
==========================================================================================




======================================./level03-gold_gain.txt=========================================
Assignment name  : gold_gain
Expected files   : gold_gain.c
Allowed functions: malloc
--------------------------------------------------------------------------------
ALERT: OPTIMIZED SOLUTION REQUIRED.
Given a matrix which represent a gold mine of n*n dimensions.
Each field in this mine contains a positive integer which is the
amount of gold in tons.
Initially the miner is at first column but can be at any row.
He can move only (right->,right up /,right down\) that is from a given cell,
the miner can move to the cell diagonally up towards the right or right or
diagonally down towards the right.
implement an algorithm able to return the maximum amount of gold he can collect.
The function must be declared as follows:
int gold_gain(int **mine, int n);
Considerations:
- Be careful: the brute force solution won't work on our big input, you have to
find an optimized solution which use dynamic programming.
- You don't have to handle error case, the matrix will be always squared.
- The bigger test we will do is on matrix of 1 000 * 1 000,
it should run in less than 2 seconds.
Example 1:
mine = [
  [ 1, 0, 0 ],
  [ 0, 3, 4 ],
  [ 0, 0, 0 ]
]
n = 3
In this example, your function should return 8,
because taking the following path gain 8:
(0,0) -> (1,1) -> (1,2)
  1   ->   3   ->   4
Example 2:
mine = [
  [ 1, 2, 3 ],
  [ 3, 4, 8 ],
  [ 9, 6, 7 ]
]
n = 3
In this example, your function should return 23,
because taking the following path gain 23:
(2,0) -> (2,1) -> (1,3)
Example 3:
mine = [
  [ 1, 3, 1, 5 ],
  [ 2, 2, 4, 1 ],
  [ 5, 0, 2, 3 ],
  [ 0, 6, 1, 2 ]
]
n = 4
In this example, your function should return 16,
because there is 2 path which give this gain:
(2,0) -> (1,1) -> (1,2) -> (0,3)
or
(2,0) -> (3,1) -> (2,2) -> (2,3)
==========================================================================================




======================================./level03-perimeter.txt=========================================
Assignment name  : perimeter
Expected files   : perimeter.c
Allowed functions: printf
--------------------------------------------------------------------------------
Implement a function which prints the perimeter of a binary tree.
The perimeter is defined as follows :
- leftmost nodes from top to bottom
- leaf nodes from left to right
- rightmost nodes from bottom to top
The binary tree uses the following node structure :
    struct s_node {
        int           value;
        struct s_node *right;
        struct s_node *left;
    };
The function prints on the standard output the value of the nodes
seperated by a single space and with a new line at the end.
The function must be declared as follows:
    void perimeter(struct s_node *root);
EXAMPLE :
    For the following tree :
                     92
                     / \
                    /   \
                   85   26
                  /       \
                 79       64
                  \       / \
                  10     /   \
                  /     /     \
                 39    /       \
                /     /         \
               35    /           \
              /     /             \
             96    /               \
                  /                 \
                 40                 78
                / \                 / \
               /   \               /   \
              /     \             2    85
             /       \           / \     \
            /         \         /   \    51
           /           \       /     \
          /             \     33     11
         88             10     \     /
        / \             / \    55   99
       /   \           /   \
      12   55         52   87
     /     / \       / \     \
    58    /   \     /   \    31
         58   41   22   35
    the output would be :
    92 85 79 96 58 58 41 22 35 31 55 99 51 85 78 64 26
==========================================================================================




======================================./level03-width_tree.txt=========================================
Assignment name  : width_tree
Expected files   : width_tree.c
Allowed functions: 
--------------------------------------------------------------------------------

ALERT: OPTIMIZED SOLUTION REQUIRED.

Given the root node of a binary tree, create a function that returns the
'width' of the tree, which is the number of node present on the longest
path between two leaves in the tree.

The binary tree uses the following node structure :

struct s_node 
{
	int value;
	struct s_node *left;
	struct s_node *right;
};

The function must be declared as follows:

int	width_tree(struct s_node *n);

Consideration:

- Be careful: the naive solution won't work on our big input, you have to find
an optimized solution which will run in O(N) time (where N is the number of nodes).
- The values of each node does not matter.
- The bigger test we will do is about 250 000 nodes. It should run in less
than 2 seconds.

Example 1:

        1
      /   \
    2      \
   / \       \
 3    4       5
     /       /  \
    6       7    8

In this case, your function should return 6, 

because the longest path between two leaves is 6->4->2->1->5->7 (or finish by 8),
which contains 6 nodes, so the tree have a 'width' of 6.

Example 2:

         1
       /  \
     2     \
    / \     3
  4    \
 / \    \
5   6    7   
 \      / \
  8    9   10
      / \    \
     11   12  13

In this case, your function should return 7,

because the longest path between two leaves is 8->5->4->2->7->9->11 .

Example 3:

10
  \
   12

In this case, your function should return 2.

Example 4:

        25
      /   
    33     
   / \     
 12   9       
     /     
    3  
In this case, your function should return 4.

Example 5:

  10
(here is a root with no children)
In this case, your function should return 1.
==========================================================================================




======================================./level04-clone_list.txt=========================================
Assignment name  : clone_list
Expected files   : clone_list.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Given a linked list with the following structure :
    struct s_node {
        int           data;
        struct s_node *next;
        struct s_node *other;
    };
where :
    - next pointer points to the next node.
    - other pointer points to any node in the list (another node, itself or NULL).
Write a function to create a copy of this list (allocate new memory).
You cannot modify the structure, you cannot modify the list you are given.
The function must be declared as follows:
    struct s_node *clone_list(struct s_node *node);
==========================================================================================




======================================./level04-intersection.txt=========================================
Assignment name  : intersection
Expected files   : intersection.c
Allowed functions: 
--------------------------------------------------------------------------------
Given two singly linked lists, determine if the two lists intersect.
Return the intersecting node.
The intersection is defined based on reference, not value.
That is, if the kth node of the first linked list is the exact same node
(by reference) as the jth node of the second linked list, then they are
intersecting.
The linked lists will use the following structure :
    struct s_node {
        void *content;
        struct s_node *next;
    };
The function must be declared as follows:
    void *intersection(struct s_node *lst1, struct s_node *lst2);
If the two linked lists are not intersecting, the function returns NULL.
The function does not modify the two linked list.
==========================================================================================




======================================./level04-longest_subarray.txt=========================================
Assignment name  : longest_subarray
Expected files   : longest_subarray.c
Allowed functions: malloc free strlen
--------------------------------------------------------------------------------
Given a null-terminated array of digit characters, implement a function which
finds the longest subarray with an equal number of even and odd digits.
The function returns a null-terminated array.
Your function must be declared as follows:
char    *longest_subarray(char *arr);
Example 1:
input  = 134
output = 34
In the above example, 1 and 3 is odd and 4 is even,
the longest subarray with an equal number of odd and even digits is 34.
Example 2:
input  = 454
output = 45
Example 3:
input  = 1357913579024680213579
output = 79135790246802
Example 4:
input  = 2010102
output = 0101
Note:
- As a reminder, 0, 2, 4, 6, 8 are even digits and 1, 3, 5, 7, 9 are odd.
- In case of more than one subarray with the same length,
  the expected output is the first one.
==========================================================================================




======================================./level04-range_comb.txt=========================================
Assignment name  : range_comb
Expected files   : range_comb.c
Allowed functions: malloc free memcpy
--------------------------------------------------------------------------------
Implement a function which computes, for a given integer n, all
the possible permutations of the numbers in the range from 0 to
(n - 1) inclusive.
The function returns a null-terminated array.
Your function must be declared as follows:
int    **range_comb(int n);
If n <= 0, the function returns -1;
Examples:
input  = 2
output = {{0, 1}, {1, 0}}
input  = 3
output = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}}
==========================================================================================




======================================./level04-volume_histogram.txt=========================================
Assignment name  : volume_histogram
Expected files   : volume_histogram.c
Allowed functions: None
--------------------------------------------------------------------------------
Implement a function which computes, for a given histogram (bar graph)
of positive integers, the volume of water it could hold if someone poured
water across the top.
Each histogram bar has width 1.
Your function must be declared as follows:
int    volume_histogram(int *histogram, int size);
Example 1:
With the following input:
int    histogram[] = {1, 0, 2, 0, 2};
int    size = 5;
('#' bars are the histogram. '.' is water)
           # . #
       # . # . #
       ---------
       1 0 2 0 2
The function here returns 3 (because there is 3 emplacement of water).
Example 2:
With the following input:
int    histogram[] = {0, 0, 4, 0, 0, 6, 0, 0, 3, 0, 5, 0, 1, 0, 0, 0};
int    size = 16;
('#' bars are the histogram. '.' is water)
                 #
                 # . . . . #
           # . . # . . . . #
           # . . # . . # . #
           # . . # . . # . #
           # . . # . . # . # . #
       -------------------------------
       0 0 4 0 0 6 0 0 3 0 5 0 1 0 0 0
The function returns 26.
==========================================================================================




======================================./level05-count_island.txt=========================================
Assignment name  : count_island
Expected files   : *.c, *.h
Allowed functions: open, close, read, write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes a file that contains lines of equal length. Those
lines contain characters that are either '.' or 'X'. All those lines put
together form rectangles of '.' containing "islands" of 'X'.
The maximum size of a line is 1024 characters, including the terminating
newline.
A column if formed of the set of characters in the file that are separated from
the start of their respective lines by the same number of characters.
Two characters are said to be touching if they are contiguous and on the same
line, or on contiguous lines and on the same column.
An "island" of 'X' means a set of 'X' touching each other.
The program must walk though the file and display it after replacing all the
'X' by a number corresponding to the position their island appears in the file,
starting at the beginning of the file.
There can be only one result.
If the file is empty, or there is an error (Incoherent input, for example), or
no parameters are passed, the program must display a newline.
The file contains at most 10 islands.
You will find examples in the subject directory.
Examples:
$>cat toto
.................XXXXXXXX..........................................
....................XXXXXXXXX.......XXXXXXXX.......................
.................XXXXXXXX..............XXX...XXXXX.................
.....................XXXXXX.....X...XXXXXXXXXXX....................
................................X..................................
......XXXXXXXXXXXXX.............X..................................
..................X.............XXXXXXXXX..........................
..................X.........XXXXXXXXXXXX...........................
..................X................................................
XX.............................................................XXXX
XX..................XXXXXXXXXXXXX.................................X
...................................................................
.................................................................X.
.....................XXXXX.......................................XX
$>
$>./count_island toto
.................00000000..........................................
....................000000000.......11111111.......................
.................00000000..............111...11111.................
.....................000000.....2...11111111111....................
................................2..................................
......3333333333333.............2..................................
..................3.............222222222..........................
..................3.........222222222222...........................
..................3................................................
44.............................................................5555
44..................6666666666666.................................5
...................................................................
.................................................................7.
.....................88888.......................................77
$>
$>cat qui_est_la
...................................................................
...X........X.....XXXXX......XXXXXXX...XXXXXXXXXX..XXXXXXXXXX......
...XX......XX....XX...XX....XX.....XX.....XXXX.....XXXXXXXXXX......
...XXXX..XXXX...XX.....XX...XX.....XX......XX......XX..............
...XX.XXXX.XX...XX.....XX...XX.....XX......XX......XX..............
...XX...X..XX...XX.....XX...XXXXXXXX.......XX......XXXXX...........
...XX......XX...XXXXXXXXX...XXXX...........XX......XXXXX...........
...XX......XX..XX.......XX..XX.XX..........XX......XX..............
...XX......XX..XX.......XX..XX...X.........XX......XX..............
...XX......XX..XX.......XX..XX....X......XXXXXX....XXXXXXXXXX......
...XX......XX.XX.........XX.XX.....XX..XXXXXXXXXX..XXXXXXXXXX..X...
...................................................................
$>
$>./count_island qui_est_la
...................................................................
...0........0.....11111......2222222...3333333333..4444444444......
...00......00....11...11....22.....22.....3333.....4444444444......
...0000..0000...11.....11...22.....22......33......44..............
...00.0000.00...11.....11...22.....22......33......44..............
...00...0..00...11.....11...22222222.......33......44444...........
...00......00...111111111...2222...........33......44444...........
...00......00..11.......11..22.22..........33......44..............
...00......00..11.......11..22...5.........33......44..............
...00......00..11.......11..22....6......333333....4444444444......
...00......00.11.........11.22.....77..3333333333..4444444444..8...
...................................................................
$>
$>cat -e rien
$>./count_island rien | cat -e
$
$>
==========================================================================================




======================================./level05-g_diam.txt=========================================
Assignment name  : g_diam
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a programe that takes a string. This string represents a graph and is
composed of series of links between this graph's nodes. Links are separated by
a single space. Nodes are represented by numbers, and links by two nodes
separated by a '-'. For exemple, if there is a link between nodes 2
and 3, it could be written as "2-3" or "3-2".

The program will display the number of nodes comprised in the longest chain,
followed by a '\n', given it's impossible to pass through a node more than once.

If the number of parameters is different from 1, the program displays a '\n'.

Examples:

$>./g_diam "17-5 5-8 8-2 2-8 2-8 17-21 21-2 5-2 2-6 6-14 6-12 12-19 19-14 14-42" | cat -e
10$
$>./g_diam "1-2 2-3 4-5 5-6 6-7 7-8 9-13 13-10 10-2 10-11 11-12 12-8 16-4 16-11 21-8 21-12 18-10 18-13 21-18" | cat -e
15$
==========================================================================================




======================================./level05-infin_add.txt=========================================
Assignment name  : infin_add
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes as a parameter two strings that represent two
numbers potentially infinit, and displays on stdout the result of the addition
of these two numbers, followed by a '\n'.
A negative number will always be prefixed by one and only one -. The only
characters that can be part of the strings are digits and the sign -.
Both parameters will always be well formated, and you will always have
exactly two parameters, no tricks.
Example:
$> ./infin_add "879879087" "67548976597" | cat -e
68428855684$
$> ./infin_add "-876435" "987143265" | cat -e
986266830$
$> ./infin_add "-807965" "-34532"
-842497
$>
==========================================================================================




======================================./level05-infin_mult.txt=========================================
Assignment name  : infin_mult
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes as a parameter two strings that represent two
numbers potentially infinit, and displays on stdout the result of the
multiplication of these two numbers, followed by a '\n'.
A negative number will always be prefixed by one and only one -. The only
characters that can be part of the strings are digits and the sign -.
Both parameters will always be well formated, and you will always have exactly
two parameters, no tricks.
Example:
$> ./infin_mult "879879087" "67548976597" | cat -e
59434931855952726939$
$> ./infin_mult "-876435" "987143265" | cat -e
-865166907460275$
$> ./infin_mult "-807965" "-34532" | cat -e
27900647380$
$> ./infin_mult "-807965" "0"
0
$>
==========================================================================================




</pre>

<center><a href="exam-review.php">Piscine C Exam Review</a><br>
<a href="http://nigal.freeshell.org/42/exam-solutions/" target="_blank">Piscine C Exam Review Solutions</a><br><br>
<a href="exam-review-intermediate.php">C Intermediate Exam Review</a><br>
</center>
<br /><br />
</body>
</html>


