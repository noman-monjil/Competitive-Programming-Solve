#include<bits/stdc++.h>
using namespace std;
void reversenumber(int n)
{
    //base case 247
    if(n==0) return ;
    //body
    else{
    int last_digit=n%10;
    cout<<last_digit;
    n/=10;
    reversenumber(n);
    }

}


int main()

{

reversenumber(247);


}

