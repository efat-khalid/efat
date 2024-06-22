#include <iostream>
using namespace std;

int main() {

    int numbers[] = {10, 5, 2, 3, 12, 7, 15, 6};

    int size = sizeof(numbers) / sizeof(numbers[0]);


    if (size == 0) {
        cout << "The list is empty." << endl;
        return 0;
    }


    cout << "Prime numbers in the list are: ";
    bool foundPrime = false;
    for (int i = 0; i < size; ++i) {
        int num = numbers[i];
        if (num > 1) {
            bool isPrime = true;
            for (int j = 2; j * j <= num; ++j) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << num << " ";
                foundPrime = true;
            }
        }
    }

    if (!foundPrime) {
        cout << "No prime numbers found in the list.";
    }

    cout << endl;

    return 0;
}
