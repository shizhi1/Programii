#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() {
           int A[100];
           int a,b,i,j,x;
               cout<<"Vuvedi X KOETO DA BUDE PO MALKO OT 10 I PO GOLQMO OT 1 ))\n"; 
               cin>>x;
               for(i=0;i<100;i++){
               A[i]=rand()%99+1;
               }
               for(j=0,a=0,b=0;j<100;j++){
               if(A[j]%10==x){
                              b=A[a];
                              A[a]=A[j];
                              A[j]=b;
                              a++;
                              b=0;}
                              }
               for(i=0;i<100;i++){
               cout<<A[i]<<" ";}
               cout<<endl;
  system("pause");
return 0;   
    
}
