#include <stdio.h>

char *getWord(char);

char *getWord(char c){
    char str1[] = "Alfa";
    char str2[] = "Bravo";
    char str3 [] = "Charlie";
    char str4[] = "Delta";
    char str5[] = "Null";

    /*Warning: function returns address of local variable
    IMPORTANT: local variable can only work in the function it is created
    DO NOT RETURN POINTER POINTING TO THE LOCAL VARIABLE
    */
    switch(c){
        case 'A': return str1;
        case 'B': return str2;
        case 'C': return str3;
        case 'D': return str4;
        default: return str5;
    }
}

int main(void){
    char input;

    printf("Please enter a character: ");
    scanf("%c", &input);
    
    printf("%s\n", getWord(input)); //the address returned to the function is invalid (since the stack is elminated)
    return 0;
}