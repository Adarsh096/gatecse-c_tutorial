#include<iostream>

#include"./include/union_vs_structs.c"
#include"./include/2_drawing_shapes.c"
#include"./include/3_printf.c"
#include"./include/4_user_input.c"
#include"./include/5_formatted_strings.c"
#include"./include/6_datatypes.c"
#include"./include/7_scanf_gotcha.c"
#include"./include/8_operators.c"
#include"./include/9_type_casting.c"
#include"./include/10_math_library.c"
#include"./include/11_switch_statement.c"
#include"./include/12_loops.c"
#include"./include/13_pointers_a.c"
#include"./include/14_pointers_b.c"
#include"./include/15_pointers_c.c"

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
    // calculator();

    //scanf gotchas 
    // reader();

    // operators 
    // operatorCalc();

    // type casting 
    // moulder();

    // math library :
    // math_calculator();

    //switch statements
    // switch_up();

    //loops 
    // looper();

    //pointers
    // swap_value();

    // pointer_b
    // pointer_init();
    // pointer_arithm();
    nd_array_pointer();

    return 0;
}