#include<iostream>
using namespace std;

int Search(int A[],int n,int key){
 for(int i=0;i<n;i++){
  if(key==A[i]) return i;
 }
 return -1;
}

int main(){
 int n,k,index;
 cout<<"Enter the number of elements: ";
 cin>>n;
 int A[n];
 cout<<"Enter elements separated by space"<<endl;
 for(int i=0;i<n;i++) cin>>A[i];
 cout<<"Enter an Element to be Searched: ";
 cin>>k;
 index=Search(A,n,k);
 cout<<"Element found at index: "<<index<<endl;
}
