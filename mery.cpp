//practical 6
#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    int numbers[20];     
    int odd[20], even[20]; 
    int oddCount = 0, evenCount = 0;

    srand(time(0));

    for (int i = 0; i < 20; i++) {
        numbers[i] = (rand() % 100) + 1;

        if (numbers[i] % 2 == 0) {
            even[evenCount] = numbers[i];
            evenCount++;
        } else {
            odd[oddCount] = numbers[i];
            oddCount++;
        }
    }

    cout << "Original Array:\n";
    for (int i = 0; i < 20; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\n\nEven Numbers:\n";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }

    cout << "\n\nOdd Numbers:\n";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}
