#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n){
    // Base case
    if (n == 0){
        return 1;
    }
    // Recursive case
    return n * factorial(n-1);
}


int main() {

    cout << factorial(3) << endl;
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl;

    return 0;

}