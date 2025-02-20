#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


// 함수 정의 prototype, 함수를 main 함수보다 뒤에서 정의 할 시 필요
void sub();
void gudqusghks();
void qoduf();
void zhaak();
void qnf();
void qlxmdustks();
void dntjstnsdnl();
void answp_1();
void answp_2();
void answp_3();
void tjdwjr();
void tmdnlcl();
void clghks();
void answp_2_3();
void tkclrdustks();
void dhkdlfans();
void vhans();
void endhkdlfans();
void rnrneks();
void answp_3_3();
void thtn();
// printf("%d, %x", -50, -0x7f); 
// -50, ffffff81 출력, 7f -> 0000 0000 0000 0000 0000 0000 0111 1111,  -7f -> 1111 1111 1111 1111 1111 1111 1000 0001 (7f의 2의 보수) -> ffffff81

// 보조 함수

void gudqusghks(void) {
	float a;
	int b = 100;
	a = (float)b; // 100.000
}

void qoduf(void) {
	char a[10] = "abcd";
	int b[5] = { 1,2,3,4,5 };
	printf("%d\n", strlen(a)); // 4
	printf("%d", sizeof(b)); // int에 할당된 메모리 32bit = 4byte, 배열 길이 5, 4*5 = 20
}

void zhaak(void) {
	int a = 10, b = 20;
	int res;
	res = (++a, ++b);
	printf("a: %d, b:%d\n", a, b); // 11 a:11, b: 21
	printf("res: %d\n", res);  // res:21, ++a; res = ++b; 가 차례로 수행됨
}

// _Bool 타입 존재, boolean 임, _Bool이 귀찮을 때
// #define bool _Bool, typedef _Bool bool; 을 이용하여 bool로 사용할 수 있음. true false를 사용하려면 추가로 define 해야함.
// <stdbool.h>를 임포트하면 true, false, bool 모두 사용가능

#include <stdbool.h>
void qnf(void) {
	bool isState = true;
	printf("isState = %d\n", isState);
	printf("isState = %s\n", isState ? "true" : "false");
}

void qlxmdustks(void) {
	char a = 0xab; // 0b10101011
	
	printf("%x\n", a & 0b11110000); // a0 
	printf("%x\n", a & 0b00001111); // b

	printf("%x\n", a | 0b00001111); // ffffffaf
	printf("%x\n", a | 0b11110000); // fffffffb

	printf("%x\n", a ^ 0x01); // ffffffaa 0xAA = 0b10101010, 가장 마지막 비트 반전
	printf("%x\n", a ^ 0xff); // ffffff54 0x54 = 0b01010100, 모든 비트 반전
}

// 16진수 - 2진수 변환 0xC = 0b1100 을 외우고 있으면 변환 쉬움
// & -> 특정 비트 마스크 오프(0), | -> 특정 비트 마스크 온(1), ^ -> 특정 비트의 상태를 반전
// <<, >> -> 시프트연산, 왼쪽 시프트는 *2, 오른쪽 시프트는 /2, 제한된 하드웨어 성능에서 빠른 곱셈연산 가능

void dntjstnsdnl(void) {
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("%d\n", res);
	res = ++a * 3;
	printf("%d\n", res);
	res = a > b && a != 5; // 관계연산자가 논리연산자보다 운선순위가 높음 -> &&가 가장 마지막
	printf("%d\n", res);
	res = a%3 == 0;
	printf("%d\n", res);
}

void answp_1(void) {
	int res;

	res = sizeof(long) > sizeof(short) ? 0 : 1;

	printf("%s", res ? "short" : "long");
}

void answp_2(void) {
	int seats = 70;
	int audience = 65;
	//double rate = ((double)audience / (double)seats) * 100;
	//printf("입장률 : %.1f%%", rate);
	int rate = audience * 1000 / seats;
	printf("입장률: %d.%d%%", rate / 10, rate % 10);
	// 메모리 관점에서 int형이 유리하기에 메모리가 제한된 임베디드 프로그래밍에서 자주 사용되는 방식
}

void answp_3(void) {
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time = (time - hour) * 60;
	min = (int)(time);
	time = (time - min) * 60;
	sec = (int)time;

	printf("3.76시간은 %d시간 %d분 %d초입니다.", hour, min, sec);
}

void tjdwjr(void) {
	int score;
	printf("점수 입력하세요..>>");
	scanf("%d", &score);

	if (score >= 80) printf("A+");
	else if (score >= 60) printf("A");
	else if (score >= 40) printf("B+");
	else printf("B");
}

void tmdnlcl(void) {
	int rank = 2, m = 0;
	switch (rank) {
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	} // case문 실행 이후 break가 없을 시 조건과 관계없이 다음 case문이 실행됨

	printf("%d\n", m);
}

void clghks(void) {
	int num = 123;
	char a, b, c;
	a = (num / 100) + 0x30;
	b = ((num % 100) / 10) + 48;
	c = (num % 10) + '0';
	printf("%c%c%c", a, b, c);
}
// 숫자-문자 치환, 임베디드 프로그래밍에서 메모리 절약을 위해 사용됨

void answp_2_3(void) {
	int age = 25, chest = 95;
	char size;
	if (age < 20) {
		if (chest >= 95) size = 'L';
		else if (chest >= 85) size = 'M';
		else size = 'S';
	}
	else {
		if (chest >= 100) size = 'L';
		else if (chest >= 90) size = 'M';
		else chest = 'S';
	}
	printf("%c", size);
}

void tkclrdustks(void) {
	int num1, num2, res1, res2;
	char operand;
	printf("사칙연산 입력(정수): ");
	scanf("%d%c%d", &num1, &operand, &num2);

	if (operand == '+') res1 = num1 + num2;
	else if (operand == '-') res1 = num1 - num2;
	else if (operand == '*') res1 = num1 * num2;
	else if (operand == '/') res1 = num1 / num2;
	else {
		printf("잘못된 입력");
		return NULL;
	}

	res2 = (operand == '+') ? (num1 + num2) :
		(operand == '-') ? (num1 - num2) :
		(operand == '*') ? (num1 * num2) :
		(operand == '/') ? (num1 / num2) : 0;

	printf("%d%c%d = %d\n", num1, operand, num2, res1);
	printf("%d%c%d = %d", num1, operand, num2, res2);
}

void dhkdlfans(void) {
	int a = 1;

	while (a < 10) {
		static int b = 0; // 영구적인 위치할당
		a *= 2;
		b++;
		printf("b = %d\n", b);
	}
	printf("a = %d\n", a);
}

void vhans(void) {
	int a = 1, i = 0;
	for (;;) { // 모두 생략 가능
		a *= 2;
		i++;
		if (i == 3) break;
	}
	
	int b = 1;
	for (int j = 0; j < 3; j++, b*=2); // 위의 for문과 동일

	printf("%d %d", a, b);
}

void endhkdlfans(void) {
	int cnt = 0;
	int pw;
	do {
		printf(cnt == 0 ? "패스워드 입력>>" : "재입력>>");
		scanf("%d", &pw);
		cnt++;
	} while (pw != 1234);
	printf("로그인 성공!");
}

void rnrneks(void) {
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) printf("%d*%d = %d ", i, j, i * j);
		printf("\n");
	}
}

void answp_3_3(void) {
	int n = 4;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == j || i + j == n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

void thtn(void) {
	int n, i, j;
	int cnt = 0;
	printf("3 이상의 정수를 입력하세요 : ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (i==j) {
			printf("%5d", i);
			if (++cnt % 5 == 0) printf("\n");
		}
	}
}

void main(void) {
	thtn();
}


void sub() {
	printf("Hello world");
} 
