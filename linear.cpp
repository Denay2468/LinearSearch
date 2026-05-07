#include <iostream>
using namespace std;
int element[10];
int nLenght;
int x;
void input() {
    while (true) {  
        cout << "Enter the number of elements: ";
        cin >> nLenght;
        if (nLenght <= 10) 
        {
            break;
        }
        else {
            cout << "Please enter a number less than or equal to 10." << endl;
        }
    }
    cout << "\n==========================\n";
    cout << "Enter the elements in sorted order: \n";
    cout << "==========================\n";
    for (int i = 0; i < nLenght; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> element[i];
    }
}
void bubbleSort() {
    int pass = 1;
    do {
        for (int i = 0; i < nLenght - pass; i++) {
            if (element[i] > element[i + 1]) {
                swap(element[i], element[i + 1]);
            }
        }
        pass++;
    } while (pass < nLenght);
}
void display() {
    cout << "\n==========================\n";
    cout << "Sorted elements: \n";
    cout << "==========================\n";
    for (int i = 0; i < nLenght; i++) {
        cout << element[i] << " ";
        if (i < nLenght - 1) {
            cout << "-> ";
        }
    }
    cout << endl;
}
void linearSearch() {
    char repeat;
    do {
        cout << "\n===========================\n";
        cout << "Linear Search\n";
        cout << "===========================\n";
        cout << "Enter the element to search: ";
        cin >> x;

        bool found = false;
        for (int i = 0; i < nLenght; i++) {
            if (element[i] == x) {
                cout << "Element found at index: " << i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Element not found in the array." << endl;
        }

        cout << "Do you want to search for another element? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
}
int main() {
    input();
    bubbleSort();
    display();
    linearSearch();
    return 0;
}