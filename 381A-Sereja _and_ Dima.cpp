#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }
     int sereja=0;
     int dim=0;

        while(!v.empty())
     {
         if(v.front()<v.back())
         {
             sereja+=v.back();
             v.pop_back();
         }else{
            sereja+=v.front();
            v.erase(v.begin());

         }

         if(v.empty())break;


          if(v.front()<v.back())
         {
             dim+=v.back();
             v.pop_back();
         }else{
            dim+=v.front();
            v.erase(v.begin());

         }


     }

    cout<<sereja<<" "<<dim<<endl;
}



