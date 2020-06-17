#include <stdio.h>

int main(){
    double foot;
    double inch;
    double height;

    scanf("%lf %lf", &foot, &inch);
    height = (foot + inch /12)*0.3048;
    printf("height is %f m.\n", height);

    getchar();
    getchar();
    return 0;
    
}