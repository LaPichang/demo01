/*
#include "stdio.h"
int main()
{
	int c = 65;
	printf("%d\n", c);
	printf("ʮ����ת�˽��ƣ�%o\n", c);
	printf("ʮ����תʮ�����ƣ�%x\n",c);
}
*/
                                     //�� ʮ���� ��ת��Ϊ �˽��ƺ�ʮ������ ��ʽ

/*--------------------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int a = 027;//�˽��ƻ���=ʮ������7*1+2*8
	printf("%d\n", a);
	int b = 0X65;//ʮ�����ƻ���=ʮ����5*1+6*16
	printf("%d\n", b);
}
*/
                                             //�� �˽��� �� ʮ������ ��ת��Ϊ ʮ���� ��ʽ

/*--------------------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int sum;
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	//��һ�ֱȽϣ�������ֵȷ��Ϊd��
	if (a > b)
	{
		sum = a;
		a = b;
		b = sum;
	}
	if (b > c)
	{
		sum = b;
		b = c;
		c = sum;
	}
	if (c > d)
	{
		sum = c;
		c = d;
		d = sum;
	}
	//�ڶ��ֱȽ�(��֤a��С��
	if (a > c)
	{
		sum = a;
		a = c;
		c = sum;
	}
	if (a > b)
	{
		sum = a;
		a = b;
		b = sum;
	}
	//�����ֱȽ�(��֤�м��������Ĵ�С��
	if (b > c)
	{
		sum = b;
		b = c;
		c = sum;
	}
	printf("��СֵΪ%d\n", a);
	printf("��������Ϊ%d\n", b);
	printf("�ڶ�����Ϊ%d\n", c);
	printf("������Ϊ%d\n", d);

	return 0;
}
*/
                                                            //�ĸ������Ƚϴ�С�����򣨲���ѭ����

/*--------------------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a > c)
	{
		if (a > b)
		{
			if (b > c)
			{
				printf("�м����Ϊ%d", b);
				printf("��С����Ϊ%d", c);
			}
			else
			{
				printf("�м����Ϊ%d", c);
				printf("��С����Ϊ&d", b);
			}
			printf("������Ϊ%d", a);
		}
		else
		{
			printf("������Ϊ%d", b);
			printf("�м����Ϊ%d", a);
			printf("��С����Ϊ%d", c);
		}
	}
	else
	{
		if (b > c)
		{
			printf("������Ϊ%d", b);
			printf("�м����Ϊ%d", c);
			printf("��С����Ϊ%d", a);
		}
		else
		{
			if (a > b)
			{
				printf("������Ϊ%d", c);
				printf("�м����Ϊ%d", a);
				printf("��С����Ϊ%d", b);
			}
			else
			{
				printf("������Ϊ%d", c);
				printf("�м����Ϊ%d", b);
				printf("��С����Ϊ%d", a);
			}
		}
	}

	return 0;
}
*/
                                                  //�Ƚ���������С�����У�if�ж�Ƕ�ף�

/*--------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
#include "math.h"

int main()
{
	int x = 0;
	printf("������һ����λ����");
	scanf("%d", &x);
	int a = x % 10;
	int b = x / 10 % 10;
	int c = x / 100 % 10;
	int d = x / 1000 % 10;
	printf("��λ�ǣ�%d\n", a);
	printf("ʮλ�ǣ�%d\n", b);
	printf("��λ�ǣ�%d\n", c);
	printf("ǧλ�ǣ�%d\n", d);
	printf("����Ϊ%d%d%d%d", a, b, c, d);

	return 0;
}
*/
/*--------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
#include "math.h"

int main()
{
	int four = 0;
	printf("��������λ����");
	scanf("%d", &four);
	for (int i = 0;i < 4;i++)               //��i����ʾ�ڼ�λ��
	{
		if (i < 1)
		{
			int a = four % 10;
			printf("%d\n", a);
		}
		else
		{
			int sum = pow(10, i);             //pow(x , y)Ϊ x ^ y 
			int b = four / sum % 10;
			printf("%d\n", b);
		}
	}
}
*/
/*--------------------------------------------------------------------------------------*/
/*
#include "stdio.h"
int main()
{
	int x;
	printf("������һ����λ����\n");
	scanf("%d", &x);
	while (x > 0)
	{
		printf("%d\n", x % 10);
		x /= 10;                               //ÿȡ��һλ��������һλ��
	}
	return 0;
}
*/                                               //��һ����λ��������λ�������������������

