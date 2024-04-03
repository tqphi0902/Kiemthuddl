#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int test_num1 = 2;
    cout << "Testcase 1: " << test_num1 << endl;
    if (isPrime(test_num1)) {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    } else {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    }
    cout << endl;

    int test_num2 = 13;
    cout << "Testcase 2: " << test_num2 << endl;
    if (isPrime(test_num2)) {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    } else {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    }
    cout << endl;

    int test_num3 = 9;
    cout << "Testcase 3: " << test_num3 << endl;
    if (!isPrime(test_num3)) {
        cout << "Expected: Khong la so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    } else {
        cout << "Expected: Khong la so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    }
    cout << endl;

    int test_num4 = 1;
    cout << "Testcase 4: " << test_num4 << endl;
    if (!isPrime(test_num4)) {
        cout << "Expected: Khong la so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    } else {
        cout << "Expected: Khong la so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    }
    cout << endl;

    int test_num5 = -7;
    cout << "Testcase 5: " << test_num5 << endl;
    if (!isPrime(test_num5)) {
        cout << "Expected: Khong la so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    } else {
        cout << "Expected: Khong la so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    }
    cout << endl;

    int test_num6 = 17;
    cout << "Testcase 6: " << test_num6 << endl;
    if (isPrime(test_num6)) {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    } else {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    }
    cout << endl;

    int test_num7 = 2;
    cout << "Testcase 7: " << test_num7 << endl;
    if (isPrime(test_num7)) {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: La so nguyen to" << endl;
    } else {
        cout << "Expected: La so nguyen to" << endl;
        cout << "Actual: Khong la so nguyen to" << endl;
    }
    cout << endl;

    return 0;
}
