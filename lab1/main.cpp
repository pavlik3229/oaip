#include <iostream>
#include <cmath>

using namespace std;

int sum_and_abs(int arr, int size, int zero_el, int&, int *);

int main() {

    int size = 0, sum = 0, count = 0;
    cout << "\n Vvedite razmer massiva: ";
    cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        cout << "Vvedite " << i + 1 << " el: ";
        cin >> array[i];
    }
    cout << endl;

    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Summa elementov: " << sum_and_abs(array, size, zero_el, &sum, count);
    delete[] array;

    return 0;
}

void sum_and_abs(const int arr[], int SIZE, int sum, int count) {
    int zero_el;
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] == 0) {
            zero_el = i;
            break;
        }
    }
    for (int i = zero_el; i < SIZE; ++i) {
        sum += arr[i];
    }
    cout << sum;
    for (int i = zero_el; i < SIZE; ++i) {
        if (arr[i] < 0) {
            count++;
        }
    }
    cout << count;
}
