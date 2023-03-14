0x0B-malloc_free

GENERAL LEARNING OBJECIVES FOR THIS PROJECT
//What is the difference between automatic and dynamic allocation
//What is malloc and free and how to use them
//Why and when use malloc
//How to use valgrind to check for memory leak
/**files should end with a new line
 *README.md file, at the root of the folder of the project is mandatory
 *code should use the Betty style
 *not allowed to use global variables
 *No more than 5 functions per file
 *The only C standard library functions allowed are malloc and free
 *You are allowed to use _putchar
 *The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
 */


Tasks
0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.
      - Prototype: char *create_array(unsigned int size, char c);
      - Returns NULL if size = 0
      - Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
      - Prototype: char *_strdup(char *str);
      - The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
      - Returns NULL if str = NULL
      - On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.
      - Prototype: char *str_concat(char *s1, char *s2);
      - The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminate
      - if NULL is passed, treat it as an empty string
      - The function should return NULL on failure