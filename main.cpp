#include <iostream>

int LinearSearch(int value, const int *array) {
    for (int i = 0; i < 10; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[10] = {1,4,5,2,3,7,8,1,0,12};
    int searchNumber;
    std :: cout << "enter number: ";
    std :: cin >> searchNumber;
    int result = LinearSearch(searchNumber, numbers);

    std :: cout << result << std :: endl;
    return 0;
}
