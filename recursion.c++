//1

#include<iostream>
using namespace std;
/*int power(int n){
    if(n==0)
    return 1;
     
    return 2*power(n-1);

}
int main(){
    int n;
    cin>>n;
    int ans= power(n);
    cout<<ans;
    return  0;
}*/

//2
/*void reach(int src,int dest){
    if(src==dest){
        cout<<"reached";
        return;
    }

    src++;
    reach(src,dest);
}

int main(){
    int src=0;
    int dest=10;
    reach( src , dest);
    return  0;
}*/

int fabonacci(int n){
    if(n==0) return 0;
    if (n==1) return 1;
    cout<<n;
    return fabonacci(n-1)+fabonacci(n-2);
}

int main(){
   int n;
   cin>>n;
   int ans=fabonacci(n);
   cout<<ans;
    return  0;
}