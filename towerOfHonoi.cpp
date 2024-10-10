#include<iostream>
using namespace std;
int i = 0;
void toh(int n , int a , int b , int c){
    if(n>0){

        toh(n-1 , a , c,  b);
        cout<<"from "<<a<<" to " <<c<<endl;
        i++;
        toh(n-1 , b , a,  c);
    }
}

int main(){
toh(2 , 1 ,2 , 3);
cout<<i;
return 0;
}
