#include <iostream>
using namespace std;
//define MAX_100;
//int isPrime[100];

bool isPrime(int n) {
	if(n == 1)
		return false;
	if(n == 2)
		return true;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0)
			return false;

	}

	return true; 
}

int main() {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;
	bool value = isPrime(n);
	if(value)
		cout << "Yes" << endl;
	else
		cout << "NO" << endl;
}
