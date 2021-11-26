#include<stdio.h>

/*
Additional references:
https://stackoverflow.com/questions/1669821/scanf-skips-every-other-while-loop-in-c
https://medium.com/@vaiharsha/scanset-in-c-3c6000a8d04d
https://stackoverflow.com/questions/33269283/scanf-not-reading-in-double
https://stackoverflow.com/questions/2398791/how-is-conversion-of-float-double-to-int-handled-in-printf
*/

void reader()
{   char c;// intended to capture garbage value
    char s[20];
    
    printf("enter some lines of text and press enter ..\n");
    scanf("%[^\n]s%c",s,&c);
    // null value is captured by the variable c and 
    // when printing it using %c you will see nothing but with %s it will be shown as (null)
    printf("your entered value is : %s and the garbage value is : %s\n",s,c);

    //If we did not captured the remaining character in the stream with c variable
    // then we have an alternative of using fflush() :
    
    // fflush(stdin); // works but unreliable
    // getchar(); // use this to reliably capture single character.
    
    double weight=0.0;
    printf("Now enter your weight in kg : ");
    // this scanner will not work if the previous section is uncommented 
    // as the previous \n is still in the stream...as we have excluded it by using [^\n]
    //NOTE : to read doubles we need to use %lf instead of simple %f
    scanf("%lf",&weight); 
    // %d pops out 4 bytes and treats it as integer which is not same as type casting to integer using int()
    printf("Your weight is : %d kg\n",weight);// will not convert the double to int
    printf("Your weight is : %d kg\n",int(weight));// will type cast the double to int
    // printing does not require %lf for double datatypes
    printf("Your weight is : %f kg\n",weight);
    // %e means scientific notation:
    printf("Your weight is : %e kg\n",weight);
    // %g will let the compiler decide what should be the representation at runtime:
    printf("Your weight is : %g kg\n",weight);

}