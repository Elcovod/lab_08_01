#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int CountWhile(char* str)
{
	int count = 0;
	char* pos = str;
	while ((pos = strstr(pos, "while")) != nullptr)
	{
		count++;
		pos += 5;
	}
	return count;
}

char* Change(char* s)
{
	char* tmp = new char[strlen(s) + 1];
	char* p;
	int pos1 = 0;
	int pos2 = 0;
	tmp[0] = '\0';

	while ((p = strstr(s + pos1, "while")) != nullptr)
	{
		pos2 = p - s;
		strncat(tmp, s + pos1, pos2 - pos1);
		strcat(tmp, "***");
		pos1 = pos2 + 5;
	}
	strcat(tmp, s + pos1);
	return tmp;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	int count = CountWhile(str);
	cout << "Number of 'while' in string: " << count << endl;

	char* dest = nullptr;

	if (count > 0)
	{
		dest = Change(str);
		cout << "Modified string: " << dest << endl;
	}
	else
	{
		cout << "No 'while' found in the string." << endl;
	}

	if (dest != nullptr)
		delete[] dest;

	return 0;
}