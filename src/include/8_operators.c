#include<stdio.h>
#include<stdbool.h>

/*
Additional References :
https://www.tutorialspoint.com/cprogramming/c_operators.htm
https://en.cppreference.com/w/c/language/operator_precedence
*/
void operatorCalc()
{   
    
    // Operator Precedence:
    /* NOTE : Read from top to bottom. Top ones have more precedence...
        +----------------+------------------------------------------+---------------+
        |    Category    |                 Operator                 | Associativity |
        +----------------+------------------------------------------+---------------+
        |     Postfix    |             () [] -> . ++ - -            | Left to right |
        +----------------+------------------------------------------+---------------+
        |      Unary     |  +  -  !  ~  ++  - -  (type)*  & sizeof  | Right to left |
        +----------------+------------------------------------------+---------------+
        | Multiplicative |                  *  /  %                 | Left to right |
        +----------------+------------------------------------------+---------------+
        |    Additive    |                   +  -                   | Left to right |
        +----------------+------------------------------------------+---------------+
        |      Shift     |                   << >>                  | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Relational   |                < <=  > >=                | Left to right |
        +----------------+------------------------------------------+---------------+
        |    Equality    |                  ==  !=                  | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Bitwise AND  |                     &                    | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Bitwise XOR  |                     ^                    | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Bitwise OR   |                     |                    | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Logical AND  |                    &&                    | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Logical OR   |                    ||                    | Left to right |
        +----------------+------------------------------------------+---------------+
        |   Conditional  |                    ?:                    | Right to left |
        +----------------+------------------------------------------+---------------+
        |   Assignment   | =  +=  -=  *=  /=  %=>>=  <<=  &=  ^= |= | Right to left |
        +----------------+------------------------------------------+---------------+
        |      Comma     |                     ,                    | Left to right |
        +----------------+------------------------------------------+---------------+
    */

    //unary operators have very high precedence right under postfix operators
    // first sizeof() then ++ or -- then ~ then ! then + or -


    //shift oeprator :
    // first << then >> 


    // Arithmetic Operators :
    // first + or - then * then / then % 
    double result_arth1 = 3+4-5*2/4; // Integer calculation, truncates the decimal part Ans = 5
    double result_arth2 = 3+4-((5*2)/4); // Integer calculation, truncates the decimal part Ans = 5 should have been 4.5
    double result_arth3 = 3.0+4.0-((5.0*2.0)/4.0);
    printf("The double calculation result : %f\n",result_arth3);
    printf("The integer calculation result : %f\n",result_arth1);
    if(result_arth1 == result_arth2)
    {
        printf("You got the precedence of arithmetic operators..\n");
    }
    else
    {
        printf("%f is not the same as %f\n",result_arth1,result_arth2);
    }

    // BitWise Operators:
    // first & then ^ then | 
    /*
    Truth Table
    -----------
    +---+-------+-------+-------+
    | q | p & q | p | q | p ^ q |
    +---+-------+-------+-------+
    | 0 |   0   |   0   |   0   |
    +---+-------+-------+-------+
    | 1 |   0   |   1   |   1   |
    +---+-------+-------+-------+
    | 1 |   1   |   1   |   0   |
    +---+-------+-------+-------+
    | 0 |   0   |   1   |   1   |
    +---+-------+-------+-------+
    */

    //Relational Operators :
    // first < then <= then > then >= then == then != 


    // Logical Operators:
    // first ! then && then || 
    bool logical_result1 = !true && true || false;
    bool logical_result2 = (!true && true) || false;
    printf("result without obvious brackets : %d\n",logical_result1);
    printf("result with brackets in place : %d\n",logical_result2);
    if(result_arth1 == result_arth2)
    {
        printf("You got the precedence of logical operators..\n");
    }
    else
    {
        printf("%d is not the same as %d\n",logical_result1,logical_result2);
    }
    //conditional operators 
    // ?:

    //Assignment Operators:
    // first |= then ^= then &= then <<= then >>= then %= then /= then *= then -= then += and finally =


    
    
}