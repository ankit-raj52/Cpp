// 1. Make function that return even or odd of a number

// #include<iostream>
// using namespace std;

// bool isEven(int a){
//      if(a&1){
//         return 0;
//      }
//      return 1;
// }
// int main(){
//     int num;
//     cin>>num;
    
//     if(isEven(num)){
//         cout<<"Number is even"<<endl;
//     }
//     else{
//         cout<<"Number is odd"<<endl;
//     }
// }



// 2.Make function that return power of a number 

// #include<iostream>
// using namespace std;

// int power(int a,int b){
//     int ans=1;

//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int c,d;
//     cin>>c>>d;
//     int answer=power(c,d);
//     cout<<"answer is:"<<answer;

// }


// Make function that return nCr of a number 

#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;

    }
    return fact;
}

int nCr(int n, int r){
    int numerator=factorial(n);
    int denominator=factorial(n)*factorial(r);

    int ans=numerator/denominator;
    return ans;
}

int main(){
    int a,b;
    cin>>a >>b;
    int answer=nCr(a,b);
    cout<<"answer is:"<<answer<<endl;
    
}
