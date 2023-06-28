/*
	함수 포인터 

	선언방법
	﻿ 반환형 (*함수포인터의 이름)( 매개변수 1, ....)
	ex) void (*funcptr)(int,int)
		=>int형 매개변수 두개를 받고 반환형이 없는 함수포인터 funcptr
		매개변수가 없을때는 괄호를 비워주거나 void를 적어주면 된다.

	함수포인터를 사용하면 프로그램을 유연하게 짤 수 있다.

	typedef를 사용하여 함수포인터를 간단하게 사용할 수 있다.

	선언
	typedef 반환형 (*함수포인터의 이름)(매개변수 1, ....)
*/

#include<stdio.h>

int Add(int x, int y) { return x + y; }
int Sub(int x, int y) { return x - y; }
int Mul(int a, int b) { return a * b; } 
int Div(int a, int b) { return a / b; }

typedef int (*FC)(int, int);

int main ()
{
	char op = '\0';
	printf("연산자 입력 : ");
	scanf_s(" %c", &op, sizeof(op));

	int x = 0;
	printf("피연산자 입력 : ");
	scanf_s("%d", &x);

	int y = 0;
	printf("피연산자 입력 : ");
	scanf_s("%d", &y);

	int (*compute)(int, int) = NULL;

	switch (op)
	{
	case '+':compute = Add; break; // 함수의 이름은 함수의 주소
	case '-':compute = Sub; break; 
	}

	if (compute != NULL)
		printf("결과 : %d\n", compute(x, y));

	// 함수 포인터 배열
	int (*funcptr[4])(int, int);

	funcptr[0] = Add; 
	funcptr[1] = Sub; 
	funcptr[2] = Mul; 
	funcptr[3] = Div; 

	for (int i = 0; i < 4; i++) {
		printf("함수 포인터 배열 func[%d] 실행결과 : %d\n", i, funcptr[i](10, 5));
	}

	FC fc = NULL;
	fc = Add;
	
	printf("fc(10,20) 실행결과 : %d\n", fc(10, 20));

	return 0;
}