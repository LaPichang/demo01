/*
#include "stdio.h"
int main()
{
	int c = 65;
	printf("%d\n", c);
	printf("十进制转八进制：%o\n", c);
	printf("十进制转十六进制：%x\n",c);
}
*/
                                     //将 十进制 数转化为 八进制和十六进制 形式

/*--------------------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int a = 027;//八进制换算=十进制中7*1+2*8
	printf("%d\n", a);
	int b = 0X65;//十六进制换算=十进制5*1+6*16
	printf("%d\n", b);
}
*/
                                             //将 八进制 与 十六进制 数转化为 十进制 形式

/*--------------------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int sum;
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	//第一轮比较（将最大的值确定为d）
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
	//第二轮比较(保证a最小）
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
	//第三轮比较(保证中间两个数的大小）
	if (b > c)
	{
		sum = b;
		b = c;
		c = sum;
	}
	printf("最小值为%d\n", a);
	printf("第三的数为%d\n", b);
	printf("第二的数为%d\n", c);
	printf("最大的数为%d\n", d);

	return 0;
}
*/
                                                            //四个变量比较大小并排序（并列循环）

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
				printf("中间的数为%d", b);
				printf("最小的数为%d", c);
			}
			else
			{
				printf("中间的数为%d", c);
				printf("最小的数为&d", b);
			}
			printf("最大的数为%d", a);
		}
		else
		{
			printf("最大的数为%d", b);
			printf("中间的数为%d", a);
			printf("最小的数为%d", c);
		}
	}
	else
	{
		if (b > c)
		{
			printf("最大的数为%d", b);
			printf("中间的数为%d", c);
			printf("最小的数为%d", a);
		}
		else
		{
			if (a > b)
			{
				printf("最大的数为%d", c);
				printf("中间的数为%d", a);
				printf("最小的数为%d", b);
			}
			else
			{
				printf("最大的数为%d", c);
				printf("中间的数为%d", b);
				printf("最小的数为%d", a);
			}
		}
	}

	return 0;
}
*/
                                                  //比较三个数大小并排列（if判断嵌套）

/*--------------------------------------------------------------------------------------*/

/*
#include "stdio.h"
#include "math.h"

int main()
{
	int x = 0;
	printf("请输入一个四位数：");
	scanf("%d", &x);
	int a = x % 10;
	int b = x / 10 % 10;
	int c = x / 100 % 10;
	int d = x / 1000 % 10;
	printf("个位是：%d\n", a);
	printf("十位是：%d\n", b);
	printf("百位是：%d\n", c);
	printf("千位是：%d\n", d);
	printf("新数为%d%d%d%d", a, b, c, d);

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
	printf("请输入四位数：");
	scanf("%d", &four);
	for (int i = 0;i < 4;i++)               //用i来表示第几位数
	{
		if (i < 1)
		{
			int a = four % 10;
			printf("%d\n", a);
		}
		else
		{
			int sum = pow(10, i);             //pow(x , y)为 x ^ y 
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
	printf("请输入一个四位数：\n");
	scanf("%d", &x);
	while (x > 0)
	{
		printf("%d\n", x % 10);
		x /= 10;                               //每取出一位数便消除一位数
	}
	return 0;
}
*/                                               //将一个四位数个各个位数单独输出并重新排列

/*------------------------------------------------------------------------------*/

