#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//}
//求十个数的总数和平均数
//int main()
//{
//	int j = 0;
//	double i = 0;
//	double sum = 0;
//	double average = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &j);
//		sum = sum + j;
//		
//	}
//	average = sum / 10.0;
//	printf("%lf\n", sum);
//	printf("%lf\n", average);
//	return 0;
//
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//思路：
//1. 20元首先可以喝20瓶，此时手中有20个空瓶子
//2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty / 2(两个空瓶子换的喝完后产生的瓶子)+empty % 2(不够换的瓶子)
//3. 如果瓶子个数超过1个，可以继续换，即重复2

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	if (a < 64)
//	{
//		b = a / 2 + a / 4 + a / 8 + a / 16 + a / 32 + a;
//		c = (a % 2 + a / 2 % 2 + a / 2 / 2 % 2 + a / 2 / 2 / 2 % 2 + a / 2 / 2 / 2 / 2 % 2) / 2;
//	}
//	else
//		printf("太多了，不卖");
//	printf("总的喝汽水：%d\n", b + c);
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("总的喝汽水：%d\n", total);
//
//	return 0;
//}


//求素数方法
//void main()
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 2; i<n; i++)
//	if (n%i == 0) break;
//	if (i == n)
//		printf("YES! \n");
//	else
//		printf("NO! \n");
//}
//大小写转换两种方法
//int main()
//{
//	char ch1 ;
//	scanf("%c", &ch1);
//	if (ch1 >= 'A' && ch1 <= 'Z')
//		ch1 = ch1 + 32;	
//	 else if (ch1 >= 'a' && ch1 <= 'z')
//		ch1 = ch1 - 32;
//	printf("%c的ASCII值为%d\n", ch1, ch1);
//	return 0;
//}
//int main()
//{
//	char ch1;
//	ch1 = getchar();
//	if (ch1 >= 65 && ch1 <= 90)
//		ch1 = ch1 + 32;
//	else if (ch1 >= 97 && ch1 <= 122)
//		ch1 = ch1 - 32;
//	putchar(ch1);
//	printf("的ASCII值为%d\n", ch1);
//	return 0;
//}
//if用法
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year < 18)
//		printf("未成年\n");
//	else if (year >= 18 && year < 30)
//		printf("青年\n");
//	else if (year >= 30 && year < 50)
//		printf("中年\n");
//	else if (year >= 50 && year < 100)
//		printf("老年\n");
//	else
//		printf("输入错误\n");
//	return 0;	
//}
//switch用法
//int main()
//{
//	char grade ;
//	scanf("%c", &grade);
//	printf("你的成绩为：");
//	switch (grade)
//	{
//	    case 'A':
//		    printf("85-100\n");
//			break;
//		case 'B':
//			printf("70-85\n");
//			break;
//		case'C':
//			printf("60-70\n");
//			break;
//		case'D':
//			printf("<60\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}
//冒泡排序
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x = 0;
//	for (x = 0; x < 9; x++)
//	{
//		int y = 0;
//		for (y = 0; y < 9 - x; y++)
//		{
//			int tmp = 0;
//			if (arr[y] < arr[y + 1])
//			{
//				tmp = arr[y];
//				arr[y] = arr[y + 1];
//				arr[y + 1] = tmp;
//			}
//		}
//	}
//	int j = 0;
//	for (j = 0; j < 9;j++)
//	{
//		printf("%2d", arr[j]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 78, 78, 48, 98, 99, 47, 12, 43, 65, 78 };
//	int find = 0;
//	printf("输入成绩\n");
//	scanf("%d", &find);
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] == find)
//		{
//			printf("%d\n", i + 1);
//			continue;
//		}
//		if (i == 9)
//			printf("没有成绩\n");
//	}
//
//	return 0;
//}
//矩阵行列转换
//int main()
//{
//	int i, j = 0;
//	int arr1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int arr2[3][2] = { 0 };
//	printf("矩阵A是：\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%2d", arr1[i][j]);
//			arr2[j][i] = arr1[i][j];
//		}
//		printf("\n");
//	}
//	i = 0; j = 0;
//	printf("A的转置是：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%2d", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2 []= "abcdef";
//	if (strlen(arr1) - strlen(arr2) > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//数单词个数
int main()
{
	char arr[2020] = { 0 };
	gets(arr);
	int word = 0;
	int num = 0;
	int i = 0;
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ')
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("num=%d\n", num);
	return 0;
}
//如果依次判断各表达式，若表达式为真，就执行对应的语句块，然后跳出整个if分支语句，执行后面的语句；
//int main()
//{
//	int i = 0;
//	if (i == 0)
//	{
//		printf("1");
//	}
//	else if (i == 0)
//	{
//		printf("2");
//	}
//	else
//	{
//		printf("3");
//	}
//	return 0;
//}