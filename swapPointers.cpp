#include <iostream>
using namespace std;
void swap(int *a , int *b){
        int temp = *a;
        *a = *b;
        *b = temp;

}

int main() {
        int a, b;
        cout << "Enter the value of a and b " << endl;
        cin >> a >> b;

        swap(&a, &b);

        cout << "Swapped Values are: " << a << "\t" << b << endl;
}
