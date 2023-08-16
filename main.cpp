#include <iostream>
#include "header.h"
#include <math.h>
using namespace std;



int main() {
  int luachon;
  char choice;
  
  while(true){
  // clear cls

  //menu danh sách lựa chọn
  cout << "------Menu chon------\n";
  cout<< "bài 1 [1]  " ;
  cout << "  bài 2 [2]  " ;
  cout << "  bài 3 [3]  ";
  cout << "  bài 4 [4]   " << endl;

    while (true){
    //lựa chọn của bạn
    cout << "hãy nhập vào bài tập bạn muốn xem : ";
    cin >> luachon;
    if (luachon < 1 || luachon > 4)
    cout << "không có lựa chọn này, vui lòng nhập lại lựa chọn của bạn\n";
      else break;
    }
    
  

    switch(luachon){
      case 1:
          //nhập chiều dài 3 cạnh
          double a, b, c;
          int choice;
          cout << "hãy nhập vào độ dài 3 cạnh của tam giác : " << endl;
          cout << "a = ";
          cin >> a;
          cout << "b = ";
          cin >> b;
          cout << "c = ";
          cin >> c;
          cout << "[1] kiểm tra tam giác    [2] kiểm tra tam giác vuông" << endl;
          cout << "[3] kiểm tra tam giác đều   [4] diện tích tam giác" << endl;
          cout << "nhập vào chức năng bạn muốn sử dụng : ";
          cin >> choice;
          menuBai1(choice, a, b, c);
      break;
          
      case 2:
          int p;
        cout << "nhập vào 1 số nguyên bất kì : ";
        cin >> p;
        if(tongUoc(p) == p){
          cout << p << " là số hoàn hảo\n";
        }
        else {
          cout << p << " không phải là số hoàn hảo" << endl;
        }
      break;
      
      case 3:
        int e;
        cout << "hãy nhập số nguyên bất kì : ";
        cin >> e;
        cout << "Tổng các số nguyên tố nhỏ hơn nó là : " << sumOfprime(e) << endl;
        break;
      
      case 4:
        //tạo mảng 1 chiều và số nguyên n
        int arr[1000], n;
        
        cout << "nhập vào số phần tử có trong mảng 1 chiều : ";
        cin >> n;
        cout << endl;
  
        //nhập vào phần tử trong mảng
        for(int i = 0; i < n; i++){
          cout << "giá trị phần tử thứ " << i+1 << " : ";
          cin >> arr[i];
          cout << endl;
        }
        
        //dùng hàm
        cout << "phần tử lớn nhất trong mảng là : " << findMax(arr, n);
        cout << endl;
        break;
  }
    
   
    
      while(true){
        
        cout << "bạn có muốn tiếp tục không ? [Y] Có\t [N] Không\n";
        cin >> choice;
      
        if(choice != 'Y' && choice != 'N'){
        cout << "không có kết quả khác, vui lòng nhập lại kết quả : \n";
        }
        else {
          break;
        }
      }
    
    if(choice == 'N'){
      break;
    }

  
  
  }
}