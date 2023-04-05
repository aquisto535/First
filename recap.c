#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct Node
{
	int arr[64];
	struct Node* next;


}Node;

Node* g_Head = NULL;

InsertNode(int *a)
{	
	Node* pNode = (Node*)malloc(sizeof(Node));
	memset(pNode, 0, sizeof(Node));


	if (g_Head == NULL)
		g_Head = pNode;
	else
	{
		pNode->next = g_Head; //새로운 노드의 포인터가 기존 노드를 가리킴.
		g_Head = pNode; // 기존 노드를 가리키던 포인터가 값을 내주고 빈 공간에 새로 만든 노드를 가리킴.
	}


	
}


int main()
{
	InsertNode(3);
}