// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {

//     int n;
//     cin>> n;

//     int ans = 0;
//     int i =0;

//     while( n != 0 ) {
//         int bit = n & 1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n >> 1;
//         i++;

//     }
//     cout<<"Answer is :"<< ans <<endl;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {

//     int n;
//     cin>> n;

//     int ans = 0;
//     int i =0;

//     while( n != 0 ) {
//         int digit = n % 10;
//         if(digit == 1){
//             ans = ans + pow(2,i);
             
//         }
//         n = n / 10;
//         i++;
        
//     }
//     cout<<"Answer is :"<< ans <<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // int num = 1;
//     char ch ='1';
//     switch(ch){
//         case '1': cout<<"CHARACTER FIRST"<<endl;
//                 break;

//         case  2: cout<<"SECOND"<<endl;
//                 break;
                
//         default: cout<<"IT IS DEFAULT VALUE"<<endl;
        

//     }
    
//     cout<<endl;
     
// }

// CALCULATOR PROBLEM

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a"<<endl;
//     cin>>a;

//     cout<<"enter the value of b"<<endl;
//     cin>>b;

//     char op;
//     cout<<"enter your operation"<<endl;
//     cin>>op;
//     switch(op){
//         case '+':cout<<(a+b)<<endl;
//                  break;
//         case '-':cout<<(a-b)<<endl;
//                  break;
//         case '*':cout<<(a*b)<<endl;
//                  break;
//         case '/':cout<<(a/b)<<endl;
//                  break;
//         default:cout<<"enter a valid operation";
//     }
//     cout<<endl;
// }


// switch case homework                       NOT DONE YET

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your amount"<<endl;
//     cin>>n;

//     char op;
//     cout<<"enter your operation"<<endl;
//     cin>>op;
//     switch(op){
//         case '/':cout<<"number of 100 notes:"<<n/100<<endl;
//         case '/':cout<<"number of 50 notes:"<<n/50<<endl;
//         case '/':cout<<"number of 20 notes:"<<n/20<<endl;
//         case '/':cout<<"number of 1 notes:"<<n/1<<endl;
//     }
//     cout<<endl;
// }
