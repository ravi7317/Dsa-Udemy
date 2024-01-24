#include <iostream>
 using namespace std;
int main() {
   
    for (int i = 1; i <= 5; ++i) {
        cout << "Number: " << i <<endl;
    }

    // Example of a while loop that prints numbers from 1 to 5
    int j = 1;
    while (j <= 5) {
        cout << "Number: " << j <<endl;
        ++j;
    }

    
    int k = 1;
    do {
        cout << "Number: " << k <<endl;
        ++k;
    } while (k <= 5);

    return 0;
}