/*------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int number[5];
	for (int i = 0;i < 5;i++)
	{
		printf("������ѧ��ѧ�ţ�");
		scanf("%d", &number[i]);
	}
	for (int i = 0;i < 5;i++)
	{
		printf("ѧ����ѧ������Ϊ��%d\n", number[i]);
	}
	return 0;
}
*/                                    //ѧ���������룬��һ�����������������ã�

/*-------------------------------------------------------------------------------*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float p, area;
	char s;
	while (1)
	{
		printf("�����������ε������߳�:");
		scanf("%f%f%f", &a, &b, &c);
		if (a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0)
		{
			p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c)); //sqrt Ϊ��ƽ����
			printf("�����������Ϊ��%.2f", area);
			exit(0);
		}
		else
		{
			printf("���������߳�������\n");
			printf("�Ƿ�������룿Y/N\n");
			rewind(stdin);
			scanf("%c", &s);
			if (s == 'Y')
			{
				continue;
			}
			else
			{
				exit(1);
			}
		}
	}
	return 0;
}
*/                                        //��֪���������������������

/*----------------------------------------------------------------------------*/

//                               11.4
//                    �б���ĸ�Ĵ�Сд��������ת��
/*
#include <stdio.h>
int main()
{
	int k;
	char x[5];
	printf("����������Ҫ�����ַ���");
	for (int i = 0;i < 5;i++)
	{
		scanf("%c", &x[i]);
		getchar();
	}
	printf("��������Ҫ��Сдת��д��0�������ǡ���дתСд��1������\n");
	scanf("%d", &k);
	if (k == 0)                      //Сдת��д
	{
		for (int i = 0;i < 5;i++)
		{
			if (x[i] >= 'A' && x[i] <= 'Z' || x[i] >= 'a' && x[i] <= 'z')
			{
				if (x[i] >= 'a' && x[i] <= 'z')
				{
					x[i] -= 32;
				}
			}
		}
	}
	else                            //��дתСд
	{
		for (int i = 0;i < 5;i++)
		{
			if (x[i] >= 'A' && x[i] <= 'Z' || x[i] >= 'a' && x[i] <= 'z')
			{
				if (x[i] >= 'A' && x[i] <= 'Z')
				{
					x[i] += 32;
				}
			}
		}
	}
	printf("ת������ַ�Ϊ��");
	for (int i = 0;i < 5;i++)
	{
		printf("%c", x[i]);
	}
	return 0;
}
*/

/*--------------------------------------------------------------------*/

//                    11 / 9 ������ҵ

/*
#include <stdio.h>
int main()
{
	char x;
	while (1)
	{
		printf("���������ѡ��(Y/y,N/n)\n");
		scanf("%c", &x);
		switch (x)
		{
		case 'Y':
		case'y':printf("��ӭ�ؼң�\n");
			exit(0);
		case 'N':
		case 'n':printf("�ݰݣ�\n");
			exit(0);
		default:
			printf("������˴����������룡\n");
		}
	}
	return 0;
}
*/
/*--------------------------------------------------------------------*/
//�������ֶ� 100-90��A�� 90-80(B) 80-70(C) 70-60(D) 60-0(E)
//while �� 
/*
#include <stdio.h>
int main()
{
	int score;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("�����������(0-100)\n");                //100Ϊ����
	printf("��ʾ����������������� -1\n");
	while(1)
	{
		scanf("%d", &score);
		if (score == -1)
			break;
		if (score <= 100 && score >= 0)
		{
			switch (score / 10)    //��ʮλ��ȡ��
			{
			case 10:
				a++;
				break;
			case 9:
				a++;
				break;
			case 8:
				b++;
				break;
			case 7:
				c++;
				break;
			case 6:
				d++;
				break;
			default:
				e++;
			}
		}
		else
		{
			printf("��������ȷ�ķ�����0����100��\n");
			continue;
		}
	}
	printf("A������:%d\nB������:%d\nC��������%d\nD��������%d\nE��������%d\n",a,b,c,d,e);
}
*/

