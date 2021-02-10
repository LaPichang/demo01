/*
#include <stdio.h>
int main()
{
	//补充 const 
	//const 主要目的是为了 安全 ，防止程序员不经意间修改指针数据
	//const 所修饰的内容将变为不可变的常量，其修饰指针有三种效果
	int num0 = 0;
	int num10 = 10;
	//1: const 在整个指针前，其修饰 *ptr ,则所指向的内存单元里面的内容不可变
	const int* ptr_num1 = &num0;
	//2: const 在指针名前，其修饰 ptr ,则该地址不可变，内存单元中的内容可变
	int* const ptr_num2 = &num0;
	//3: const 即在指针前，又在指针名前，则该地址和内存单元内容都不可变
	const int* const ptr_num3 = &num0;
	//  测试
	printf("修改前 num0 = %d\n", num0);
	//*num1 = 1;错误写法，此时 num1 所指向的内存单元中的内容已经被锁定
	*ptr_num2 = 1;                   // num2 只被锁定地址，而所指向内存单元内容可变
	//num2 = &num10;//错误写法，num2 被锁定地址，无法更改指向
	ptr_num1 = &num10;               //num1 所指向的内存单元内容被锁定，但是可改变其指向
	printf("修改后 num0 = %d\n", num0);
	printf("num1指向改变后 *num1 = %d\n", *ptr_num1);
}
*/