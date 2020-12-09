#include<stdio.h>
#include "Header.h"
#include<stdlib.h>
#include<locale.h>

void ErrorOpen(errno_t err) {
	setlocale(0, "ru");
	if (err == 1) {
		printf("Error\nОперация не разрешена");
		exit(0);
	}
	if (err == 2) {
		printf("Error\nОтсутствует такой файл или каталог");
		exit(0);
	}
	if (err == 3) {
		printf("Error\nОтсутствует такой процесс");
		exit(0);
	}
	if (err == 4) {
		printf("Error\nПрерванная функция");
		exit(0);
	}
	if (err == 5) {
		printf("Error\nОшибка ввода-вывода");
		exit(0);
	}
	if (err == 6) {
		printf("Error\nОтсутствует такое устройство или адрес");
		exit(0);
	}
	if (err == 7) {
		printf("Error\nСписок аргументов слишком длинный");
		exit(0);
	}
	if (err == 8) {
		printf("Error\nОшибка формата exec");
		exit(0);
	}
	if (err == 9) {
		printf("Error\nНеверный номер файла");
		exit(0);
	}
	if (err == 10) {
		printf("Error\nНет порожденных процессов");
		exit(0);
	}
	if (err == 11) {
		printf("Error\nБольше процессов нет или недостаточно памяти, или достигнут максимальный уровень вложенности");
		exit(0);
	}
	if (err == 12) {
		printf("Error\nНедостаточно памяти");
		exit(0);
	}
	if (err == 13) {
		printf("Error\nВ разрешении отказано");
		exit(0);
	}
	if (err == 14) {
		printf("Error\nНеверный адрес");
		exit(0);
	}
	if (err == 16) {
		printf("Error\nУстройство или ресурс заняты");
		exit(0);
	}
	if (err == 17) {
		printf("Error\nФайл существует");
		exit(0);
	}
	if (err == 18) {
		printf("Error\nСсылка другого устройства");
		exit(0);
	}
	if (err == 19) {
		printf("Error\nНет такого устройства");
		exit(0);
	}
	if (err == 20) {
		printf("Error\nНе является каталогом");
		exit(0);
	}
	if (err == 21) {
		printf("Error\nЯвляется каталогом");
		exit(0);
	}
	if (err == 22) {
		printf("Error\nНедопустимый аргумент");
		exit(0);
	}
	if (err == 23) {
		printf("Error\nСлишком много файлов открыто в системе");
		exit(0);
	}
	if (err == 24) {
		printf("Error\nСлишком много открытых файлов");
		exit(0);
	}
	if (err == 25) {
		printf("Error\nНеподходящая операция управления вводом-выводом");
		exit(0);
	}
	if (err == 27) {
		printf("Error\nФайл слишком велик");
		exit(0);
	}
	if (err == 28) {
		printf("Error\nНа устройстве не осталось места");
		exit(0);
	}
	if (err == 29) {
		printf("Error\nНедопустимый поиск");
		exit(0);
	}
	if (err == 30) {
		printf("Error\nФайловая система доступна только для чтения");
		exit(0);
	}
	if (err == 31) {
		printf("Error\nСлишком много ссылок");
		exit(0);
	}
	if (err == 32) {
		printf("Error\nКанал нарушен");
		exit(0);
	}
	if (err == 33) {
		printf("Error\nМатематический аргумент");
		exit(0);
	}
	if (err == 34) {
		printf("Error\nРезультат слишком большой");
		exit(0);
	}
	if (err == 36) {
		printf("Error\nМожет произойти взаимоблокировка ресурсов");
		exit(0);
	}
	if (err == 38) {
		printf("Error\nСлишком длинное имя файла");
		exit(0);
	}
	if (err == 39) {
		printf("Error\nНет доступных блокировок");
		exit(0);
	}
	if (err == 40) {
		printf("Error\nФункция не поддерживается");
		exit(0);
	}
	if (err == 41) {
		printf("Error\nКаталог не пуст");
		exit(0);
	}
	if (err == 42) {
		printf("Error\nНедопустимая последовательность байтов");
		exit(0);
	}
	if (err == 80) {
		printf("Error\nСтрока была обрезана");
		exit(0);
	}
}

void ErrorFile(FILE* input) {
	setlocale(0, "ru");
	char pr;
	pr = getc(input);
	if (pr == EOF) {
		printf("Файл input.txt пуст");
		exit(0);
	}
	while (pr != EOF) {
		if (pr != 45 && !(pr >= 48 && pr <= 57) && pr != 32 && pr!=10) {
			printf("В файле input.txt найден посторониий элемент");
			exit(0);
		}
		pr = getc(input);
	}
}