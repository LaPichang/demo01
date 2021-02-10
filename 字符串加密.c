/*
#include <stdio.h>
#include <string.h>
#define Key 5               //密钥/偏移量
char encrypt(char[]);       //字符串加密
int main()
{
	char ch[20];
	printf("请输入初始字符串：");
	scanf("%s", ch);
	printf("\n");
	encrypt(ch); //加密
	printf("加密后字符串为：%s", ch);
}

char encrypt(char ch[])
{
	int i;
	int count = strlen(ch);       //测量传入的数组长度，以确定循环次数
	for (i = 0;i < count;i++)
	{
		ch[i] = ch[i] + i + Key;        //加密的核心算法,其增加常量为ASCII码
	}
}
*/