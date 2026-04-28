#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main() {

    // =========================
    // 1. std::array (best modern array)
    // =========================
    array<int, 5> arr;

    // fill all elements with same value
    arr.fill(10);

    cout << "std::array after fill:" << endl;
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // assign using index
    arr[0] = 100;
    arr[1] = 200;

    cout << "arr[0]: " << arr[0] << endl;

    // safe access
    cout << "arr.at(1): " << arr.at(1) << endl;

    // front and back
    cout << "front(): " << arr.front() << endl;
    cout << "back(): " << arr.back() << endl;

    // size
    cout << "size(): " << arr.size() << endl;

    cout << endl;


    // =========================
    // 2. C-style array
    // =========================
    int ids[5];

    iota(begin(ids), end(ids), 1);

    cout << "C-style array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << ids[i] << " ";
    }
    cout << endl;

    cout << "ids[2]: " << ids[2] << endl;
    cout << "front: " << ids[0] << endl;
    cout << "back: " << ids[4] << endl;

    cout << endl;


    // =========================
    // 3. Dynamic array (new)
    // =========================
    int* ptr = new int[5];

    // assign values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    cout << "Dynamic array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    cout << "ptr[0]: " << ptr[0] << endl;
    cout << "ptr[4]: " << ptr[4] << endl;

    delete[] ptr;


    // =========================
    // 4. sum example (std::array)
    // =========================
    int sum = 0;
    for (auto x : arr) {
        sum += x;
    }

    cout << "\nSum of std::array: " << sum << endl;

    return 0;
}