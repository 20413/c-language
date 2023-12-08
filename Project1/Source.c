#include <stdio.h>

void main()
{
	// main 함수는 프로그램의 진입점 역활을 수행합니다.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를
	// 정해주는 것입니다.

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 
	// 자료형의 크기는 바이트 단위로 이루어져 있습니다.

	// char  -> 1 byte 문자형
	// short -> 2 byte 정수형
	// int   -> 4 byte 정수형
	// long  -> 4 byte 정수형

	// float  -> 4 byte 실수형
	// double -> 8 byte 실수형
	// long double -> 8 ~ 16 byte 실수형

	// 자료형의 경우 자료형에 따라 저장할 수 있는 값이 종류와
	// 범위가 결정되어 있습니다.

#pragma endregion

#pragma region 변수
	// ctrl + k + c 전체 주석
	// ctrl + k + u 전체 주석 헤제

	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

	// ; : 하나의 문장을 끝내는 기호입니다.
	int data = 100;

	// 변수의 메모리공간은 프로그램이 실행될 때마다 바뀌며, 여러 개의
	// 변수가 있을 때 서로 고유의 메모리 공간을 가지고 있습니다.

	data = 999;
	// 변수는 값이 계속 바뀔 수 있으며, 변수를 선언하고 해당하는 변수에
	// 값을 저장하려면 대입 연산자를 통해 값을 저장할 수 있습니다.



#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 5day;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex) int float;

	// 3. 변수의 경우 이미 중복된 변수의 이름을 허용하지 않지만,
	// 변수의 이름을 대문자와 소문자로 구별하여 사용할 수 있습니다.
	// ex) int hp = 100;
	// ex) int HP = 200;

	// 4. 변수의 이름으로 공백이 포함될 수 없습니다.
	// ex) int count Down;

	// 5. 변수의 이름으로 특수 기호는 "_"와 "$"만 사용할 수 있습니다.
	// ex) int count_Down = 5;
	// ex) int moeny$ = 100;
#pragma endregion

#pragma region printf() 함수
	// 일련의 데이터를 형식 문자열에 지정되어 있는
	// 형태로 출력하는 함수입니다.

	char grade = 'A';
	int attack = 45;

	// 표준 출력 함수의 경우 출력할 문자열 사이에 변수를
	// 출력하려면 서식이라는 특수한 문자를 받도록 설정해야 합니다.
	printf("Hello World~\n");

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을
	// 넣을 수 있으며, 서식 지정자의 순서는 왼쪽에서부터 시작합니다.
	printf("%c\n", grade);

	printf("%c %d\n", grade, attack);

	// "%c" : 하나의 문자를 표현하는 서식 지정자
	// "%d" : 정수를 표현하는 서식 지정자

#pragma endregion

}