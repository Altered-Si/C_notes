#include <stdio.h>

int main(void){
     int i, num;
     _Bool flag = 1;

     printf("Please enter a integer: ");
     scanf("%d", &num);

     for (i = 2; i < num / 2; i++){
         if (num % i == 0)
            flag = 0;
            //break;
     }
     if (flag)
        printf("%d is a prime number\n", num);
    else 
        printf("%d is not a prime number\n", num);
    
    printf("i = %d", i);
    return 0;
}
