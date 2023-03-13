#include <stdio.h>
#include<string.h> //strcpy ����� �� �ʿ�.
#include<malloc.h> //malloc ����� �� �ʿ�.

typedef struct NODE
{	
	char szData[64];
	struct NODE* next;

}NODE;

NODE* g_pHead = NULL;

//���Ḯ��Ʈ ��ü ����� ���ִ� �Լ�
void PrintList()
{	
	NODE* pHead = g_pHead;
	
	//while (g_pHead != NULL)
	//{
	//	//printf("[%p] %s, next[%p]\n", g_pHead, g_pHead->szData, g_pHead->next );
	//	//g_pHead = g_pHead->next;//g_pHead�� �׻� head�� �����Ѿ� �ϴµ� �̰��� ������ ������Ŵ.


	//}

	while (pHead != NULL)
	{
		printf("[%p] %s, next[%p]\n", pHead, pHead->szData, pHead->next );
		pHead = pHead->next;
	}
	putchar('\n');
}

int InsertNewNode(char* pszData)
{
	NODE* pNode = (NODE*)malloc(sizeof(NODE));
	memset(pNode, 0, sizeof(NODE)); //�޸� �ʱ�ȭ(�޸� ����)

	strcpy_s( pNode->szData,sizeof(pNode->szData), pszData); //���ڿ� �����Լ�. ��� �ڷ����� ũ�⸦ ����Ʈ ������ ����ؾ���.

	if (g_pHead == NULL)
		g_pHead = pNode;

	else
	{
		pNode->next = g_pHead;
		g_pHead = pNode;
	}

	

	return 1;
}

int main() 
{

	//List �׽�Ʈ�� ���� �ڵ�
	InsertNewNode("TEST01");
	PrintList();
	InsertNewNode("TEST02");
	PrintList();
	InsertNewNode("TEST03");
	PrintList();

	return 0;
}