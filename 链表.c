
#include <stdio.h>
#include <stdlib.h>


//链表的节点
struct KDA
{
	int num;
	struct KDA* next;
};

struct KDA* Initial();                        //初始化链表

struct KDA* Traverse(struct KDA* header);     //遍历

struct KDA* Insert(struct KDA* header, int num_old, int num_new);//插入数据
										     // num_old是 查找插入的位置   num_new是需要插入的新数
struct KDA* Empty(struct KDA* header);       //清空链表

struct KDA* Delete(struct KDA* header, int num_old);//删除节点

struct KDA* Change(struct KDA* header, int num_old, int num_new);//修改数据

int main()
{
	int find_num, insert_num;           //用以查找和插入
	int op_num = 0;                     //选择
	struct KDA* header;
	while (op_num != 7)
	{
		printf("请选择要进行的操作\n");
		printf("1:初始化链表\n");
		printf("2:遍历链表\n");
		printf("3:插入数据\n");
		printf("4:清空链表\n");
		printf("5:删除数据\n");
		printf("6:修改数据\n");
		printf("7:退出程序\n");
		scanf("%d", &op_num);
		system("cls");
		switch (op_num)
		{
		case 1:
			header = Initial();              //初始化链表
			break;
		case 2:
			Traverse(header);                //遍历
			break;
		case 3:
			printf("请输入需要插入的新数\n");
			scanf("%d", &insert_num);
			printf("请问放在哪个数之前?\n");
			scanf("%d", &find_num);
			Insert(header, find_num, insert_num);
			//修改完后自动遍历，检查修改结果
			Traverse(header);
			break;
		case 4:
			Empty(header);
			printf("链表已清空!!!\n");
			break;
		case 5:
			printf("请输入要删除的数\n");
			scanf("%d", &find_num);
			Delete(header, find_num);
			break;
		case 6:
			printf("请输入需要修改的数\n");
			scanf("%d", &find_num);
			printf("请输入修改后的数\n");
			scanf("%d", &insert_num);
			Change(header, find_num, insert_num);
			break;
		}
	}
}

struct KDA* Initial()
{
	//创建头节点
	struct KDA* header = (struct KDA*)malloc(sizeof(struct KDA));
	header->next = NULL;
	//尾节点指针
	struct KDA* end = header;

	int new_num;            //增加的新数

	while (1)
	{
		printf("请输入一个新数据(若不输入则键入-1)\n");
		scanf("%d", &new_num);
		if (new_num == -1)
			break;
		//创建一个新的节点接收
		struct KDA* New = (struct KDA*)malloc(sizeof(struct KDA));
		New->num = new_num;
		New->next = NULL;
		//将新的节点插入链表
		end->next = New;
		//此时的 header->next 从 NULL 变为 New

		//移动尾节点指针
		end = New;
	}
	return header;               //传回头节点的地址
}

struct KDA* Traverse(struct KDA* header)
{
	if (header == NULL)
		return;
	//辅助指针变量，用以遍历输出
	struct KDA* trave = header->next;
	while (trave != NULL)
	{
		printf("%-4d", trave->num);
		trave = trave->next;
	}
	printf("\n\n\n\n");
}

struct KDA* Insert(struct KDA* header, int num_old, int num_new)
{
	if (header == NULL)
		return;
	struct KDA* before = header;
	struct KDA* after = before->next;
	//一次性查找两个节点，在找到后直接在之间插入
	while (after != NULL)
	{
		//找到后跳出
		if (after->num == num_old)
			break;
		//没找到则同时移动两个标记指针
		before = after;
		after = after->next;
	}
	//若自然跳出则 after 为 NULL 表示没有找到插入位,则将新数放入末尾
	//若 break 跳出，则表示找到了插入位
	struct KDA* insert = (struct KDA*)malloc(sizeof(struct KDA));
	insert->num = num_new;
	//将指针重新衔接，完成插入
	before->next = insert;
	insert->next = after;
}

struct KDA* Empty(struct KDA* header)
{
	if (header == NULL)
		return;
	//添加辅助指针变量记录当前节点
	struct KDA* current = header->next;
	while (current != NULL)
	{
		//添加辅助指针保存住被销毁的节点的 next 指针
		struct KDA* ptr_next = current->next;
		//释放当前节点
		free(current);
		//清空当前节点后将记录指针指向下一个节点
		current = ptr_next;
	}
	//清空链表后，将头节点的 next 重置为NULL
}

struct KDA* Delete(struct KDA* header, int num_old)
{
	if (header == NULL)
		return;
	//两个辅助指针
	struct KDA* before = header;
	struct KDA* after = header->next;
	//添加辅助指针保存住被销毁节点的 next 指针
	struct KDA* ptr_next;
	while (after != NULL)
	{
		if (after->num == num_old)
		{
			ptr_next = after->next;
			//释放所查到的节点
			free(after);
			break;
		}
		before = after;
		after = after->next;
	}
	if (after == NULL)
	{
		printf("未找到你想删除的数\n");
		return;
	}
	//删除节点后重新衔接链表
	if (ptr_next == NULL)
	{
		// ptr_next == NULL 时则所删数字在 尾节点 ,且已经被销毁
		//则将 before 置为最后一个节点
		before->next = NULL;
		return;
	}
	before->next = ptr_next;
	after = ptr_next->next;
}

struct KDA* Change(struct KDA* header, int num_old, int num_new)
{
	if (header == NULL)
		return;
	struct KDA* before = header;
	struct KDA* after = header->next;
	while (after != NULL)
	{
		if (after->num == num_old)
		{
			//查到后修改数据
			after->num = num_new;
		}
		before = after;
		after = after->next;
	}
	printf("未找到要修改的数\n");
}

