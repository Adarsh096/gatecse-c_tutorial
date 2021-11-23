#include<iostream>

#include"./include/union_vs_structs.c"
#include"./include/2_drawing_shapes.c"
#include"./include/3_printf.c"

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

    return 0;
}