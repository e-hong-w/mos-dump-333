#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <math.h>		/*for pow(x, y)*/\
#include <ctype.h>		/*for ispunct()*/\

pthread_t thread0, thread1, thread2, thread3, thread4;
int check = 0;          /*Global variable to store mathematical operation.*/

void *powerof(void *arg)        	/*Performs power of two values.*/
{
    double *ans = (double *)malloc(sizeof(double));	/*Dynamically allocated memory for the variable, ans.*/
    double *in = (double *)arg;		/*Type casting the arg from void* to double* .*/
    *ans = pow(in[0], in[1]);		/*Result from calculation stored in *ans.*/
    check = 1;
    return (void *)ans;
}

void *multiplication(void *arg)     /*Performs multiplication.*/
{
    double *ans = (double *)malloc(sizeof(double));
    double *in = (double *)arg;
    *ans = in[0] * in[1];
    check = 2;
    return (void *)ans;
}

...
...

char checkopr(void)                 /*Performs checking of operations.*/
{
    char opr;
    if(check == 1)
        opr = '^';
    else if(check == 2)
        opr = '*';
    else if(check == 3)
        opr = '/';
    else if(check == 4)
        opr = '+';
    else if(check == 5)
        opr = '-';
    return opr;
}

...
...

void main(void)
{
    char choice[10];		/*Stores user's choice to or not to repeat program.*/
    do{
        double input[2], *answer;	/*Stores values inputed by user.*/
        char operation[20];	/*Stores operations inputed by user.*/
        char *ptropr = operation;	/*Points pointer to the array.*/
        void *returnvalue;
        printf("\n\n\tEnter values and operators\t: ");		/*Gets inputs from user.*/
        scanf("%lf %lf %[^\n]s", &input[0], &input[1], operation);

        while(*ptropr)
        {
...
...