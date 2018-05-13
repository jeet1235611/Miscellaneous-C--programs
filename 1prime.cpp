#include <iostream>
using namespace std;
int isPrime(int n){
	int i, count = 0;
	if(n == 0 || n == 1){
		cout << "Not Prime" << endl << n << endl;
		return 0;
	}
	if(n == 2){
		cout << "Prime = Yes "<< n << endl;
		count ++;
		return 0;
	}
	for(i = 2; i < n/2; i++){
		if(n % i == 0){
			cout << "NOT prime" << endl;
			return 0;
		}
	}
	cout << i <<  endl;
	count++;
	return count;
}
int main(){
	int n;
	//cout << "Enter the value of n\n";
	//cin >> n;
	
	
	for(int i = 2; i <= isPrime(i);){
		i++;
		if(isPrime(i) == 50)
			break;

	}
	//i++;
	
	return 0;
}
