
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>;

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num2, &num1);
//	sum =Add(num1,num2);
//	printf("Answer=%d\n", sum);
//	return 0;
//}




//int main()
//{
//	int time = 0;
//	printf("加入中软\n");
//	while (time < 25)
//	{
//		printf("日程%d\n", time);
//		time++;
//	}
//	if (time >= 25)
//		printf("跳槽CEO\n");
//		return 0;
//}





int main()
{
	int x= 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
//  printf("%d\n", arr[3]);
	while (x < 5)
	{
		printf("%d\n", arr[x]);
		x++;
	}
	return 0;
}