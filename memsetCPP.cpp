//Memset:-> It will set he certain number of bytes to the given byte.

#include <iostream>
#include <string.h>

using namespace std;

int main() {
        int i = 0;
        char string1[] = "123456789";
        char an_array[99999];

        //change the first three bytes of stirng1 to "x" 
        memset (string1, 'x', 3);

        std::cout << string1 << std::endl;
}
