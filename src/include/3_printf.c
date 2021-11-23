#include<stdio.h>

void formatted_printing()
{

    int a;//declaration
    a = 5;//initialization
    int b = 26;//declaration and assignment 

    // we cannot print a number simply like :
    // printf(b/a);
    /*
    Error will be : invalid conversion from ‘int’ to ‘const char*’ [-fpermissive]
     printf(b/a);
    */
    // NOTE : We need to pass a format string as first argument and then all other values
    /*
    Other fomatters are:
    +---+----------------------------------------------------+--------------+--+--+
    |   | Description                                        | Example      |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | u | Unsigned decimal integer                           | 7235         |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | o | Unsigned octal                                     | 610          |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | x | Unsigned hexadecimal integer                       | 7fa          |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | X | Unsigned hexadecimal integer (uppercase)           | 7FA          |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | f | Decimal floating point, lowercase                  | 392.65       |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | F | Decimal floating point, uppercase                  | 392.65       |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | e | Scientific notation (mantissa/exponent), lowercase | 3.9265e+2    |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | E | Scientific notation (mantissa/exponent), uppercase | 3.9265E+2    |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | g | Use the shortest representation: %e or %f          | 392.65       |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | G | Use the shortest representation: %E or %F          | 392.65       |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | a | Hexadecimal floating point, lowercase              | -0xc.90fep-2 |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | A | Hexadecimal floating point, uppercase              | -0XC.90FEP-2 |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | c | Character                                          | a            |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | s | String of characters                               | sample       |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    | p | Pointer address                                    | b8000000     |  |  |
    +---+----------------------------------------------------+--------------+--+--+
    */
    
    printf("%i\n",b/a);

}