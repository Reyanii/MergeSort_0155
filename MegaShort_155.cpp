#include <iostream>
using namespace std;

//create main array & temporary array
int arr[20], B[20];
// nis array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n-------------------------" << endl;
    cout << "\nInputkan Isi elemnt array" << endl;
    cout << "\n-------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// create function mergeasort
void mergeSort(int low, int high)
{}