#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=3;
    cout<<(a<=b)<<endl;

    cout << !(a==5);

    cout<<(5)/((double)3);

    int a = 5;,
    int b = 3;

    cout << a+b <<endl;
    cout << a-b <<endl;
    cout << a*b <<endl; 
    cout << a%b <<endl;
    cout << a%b  <<endl;

    double d=5.7;
    int x =(double)d;
    cout<<"value of x is"<<x<<endl;

    char ch = 97;
    cout << ch <<endl;

    int num ='b';
    cout << num <<endl;

     long long a = 5;
     cout << sizeof(a)<<endl;

    int a = 5;
    cout << "Value of a is: "<<a<<endl;
  
     char ch = 'A';
     cout <<"value of ch is "<< ch << endl;

    bool flag = 0;
    cout<<"value of ch is :"<<flag;
    
    // cout<<"Nameste Bharat\n";
     
     cout<<"Enter a number:"<<endl;

    int a;
    //taking input
    cin>>a;
    cout<<"You entered "<<a<<endl;

    class 3
    decler a integer type variable
    int age;
    //print enter the score
    cout<<"Enter the age"<<endl;
    //take input into score variable
    cin>>age;
     
     //if condition 
     if(age >= 18){
        cout << "I can vote"<<endl;
     }

    else{
        cout<<"I cannot vote"<<endl;
    }

    int mark;
    cin>>mark;
    //nested if else
    if(mark >= 90 ){
        cout<<"A grad";
    }
    else if(mark >= 80){
        cout<<"B grad ";
    }
    else if(mark >= 60){
        cout<<"c grad";
    }
    else if(mark >=40){
        cout<<"D grad";
    }

else{
    cout<<"F grad";
// }
    int mark;
    cin>>mark;
    //nested if else
    if(mark >= 90 ){
        cout<<"A grad";
    }
    else if(mark >= 80){
        cout<<"B grad ";
    }
    else if(mark >= 60){
        cout<<"c grad";
    }
    else if(mark >=40){
        cout<<"D grad";
    }

else{
    cout<<"F grad";
}



   for(int i=0 ;i< 5;i++){
    cout<<"Ayush Atindra"<<endl;
   }
   
   for(int i=0; i<5; i++){
    cout<<i<<endl;
   }
     for(int i=5;i>0;i--){
        cout<<i<<endl;
     }
    

    for(int i=0;i<=10;i++){
        cout<<2*i<<endl;
    }
    
    for(int i=0;i<=5;i+=2){
      cout<<i<<endl;
    }

    for(int i=1;i<10;i=i*4){
        cout<< "Ayush "<<i <<endl;
    }


    for(int i=1 ;i<10 ;i++){
        cout<< i <<endl;
    }

    for(int i=100;i>0;i=i/2){
        cout<<"ayush "<<i<<endl;
    }

    for(int i=5; (i>=0 && i<=10); i++){
        cout<< i <<endl;
    }

     int i=0 ;
     for(;;) {
        if(i<10){
            cout<<i;
            i++;
        }
        
    //  }
  for(int i= 0;i<10 ;i++){
    cout << i << endl;
  }

 cout<<"Ayush"<<endl;

 Printing Solid rectangle
 for(int row=0;row<5;row++){
    for(int col=0;col<5;col++){
        cout<<"* ";
    }
    cout<<endl;
 }
 hollw rectangle
 for(int row=0;row<5;row++){
    if(row==0|| row==4){
    for(int col=0;col<5;col++){
        cout<<"*";
    }
 }
 else{
    cout<<"*";
    for(int i=0;i<3;i++){
        cout<<" ";

    }
    cout<<"*";
 }
 cout<<endl;
 }

int n;
cin>>n;


 for(int row=0;row<n;row++){
    if(row==0|| row==n-1){
    for(int col=0;col<n;col++){
        cout<<"*";
    }
 }
 else{
    cout<<"*";
    for(int i=0;i<n-2;i++){
        cout<<" ";

    }
    cout<<"*";
//  }
 cout<<endl;
 }


int n;
cin>>n;
for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
        cout<<"*";
    }
    cout<<endl;
}

int n;
cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
    cout<<endl;
}

         //using char to store the character
  
  // char ch;
  // cin >> ch;
  // cout <<" Here :" << ch << endl;
  
// using int to store the character
  // int marks;
  // cin >> marks;  
  // cout << "Marks : " << marks << endl;

  // int age = 101;
  // int car = 12;

  // if(age >= 18 && car >= 1){
  //   cout<<"Licence mil jayega"<<endl;
  // }
  // else{
  //   cout<<"Licence nhi milega"<<endl;
  // }

  // int age =12;
  // cout<< !age << endl;

    // int a = 20;
    // int b = 10;

    // cout<<(a == b) << endl;

  // int a = 3;
  // int b = 4;

  // cout << a + b << endl;
  // cout << a - b << endl;
  // cout << a * b << endl;
  // cout << a/b << endl; 
  // cout << b % a << endl;
  // cout << a % b << endl;
  // cout << a++ << endl;
  // cout << a-- << endl;
  // cout << b++ <<endl;
  // cout << b-- << endl;


  //garbage
  // int num;
  // num =12;
  // cout<<num<<endl;

  // int num =22;
  // cout<<  sizeof(num) << endl;
   //character ->1 Byte
  // char ch = 'k';
  // cout << ch << endl;
  // cout << sizeof(ch) << endl;
  // Float -> 4 byte
  // float point =1.69;
  // cout << point << endl;
  // cout << sizeof(point) << endl;

  //long -> 4 byte
  // long number =23;
  // cout << number << endl;
  // cout << sizeof(number) << endl;

  // cout << "Love " << endl <<"babbar" << '\n';
  // cout << "Love Babbar" << endl;  
  // cout << endl;
  // cout << endl;
  // cout << '\n';
  // cout << "Love Babbar";
    // int num = 7;
  // if(num%2 ==0){
  //   cout << "Even" <<endl;
    
  // }
  // else{
  //   cout << "Odd" <<endl;
  // }

  int  num = 0;
  if (num > 0){
    cout << "Positive" <<endl;
  }
  else if (num < 0){
    cout << "Negative" <<endl;
  }
  else{
    cout << "Zero" <<endl;
  }
  
  
  

}
