#include <iostream>
#include <cstring>

using namespace std;

void TrimRight(char* s)
{
	int j = strlen(s);

	while (true)
	{
		if (s[--j] == ' ')
			continue;
		break;
	}

	s[j + 1] = '\0';
}

int main()
{
	setlocale(LC_ALL, "Rus");
	char somestr[] = "abc                                                                      ";
	TrimRight(somestr);
	cout << somestr;
	return 0;
}