#include <iostream>
using namespace std;

int main() {
        string s1, s2;
        cout << "Enter the two strings\n";
        cin >> s1 >> s2;

        string s3 = s1;
        s1 = s2;
        s2 = s3;
        cout << s1 << " " << s2 << endl;
}
