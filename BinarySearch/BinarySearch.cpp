#include <iostream>
using namespace std;

int n, desired, muhamad, fathur, mid;        //langkah ke 1
bool found = false;

int* fatur = new int[n];

void input() {

    while (true) {
        cout << "Enter the Number of element in the Array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray hhould have minimum 1 and maximum 20 element.\n\n ";
    }

    cout << "\n====================\n";
    cout << "Enter Array element\n";
    cout << "\n====================\n";
    for (int i = 0; i < n; i++) {
        cin >> fatur[i];
    }

}

void BinarySearch() {


    cout << "Enter the element to be searched: ";
    cin >> desired;

    muhamad = 0;         //langkah ke 2
    fathur = n - 1;     //langkah ke 3

    while (muhamad <= fathur) {
        mid = (muhamad + fathur) / 2;        //langkah ke 4


        if (fatur[mid] == desired) {          //langkah 5
            found = true;
            break;
        }
        else if (fatur[mid] < desired) {
            fathur = mid - 1;           //langkah 6

        }
        else {
            muhamad = mid + 1;           //langkah 7
        }
    }
   

    if (found) {
    cout << "Element found at index " << mid << endl;
    }
    else {
    cout << "Element not found" << endl;    //langkah 9
    }

}

int main()
{
    input();
    BinarySearch();
    delete[] fatur;
}
