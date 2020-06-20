#include <stdio.h>
/*
function declaration: 'type of parameter function passing' 'function name' ('parameter list(s): parameter type and name'){
    function body
};
if no paramter is passed, the type of funtion is void
*/
void print_C(); 
int sum(int n); //n is a parameter
int max(int, int);

int main(void){
    int n;
    print_C();
    printf("Please enter an integer n: \n");
    scanf("%d", &n);
    
    printf("1 + 2 + 3 + ... + (n - 1) + n = %d\n", sum(n));

    int a, b, c;
    printf("Please enter two integers: \n");
    scanf("%d %d", &a, &b);

    c = max (a, b);
    printf("The bigger number between these two is: %d\n", c);
    
    return 0;
}

void print_C(){
    printf(" ##### \n");
    printf("##   ##\n");
    printf("##     \n");
    printf("##     \n");
    printf("##     \n");
    printf("##   ##\n");
    printf(" ##### \n");
}

int sum(int n){
    int result = 0;
    do{
        result += n;
    } while (n-- > 0);
    return result;
}

int max(int x, int y){
    if (x > y)
        return x;
    else
        return y;
}




