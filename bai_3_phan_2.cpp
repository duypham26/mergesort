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
    int a[5] = {1,2,4,-22,5};
    cout <<tim_min(a,0,4);
}
/*
giai thich:
cho mảng a gồm n phần tử, ta sẽ chia mảng thành 2 nửa trái và phải
sau đó ta sẽ tiếp tục chia 2 nửa này thành các nửa nhỏ hơn
với mảng a[5] = {1,2,4,-22,5}
ta sẽ chia thành 2 nửa [1,2,4] và [-22,5]
tiếp tục chia [1,2] và [4], [-22] và [5]
tiếp tục chia [1] và [2], [4], [-22], [5]
khi mảng chỉ còn 1 phần tử thì so sánh với nhau, trả về phần tử nhỏ hơn
với [1] và [2] trả về 1, với [4] trả về 4, với [-22] trả về -22, với [5] trả về 5
tiếp tục so sánh [1] và [4] trả về 1, với [-22] và [5] trả về -22
cuối cùng so sánh 1 và -22 trả về -22
*/