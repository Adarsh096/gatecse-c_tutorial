#include<stdio.h>
#include<math.h>


void math_calculator()
{
    // Example : Pythagoras Theorem
    double b,p ;
    printf("Enter the first side : ");
    scanf("%lf",&b);
    printf("Enter the second side length : ");
    scanf("%lf",&p);

    printf("The hypotenuse is of : %f length\n",sqrt(b*b+p*p));


    // Example 2 : logarithm calculation 
    // log of y base x = log of y base 10 / log of x base 10
    double base, value;
    printf("Enter the base of log : ");
    scanf("%lf",&base);
    printf("Enter the value to be evaluated with log base %f : ",base);
    scanf("%lf",&value);
    printf("The result is : %f \n",log10(value)/log10(base));

    //Example 3 : cosine theorem 
    // c =  /------------------------------------------
    //    \/ a*a +b*b - 2*a*b*cos(angle between a and b)
    double s1, s2,delta;
    printf("Enter the two side lengths and press enter : \n");
    scanf("%lf",&s1);
    scanf("%lf",&s2);
    printf("Enter the angle between the two sides mentioned : ");
    scanf("%lf",&delta);
    // cos accepts radian angle :
    // pii radian = 180 degree
    double s3 = sqrt(s1*s1 + s2*s2 - 2*s1*s2*cos(delta*22/7/180));
    printf("The third side length as per cosine rule is : %f\n",s3);
}
