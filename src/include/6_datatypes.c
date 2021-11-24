#include<stdio.h>
/*
Additional links
https://stackoverflow.com/questions/1669821/scanf-skips-every-other-while-loop-in-c
https://www.tutorialspoint.com/gnu_debugger/gdb_commands.htm
*/
void calculator()
{
    // constants --> defined by const keyword
    const float alpha = 0.95F;
    // by default all floating point number are treated as double
    // ie 4.5 is a double
    // 4.5F is a float

    // always prefer double over float unless you have very less memory...

    // Notation of floating point numbers can be decimal and scientific notation.
    double num1 = 463.45;
    double num2 = 4.6345e2; // e is same as 10^ (power of ten)
    if(num1 == num2)
    {
        printf("yup they are the same and equal to %f .\n",num2);
    }

    //NOTE : scientific notation cannot be used for integers as it will drop everything after e:
    int distance;
    char c;
    printf("enter the distance in scientific notation : ");
    // following will not work as it is not expecting the 'e' in out input:
    scanf("%[^\n]i%c",&distance,&c); 
    printf("you will not get the correct tripled value if you enter in exponent notation..\nthe (in)correct tripled value is  %i \n",3*distance);
    

    //NOTE : to do the conversion from scientific notation to decimal we need to use %f while scanning 
    // also we need to save it in a double datatype:
    double distance_d;
    printf("Again, enter the distance in scientific notation : ");
    // following will work even if there is 'e' in input:
    scanf("%lf%c",&distance_d,&c); 
    printf("you value is : %f\n",distance_d);

    //Character datatype: Enclose them in single quotes.
    // Requires 1 byte (8 bits)
    // ASCII uses 7 bits from the right ie, total 128 charactes can be stored.
    // The last bit is used for extended char sets.
    char character = 'A';
    printf("Enter a valid ASCII character : ");
    scanf("%c",&character);
    // each character has an integer equivalent :
    printf("Your character is : %c\n",character);
    printf("Decimal equivalent of it is : %i\n",int(character));

    // boolean datatype:
    bool truth_value = false;
}