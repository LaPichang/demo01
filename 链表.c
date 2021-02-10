
#include <stdio.h>
#include <stdlib.h>


//����Ľڵ�
struct KDA
{
	int num;
	struct KDA* next;
};

struct KDA* Initial();                        //��ʼ������

struct KDA* Traverse(struct KDA* header);     //����

struct KDA* Insert(struct KDA* header, int num_old, int num_new);//��������
										     // num_old�� ���Ҳ����λ��   num_new����Ҫ���������
struct KDA* Empty(struct KDA* header);       //�������

struct KDA* Delete(struct KDA* header, int num_old);//ɾ���ڵ�

struct KDA* Change(struct KDA* header, int num_old, int num_new);//�޸�����

int main()
{
	int find_num, insert_num;           //���Բ��ҺͲ���
	int op_num = 0;                     //ѡ��
	struct KDA* header;
	while (op_num != 7)
	{
		printf("��ѡ��Ҫ���еĲ���\n");
		printf("1:��ʼ������\n");
		printf("2:��������\n");
		printf("3:��������\n");
		printf("4:�������\n");
		printf("5:ɾ������\n");
		printf("6:�޸�����\n");
		printf("7:�˳�����\n");
		scanf("%d", &op_num);
		system("cls");
		switch (op_num)
		{
		case 1:
			header = Initial();              //��ʼ������
			break;
		case 2:
			Traverse(header);                //����
			break;
		case 3:
			printf("��������Ҫ���������\n");
			scanf("%d", &insert_num);
			printf("���ʷ����ĸ���֮ǰ?\n");
			scanf("%d", &find_num);
			Insert(header, find_num, insert_num);
			//�޸�����Զ�����������޸Ľ��
			Traverse(header);
			break;
		case 4:
			Empty(header);
			printf("���������!!!\n");
			break;
		case 5:
			printf("������Ҫɾ������\n");
			scanf("%d", &find_num);
			Delete(header, find_num);
			break;
		case 6:
			printf("��������Ҫ�޸ĵ���\n");
			scanf("%d", &find_num);
			printf("�������޸ĺ����\n");
			scanf("%d", &insert_num);
			Change(header, find_num, insert_num);
			break;
		}
	}
}

struct KDA* Initial()
{
	//����ͷ�ڵ�
	struct KDA* header = (struct KDA*)malloc(sizeof(struct KDA));
	header->next = NULL;
	//β�ڵ�ָ��
	struct KDA* end = header;

	int new_num;            //���ӵ�����

	while (1)
	{
		printf("������һ��������(�������������-1)\n");
		scanf("%d", &new_num);
		if (new_num == -1)
			break;
		//����һ���µĽڵ����
		struct KDA* New = (struct KDA*)malloc(sizeof(struct KDA));
		New->num = new_num;
		New->next = NULL;
		//���µĽڵ��������
		end->next = New;
		//��ʱ�� header->next �� NULL ��Ϊ New

		//�ƶ�β�ڵ�ָ��
		end = New;
	}
	return header;               //����ͷ�ڵ�ĵ�ַ
}

struct KDA* Traverse(struct KDA* header)
{
	if (header == NULL)
		return;
	//����ָ����������Ա������
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
	//һ���Բ��������ڵ㣬���ҵ���ֱ����֮�����
	while (after != NULL)
	{
		//�ҵ�������
		if (after->num == num_old)
			break;
		//û�ҵ���ͬʱ�ƶ��������ָ��
		before = after;
		after = after->next;
	}
	//����Ȼ������ after Ϊ NULL ��ʾû���ҵ�����λ,����������ĩβ
	//�� break ���������ʾ�ҵ��˲���λ
	struct KDA* insert = (struct KDA*)malloc(sizeof(struct KDA));
	insert->num = num_new;
	//��ָ�������νӣ���ɲ���
	before->next = insert;
	insert->next = after;
}

struct KDA* Empty(struct KDA* header)
{
	if (header == NULL)
		return;
	//��Ӹ���ָ�������¼��ǰ�ڵ�
	struct KDA* current = header->next;
	while (current != NULL)
	{
		//��Ӹ���ָ�뱣��ס�����ٵĽڵ�� next ָ��
		struct KDA* ptr_next = current->next;
		//�ͷŵ�ǰ�ڵ�
		free(current);
		//��յ�ǰ�ڵ�󽫼�¼ָ��ָ����һ���ڵ�
		current = ptr_next;
	}
	//�������󣬽�ͷ�ڵ�� next ����ΪNULL
}

struct KDA* Delete(struct KDA* header, int num_old)
{
	if (header == NULL)
		return;
	//��������ָ��
	struct KDA* before = header;
	struct KDA* after = header->next;
	//��Ӹ���ָ�뱣��ס�����ٽڵ�� next ָ��
	struct KDA* ptr_next;
	while (after != NULL)
	{
		if (after->num == num_old)
		{
			ptr_next = after->next;
			//�ͷ����鵽�Ľڵ�
			free(after);
			break;
		}
		before = after;
		after = after->next;
	}
	if (after == NULL)
	{
		printf("δ�ҵ�����ɾ������\n");
		return;
	}
	//ɾ���ڵ�������ν�����
	if (ptr_next == NULL)
	{
		// ptr_next == NULL ʱ����ɾ������ β�ڵ� ,���Ѿ�������
		//�� before ��Ϊ���һ���ڵ�
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
			//�鵽���޸�����
			after->num = num_new;
		}
		before = after;
		after = after->next;
	}
	printf("δ�ҵ�Ҫ�޸ĵ���\n");
}

