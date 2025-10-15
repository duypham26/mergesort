/*
Tìm giá trị nhỏ nhất của một mảng A gồm n số nguyên sử dụng chiến lược chia để trị.
*/
#include <iostream>
using namespace std;  
int tim_min(int a[],int l, int r)
{
    if (l == r)
    return a[l];
    int m = l+(r-l)/2;
    int leftmin = tim_min(a,l,m);
    int rightmin = tim_min(a,m+1,r);
    if (leftmin < rightmin )
        {
            return leftmin;
        }
    else return rightmin;
    
    
}
int main()
{
    int a[5] = {1,2,4-22,5};
    cout <<tim_min(a,0,4);
}