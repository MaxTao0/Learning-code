#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test()
   {
	//修饰局部变量
	static int a = 0;
	a++;
	printf("%d\n",a);
    }

int main()
{
    int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	extern age;
	printf("age=%d\n", age);
	return 0;
}