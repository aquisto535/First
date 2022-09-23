#include<stdio.h>

int main() {
	int shortcut;

	printf(" 숫자를 입력하세요: ");
	scanf_s("%d", &shortcut);

	shortcut = shortcut % 2;


	switch (shortcut)
	{
	case 0:
		printf("짝수입니다");
		break;
	

	
	default:
		printf("홀수입니다\n.");
		break;
	}

	

	

	
}