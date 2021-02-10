/*
#include <stdio.h>
int main()
{

	char ch1[] = "江西农业大学";//字符串
	//初始化字符数组会把静态储存区的字符串拷贝到数组中
	//初始化字符数组为字符常量，无法以 ch1 = "江农" 方式修改，只能以scanf重新键入或 strcpy 改变
	char* ch2 = "江西农业大学";//字符指针
	//初始化字符指针，只把字符串的地址给指针
	//初始化字符指针可直接以 “ = ” 修改
	//初始化字符指针 char* ch2 既可以用 ch2 来表示字符串所在地址，又可以表示该字符串内容
	char* ch3 = ch1;
	printf("ch1 = %s\tch1地址 = %p\n", ch1, ch1);
	printf("ch2 = %p\t&ch2 = %p\tch2 = %s\n", ch2, &ch2, ch2);
	printf("ch3 = %p\t&ch3 = %p\tch3 = %s\n", ch3, &ch3, ch3);
	printf("请输入新的ch1\n");
	scanf("%s", ch1);//键入方式修改字符常量
	ch2 = "江农";   //可直接 “ = ” 修改,其修改的依旧是地址，即 ch2 将指向 "江农" 所在的地址
	ch3 = "软件";
	printf("新的ch1为：%s\n新的ch2为：%s\n新的ch3为：%s\n", ch1, ch2, ch3);
	ch3 = ch2;//可用指针方式对其进行操作，包括指针的 ++ / --
	printf("将指针指向改变后ch2 和ch3 为%s\t%s\n", ch2, ch3);
}
*/

