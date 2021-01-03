

#include <iostream>
#include <string>
using namespace std;

int f1(char napis[]) {
	int wyn = 0;
	for (int i = 0; i < strlen(napis); i++) {
		if (napis[i] != napis[i]) {
			wyn = napis[i];
		}
	}
	return wyn;
}

int main()
{
	cout << "Podaj napis \n";
	char napis[20];
	cin.get(napis, 20);
	cout << f1(napis);
	return 0;
}
