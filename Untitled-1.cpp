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

// int main(){
//     string s;
//     getline(cin,s);
//     for (int i=s.length()-1;i>=0;i--){
//         cout<<s[i];
//     }
// }


// #include <iostream>

// using namespace std;

class Point{
    public:
    double x,y;
    Point(double x_,double y_){
        x=x_;
        y=y_;
    }
    Point(){
        x=0;
        y=0;
    }
    void input(){
        cin>>x>>y;
    }
};

class Line:public Point{
    public:
    double a,b,c;
Line (Point A,Point B){
    this->a=B.y-A.y;
    this->b=A.x-B.x;
    this->c=this->a*(A.x)+this->b*(A.y);
}
};

bool isSame(Point A,Point B,Point C,Point D){
    Line AB(A,B);
Line CD(C,D);
    if (AB.a==CD.a && AB.b==CD.b){
        return true;
    }
    else return false;
}

Point intersectionPoint(Point A,Point B,Point C,Point D){
Line AB(A,B);
Line CD(C,D);
Point res;
double det=AB.a*CD.b-CD.a*AB.b;

if (det==0){
    res.x=__FLT_MAX__;
    res.y=__FLT_MAX__;
}
else{
    res.x=(CD.b*AB.c-AB.b*CD.c)/det;
    res.y=(AB.a*CD.c-CD.a*AB.c)/det;

}
return res;
}

int main(){
//Point A(0,0),B(1,1),C(0,1),D(1,0);
Point A,B,C,D;
A.input();
B.input();
C.input();
D.input();
Point res=intersectionPoint(A,B,C,D);
if (isSame(A,B,C,D)){
    cout<<"MANY";
}
else if (res.x==__FLT_MAX__ && res.y==__FLT_MAX__){
    cout<<"NO";
}
else{
cout<<res.x<<" "<<res.y;}
}
