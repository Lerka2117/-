#include <iostream>
#include <vector>

using namespace std;

unsigned long long fibonacci(int n) {
	if (n <= 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	cout << "Enter n:";
	cin >> n;

	if (n < 0) {
		cout << "ne otric\n";
		return 1;
	}
	cout << "fibonacci F(" << n << ")" << fibonacci(n) << endl;
	return 0;
}