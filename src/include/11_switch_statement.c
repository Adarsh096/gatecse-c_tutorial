#include<stdio.h>

void switch_up()
{
    // NOTE : Switch statements in java allow strings 
    //but in c we can only switch over numbers or characters(can be converted to number in ASCII) and boolean (0,1)

    //Example 1 : simple number switch --
    int opt=0;
    printf("Enter your options :\n1 Greet\n2 Do a math\n:");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1:
            printf("Hello there !!\n");
            break;
        case 2:
            double num;
            printf("Enter a number and I will double it for you : ");
            scanf("%lf",&num);
            printf("Okay! Here's your double : %f\n",2*num);
            break;
        default:
            printf("Oops the option was not recognized..\n");
    }

    //Example 2 : switch with characters --
    char opt2;
    printf("Enter your options :\nA Greet\nB Do a math\n:");
    // for mumerical scanf we dont have any issues when we use multiple scanf().
    // For characters and strings we have to ignore the \n pending in the buffer.
    scanf("%*c%c",&opt2);

    switch(opt2)
    {
        case 'A':
            printf("Hello there !!\n");
            break;
        case 'B':
            double num;
            printf("Enter a number and I will double it for you : ");
            scanf("%lf",&num);
            printf("Okay! Here's your double : %f\n",2*num);
            break;
        default:
            printf("Oops the option was not recognized..\n");
    }

    //switch statements do not work with strings 

    // since operators are also ASCII characters, we can use them in swtich statements:
    //Example 3 : switch with operators --
    char opt3;
    printf("Enter your options :\n+ Addition\n* Multiplication\n:");
    // for mumerical scanf we dont have any issues when we use multiple scanf().
    // For characters and strings we have to ignore the \n pending in the buffer.
    scanf("%*c%c",&opt3);

    switch(opt3)
    {
        case '+':
            double num1,num2;
            printf("Enter two numbers and I will add them for you : \n");
            scanf("%lf",&num1);
            scanf("%lf",&num2);
            printf("Okay! Here's your sum : %f\n",num1+num2);
            break;
        case '*':
            double num3,num4;// inside one swtich we can not have same name variables
            printf("Enter two numbers and I will multiply them for you : \n");
            scanf("%lf",&num1);
            scanf("%lf",&num2);
            printf("Okay! Here's your product : %f\n",num1*num2);
            break;
        default:
            printf("Oops the option was not recognized..\n");
    }   
}