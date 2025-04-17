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
{
    if (low  >= high) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2

    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid); // step 3.a
    mergeSort(mid + 1, high); // step 3.b

     // step 4
     int i = low;
     int j = mid + 1;
     int k = low;

     while (i <= mid && j <= high)
    { 
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else 
        { 
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= high) // step 4.e
    {
        B[k] = arr[j];
        j++;
        k = k + 1;
    }
    while (i <= mid) // step 4.e
    {
        B[k] = arr[i];
        i++;
        k++;
    }
}