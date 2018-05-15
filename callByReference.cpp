#include <iostream>
using namespace std;
void swap(int &x, int &y){
        int temp = x;
        x =  y;
        y = temp;
}

int main() {
        int x, y;
        cout << "Enter the value of x and y: " << endl;
        cin >> x >> y;
        cout << "Before swapped values are: " << "x = " << x << "\ty = " << y << endl;

        swap(x, y);
        cout << "Swapped values are: " << "x = " << x << "\t y = " << y << endl;
        return 0;
}
