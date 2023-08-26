#include "main.h"

/**
 * add - Adds two intergers
 * @a:the first interger
 * @b:the second interger
 * 
 * Return: the results of the addition
 */
int add(int a, int b)
{
  return (a + b);
}

/**
 * sub - substract two intergers
 * @a: the firdt interger
 * @b: the second interger
 * 
 * Return: the results of the substraction 
 */
int sub(int a, int b)
{
  return (a - b);
}

/**
 * mul - multiply two intergers
 * @a: the first interger
 * @b: the second interger
 * 
 * Return: the product
 */
int mul(int a, int b)
{
  return (a * b);
}

/**
 * div - divide two intergers
 * @a: first integer
 * @b: second integers
 * Return: the results of division
 */
int div(int a, int b)
{
  if (b == 0)
    {
      fprintf(stderr, "Error: Division by zero\n");
      return (0);
    }
  return (a / b);
}

/**
* mod - calculate
* @a: first int
* @b: second int
*
* Return: results
*/
int mod(int a, int b)
{
    if (b == 0)
      {
        fprintf(stderr, "Error: Modulo by zero\n");
        return (0);
    }
    return (a % b);
}
