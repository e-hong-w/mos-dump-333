# EKT333 Modern Operating System ![GitHub last commit](https://img.shields.io/github/last-commit/ehong-w/mos333-asg2-dump?style=for-the-badge)

In my own words,\
`Make your life easier in a blink of a Touch n Go scan!`

![forthebadge](https://forthebadge.com/images/badges/powered-by-electricity.svg)

---
### Assignment 2: User Level Thread - Multithreaded Application
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/ehong-w/mos333-asg2-dump)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/ehong-w/mos333-asg2-dump)
![GitHub all releases](https://img.shields.io/github/downloads/ehong-w/mos333-asg2-dump/total)

#### Write a multithreaded program using PTHREAD Library, which does the following:

&nbsp;&nbsp;&nbsp;&nbsp;a) Prompt the user for the mathematical operation that the user would like to perform ( your program must support addition and subtraction, other operations are optional bonus )
&nbsp;&nbsp;&nbsp;&nbsp;b) Each mathematical operation must be performed in a separate thread.
&nbsp;&nbsp;&nbsp;&nbsp;c) BONUS – user can select more than one mathematical operation at once.

---

```python
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
```

---

**@blaco**🐏: How's life? Did you check out my code? 😟  
**@blaco**🐏: Drop me an email for full source code!  
**@blaco**🐏: It's not free, but it worths just a price of a lunch. 🥗  

<p>
  <img width="512" src="https://user-images.githubusercontent.com/68590570/113911631-c52ca900-980c-11eb-8946-19ce84f84c40.png">
</p>

## 🧸 **Leave me a message?**
- 🍺 [E-mail](mailto:ehong.w@gmail.com?subject=[GitHub]%20Problem%20Description)
- 🧺 [Linkedin](https://www.linkedin.com/in/ehong-w/)
- ⛄ [Whatsapp]()
