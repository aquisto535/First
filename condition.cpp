#include<stdio.h>

int main() {
	int shortcut;

	printf(" ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &shortcut);

	shortcut = shortcut % 2;


	switch (shortcut)
	{
	case 0:
		printf("¦���Դϴ�");
		break;
	

	
	default:
		printf("Ȧ���Դϴ�\n.");
		break;
	}

	

	

	
}