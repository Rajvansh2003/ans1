#include<iostream>
using namespace std;

int array (int arr[] ,int n){
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    
    }

    return  sum;

}



int main(){

    int arr[] ={5, 5, 10, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of the array " << array(arr, n);

return 0;
    }