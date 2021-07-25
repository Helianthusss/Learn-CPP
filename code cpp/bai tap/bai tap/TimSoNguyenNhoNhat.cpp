#include<bits/stdc++.h>
void TimSoNhoNhat(int M)
{
    int n=9;
    while(n>1&&M!=1)
    {
        while(M%n==0)
        {
            //n chính là chữ số tiếp theo từ phải sang trái nếu tồn tại số như vậy,
            // ở lần lặp thứ nhất thì n là chữ số hàng đơn vị, lần lặp tiếp theo là hàng chục và cứ như vậy...
            M/=n;
        }
        n--;   
    }
    if(M==1)
    {
        //hiển thị số K
    }
    else
    {
        //thông báo không tìm được số K thỏa mãn
    }
}