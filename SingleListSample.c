#include <stdio.h>

typedef struct NODE
{	
	//관리될 데이터
	int nData;

	//데이터관리를 위한 포인터
	struct NODE* next;
} NODE;// 재정의

int main()
{	
	NODE list[5] = {0};

	//값 초기화
	list[0].nData = 100;
	list[1].nData = 200;
	list[2].nData = 300;
	list[3].nData = 400;
	list[4].nData = 500;

	//연결리스트 구조화
	list[0].next = &list[4];
	list[1].next = &list[2]; //이 경우 list[1].next에 지명을 받아야할 list[2]이 지명을 못 받고 출력되지 못하게 된다.
	list[2].next = &list[3];
	list[3].next = 0; //결국에 0이 나오는 곳에 끝나게 되어있다. 끝나는 곳을 잘 파악하면 구조를 쉽게 이해할 수 있다.
	list[4].next = &list[1];

	for (int i = 0; i < 5; i++)
	{
		printf("list[% d] : %d\n", i, list[i].nData);
	}

	NODE* pHead = &list[0];

	while (pHead != NULL)
	{	
		printf("%p : %d\n", pHead, pHead->nData);
		pHead = pHead->next; //pHead가 연산에 참여하는 것이 아니라 pHead의 값이 연산되는 것이다!!
	}

	return 0;
	//숙제: 연결리스트 구조 5개 짜보기
}