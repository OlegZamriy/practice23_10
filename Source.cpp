#include <iostream>



using namespace std;

 double sum_negative(double* array, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            sum += array[i];
        }
    }
    return sum;
}

 double product_between_min_max(double* array, int n) {
    double min = array[0], max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    double product = 1;
    for (int i = 0; i < n; i++) {
        if (array[i] > min && array[i] < max) {
            product *= array[i];
        }
    }
    return product;
}

 double product_even_numbers(double* array, int n) {
    double product = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            product *= array[i];
        }
    }
    return product;
}

 double sum_between_first_last_negative(double* array, int n) {
    int first_negative = -1, last_negative = -1;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            if (first_negative == -1) {
                first_negative = i;
            }
            last_negative = i;
        }
    }

    double sum = 0;
    for (int i = first_negative + 1; i < last_negative; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    double* array = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter an array element ¹" << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "The sum of negative elements: " << sum_negative(array, n) << endl;
    cout << "Product of elements between min and max elements: " << product_between_min_max(array, n) << endl;
    cout << "The product of elements with even numbers: " << product_even_numbers(array, n) << endl;
    cout << "The sum of elements between the first and last negative elements: " << sum_between_first_last_negative(array, n) << endl;

    delete[] array;

    return 0;
}
