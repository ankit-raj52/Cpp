// #include <iostream>
// using namespace std;

// int main() {
//     cout<<"ankit charlie"<<endl;
  
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int b=12;
//     if(a>b){
//         cout<<"a greater than b";
//     }
//     else{
//         cout<<" b greater than a";
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b :";
//     cin>>a>>b;
//     cout<<"value of a is"<< a << endl;
//     cout<<"value of b is"<< b << endl;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=9;
//     if(a==9){
//         cout<<"its nine"<<endl;
//     }
//     if(a>0){
//         cout<<"its positive"<<a<<endl;
//     }
//     else{
//         cout<<"its negative"<<a<<endl;
// }  

// 


#include<iostream>
using namespace std;

int main() {
	int num;
    
    // cout<<"Enter the number :";
   cin>>num;
    
   int sum=0;
	int sum1=0;
    
    while(num>0){
        
        int rem = num%10;
        
        if(rem%2!=0){
			sum=sum+rem;
		}else if(rem%2==0){
			sum1=sum1+rem;
		}
        
        
        num /= 10;
    }
    
    cout<< sum1<<" "<<sum;
	
    return 0;
	
}






