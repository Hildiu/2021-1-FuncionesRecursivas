//
// Created by Maria Hilda Bermejo on 4/30/20.
//

#include "UFunciones.h"

double Factorial(unsigned int n)
{
  if( n==1 || n==0)
    return 1;
  return (n * Factorial(n-1));
}
/*
 * 5! = 1x2x3x4x5
 * 5! = 5x4x3x2x1
 * 5! = 120
 *
 *  5! = 5 x factorial(4)
 *                4 x factorial(3)
 *                       3 x factorial(2)
 *                               2   x factorial(1)
 *                                        1 x factorial(0)
 *                                               1
 *
 */


unsigned int producto(unsigned int multiplicando,unsigned int multiplicador)
{
  if(multiplicador==1 )
    return multiplicando;
  return multiplicando + producto(multiplicando,multiplicador-1);

}

/* 5 x 4 = 5 + 5 + 5 +5
 *
 * 5 x 4 = 20
 *
 *
 * 5 x 4 = 5 + producto(5 x 3)
 *               5 + producto(5, 2)
 *                        5 + producto(5,1)
 *                                  5
 */


unsigned int  cociente(unsigned int dividendo,unsigned int divisor)
{
  if( dividendo < divisor )
    return 0;
  return 1 + cociente(dividendo -divisor, divisor);
}

/* 20 / 5 =
 * 20 / 5 = 20 -5 =15    (1)
 *          15 -5 =10    (2)
 *          10 -5 =5     (3)
 *          5 - 5 =0     (4)
 *
 *  23/5 = 23 -5=18 (1)
 *         18 -5= 13 (2)
 *         13 -5= 8 (3)
 *         8 -5 = 3  (4)
 *
 *
 *
 *
 *
 *
 *
 */
