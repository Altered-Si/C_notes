#include <stdio.h>

int *f(int a, int b);

int main(void){
    printf("------------------------------ Start\n");
 
    int *p1 = NULL;
	printf("The memeory address of p1 = 0x%x \n", p1); //p1 = 0x0 -- Null pointer, address is 0
 
    p1 = f(1, 2);
 
	printf("The memeory address of p1 = 0x%x \n", p1); //p1 = 0x3b88d0
	printf("*p1 = %d \n", *p1); //*p1 = 3 -- since the address assigned to p1 by function f is the same as return value p
 
	printf("------------------------------ End\n");
	getchar();

	return 0;
}
/*
 * 指针函数的定义
 * 返回值是指针类型int *
 */
int *f(int a, int b) {
	int *p = (int *)malloc(sizeof(int));
	printf("The memeory address of p = 0x%x \n", p); //p = 0x3b88d0
	memset(p, 0, sizeof(int));
	*p = a + b;
	printf("*p = %d \n", *p); //*p = 3
 
	return p;
}

/*
————————————————
版权声明：本文为CSDN博主「ameyume」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/ameyume/java/article/details/8220832
*/