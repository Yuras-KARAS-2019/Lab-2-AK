#include "calculator.h"

int Calculator::Add (double a, double b)
{
//<<<<<<< HEAD
    return a + b;
//=======
	return a + b + 0.5;
//>>>>>>> 4ad40a3(fix truncation error)
}

/// <summary>
/// Execute operation of subtraction
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>int value ( a - b )</returns>
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

/// This function should 
/// execute operation of multiplication;
/// wada
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
