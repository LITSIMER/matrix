#include<stdio.h>
#include "Header.h"
#include<stdlib.h>
#include<locale.h>

void ErrorOpen(errno_t err) {
	setlocale(0, "ru");
	if (err == 1) {
		printf("Error\n�������� �� ���������");
		exit(0);
	}
	if (err == 2) {
		printf("Error\n����������� ����� ���� ��� �������");
		exit(0);
	}
	if (err == 3) {
		printf("Error\n����������� ����� �������");
		exit(0);
	}
	if (err == 4) {
		printf("Error\n���������� �������");
		exit(0);
	}
	if (err == 5) {
		printf("Error\n������ �����-������");
		exit(0);
	}
	if (err == 6) {
		printf("Error\n����������� ����� ���������� ��� �����");
		exit(0);
	}
	if (err == 7) {
		printf("Error\n������ ���������� ������� �������");
		exit(0);
	}
	if (err == 8) {
		printf("Error\n������ ������� exec");
		exit(0);
	}
	if (err == 9) {
		printf("Error\n�������� ����� �����");
		exit(0);
	}
	if (err == 10) {
		printf("Error\n��� ����������� ���������");
		exit(0);
	}
	if (err == 11) {
		printf("Error\n������ ��������� ��� ��� ������������ ������, ��� ��������� ������������ ������� �����������");
		exit(0);
	}
	if (err == 12) {
		printf("Error\n������������ ������");
		exit(0);
	}
	if (err == 13) {
		printf("Error\n� ���������� ��������");
		exit(0);
	}
	if (err == 14) {
		printf("Error\n�������� �����");
		exit(0);
	}
	if (err == 16) {
		printf("Error\n���������� ��� ������ ������");
		exit(0);
	}
	if (err == 17) {
		printf("Error\n���� ����������");
		exit(0);
	}
	if (err == 18) {
		printf("Error\n������ ������� ����������");
		exit(0);
	}
	if (err == 19) {
		printf("Error\n��� ������ ����������");
		exit(0);
	}
	if (err == 20) {
		printf("Error\n�� �������� ���������");
		exit(0);
	}
	if (err == 21) {
		printf("Error\n�������� ���������");
		exit(0);
	}
	if (err == 22) {
		printf("Error\n������������ ��������");
		exit(0);
	}
	if (err == 23) {
		printf("Error\n������� ����� ������ ������� � �������");
		exit(0);
	}
	if (err == 24) {
		printf("Error\n������� ����� �������� ������");
		exit(0);
	}
	if (err == 25) {
		printf("Error\n������������ �������� ���������� ������-�������");
		exit(0);
	}
	if (err == 27) {
		printf("Error\n���� ������� �����");
		exit(0);
	}
	if (err == 28) {
		printf("Error\n�� ���������� �� �������� �����");
		exit(0);
	}
	if (err == 29) {
		printf("Error\n������������ �����");
		exit(0);
	}
	if (err == 30) {
		printf("Error\n�������� ������� �������� ������ ��� ������");
		exit(0);
	}
	if (err == 31) {
		printf("Error\n������� ����� ������");
		exit(0);
	}
	if (err == 32) {
		printf("Error\n����� �������");
		exit(0);
	}
	if (err == 33) {
		printf("Error\n�������������� ��������");
		exit(0);
	}
	if (err == 34) {
		printf("Error\n��������� ������� �������");
		exit(0);
	}
	if (err == 36) {
		printf("Error\n����� ��������� ���������������� ��������");
		exit(0);
	}
	if (err == 38) {
		printf("Error\n������� ������� ��� �����");
		exit(0);
	}
	if (err == 39) {
		printf("Error\n��� ��������� ����������");
		exit(0);
	}
	if (err == 40) {
		printf("Error\n������� �� ��������������");
		exit(0);
	}
	if (err == 41) {
		printf("Error\n������� �� ����");
		exit(0);
	}
	if (err == 42) {
		printf("Error\n������������ ������������������ ������");
		exit(0);
	}
	if (err == 80) {
		printf("Error\n������ ���� ��������");
		exit(0);
	}
}

void ErrorFile(FILE* input) {
	setlocale(0, "ru");
	char pr;
	pr = getc(input);
	if (pr == EOF) {
		printf("���� input.txt ����");
		exit(0);
	}
	while (pr != EOF) {
		if (pr != 45 && !(pr >= 48 && pr <= 57) && pr != 32 && pr!=10) {
			printf("� ����� input.txt ������ ����������� �������");
			exit(0);
		}
		pr = getc(input);
	}
}