/*
#include "stdio.h"
int main()
{
	int number[5];
	for (int i = 0;i < 5;i++)
	{
		printf("请输入学生学号：");
		scanf("%d", &number[i]);
	}
	for (int i = 0;i < 5;i++)
	{
		printf("学生的学号依次为：%d\n", number[i]);
	}
	return 0;
}
*/                                    //学号依次输入，再一次性输出（数组的运用）

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
		printf("请输入三角形的三个边长:");
		scanf("%f%f%f", &a, &b, &c);
		if (a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0)
		{
			p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c)); //sqrt 为开平方根
			printf("该三角形面积为：%.2f", area);
			exit(0);
		}
		else
		{
			printf("请输入合理边长！！！\n");
			printf("是否继续输入？Y/N\n");
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
*/                                        //已知三角形三边求三角形面积

/*----------------------------------------------------------------------------*/

//                               11.4
//                    判别字母的大小写，并进行转换
/*
#include <stdio.h>
int main()
{
	int k;
	char x[5];
	printf("请输入你需要辨别的字符：");
	for (int i = 0;i < 5;i++)
	{
		scanf("%c", &x[i]);
		getchar();
	}
	printf("请问是需要“小写转大写（0）”还是“大写转小写（1）”？\n");
	scanf("%d", &k);
	if (k == 0)                      //小写转大写
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
	else                            //大写转小写
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
	printf("转换后的字符为：");
	for (int i = 0;i < 5;i++)
	{
		printf("%c", x[i]);
	}
	return 0;
}
*/

/*--------------------------------------------------------------------*/

//                    11 / 9 课堂作业

/*
#include <stdio.h>
int main()
{
	char x;
	while (1)
	{
		printf("请输入你的选择：(Y/y,N/n)\n");
		scanf("%c", &x);
		switch (x)
		{
		case 'Y':
		case'y':printf("欢迎回家！\n");
			exit(0);
		case 'N':
		case 'n':printf("拜拜！\n");
			exit(0);
		default:
			printf("输错字了蠢猪！重新输入！\n");
		}
	}
	return 0;
}
*/
/*--------------------------------------------------------------------*/
//将分数分段 100-90（A） 90-80(B) 80-70(C) 70-60(D) 60-0(E)
//while 型 
/*
#include <stdio.h>
int main()
{
	int score;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("请输入分数：(0-100)\n");                //100为满分
	printf("提示：若不想输出请输入 -1\n");
	while(1)
	{
		scanf("%d", &score);
		if (score == -1)
			break;
		if (score <= 100 && score >= 0)
		{
			switch (score / 10)    //将十位数取出
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
			printf("请输入正确的分数（0——100）\n");
			continue;
		}
	}
	printf("A段人数:%d\nB段人数:%d\nC段人数：%d\nD段人数：%d\nE段人数：%d\n",a,b,c,d,e);
}
*/

//for 型
/*
#include <stdio.h>
int main()
{
	int score;
	int a = 0, b = 0, c = 0, d = 0,e = 0;
	printf("请输入分数：(0-100)\n");                //100为满分
	printf("提示：若不想输出请输入 -1\n");
	for (;;)
	{
		scanf("%d", &score);
		if (score == -1)
			break;
		if (score <= 100 && score >= 0)
		{
			switch (score / 10)    //将十位数取出
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
			printf("请输入正确的分数（0——100）\n");
			continue;
		}
	}
	printf("A段人数:%d\nB段人数:%d\nC段人数：%d\nD段人数：%d\nE段人数：%d\n", a, b, c, d, e);
}
*/
/*--------------------------------------------------------------------*/
/*
#include <stdio.h>
int main()
{
	int n;
	printf("请问你要算2的几次方？");
	scanf("%d", &n);
	int x = 1;
	for (int i = 0;i < n;i++)
	{
		x *= 2;
	}
	printf("2的%d次方为：%d", n, x);
}
*/

/*
#include <stdio.h>
int main()
{
	//计算一张厚度为0.1毫米的纸张，需要折叠多少次可到达珠峰8848m
	int i = 1;      //对折次数
	float a = 0.0001;  // 纸张初始厚度 0.0001m
	while(1)
	{
		a *= 2;
		if (a >= 8848)
			break;
		i++;
	}
	printf("对折次数为：%d", i);
}
*/

/*----------------------------------------------------------------------*/

//                      11.23
//                     选择排序（优化）
/*
#include <stdio.h>
#define N 5
int main()
{
	int i, j;              //循环变量
	int temporary;        //交换变量
	int max;              //较大值脚标
	int num[N];
	printf("请输入%d个数:", N);
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
	int* ptr_num2[N];//指针数组，每个元素都是存放地址
	int* ptr_num3;
	int** ptr_num4;//二级指针，指向指针的地址
	int i;
	ptr_num3 = num1;
	ptr_num4 = ptr_num2;
	for (i = 0;i < N;i++)
	{
		ptr_num2[i] = &num1[i];//将 num1 中每个元素的地址赋给 ptr_num2
	}
		for (i = 0;i < N;i++)
	{
		printf("num1[%d]的地址为:ptr_num2 = %p\t%p\t所对应的值为：%d\n\n", i, ptr_num2[i],*(ptr_num4 + i), *ptr_num2[i]);
		printf("ptr_num2地址为：%p\t%p\t%p\n\n", ptr_num2 + i, &ptr_num2[i], ptr_num4 + i);
	}
}
*/

/*--------------------------------------------------------------------------------------------------------------*/

/*
#include <stdio.h>

typedef int* num[5];
// typedef 将整体类型转换为一个自定义的类型名

int main()
{
	num a;                //此时的 num a == int* a[5]
	int b = 10;
	a[1] = &b;
	printf("%p\t%p", a[1],&b);
}
*/