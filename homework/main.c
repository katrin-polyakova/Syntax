//
//  main.c
//  homework
//
//  Created by Kate Polyakova on 10/13/14.
//  Copyright (c) 2014 Kate Polyakova. All rights reserved.
//

#include<stdio.h>

void mult (int a, int b); // объявляю функцию, которая будет выводить результат умножения
int sum (int x, int y); // объявляю функцию, которая будет складывать 2 целых числа

int main()
{
    
    mult (5, 8);   // вызов функции mult1 в трех вариантах
    mult (-4, 3);
    mult (0, 9);
    
    int c = sum (8,3);
    
    printf("\tVariable decimal = %d\n", c);
    printf("\tVariable hex = %x\n", c);
    
    return 0;
}

void mult(int a, int b)

{
    printf("Multiplication result = %d\n", a*b); // выполнение функции mult
}

int sum (int x, int y)

{
    return x + y;       // выполнение функции sum
}

