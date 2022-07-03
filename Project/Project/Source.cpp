#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    const int count = 10;
    int arr[count], a;


    for (int i = 0; i < count; i++)
    {
        cout<< "arr[" << i + 1 << "]" <<  ": ";
        cin >> a;
        arr[i] = a;
    }

    cout << endl;

    int max = 0;

    for (int i = 0; i < count; i++)
    {

        if (arr[i] > arr[max])
            max = i;
    }

    int tmp = arr[max];
    arr[max] = arr[1];
    arr[1] = tmp;


    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


}