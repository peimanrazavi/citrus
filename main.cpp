#include <iostream>

using namespace std;
 int* bubbls(int a[]){

    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(a[j]<a[i]){
                int k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
    }
    return a;
 }
int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        cout<<"enter the numbers"<<endl;
        cin>>a[i];
    }
    int*m;
    m=bubbls(a);
    for(int j=0;j<5;j++){
        cout<<*(m+j)<<endl;
    }
    return 0;
}
