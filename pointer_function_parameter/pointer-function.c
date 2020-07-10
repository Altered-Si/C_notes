#include <stdio.h>

//get a char type data from INPUT in main function, and return a char type pointer (ADDRESS)
char *getWord(char);

char *getWord(char c){
    switch(c){
        case 'A': return "Alfa";
        case 'B': return "Bravo";
        case 'C': return "Charlie";
        case 'D': return "Delta";
        default: return "Null";
    }
}

int main(void){
    char input;

    printf("Please enter a character: ");
    scanf("%c", &input);
    
    printf("%s\n", getWord(input)); //getting a string from the function getWord, since here needs an address, the pointer is returned by calling getWord function

    //function pointer --> int (*p)()
    

    return 0;
}