#include<iostream>
#include <math.h>
using namespace std;

//bai 1 a
bool checkCanh(double a, double b, double c){
  if(a + b > c && a + c > b && c + b > a){
    return true;
  }
  else return false;
}

//bai 1 b
bool checkRt(double a, double b, double c){
  if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
    return true;
  }
  else return false;
}

// bai 1 c
bool checkEt(double a, double b, double c){
  if(a == b && b == c){
    return true;
  }
  else return false;
}

//bai 1 d
double Area(double a, double b, double c){
  double sum1 = a + b + c;
  double sum2 = b + c - a;
  double sum3 = a - b + c;
  double sum4 = a + b - c;
  return sqrt(sum1 * sum2 * sum3 * sum4)/4;
}

//bai 2
int tongUoc(int n){
  int sum = 0;
  int i = 1;
  
  while( i < n ){
    //kiểm tra ước của n
    if(n % i == 0){
      sum = sum + i;
      
      //xóa '+' trước số 1
      if(i != 1 ){
        cout << "+";
      }
      
      cout << " " << i << " ";
      i++;
    } 
      
    else {
      i++;
    }
  }
  
  if(n == sum){
     cout << "= ";
   }
  else if (n != sum){
    cout << "!= ";
   }
  
  return sum;
}


// Bai 4
int findMax(int *arr, int n){
  int max = arr[0];
  for(int i = 0; i < n; i++){
    if(max < arr[i] ){
      max = arr[i];
    }
  }
  return max;
}

//bai 3
bool isPrime(int e){
  if(e <= 0){
    return false;
  }
  for(int i = 2 ; i < e ; i++){
    if(e % i == 0){
      return  false;
    } 
  }
  return true;
}

//bai3.2
int sumOfprime(int n){
  int sum = 0;
  
  for(int i = 2 ; i <= n ; i++){
    
    if(isPrime(i)){
      if(i != 2){
        cout << "+ ";
      } 
      cout << i << " ";
      sum = sum + i;
    }
    
  } 
  cout << "= ";
  
  return sum;
}

//menu bai 1
void menuBai1(int choice, double a, double b, double c){
  switch(choice){
    
    case 1:
      if(checkCanh(a, b, c)){
      cout << "- Độ dài 3 cạnh trên là độ dài 1 tam giác\n";
      }
      else {
      cout <<"- Độ dài 3 cạnh trên không phải là độ dài 1 tam giác\n";
      }
      break;
    
    case 2:
         switch(checkCanh(a, b, c)){
           
          case true:
            if(checkRt(a, b, c)) {
            cout << "- Đây là 1 tam giác vuông\n";
            }        
            else {
            cout << "- Đây không phải 1 tam giác vuông\n";
            }
            break;
           
          case false:
             cout << "rất tiếc ,độ dài cạnh không hợp lệ\n";
            }
            break;
    
    
    case 3:
        switch(checkCanh(a, b, c)){
          
          case true:
            if(checkEt(a, b, c)){
            cout << "- Đây là 1 tam giác đều\n";
            }
            else {
            cout <<  "- Đây không phải là 1 tam giác đều\n";
            }
            break;

          case false:
            cout << "rất tiếc ,độ dài cạnh không hợp lệ\n";
            }
            break;
    
    case 4:
         switch(checkCanh(a, b, c)){
           
           case true:
           cout << "- Diện tích tam giác là : " << Area(a, b, c) << endl;
           break;
           case false:
           cout << "rất tiếc ,độ dài cạnh không hợp lệ\n";
           break;
         }
  }
}