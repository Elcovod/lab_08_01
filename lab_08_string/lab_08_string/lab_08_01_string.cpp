#include <iostream>
#include <string>

using namespace std;

int CountWhile(string s)
{
	int count = 0;
	size_t pos = 0;
	while ((pos = s.find("while", pos)) != string::npos)
	{
		count++;
		pos += 5;
	}
	return count;
}

string Change(string s)
{
	size_t pos = 0;
	while ((pos = s.find("while", pos)) != string::npos)
	{
		s.replace(pos, 5, "***");
		pos += 3;
	}
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);

	int count = CountWhile(str);
	cout << "Number of 'while' in string: " << count << endl;

	if (count > 0)
	{
		string dest = Change(str);
		cout << "Modified string (param): " << str << endl;
		cout << "Modified string (result): " << dest << endl;
	}
	else
	{
		cout << "No 'while' found in the string." << endl;
	}

	return 0;
}