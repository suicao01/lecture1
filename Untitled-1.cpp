#include <iostream>

using namespace std;

// int computeGCD(int a,int b) {
//     if (b==0){
//         return a;
//     }
//     else return computeGCD(b,a%b);
// }

// int main(){
// int a,b;
// cin>>a>>b;
// cout<<computeGCD(a,b);
// }

// void sort(int a[], int n){
//     for (int i=0;i<n;i++){
//     for (int j=i+1;j<n;j++){
//         if (a[i]>a[j]){
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//     }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[100];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,n);
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
// int min=n,max=0;
//     for (int i=1;i<5;i++){
        
//         cin>>n;
      
//         if (max<n){
//             max=n;
//         }
//         if (min>n){
//             min=n;
//         }
//     }
// cout<<min<<" "<<max;
// }

int main(){
    string s;
    getline(cin,s);
    for (int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
}