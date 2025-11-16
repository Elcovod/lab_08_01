#include <iostream>
#include <cstring>

using namespace std;

int CountWhile(char* str)
{
	int count = 0;
	if (!str) return 0;

	int len = 0;
	while (str[len] != '\0')
		len++;

	for (int i = 0; i <= len - 5; i++)
		if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
		{
			count ++;
		}
	return count;
}

char* Change(char* str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	char* tmp = new char[strlen(str) + 1];
	char* t = tmp;
	int i = 0;

	while (str[i] != '\0')
	{
		if (i <= len - 5 && str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
		{
			*t++ = '*';
			*t++ = '*';
			*t++ = '*';
			i += 5;
		}
		else
		{
			*t++ = str[i++];
		}
	}
	*t = '\0';
	return tmp;
}

int main()
{
	char str[101];
	cout << "Enter string: " << endl;
	cin.getline(str, 100);

	int count = CountWhile(str);
	cout << "Number of 'while' in string: " << count << endl;

	char* dest = nullptr;
	if (count > 0) {
		dest = Change(str);
		cout << "Modified string: " << dest << endl;
	}
	else
	{
		cout << "No 'while' found in the string." << endl;
	}

	if (dest != nullptr) {
		delete[] dest;
	}
	return 0;
}