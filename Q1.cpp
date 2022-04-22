// Program to Calculate Average Using Arrays

#include <iostream>

using namespace std;
int main()
{
    cout << " Enter Array range : ";
    int n;
    cin >> n;
    while (n <= 0 || n > 1000)
    {
        cout << "Invalid Input\n Enter again : ";
        cin >> n;
    }
    double arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter no. : ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    double avg = sum / n;
    cout << "Average : " << avg;
    return 0;
}
