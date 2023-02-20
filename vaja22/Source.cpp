#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

double square(int num);

int main() {
	for (int i = 1; i < 1001; i++) {
		cout << square(i) << endl;
	}
	return 0;
}

double square(int num) {
	double root = 1;
	double ort = 0;
	while (root != ort) {
		ort = root;
		root = ((num / root) + root) / 2;
	}
	return root;
}