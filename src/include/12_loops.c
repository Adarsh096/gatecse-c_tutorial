#include<stdio.h>


void looper()
{    
    // checking if the number is prime number:
    int num1;
    printf("Enter a number and I will print if it is a prime number : ");
    scanf("%d%*c",&num1);
    printf("You entered : %d\n",num1);
    // num1 is having a \n and thus we need to remove it...
    if(num1 <= 0)
    {
        printf("Enter a positive number greater than 0\n");
    }
    else if(num1==1)
    {
        printf("Neither prime nor composite number\n");
        return;
    }

    //A prime number is divisible by itself and 1 only.
    /*
    for(int i=2; i<num1; i++) //Optimization : we just have to check divisibility upto the sqrt of a number
    {
        if(num1 % i==0)
        {
            printf("Not a prime since it gave a remainder %d when calculated %d/%d\n",num1 % i,num1,i);
            return;
        }
    }
    printf("It is a prime\n");
    */
    
    //OPTIMIZED CODE : 
    for(int i=2; i<=sqrt(num1); i++) //Optimization : we just have to check divisibility upto the sqrt of a number
    {
        if(num1 % i==0)
        {
            printf("Not a prime since it gave a remainder %d when calculated %d/%d\n",num1 % i,num1,i);
            return;
        }
    }
    printf("It is a prime\n");
    
}