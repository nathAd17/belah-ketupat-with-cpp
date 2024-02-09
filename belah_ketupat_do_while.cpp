#include <iostream>
using namespace std;

int main() {
	
	int x, j, b,d, e, f;
	

	x = 1;
	do {
		// bentuk spasi dismping sgitiga
		j = 7;
		do {
			cout << " ";
			j--;
		} while (j > x);
		
		// bentuk bintang
		b = 1;
		do {
			cout<<"*";
			b++;
		} while (b <= (2 * x - 1));
		
		cout << endl;
		x++;
	} while (x < 6);
	
	d=1;
	do {
		cout<<" ";
		// bentuk spasi dismping sgitiga
		e = 1;
		do {
			cout << " ";
			e++;
		} while (e <= d);
		
		// bentuk bintang
		f = 5;
		do {
			cout << "*";
			f--;
		} while (f >= (2 * d - 5));
		
		cout << endl;
		d++;
	} while (d <= 5);
	
	return 0;
}
