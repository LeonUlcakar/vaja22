#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

double square(int num, double resolution);

int main() {
	double resolution = 0.00001;
	for (int i = 1; i < 1001; i++) {
		//cout << square(i, resolution) << endl;
		printf("%.5f\n", square(i, resolution));
	}
	return 0;
}

double square(int num, double resolution) {
	double root = 1;
	double ort = 0;
	while ((root - resolution) > ort) {
		ort = root;
		root = ((num / root) + root) / 2;
	}
	return root;
}