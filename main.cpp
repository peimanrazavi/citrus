#include <iostream>

using namespace std;
 void bubbls(int a[]){

    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(a[j]<a[i]){
                int k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
    }
 }
int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    bubbls(a);
    for(int j=0;j<5;j++){
        cout<<a[j]<<"\n";
    }
    return 0;
}
