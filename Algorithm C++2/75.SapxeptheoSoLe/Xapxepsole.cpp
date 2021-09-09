#include <iostream>
#include <time.h>
using namespace std;
void nhapMang(int n,int A[]){
    srand(unsigned(time(NULL)));
    for (int i = 0; i < n; i++){
        A[i] = rand()%100-rand()%100;
    }
}
void xuatMang(int n,int A[]){
    for (int i = 0; i < n; i++){
        cout<<"A["<<i<<"]="<<A[i]<<endl;
    }
}
void xapXepTang(int n,int A[]){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (A[i]<A[j] && A[i]%2!=0 && A[j]%2!=0){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

}
int main(){
    int n;
    cin>>n;
    int A[1000];
    if (n>0){
        nhapMang(n,A);
        xuatMang(n,A);
        cout<<"Sau xap xep: "<<endl;
        xapXepTang(n,A);
        xuatMang(n,A);
        
    }
    return 0;
}