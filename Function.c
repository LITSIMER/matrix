#include "Header.h"
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int Index(int i, int j, int n) {
	return(n * i + j);
}

int Cout(FILE* input) {
	char pr = getc(input);
	int cout = 0;
	while (pr != EOF) {
		if (pr != 32 && pr != 10) cout += 1;
		pr = getc(input);
	}
	return(cout);
}

int CoutStr(FILE* input) {
	char pr = getc(input);
	int cout = 0;
	while (pr != EOF) {
		if (pr == 10) cout += 1;
		pr = getc(input);
	}
	return(cout + 1);
}

int CoutColum(FILE* input, int n) {
	char pr = getc(input);
	int cout = 0;
	while (pr != EOF) {
		if (pr == 32) cout += 1;
		pr = getc(input);
	}
	return((cout / n) + 1);
}

int Read(FILE* input, int* matr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf_s(input, "%d", &matr[Index(i, j, n)]);
			printf("%d ", matr[Index(i, j, n)]);
		}
		printf("\n");
	}
	printf("\n");
	return(matr);
}

void CheckSumm(int n1, int m1, int n2, int m2, int cout1, int cout2) {
	setlocale(0, "ru");
	if ((cout1 != cout2) || (n1 != m2) || (m1 != n2)) {
		printf("Невозможно выполнить сложение/вычитание матрицы А и транспонированной матрицы B");
		exit(0);
	}
}

void CheckMult(int n1, int m1, int n2, int m2, int cout1, int cout2) {
	setlocale(0, "ru");
	if ((cout1 != cout2) || (n1 != n2) || (m1 != m2)) {
		printf("Невозможно выполнить умножение матрицы А на транспонированную матрицу В");
		exit(0);
	}
}

void CheckZnak(char z) {
	setlocale(0, "ru");
	if ((z != 43) && (z != 45) && (z != 42)) {
		printf("Операция введена не корректно");
		exit(0);
	}
}
