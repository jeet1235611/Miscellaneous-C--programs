#include <iostream>
using namespace std;
int main(){
	int n, arr[100];
	cout << "Enter the value of n\n";
	cin >> n;
	int i = 0;
	while (n > 0){
		
		if(n % 2 == 0){
			arr[i++] = 0;
		}
		else{
			arr[i++] = 1;
		}
		n = n / 2;
	}

	while(i > 0){
		cout << arr[i-1] << " ";
		i = i - 1;
	}


	
}
