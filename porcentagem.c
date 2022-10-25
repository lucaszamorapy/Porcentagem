/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
 float precoatual;
 printf("Informe o preco atual do produto: ");
 scanf("%f",&precoatual);
 printf("\n\nNovo preco com desconto de 9%% e: %3.2f\n\n",precoatual * 0.91);
 system("PAUSE");
 return 0;
}