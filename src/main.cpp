#include<iostream>

#include"./include/union_vs_structs.c"
#include"./include/2_drawing_shapes.c"
#include"./include/3_printf.c"
#include"./include/4_user_input.c"
#include"./include/5_formatted_strings.c"
#include"./include/6_datatypes.c"
#include"./include/7_scanf_gotcha.c"
#include"./include/8_operators.c"

int main(){
    // union_vs_structs.cpp
    character hansolo;
    character r2d2;
    hansolo.name = "Han Solo";
    hansolo.isrobot = false;
    hansolo.persona = "Scruffy looking";
    print_character(&hansolo);

    // drawing shapes
    draw_triangle();

    //printf usage
    formatted_printing();

    //user input:
    // calculate_area();

    // formatted string :
    //greet();

    //datatypes
    calculator();

    //scanf gotchas 
    // reader();

    // operators 
    operatorCalc();

    return 0;
}