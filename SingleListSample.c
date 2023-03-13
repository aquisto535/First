#include <stdio.h>

typedef struct NODE
{	
	//������ ������
	int nData;

	//�����Ͱ����� ���� ������
	struct NODE* next;
} NODE;// ������

int main()
{	
	NODE list[5] = {0};

	//�� �ʱ�ȭ
	list[0].nData = 100;
	list[1].nData = 200;
	list[2].nData = 300;
	list[3].nData = 400;
	list[4].nData = 500;

	//���Ḯ��Ʈ ����ȭ
	list[0].next = &list[4];
	list[1].next = &list[2]; //�� ��� list[1].next�� ������ �޾ƾ��� list[2]�� ������ �� �ް� ��µ��� ���ϰ� �ȴ�.
	list[2].next = &list[3];
	list[3].next = 0; //�ᱹ�� 0�� ������ ���� ������ �Ǿ��ִ�. ������ ���� �� �ľ��ϸ� ������ ���� ������ �� �ִ�.
	list[4].next = &list[1];

	for (int i = 0; i < 5; i++)
	{
		printf("list[% d] : %d\n", i, list[i].nData);
	}

	NODE* pHead = &list[0];

	while (pHead != NULL)
	{	
		printf("%p : %d\n", pHead, pHead->nData);
		pHead = pHead->next; //pHead�� ���꿡 �����ϴ� ���� �ƴ϶� pHead�� ���� ����Ǵ� ���̴�!!
	}

	return 0;
	//����: ���Ḯ��Ʈ ���� 5�� ¥����
}