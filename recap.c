#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct NODE
{	
	char szData[64];
	struct NODE* next;
} NODE;

NODE* g_head = NULL;

int insertNode(char* pData)
{
	NODE* pNode = (int)malloc(sizeof(NODE));

}

void printList()
{	

	printf("%p, %s, %p", );

	if (g_head == NULL)
	{

	}
	else {

	}

}

int main()
{	
	insertNode("TEST01");
	printList();
	insertNode("TEST02");
	printList();
	insertNode("TEST03");
	printList();



	return 0;
}

