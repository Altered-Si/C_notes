#include <stdio.h>
#include <string.h>

int main(void){
    //initialize every element in the char array
    char str1[10] = {'F', 'e', 'd', 'R', '\0'};

    //Number of the elements is not required, the compiler will calculate automatically
    char str3[] = {'F', 'e', 'd', 'R', '\0'};

    //Use character string to initialize the char array
    char str4[] = {"FedR"};

    //If use string to initialize, the {} is not required
    char str5[] = "FedR";

    //strlen function - get the length of a character array (number of characters in the array)
    printf("sizeof str5 = %d\n", sizeof(str5));
    printf("strlen str5 = %d\n", strlen(str5));
 
    /*copy a string **string CANNOT be assigned to another one directly
    strcpy and strncpy function*/
    //IMPORTANT: the size of destination string MUST >= source string
    char str6[] = "Original String";
    char str7[] = "New String";
    char str8[100];

    //strcpy function
    strcpy(str6, str7); //str6: destination srtring (paste); str7: source string (copy)
    strcpy(str8, "Copy Successful");

    printf("str6: %s\n", str6);
    printf("str7: %s\n", str7);
    printf("str8: %s\n", str8);

    char str9[] = "To be or not to be";
    char str10[40];

    /*strncpy: formatted copy a string into another one w/ the size of the string
    strncpy(destination array, source array, number of character of the copied content [**NOT INCLUDE '\0'])*/
    strncpy(str10, str9, 5); 
    str10[5] = '\0';

    printf("str10: %s\n", str10);

    /*Connect strings: strcat & strncat function*/
    char str11[] = "I love";
    char str12[] = "ECE!";

    strcat(str11, " ");
    strcat(str11, str12);

    printf("str11: %s\n", str11);

    //Difference between strncat and strcat: strncat would add a '\0' behind the end of the string
    
    /* comparison of two strings: strcmp & strncmp function
    Compare the ASCII code of each characters containing in the compared strings
    int strcmp(string1, string2);
    Example: strcmp("bar", "foo") < 0;
    strcmp("foo", "bar") > 0;
    strcmp("yes", "yes") == 0;*/

    char str13[] = "yes!";
    char str14[] = "yes!";

    if(!strcmp(str13, str14)){
        printf("The two strings are identical.\n");
    }
    else{
        printf("The two strings have difference.\n");
    }
    //strncmp: add a parameter n to compare only n characters of the strings 

    return 0;
}