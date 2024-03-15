#include<iostream>
using namespace std;
int main(){
    int i,j;
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[5];
   for( i=0 ; i<3 ; i++ )
   {
    c[i] = a[i];
   }
   for( i=4 ; i>=0 ; i-- )
   {
    c[i] = b[i];
  }
   for( j=0 ; j<6 ; j++ )
  {
    cout<<c[j]<<endl;
  }

return 0;
}    