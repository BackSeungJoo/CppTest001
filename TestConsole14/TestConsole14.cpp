﻿#include <iostream>					
#include <conio.h>			

int main()
{
	// Switch / case 문
	char userInput = 0;

	printf("User Input : ");
	userInput = _getch();		// _getch() 문자 하나 입력받을 때 쓰는 함수, scanf_s에서 입력받는 것과 달리 엔터가 필요없음

	printf("%c", userInput);
	printf("\n\n");

	//scanf_s("%d", &userInput);

	switch (userInput)
	{
	case 'a':
		printf("이것은 가위 \n");
		break;

	case 'b':
		printf("이것은 바위 \n");
		break;

	case 'c':
		printf("이것은 보 \n");
		break;

	default:
		printf("처리되지 않은 예외 입력입니다. \n");
		break;
	}

	printf("아무키나 누르면 프로그램을 종료합니다. \n");
	_getch();
}