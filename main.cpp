#include "calculator.h"
# include <iostream>
#include<cmath>

using namespace std;

int main(){
    CCalculator s;
 

     cout << "Im　計算機、ひとつ目の数を入れてね"<< endl;
     cin >> s.num1;
     cout <<"ふたつ目の数を入れてね"<< endl;
     cin >> s.num2;
     cout << "+、ー、＊、/かを選んでね: "<< endl;
     cin >>s.op;
    
     if(s.op == '+'){
        cout << s.add(s.num1, s.num2)<< endl;
    }  
     if(s.op == '-'){
        cout << s.sub(s.num1, s.num2)<< endl;
    }  
     if(s.op == '*'){
        cout << s.multi(s.num1, s.num2)<< endl;
    }  
     if(s.op == '/'){
        cout << s.div(s.num1, s.num2)<< endl;
    }  
  return 0;
    }
