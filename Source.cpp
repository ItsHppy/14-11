#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//1
	/*int sum = 0;
	const int n = 12;
	int a[12];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 11 - 5;
		cout << a[i] << ' ';
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << "sum=" << sum << endl;*/
	//2
	/*int proizv = 1;
	const int n = 13;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 25 - 12;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			proizv *= arr[i];
		}
	}
	cout << "proizvedenie=" << proizv << endl;*/
	//3
	/*int k = 0;
	const int n = 11;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 == 0) {
			k++;
		}
	}
	cout << "kolichestvo=" << k << endl;*/
	//4
	int sum = 0;
	const int n = 15;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 26;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}
	cout << "sum=" << sum << endl;
}