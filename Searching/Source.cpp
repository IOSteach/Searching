// Персональный шаблон проекта C++
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> int searchIndex(T array[], int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (array[i] == key)
			return i;
	return -1;
}

template <typename T> int lastSearchIndex(T array[], int length, T key, int begin = -1) {
	if (begin == -1)
		begin = length - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}

void subWord(char array[], int length, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n;

	/*int arr[10];
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";

	cout << "Введите искомое значение: ";
	cin >> n;
	cout << lastSearchIndex(arr, 10, n, 4) << endl;*/

	// Задание "Подслово"
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	cout << "Изначальный массив:\n";
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;
	
	char mySym;
	cout << "Введите символ: ";
	cin >> mySym;
	cout << "Подслово:\n";
	subWord(word, 8, mySym);
	cout << endl;

	return 0;
}

void subWord(char array[], int length, char sym) {
	int symIndex = searchIndex(array, length, sym);
	if (symIndex == -1)
		cout << "ERROR";
	else
		for (int i = symIndex; i < length; i++)
			cout << array[i];
}