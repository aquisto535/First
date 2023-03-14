#include <stdio.h>
#include<string.h> //strcpy 사용할 때 필요.
#include<malloc.h> //malloc 사용할 때 필요.

typedef struct NODE
{	
	char szData[64];
	struct NODE* next; // 다음 노드의 주소를 저장할 포인터. 다른 노드의 메모리 주소를 저장함.

}NODE;

NODE* g_pHead = NULL;

//연결리스트 전체 출력을 해주는 함수
void PrintList()
{	
	NODE* pHead = g_pHead; //pHead가 NULL값이 되는 것을 막기 위해 선언.
	
	//while (g_pHead != NULL)
	//{
	//	printf("[%p] %s, next[%p]\n", g_pHead, g_pHead->szData, g_pHead->next );
	//	g_pHead = g_pHead->next; //g_pHead는 항상 head노드(첫번째 노드)를 가리켜야 하는데 이것을 다음 값을 가리키는 걸로 억지로 변조시키는 바람에
	//							 //while문의 조건에서 g_pHead가 NULL이 되어버림.
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
	NODE* pNode = (NODE*)malloc(sizeof(NODE)); // 프로그램이 실행 중일 때 사용자가 직접 힙 영역에 메모리를 할당할 수 있게 해줍니다
	memset(pNode, 0, sizeof(NODE)); // 메모리의 내용(값)을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수

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


//void ReleaseList(void)
//{
//	NODE* pTmp = g_pHead;
//
//	while (pTmp != NULL)
//	{
//	/*	free(pTmp); //pTmp가 가리키는 영역이 해제되어 버림.
//		pTmp = pTmp->next;*/ 
//
//
//	}
//}

int main() 
{

	//List 테스트를 위한 코드
	InsertNewNode("TEST01");
	PrintList();
	InsertNewNode("TEST02");
	PrintList();
	InsertNewNode("TEST03");
	PrintList();


	//ReleaseList();
	return 0;
}