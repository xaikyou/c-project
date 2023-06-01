#include<iostream>
using namespace std;

int main(void)
{
    int a[2][3]; // 2-D array
    a[0][0] = 2; a[0][1] = 3; a[0][2] = 6; a[1][0] = 4; a[1][1] = 5; a[1][2] = 28;
    int b[] = {1,2,3,4,5}; // 1-D array

    cout << a << endl; // a or &a[0]
    cout << *a << endl; // *a or a[0] or &a[0][0] 
    cout << a[0] << endl << endl; // a[0] or &a[0][0]

    cout << b  << endl; // b or &b[0] ==> address of b[0]
    cout << *b << endl; // *b or b[0] ==> value at b[0]
    cout << b[0] << endl;
    
    cout << *(a[0] + 2) << endl; // == *(*(a+0) + 2) == *(a[0][0] + 2) == *(a[0][2])
}