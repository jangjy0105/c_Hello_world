#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


// �Լ� ���� prototype, �Լ��� main �Լ����� �ڿ��� ���� �� �� �ʿ�
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
// -50, ffffff81 ���, 7f -> 0000 0000 0000 0000 0000 0000 0111 1111,  -7f -> 1111 1111 1111 1111 1111 1111 1000 0001 (7f�� 2�� ����) -> ffffff81

// ���� �Լ�

void gudqusghks(void) {
	float a;
	int b = 100;
	a = (float)b; // 100.000
}

void qoduf(void) {
	char a[10] = "abcd";
	int b[5] = { 1,2,3,4,5 };
	printf("%d\n", strlen(a)); // 4
	printf("%d", sizeof(b)); // int�� �Ҵ�� �޸� 32bit = 4byte, �迭 ���� 5, 4*5 = 20
}

void zhaak(void) {
	int a = 10, b = 20;
	int res;
	res = (++a, ++b);
	printf("a: %d, b:%d\n", a, b); // 11 a:11, b: 21
	printf("res: %d\n", res);  // res:21, ++a; res = ++b; �� ���ʷ� �����
}

// _Bool Ÿ�� ����, boolean ��, _Bool�� ������ ��
// #define bool _Bool, typedef _Bool bool; �� �̿��Ͽ� bool�� ����� �� ����. true false�� ����Ϸ��� �߰��� define �ؾ���.
// <stdbool.h>�� ����Ʈ�ϸ� true, false, bool ��� ��밡��

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

	printf("%x\n", a ^ 0x01); // ffffffaa 0xAA = 0b10101010, ���� ������ ��Ʈ ����
	printf("%x\n", a ^ 0xff); // ffffff54 0x54 = 0b01010100, ��� ��Ʈ ����
}

// 16���� - 2���� ��ȯ 0xC = 0b1100 �� �ܿ�� ������ ��ȯ ����
// & -> Ư�� ��Ʈ ����ũ ����(0), | -> Ư�� ��Ʈ ����ũ ��(1), ^ -> Ư�� ��Ʈ�� ���¸� ����
// <<, >> -> ����Ʈ����, ���� ����Ʈ�� *2, ������ ����Ʈ�� /2, ���ѵ� �ϵ���� ���ɿ��� ���� �������� ����

void dntjstnsdnl(void) {
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("%d\n", res);
	res = ++a * 3;
	printf("%d\n", res);
	res = a > b && a != 5; // ���迬���ڰ� �������ں��� ������� ���� -> &&�� ���� ������
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
	//printf("����� : %.1f%%", rate);
	int rate = audience * 1000 / seats;
	printf("�����: %d.%d%%", rate / 10, rate % 10);
	// �޸� �������� int���� �����ϱ⿡ �޸𸮰� ���ѵ� �Ӻ���� ���α׷��ֿ��� ���� ���Ǵ� ���
}

void answp_3(void) {
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time = (time - hour) * 60;
	min = (int)(time);
	time = (time - min) * 60;
	sec = (int)time;

	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);
}

void tjdwjr(void) {
	int score;
	printf("���� �Է��ϼ���..>>");
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
	} // case�� ���� ���� break�� ���� �� ���ǰ� ������� ���� case���� �����

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
// ����-���� ġȯ, �Ӻ���� ���α׷��ֿ��� �޸� ������ ���� ����

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
	printf("��Ģ���� �Է�(����): ");
	scanf("%d%c%d", &num1, &operand, &num2);

	if (operand == '+') res1 = num1 + num2;
	else if (operand == '-') res1 = num1 - num2;
	else if (operand == '*') res1 = num1 * num2;
	else if (operand == '/') res1 = num1 / num2;
	else {
		printf("�߸��� �Է�");
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
		static int b = 0; // �������� ��ġ�Ҵ�
		a *= 2;
		b++;
		printf("b = %d\n", b);
	}
	printf("a = %d\n", a);
}

void vhans(void) {
	int a = 1, i = 0;
	for (;;) { // ��� ���� ����
		a *= 2;
		i++;
		if (i == 3) break;
	}
	
	int b = 1;
	for (int j = 0; j < 3; j++, b*=2); // ���� for���� ����

	printf("%d %d", a, b);
}

void endhkdlfans(void) {
	int cnt = 0;
	int pw;
	do {
		printf(cnt == 0 ? "�н����� �Է�>>" : "���Է�>>");
		scanf("%d", &pw);
		cnt++;
	} while (pw != 1234);
	printf("�α��� ����!");
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
	printf("3 �̻��� ������ �Է��ϼ��� : ");
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
