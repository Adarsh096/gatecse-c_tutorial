#include<stdio.h>
#include<iostream>
#include<stdbool.h>

/*
union provides a way to store one of the attribute mentioned at a time.
structs allow us to store values for each attribute defined.

Below, we can have either versio or persona but all other fields are required to prevent garbage values.
*/


typedef struct{
    char* name;
    bool isrobot;
    union{
        int version;
        char* persona;
    };
} character;

void print_character(character* c){
    printf("character : %s -- ",c->name);
    if(c->isrobot){
        printf("version : %s -- ",c->version);
    }else{
        printf("personality : %s -- ",c->persona);
    }
    printf("\n");
}

// int main(){
//     character hansolo;
//     character r2d2;
//     hansolo.name = "Han Solo";
//     hansolo.isrobot = false;
//     hansolo.persona = "Scruffy looking";
//     print_character(&hansolo);
// }