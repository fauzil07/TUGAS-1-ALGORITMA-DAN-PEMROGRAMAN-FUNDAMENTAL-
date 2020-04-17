#include <iostream>
using namespace std;

int main(){
int p[100],n,i,sum=0;
cout<<"Jumlah bilangan : ";
cin>>n;
for (i=0; i<n; i++)
{
cin>>p[i];
sum=sum+p[i];
}
cout<<"Hasil penjumlahan : "<<sum;
return 0;
}

