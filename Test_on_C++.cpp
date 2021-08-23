#include <iostream>
#include <cstdio>
#include <cwchar>
#include <string>
int main()
{
	system("chcp 1251"); // переходим в консоли на русский язык
	system("cls");		 // очистка экрана

	std::string name{ "Золото\n" };
	printf("%s", &name);
	
	char alphabet[27]; 
		for (int i = 0; i < 26; i++) {
			alphabet[i] = i + 97; 
		}
	alphabet[26] = 0; 
		printf("%s\n", alphabet); 
		for (int i = 0; i < 26; i++) {
			alphabet[i] = i + 65; 
		}
	printf("%s", alphabet); 
}

