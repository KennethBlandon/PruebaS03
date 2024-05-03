#include<iostream>
using namespace std;

int main() {
	int c;
	int i;
	int n;
	n = 1;
	c = 0;
	for (i=1;i<=100;i++) {
		c = (n*n)+c;
		n = n+1;
	}
	cout << c << endl;
	return 0;
}

