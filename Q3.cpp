// Program to Calculate Standard Deviation

#include <iostream>
#include <math.h>

using namespace std;
float calcSD(float data[]);
int main()
{
    float arr[10], n = 10.0;
    cout << "Enter 10 numbers :-";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    float SD = calcSD(arr);
    cout << "Standard Deviation : " << SD;
    return 0;
}
float calcSD(float data[])
{
    float sum = 0.0, mean = 0.0, SD = 0.0;
    for (int i = 0; i < 10; i++)
        sum += data[i];
    mean = sum / 10;
    for (int i = 0; i < 10; i++)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 10);
}