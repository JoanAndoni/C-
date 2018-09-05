//Joan Andoni González Rioz -- A0056929

#include <iostream>
#include <string>

using namespace std;

void test_palindrome(string str, int initial, int final)
{
	if (initial>final) cout << "You word is palindrome" << endl;
	else if (str[initial] == str[final]) test_palindrome(str, initial + 1, final - 1);
	else if (str[initial] != str[final]) cout << "You word isnt palindrome" << endl;
}

int main()
{
	string str;
	cout << "Give me a word : ";
	cin >> str;
	int final = str.length() - 1;
	test_palindrome(str, 0, final);
	return 0;
}