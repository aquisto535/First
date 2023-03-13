#include<stdio.h>
#include<string.h>

struct student
{
	char name[10];
	int age;
	int height;
}st, *pSt;

/*int main() {
	strcpy_s(st1.name, "이창현");
	st1.age = 25;
	st1.height = 178;

	printf("이름 = %s, 나이 = %d, 키 = %d\n", st1.name, st1.age, st1.height);

	return 0;
}*/ //문자 = 10바이트, 숫자 = 4바이트 => 이 구조체의 메모리는 18바이트가 됨.

int main() {
	pSt = &st;
	strcpy_s(pSt->name, "이창현");
	pSt->age = 25;
	pSt->height = 178;

	printf("이름 = %s, 나이 = %d, 키 = %d\n", pSt->name, pSt->age, pSt->height);

	return 0;
}