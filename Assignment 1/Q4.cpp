// Program to Access Array Elements Using Pointer

#include <iostream>

using namespace std;
int main()
{
    int arr[10];
    cout << "Enter Elements :-\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "Entered Elements :-\n";
    for (int i = 0; i < 10; ++i)
        cout << "\n"
             << (*(arr + i));

    return 0;
}