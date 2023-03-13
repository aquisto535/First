#include <stdio.h>
#include<string.h> //strcpy 사용할 때 필요.
#include<malloc.h> //malloc 사용할 때 필요.

typedef struct NODE
{	
	char szData[64];
	struct NODE* next;

}NODE;

NODE* g_pHead = NULL;

//연결리스트 전체 출력을 해주는 함수
void PrintList()
{	
	NODE* pHead = g_pHead;
	
	//while (g_pHead != NULL)
	//{
	//	//printf("[%p] %s, next[%p]\n", g_pHead, g_pHead->szData, g_pHead->next );
	//	//g_pHead = g_pHead->next;//g_pHead는 항상 head를 가리켜야 하는데 이것을 억지로 변조시킴.


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
	memset(pNode, 0, sizeof(NODE)); //메모리 초기화(메모리 해제)

	strcpy_s( pNode->szData,sizeof(pNode->szData), pszData); //문자열 복제함수. 대상 자료형의 크기를 바이트 단위로 기술해야함.

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

	//List 테스트를 위한 코드
	InsertNewNode("TEST01");
	PrintList();
	InsertNewNode("TEST02");
	PrintList();
	InsertNewNode("TEST03");
	PrintList();

	return 0;
}