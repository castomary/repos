#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	char answer = 'y';
	do {
		// объявление переменных для второго задания
		int celoe;
		unsigned int mask = 1 << (sizeof(celoe) * 8 - 1);
		// объявление переменных для третьего задания
		static union {
			int cel;
			float vesh;
		};
		unsigned int mask3 = 1 << sizeof(vesh) * 8 - 1;
		// объявление переменных для четвертого задания
		static union {
			int arr[2];
			double vesh2;
		};

		int zn4 = 1 << sizeof(int)*8 - 1;
		int msk4 = 1 << sizeof(int) * 8 - 2;
		int mask4, znak4;
		int zamena;
		int n;
		cout << "Введите номер задания: ";
		while (!(cin >> n) || cin.get() != '\n')
		{
			cin.clear();
			cin.sync();
		}
		switch (n) {
		case 1:
			cout << "int: " << sizeof(int) << "\n" << "short int: " << sizeof(short int) << "\n";
			cout << "long int: " << sizeof(long int) << "\n" << "float: " << sizeof(float) << "\n";
			cout << "double: " << sizeof(double) << "\n" << "long double: " << sizeof(long double) << "\n";
			cout << "char: " << sizeof(char) << "\n" << "bool: " << sizeof(bool) << "\n";
			break;
		case 2:
			mask = 1 << 31;
			cout << "Ввeдите число: ";
			cin >> celoe;
			for (int i = 0; i <= sizeof(celoe) * 8 - 1; i++) {
				if (i == 1 || i % 8 == 0 && i != 0) {
					putchar(' ');
				}
				putchar(celoe & mask ? '1' : '0');
				mask = mask >> 1;
			}
			cout << "\n";
			
			break;
		case 3:
			cout << "Введите число: ";
			cin >> vesh;
			for (int i = 0; i <= sizeof(vesh) * 8 - 1; i++) {
				if (i == 1 || i == 12) {
					putchar(' ');
				}
				putchar(cel & mask3 ? '1' : '0');
				mask3 >>= 1;
			}
			cout << "\n";
			break;
		case 4:
				cout << "Введите число: "; cin >> vesh2;
				zamena = arr[0];
				arr[0] = arr[1];
				arr[1] = zamena;
				for (int i = 0; i < 2; i++) {
					znak4 = zn4;
					mask4 = msk4;
					for (int j = 0; j <= (sizeof(int) * 8 - 1); j++) {
						if (i == 0 && (j == 1 || j == 12)) {
							putchar(' ');
						}
						if ((i == 0 && j == 0) || (i == 1 && j == 0)) {
							putchar(znak4&arr[i] ? '1' : '0');
						}
						else {
							putchar(mask4&arr[i] ? '1' : '0');
							mask4 = mask4 >> 1;
						}
						
					}
				}
				break;
			default: cout << "Такого задания нет:(" << "\n";
			}
		cout << "\n";
		cout << "Повторить? (y/n)" << "\n"; 
		cin >> answer;


		} 
		while (answer != 'n');
}
















