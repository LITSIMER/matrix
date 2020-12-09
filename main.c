#include "Header.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void main() {
	FILE* input1, * input2;
	errno_t err = fopen_s(&input1, "C:\\Users\\DNS\\OneDrive\\Рабочий стол\\input.txt", "r");
	ErrorOpen(err);
	err = fopen_s(&input2, "C:\\Users\\DNS\\OneDrive\\Рабочий стол\\output.txt", "r");
	ErrorOpen(err);
	ErrorFile(input1);
	ErrorFile(input2);
	rewind(input1);
	rewind(input2);
	int* matr1, * matr2;
	int cout1, cout2, n1, m1, n2, m2;
	cout1 = Cout(input1);
	cout2 = Cout(input2);
	rewind(input1);
	rewind(input2);
	n1 = CoutStr(input1);
	rewind(input1);
	m1 = CoutColum(input1, n1);
	rewind(input1);
	n2 = CoutStr(input2);
	rewind(input2);
	m2 = CoutColum(input2, n2);
	rewind(input2);
	matr1 = (int*)malloc(n1 * m1 * sizeof(int));
	matr2 = (int*)malloc(n2 * m2 * sizeof(int));
	Read(input1, matr1, n1, m1);
	Read(input2, matr2, n2, m2);
	printf("Введите операцию: ");
	char znak;
	scanf_s("%c", &znak);
	CheckZnak(znak);
	if (znak == 42) Mult(matr1, matr2, n1, m1, n2, m2, cout1, cout2);
	if (znak == 43) Summ(matr1, matr2, n1, m1, n2, m2, cout1, cout2);
	if (znak == 45) Sub(matr1, matr2, n1, m1, n2, m2, cout1, cout2);
	free(matr1);
	free(matr2);
	err = fclose(input1);
	ErrorOpen(err);
	err = fclose(input2);
	ErrorOpen(err);
}