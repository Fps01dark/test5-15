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
//��ʮ������������ƽ����
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
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//˼·��
//1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
//2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty / 2(������ƿ�ӻ��ĺ���������ƿ��)+empty % 2(��������ƿ��)
//3. ���ƿ�Ӹ�������1�������Լ����������ظ�2

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
//		printf("̫���ˣ�����");
//	printf("�ܵĺ���ˮ��%d\n", b + c);
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
//	printf("�ܵĺ���ˮ��%d\n", total);
//
//	return 0;
//}


//����������
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
//��Сдת�����ַ���
//int main()
//{
//	char ch1 ;
//	scanf("%c", &ch1);
//	if (ch1 >= 'A' && ch1 <= 'Z')
//		ch1 = ch1 + 32;	
//	 else if (ch1 >= 'a' && ch1 <= 'z')
//		ch1 = ch1 - 32;
//	printf("%c��ASCIIֵΪ%d\n", ch1, ch1);
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
//	printf("��ASCIIֵΪ%d\n", ch1);
//	return 0;
//}
//if�÷�
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year < 18)
//		printf("δ����\n");
//	else if (year >= 18 && year < 30)
//		printf("����\n");
//	else if (year >= 30 && year < 50)
//		printf("����\n");
//	else if (year >= 50 && year < 100)
//		printf("����\n");
//	else
//		printf("�������\n");
//	return 0;	
//}
//switch�÷�
//int main()
//{
//	char grade ;
//	scanf("%c", &grade);
//	printf("��ĳɼ�Ϊ��");
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
//			printf("�������\n");
//			break;
//	}
//	return 0;
//}
//ð������
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
//	printf("����ɼ�\n");
//	scanf("%d", &find);
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] == find)
//		{
//			printf("%d\n", i + 1);
//			continue;
//		}
//		if (i == 9)
//			printf("û�гɼ�\n");
//	}
//
//	return 0;
//}
//��������ת��
//int main()
//{
//	int i, j = 0;
//	int arr1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int arr2[3][2] = { 0 };
//	printf("����A�ǣ�\n");
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
//	printf("A��ת���ǣ�\n");
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
//�����ʸ���
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
//��������жϸ����ʽ�������ʽΪ�棬��ִ�ж�Ӧ�����飬Ȼ����������if��֧��䣬ִ�к������䣻
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