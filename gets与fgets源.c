/*
#include <stdio.h>
#include <string.h>
int main()
{
	char ch1[10];
	char ch2[10];
	char ch3[10];
	printf("请输入字符串ch1\n");
	scanf("%s", ch1);           //scanf 无法输入带有空格的字符串,且回车仍保留在输入缓冲区
	getchar();                  //因回车仍在输入缓冲区，所以需要空getchar()接收
	printf("请输入字符串ch2\n");
	gets(ch2);            //gets 可输入带有空格的字符串，且在输入缓冲区读走回车，不保留回车，即不需要getchar()接收回车
	printf("你输入的ch1 = %s\nch2 = %s\n", ch1, ch2);
	printf("请输入ch3\n");
	fgets(ch3, sizeof(ch3), stdin);
	// fgets 会限制输入的字符串长度，解决了 gets 和 scanf 输入时可能超出长度溢出的问题
	printf("你输入的ch3 = %s\n", ch3);
}
*/