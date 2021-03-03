# About

    Name: Calculator
    Operating system: MS Windows 10
    Programming languages: Asembler x86, C
    Programing environment: Visual Studio
    Number of bits: 32
    Asembler: NASM

    Autor: Łukasz Gołojuch


## Description

The program consists of two parts. The main part of the program (control) was written in C language. Functions reflecting arithmetic operations were written in assembly language for x86 technology processors. Such a solution gives greater readability of the program core due to the use of the C language, and the use of assembly language, thanks to direct interaction with the processor registers, allows for the acceleration of the program.

The program is prepared to run in MS windows 10, in NASM assembler. The program operates on processor registers. 32-bit version.

## Functions

int adding(int x, int y) - a function that calculates the sum of two numbers of the int type. Returns the sum count as int.

int multiply(int x, int y) - a function that calculates the multiplication of two numbers of the int type. Returns the multiplication count as int.

int descend(int x, int y) - a function that calculates the difference of two numbers of the int type. Returns the difference count as int.

int power(int x, int y) - a function that calculates the x^y of two numbers of the int type. Returns the power count as int.

int divide(int x, int y) - a function that calculates the division of two numbers of the int type. Returns the division count as int.

void GetNumber (int *x, int *y) - a function that takes the values ​​of two numbers. Indicators for these numbers are transmitted to it.

## Licencja
[Open Source]
