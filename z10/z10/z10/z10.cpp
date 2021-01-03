

#include <iostream>
using namespace std;

int minParzysta(int tablica[], int rozmiar) {
	int small = tablica[0];
	int min = 0;
	for (int i = 0; i < rozmiar; i++) {
		if (tablica[i] % 2 == 0 && tablica[i] < small) {
			if (tablica[i] < small) {
				small = tablica[i];
				min = i;
			}
		}
	}
	tablica[small] = min;
	return small;
}

int main()
{
	const int rozmiar = 10;
	int tablica[10] = {1,2,3,4,5,6,7,8,9,1};
	//for (int i = 0; i < rozmiar; i++) {
		//tablica[i] = rand() % rozmiar;
		//cout << tablica[i];
	//}

	cout << "\n";
	cout << minParzysta(tablica, rozmiar);
	return 0;
}
