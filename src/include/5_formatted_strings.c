#include<stdio.h>
/*
Additional References:
https://www.tutorialspoint.com/cprogramming/c_strings.htm
https://www.geeksforgeeks.org/puts-vs-printf-for-printing-a-string/
https://www.quora.com/How-do-I-get-and-print-a-string-with-spaces-without-gets-puts-or-string-functions-in-C
https://www.geeksforgeeks.org/scansets-in-c/
*/

/*
NOTE : 
Never use gets(). Because it is impossible to tell without knowing the data in advance how many characters gets() will read, and because gets() will continue to store characters past the end of the buffer, it is extremely dangerous to use. It has been used to break computer security. Use fgets() instead.
*/

/*
Correcting the scanf functionality :

Explanation:
-----------

It's simple. Just use

scanf(“%[^\n]”,s);

It will read everything until a new line encounters.

Now, the \n character is still left in the input. So, you will have to clear that, otherwise it will create problem for next inputs to be taken. To do so, just read that newline character into a char variable(just to ignore it as a garbage value).

So final solution for your problem is

scanf(“%[^\n]%c”,s,&c); Where c is a char variable used as garbage collector.

Finally just print it normally as would do for a string.

printf(“%s”,s);

GOTCHA !! 
The \n is not captured by the 'c' variable in fact it has captured nothing. Try it yourself too...

Final Code is :
--------------

int main(){
    char s[100],c;
    scanf("%[^\n]s%c",s,&c);
    printf("%s",s);
    return 0;
}
*/


void greet()
{
    //saving the input string :
    char name[20];// one more than what is allowed to allow for the \0 null character.

    printf("enter your name : ");
    //NOTE : scanf will read upto the first whitespace character and ignore the rest:
    scanf("%s",name); // arrays are passed by reference so no need of & symbol.

    printf("Hello %s\n",name);

    // to illustrate that the printf function does not have any issue printing the entire string with whitespaces:
    char name2[] = {'j','o','h','n',' ','d','o','e','\0'};
    printf("name2 is : %s\n",name2);

    // another way of initializing array is :
    // this method adds the \0 automatically:
    char name3[] = "jane doe";
    printf("name3 is : %s\n",name3);
}