#include<stdio.h>


void moulder()
{
    // c is a strongly typed language
    // 1/3 is not 0.333, rather it's 0 since integer division is done.
    // javascript and python are loosely typed languages and 1/3 = 0.3333.. in them.

    // type casting
    //Implicit typecasting:(lossless)
    double z = 24 + 5.3;
    printf("%f\n",z);
    // this will output wrong value as its casting a bigger datatype to smaller one which is lossy:
    printf("%d\n",z);

    //Explicit type casting : (does not change the value or the type of original variable)
    //syntax : (target_type) variable or value
    // eg : (double) 45 ==> 45.000000 
    int y = 4+5-3*2/3; //ans = 7
    printf("%d\n",y);
    printf("%f\n",(double)y);

    //NOTE : type casting operator is a unary operator and thus has higher precedence than arithmetic operators.

    //GOTCHA : Just because one of the value is a double does not mean that all are promoted to double.
    // as per operator precedence division is done before multiplication.
    // so the division is a integer division followed by a double multiplication.
    double res1 = 25/2*2.0;
    double res2 = 25/2*2;
    printf("result with one double value res1 : %f\n",res1);
    printf("result without any double values res2 : %f\n",res2);
}