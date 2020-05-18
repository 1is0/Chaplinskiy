#include "pch.h"
#include "Mymath.h"



int  Sum(int a, int b)
{
	return a + b;
}


int  Sub(int a, int b)
{
	return a - b;
}
int  Power(int a, int b)
{
	if (b != 0) {
		return (a * Power(a, b - 1));
	}
	else
		return 1;
}

int Multiply(int a, int b)
{
	return a * b;
}


float Div(int a, int b)
{
	if (b == 0) {
		return 0;
	}
	else {
		return (float)a / (float)b;
	}
	
}



