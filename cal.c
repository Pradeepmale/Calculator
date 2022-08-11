// Project Calculator   This Mini project i am use common variable Names because i am work with multiple function so i can not give multiple variable names
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// we will create 5 function for individual perform his work

void add(FILE *fl)      // Function 1st For Addition Two Noumbers and pass a File for write all activiti of Add function
{   
    system("color 1");  // I am add color function in my project for create intactive 
    int a,b,sum;
    printf("Enter 1st No\t");
    scanf("%d", &a);
    printf("Enter 2nd No\t");
    scanf("%d", &b);
    sum = a+b;
    printf("Answer is A+ =\t%d\n", sum);
    fprintf(fl,"1stNo.%d,2ndNo.%d,Result+%d\n",a,b,sum);         // I Know "fprintf" function so i including this facility
}

void multiply(FILE *fl)     // 2nd Function for Multiply Two Numbers and Pass a file for writing 
{
    system("color 2");
    int a,b,sum;
    printf("Enter 1st No\t");
    scanf("%d", &a);
    printf("Enter 2nd No\t");
    scanf("%d", &b);
    sum = a*b;
    printf("Answer is M* =\t%d\n", sum);
    fprintf(fl,"1stNo.%d,2ndNo.%d,Result*%d\n",a,b,sum);
}

void subtract(FILE *fl)     // 3rd Function for Subtraction Two Numbers and Pass a file for writing 
{
    system("color 6");
    int a,b,sum;
    printf("Enter 1st No\t");
    scanf("%d", &a);
    printf("Enter 2nd No\t");
    scanf("%d", &b);
    sum = a-b;
    printf("Answer is S- =\t%d\n", sum);
    fprintf(fl,"1stNo.%d,2ndNo.%d,Result-%d\n",a,b,sum);
}

void division(FILE *fl)             // 4th Function for Divid Two Numbers and Pass a file for writing 
{
    system("color 4");
    int a,b,sum;
    printf("Enter 1st No\t");
    scanf("%d", &a);
    printf("Enter 2nd No\t");
    scanf("%d", &b);
    sum = a/b;
    printf("Answer is D/ =\t%d\n", sum);
    fprintf(fl,"1stNo.%d,2ndNo.%d,Result/%d\n",a,b,sum);
}

void power(FILE *fl)            // 5th Function this time i am use "Math Library" for power funtion use and Pass a file for writing 
{
    system("color 7");
    int a,b,sum;
    printf("Enter a No\t");
    scanf("%d", &a);
    printf("Power of No.\t");
    scanf("%d", &b);
    sum = pow(a,b);
    
    printf("Answer is P*^ =\t%d\n", sum);
    fprintf(fl,"Numbar%d,Power.%d,Result*^%d\n",a,b,sum);
}
                                  //------------Second Function----------//
int main()                  //THis is my main function i am create a file and pass all function and use switich mathod for choose multiple funciton and use while loop for countinue run my program when i choose 6 No. i am exit from program
{
    FILE *fl;
    fl = fopen("log.text", "a");   // use append mode because this mode create new file if not exit file

    int num;
    printf("[**THIS IS MY CALCULATOR MINI PROJECT**]\n\n[Please choose the below option]\n");
    printf("[Addition = 1]\n[Multiply = 2]\n[Subtract = 3]\n[Division = 4]\n[Power  ^ = 5]\n[For Exit = 6]\n");
    
    while (1)           // while loop use for continue run my program
    {
    
    printf("-->Choos one option-->\tNo. ");
    scanf("%d", &num);
    
    fprintf(fl,"Option%d\n",num);

    if (num>6 || num==0)                // i am use if condition for choose valid option
        {
            printf("Please select vaild option No !!!\n");
        }   
    
    switch (num)            // I am use switch funntion for work program acording input Number
    {
    case 1:
        add(fl);
        break;

    case 2:
        multiply(fl);
        break;

    case 3:
        subtract(fl);
        break;

    case 4:
        division(fl);
        break;      
        
    case 5:
        power(fl);
        break;    
    
    case 6:
        printf("You Choose Exit");      // case 6 ues exit from loop and trminate the program
        exit(1);

    }
        
        
    }
        
      
    
}
