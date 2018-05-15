#include <iostream>
using namespace std;

int main() {
        int a, b;
        cout << "Etner the value of a and b\n";
        cin >> a >> b;

        cout << "Before swapping: " << "a = " << a <<"\t"<< "b = " << b << endl;

        int temp = a;
        a = b;
        b = temp;
        cout << "After swapping: " << "a = " << a << "\t" << "b = " << b << endl;

        return 0;
}
