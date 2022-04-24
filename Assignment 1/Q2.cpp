// Program to Find Largest Element in an Array

#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << " Enter Array range : ";
    cin >> n;
    while (n <= 0 || n > 1000)
    {
        cout << " Invalid Input!!!!!! \n Enter Again : ";
        cin >> n;
    }
    double arr[n], max = 0;
    for (int i = 0; i < n; i++)
    {
        cout << " Enter no. : ";
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << " Largest Number :" << max;
    return 0;
}