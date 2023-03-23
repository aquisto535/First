#include <stdio.h>
#include<string.h> //strcpy 사용할 때 필요.
#include<malloc.h> //malloc 사용할 때 필요.

typedef struct NODE //말 그대로 자료형(type)를 정의 하는 것(define) int나 float 같은 자료형을 내가 원하는 대로 정의 할 수 있다.
{	
	char szData[64];
	struct NODE* next; // 다음 노드의 주소를 저장할 포인터. 다른 노드의 메모리 주소를 저장함.

}NODE; //맨 처음에 나오는 값. 전체 구조에서는 뒤이어 나오는 노드들이 뒤를 따라 나옴.

NODE* g_pHead = NULL; //head만을 위한 포인터 변수.동적으로 생성된 노드의 포인터가 아님. 전역변수.처음에 선언된 노드의 포인터임.

//연결리스트 전체 출력을 해주는 함수
void PrintList()
{	
	NODE* pHead = g_pHead; //다른 노드들을 대상으로 한 포인터 변수.g_pHead의 값을 이어받은 후 next값을 지정함.
	
	//while (g_pHead != NULL)
	//{
	//	printf("[%p] %s, next[%p]\n", g_pHead, g_pHead->szData, g_pHead->next );  
	//	g_pHead = g_pHead->next; //g_pHead는 항상 head노드(첫번째 노드)를 가리켜야 하는데 이것을 다음 값을 가리키는 걸로 억지로 변조시킴.
	//							 //변수를 여러번 쓰려고 하면 기존 데이터가 사라질 수 있다!!
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

	strcpy_s( pNode->szData,sizeof(pNode->szData), pszData); //문자열 복제함수. 대상 자료형의 크기를 바이트 단위로 기술해야함.여기서는 초기화용
															// 세번째 인자의 포인터가 가리키는 메모리에 저장된 문자열을 첫번째 인자가 가리키는 메모리에 복사함.

	if (g_pHead == NULL)
		g_pHead = pNode;
	else
	{
		pNode->next = g_pHead; //새로운 노드의 포인터가 기존 노드를 가리킴.기존 노드 값을 넘겨줌.
		g_pHead = pNode; // 기존 노드를 가리키던 포인터가 값을 내주고 빈 공간에 새로 만든 노드를 가리킴.
	}

	

	return 1;
}


void ReleaseList(void) //리스트 삭제 함수.
{
	NODE* pTmp = g_pHead;
		

		while (pTmp != NULL)
		{
			NODE* pDelete = pTmp;
			pTmp = pTmp->next;

			printf("DeleteL [%p] %s\n", pDelete, pDelete->szData);
			free(pDelete);
		}

/*		pTmp = pTmp->next; 

		free(pTmp);*/ //pTmp가 가리키는 영역이 해제되어 버림.


	
}

int FindData(char* pszData)
{
	NODE* pTmp = g_pHead;

	while (pTmp != NULL)
	{
		if ((pTmp->szData, pszData) == 0)
			return 1;
		pTmp = pTmp->next;
	}

	return 0;
}


int DeleteData(char* pszData)
{
	NODE* pTmp = g_pHead;
	NODE* pPrev = NULL;

	while (pTmp != NULL)
	{	
		//문자열 비교함수
		if (strcmp(pTmp->szData, pszData) == 0)
		{
			//삭제. 더미 헤드가 없으면 앞전 노드를 고민하는 코드가 들어가야함.
			printf("DeleteData(): %s\n", pTmp->szData);
			if (pPrev != NULL) 
			{
				pPrev->next = pTmp->next;
				free(pTmp);
			}	
			else
			{
				//삭제할 데이터가 첫번째 노드인 경우; pPrev가 NULL이 되어 버림.
				g_pHead = pTmp->next;
			}
			free(pTmp);
			return 1;
		}
		pPrev = pTmp;
		pTmp = pTmp->next;//종료 조건을 지정해줌.
	}

	return 0;
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

	if (FindData("TEST01") == 1)
	{
		printf("FindData() : TEST01 Found\n");
	 }

	if (FindData("TEST02") == 1)
	{
		printf("FindData() : TEST02 Found\n");
	}

	if (FindData("TEST03") == 1)
	{
		printf("FindData() : TEST03 Found\n");
	}

	DeleteData("TEST01");
	DeleteData("TEST02");
	DeleteData("TEST03");

	ReleaseList();
	return 0;
}