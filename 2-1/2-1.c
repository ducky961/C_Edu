#include<stdio.h>			// stdio.h ������ ������ ���α׷� �ȿ� ����

/*
 
 // �Ʒ��� ���� ���� ����� �������� �Ͻÿ�

 ���� a�� �� : 10
 ���� b�� �� : 10
 ���� c�� �� : 30
 ���� da�� �� : 3.5
 ���� ch�� �� : A
 
*/

int main(void)
{
	int a = 10;
	int b = 10;
	int c = 30;
	double da = 3.5;
	char ch = 'A';

	printf("���� a�� �� : %d\n", a);		
	printf("���� b�� �� : %d\n",b);	
	printf("���� c�� �� : %d\n", c);	
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n",ch);
	
	return 0;
}