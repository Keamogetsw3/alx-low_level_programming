#include "main.h"

/**
 * _add - Adds two intergers
 * @a:the first interger
 * @b:the second interger
 * 
 * Return: the results of the addition
 */
int _add(int a, int b)
{
  return (a + b);
}

/**
 * _sub - substract two intergers
 * @a: the firdt interger
 * @b: the second interger
 * 
 * Return: the results of the substraction 
 */
int _sub(int a, int b)
{
  return (a - b);
}

/**
 * _mul - multiply two intergers
 * @a: the first interger
 * @b: the second interger
 * 
 * Return: the product
 */
int _mul(int a, int b)
{
  return (a * b);
}

/**
 * _div - divide two intergers
 * @a: first integer
 * @b: second integers
 * Return: the results of division
 */
int _div(int a, int b)
{
  if (b == 0)
    {
      fprintf(stderr, "Error: Division by zero\n");
      return (0);
    }
  return (a / b);
}

/**
* _mod - calculate
* @a: first int
* @b: second int
*
* Return: results
*/
int _mod(int a, int b)
{
    if (b == 0)
      {
        fprintf(stderr, "Error: Modulo by zero\n");
        return (0);
    }
    return (a % b);
}
