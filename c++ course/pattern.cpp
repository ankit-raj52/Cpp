#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=0;
    
    while(i<n){
        
        int j=1;
        while(j<=n){
            cout<<"a ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }    
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//              j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
           
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//              j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
           
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;         
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"#"<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
        

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<count<<" ";
//             count=count+1;
//             col=col+1;

//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;

//     while(row<=n){
//         int col=1;
//         int value=row;
//         while(col<=row){
//             cout<<value;
//             value=value+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;
//     int i=1;
//     while(i <= n){
//         int j=1;
//         while(j <= i){
//             cout<<i-j+1<<" ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;
//     int row=1;
//     while(row <= n){
//         int col=1;
//         while(col <= n){
//             char ch ='A'+ row -1;
//             cout<< ch <<" ";
//             col=col+1;;

//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;
//     int row=1;
//     while(row <= n){
//         int col=1;
//         while(col <= n){
//             char ch ='A'+ col -1;
//             cout<< ch <<" ";
//             col=col+1;;

//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char value='A';
    
//     while(i<=n){
//         int j=1;
//         while(j<=n){
            
//             cout<<value<<" ";
//             value=value+1;
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch='A'+row+col-2;
//             cout<<ch<<" ";
//             col=col+1;

//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch='A'+row-1;
//             cout<<ch<<"   ";
//             col=col+1;

//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

//NOT DONE 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char value='A';
//             cout<<value<<"   ";
//             value=value+1;
//             col=col+1; 


//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch=('A'+row+col-2);
//             cout<<ch<<"   ";
            
//             col=col+1; 

//         }
//         cout<<endl;
//         row=row+1;

//}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n-row+1){
        
//             cout<<"*";
//             col=col+1;
            
            
//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

// post-pre increment/decrement
// #include<iostream>
// using namespace std;
// int main(){
//     int i=10;

//     cout<< i++ <<endl;
//     cout<< ++i <<endl;
//     cout<< i-- <<endl;
//     cout<< --i <<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b=1;
//     a=10;
//     if(++a){
//         cout<<b;
//     }
//     else{
//         cout<<++b;
//     }
    
// }



