#include <iostream>
#include <cstring>

using namespace std;

int CountRec(char* str, int len, int i)
{
	if (i > len - 5)
		return 0;
	if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
		return 1 + CountRec(str, len, i + 5);
	else
		return CountRec(str, len, i + 1);
}

int CountWhile(char* str)
{
	if (!str) return 0;
	int len = strlen(str);
	return CountRec(str, len, 0);
}

void ChangeRec(char* str, char* tmp, int len, int i, int j)
{
	if (str[i] == '\0')
	{
		tmp[j] = '\0';
		return;
	}
	if (i <= len - 5 && str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
	{
		tmp[j] = '*';
		tmp[j + 1] = '*';
		tmp[j + 2] = '*';
		ChangeRec(str, tmp, len, i + 5, j + 3);
	}
	else
	{
		tmp[j] = str[i];
		ChangeRec(str, tmp, len, i + 1, j + 1);
	}
}

char* Change(char* str)
{
	int len = strlen(str);
	char* tmp = new char[len + 1];
	ChangeRec(str, tmp, len, 0, 0);
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