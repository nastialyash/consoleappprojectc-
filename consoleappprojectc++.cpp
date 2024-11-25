

#include <iostream>
using std::cout;
using std::string;
using std::endl;
using std::cin;


int main()
{



	string str, replace, newstr2;
	cout << "Enter bstring ";
	cin >> str;
	cout << "Enter substring to replace : ";
	cin >> replace;
	cout << "Enter new substring : ";
	cin >> newstr2;
	int strlength = str.length();
	int replacelength = replace.length();
	string result;

	for (int i = 0; i < strlength; i++)
	{
		int count = 0;
		for (int j = 0; j < replacelength&&(i+j); j++)
		{
			if (str[i + j] == replace[j]) {
				++count;
			}
			else {
				break;
			}
		}
		if (count == replacelength) {
			result += newstr2;
			i += replacelength - 1;

		}
		else {
			result += str[i];
		}
	}
	cout << "Result : " << result << endl;



	string str3;
	char  ch;
	int count = 0;
	cout << "Enter string : ";
	cin >> str3;
	cout << "Enter symbol : ";
	cin >> ch;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch) {
			++count;
		}
	}
	cout << "Symbol : " << ch << "in" << count << endl;


	string str4;
	cout << "enter string : ";
	cin >> str4;
	int length = str4.length();
	for (int i = 0; i < length/2; i++)
	{
		char temp = str4[i];
		str4[i] = str4[length - 1 - i];
		str4[length - 1 - i] = temp;

	}
	cout << "New string reverse : " << str << endl;


	string str5;
	char ch;
	cout << "Enter string : ";
	cin >> str5;
	cout << "enter symbol for delete : ";
	cin >> ch;
	string result;
	for (int i = 0; i < str.length(); i++)
	{
		if (str5[i] != ch) {
			result += str5[i];
		}
	}
	cout << "String after delete : " << ch << " : " << result << endl;


	string str6;
	char ch;
	cout << "Enter string : ";
	cin >> str6;
	cout << "enter symbol for delete : ";
	cin >> ch;
	string vowels = "ieoua";
	string result;
	for (int i = 0; i < str.length(); i++)
	{
		result += str[i];
		if (vowels.find(str[i])) {
			result += ch;
		}

		
	}
	cout << "Result : " << result << endl;

}