//for ��
/*
#include <stdio.h>
int main()
{
	int score;
	int a = 0, b = 0, c = 0, d = 0,e = 0;
	printf("�����������(0-100)\n");                //100Ϊ����
	printf("��ʾ����������������� -1\n");
	for (;;)
	{
		scanf("%d", &score);
		if (score == -1)
			break;
		if (score <= 100 && score >= 0)
		{
			switch (score / 10)    //��ʮλ��ȡ��
			{
			case 10:
				a++;
				break;
			case 9:
				a++;
				break;
			case 8:
				b++;
				break;
			case 7:
				c++;
				break;
			case 6:
				d++;
				break;
			default:
				e++;
			}
		}
		else
		{
			printf("��������ȷ�ķ�����0����100��\n");
			continue;
		}
	}
	printf("A������:%d\nB������:%d\nC��������%d\nD��������%d\nE��������%d\n", a, b, c, d, e);
}
*/
/*--------------------------------------------------------------------*/
/*
#include <stdio.h>
int main()
{
	int n;
	printf("������Ҫ��2�ļ��η���");
	scanf("%d", &n);
	int x = 1;
	for (int i = 0;i < n;i++)
	{
		x *= 2;
	}
	printf("2��%d�η�Ϊ��%d", n, x);
}
*/

/*
#include <stdio.h>
int main()
{
	//����һ�ź��Ϊ0.1���׵�ֽ�ţ���Ҫ�۵����ٴοɵ������8848m
	int i = 1;      //���۴���
	float a = 0.0001;  // ֽ�ų�ʼ��� 0.0001m
	while(1)
	{
		a *= 2;
		if (a >= 8848)
			break;
		i++;
	}
	printf("���۴���Ϊ��%d", i);
}
*/

/*----------------------------------------------------------------------*/

//                      11.23
//                     ѡ�������Ż���
/*
#include <stdio.h>
#define N 5
int main()
{
	int i, j;              //ѭ������
	int temporary;        //��������
	int max;              //�ϴ�ֵ�ű�
	int num[N];
	printf("������%d����:", N);
	for (i = 0;i < N;i++)
		scanf("%d", &num[i]);
	for (i = 0;i < N;i++)
	{
		max = i;
		for (j = i + 1;j < N;j++)
			if (num[j] > num[max])
				max = j;
		if (max != i)
		{
			temporary = num[max];
			num[max] = num[i];
			num[i] = temporary;
		}
	}
	for (i = 0;i < N;i++)
		printf("%d\t", num[i]);
	return 0;
}
*/

/*----------------------------------------------------------------*/

/*
#include <stdio.h>
#define N 5
int main()
{
	int num1[N] = {0};
	int* ptr_num2[N];//ָ�����飬ÿ��Ԫ�ض��Ǵ�ŵ�ַ
	int* ptr_num3;
	int** ptr_num4;//����ָ�룬ָ��ָ��ĵ�ַ
	int i;
	ptr_num3 = num1;
	ptr_num4 = ptr_num2;
	for (i = 0;i < N;i++)
	{
		ptr_num2[i] = &num1[i];//�� num1 ��ÿ��Ԫ�صĵ�ַ���� ptr_num2
	}
		for (i = 0;i < N;i++)
	{
		printf("num1[%d]�ĵ�ַΪ:ptr_num2 = %p\t%p\t����Ӧ��ֵΪ��%d\n\n", i, ptr_num2[i],*(ptr_num4 + i), *ptr_num2[i]);
		printf("ptr_num2��ַΪ��%p\t%p\t%p\n\n", ptr_num2 + i, &ptr_num2[i], ptr_num4 + i);
	}
}
*/

/*--------------------------------------------------------------------------------------------------------------*/

/*
#include <stdio.h>

typedef int* num[5];
// typedef ����������ת��Ϊһ���Զ����������

int main()
{
	num a;                //��ʱ�� num a == int* a[5]
	int b = 10;
	a[1] = &b;
	printf("%p\t%p", a[1],&b);
}
*/