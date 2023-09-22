#include<stdio.h>			// stdio.h 파일의 내용을 프로그램 안에 복사

/*
 
 // 아래와 같은 실행 결과가 나오도록 하시오

 변수 a의 값 : 10
 변수 b의 값 : 10
 변수 c의 값 : 30
 변수 da의 값 : 3.5
 변수 ch의 값 : A
 
*/

int main(void)
{
	int a = 10;
	int b = 10;
	int c = 30;
	double da = 3.5;
	char ch = 'A';

	printf("변수 a의 값 : %d\n", a);		
	printf("변수 b의 값 : %d\n",b);	
	printf("변수 c의 값 : %d\n", c);	
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n",ch);
	
	return 0;
}