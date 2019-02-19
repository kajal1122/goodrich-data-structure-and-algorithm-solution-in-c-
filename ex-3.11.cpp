#include<iostream>
using namespace std;
int maxElem(int arr[],int n)
{
    if(n == 1)
        return arr[0];
    return max(arr[n-1],maxElem(arr, n-1));
}
int main()
{
    int arr[]={1,4,45,6,-50,10,2};
    int n=7;
    cout<<maxElem(arr,n);
    return 0;
}
