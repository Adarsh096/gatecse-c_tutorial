#include<iostream>
#include"./include/union_vs_structs.cpp"
int main(){
    character hansolo;
    character r2d2;
    hansolo.name = "Han Solo";
    hansolo.isrobot = false;
    hansolo.persona = "Scruffy looking";
    print_character(&hansolo);
    return 0;
}