#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter 5 numbers: ";
    for(int i=0; i<5; i++)
        cin >> arr[i];
    for(int i=0;i<5;i++)
    {
    for(int j=0;j<5-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
        swap(arr[j+1],arr[j]);
        }
    }
    }
    cout << "Reversed array: ";
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
    return 0;
}
