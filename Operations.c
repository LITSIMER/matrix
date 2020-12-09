#include "Header.h"
#include<stdio.h>
#include<malloc.h>



void Summ(int* matr1, int* matr2, int n1, int m1, int n2, int m2, int cout1, int cout2) {
	CheckSumm(n1, m1, n2, m2, cout1, cout2);
	int* c, *b;
	b = (int*)malloc(n1 * m1 * sizeof(int));
	c = (int*)malloc(n1 * m1 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			b[Index(i, j, n1)] = matr2[Index(j, i, n2)];
			printf("%d ", b[Index(i, j, n1)]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			c[Index(i, j, n1)] = matr1[Index(i, j, n1)] + b[Index(i, j, n1)];
			printf("%d ", c[Index(i, j, n1)]);
		}
		printf("\n");
	}
	free(c);
}


void Sub(int* matr1, int* matr2, int n1, int m1, int n2, int m2, int cout1, int cout2) {
	CheckSumm(n1, m1, n2, m2, cout1, cout2);
	int* c;
	c = (int*)malloc(n1 * m1 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			c[Index(i, j, n1)] = matr1[Index(i, j, n1)] - matr2[Index(j, i, n2)];
			printf("%d ", c[Index(i, j, n1)]);
		}
		printf("\n");
	}
	free(c);
}


void Mult(int* matr1, int* matr2, int n1, int m1, int n2, int m2, int cout1, int cout2) {
	CheckMult(n1, m1, n2, m2, cout1, cout2);
	int* c;
	int coutstr = 0, b = 0, i = 0;
	c = (int*)malloc(n1 * m1 * sizeof(int));
	for (int k = 0; k < n1; k++) {
		for (int l = 0; l < n2; l++) {
			for (int j = 0; j < m1; j++) {
				b += matr1[Index(coutstr, j, n1)] * matr2[Index(i, j, n2)];
			}
			c[Index(k, l, n1)] = b;
			b = 0;
			i++;
		}
		coutstr += 1;
		i = 0;
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			printf("%d ", c[Index(i, j, n1)]);
		}
		printf("\n");
	}
	free(c);
}