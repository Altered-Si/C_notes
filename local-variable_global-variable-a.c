#include <stdio.h>

void func();

void func(){
    extern int count;
    count++;
}
int count = 0;

int main(void){
    func();
    printf("%d\n", count);

    return 0;
}

/*
OR: 
void func();

int count = 0;

int main(void){
    func();
    printf("%d\n", count);

    return 0;
}
void func(){
    count++;
}
*/

