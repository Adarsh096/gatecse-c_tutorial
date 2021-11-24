#include<stdio.h>

/*
  Arithmetic rule 
  integer <operator> integer ===> result is integer.
  float a = 22/7 will result in integer and then type casted to float. Thus a will be 3.00 instead of 3.14

  NOTE : 
    If one of the datatype can hold more data then other will be coerced to that higher datatype and the result be of the bigger datatype.
    When doing arithmetic with floats and ints, it will always coerce it to a float. That is to say:

        float*float = float
        float*int = float
        int*float = float
        int*int=int

    You will only receive "integer math" if all values are ints.

 */

//Type casting can be done like : datatype(val) eg : double(22)/double(7)

const float PI = 3.14;
void calculate_area()
{
    int radius;
    printf("enter the radius of your circle : ");
    // user input :
    scanf("%d",&radius); // pass the address of variable
    //for double or float we use the same formatter %F or %f
    printf("Area is : %f\n",PI*radius*radius);
    
} 