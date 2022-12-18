#include <iostream>

using namespace std;

int main() {

    int num = 0; // 숫자를 입력받을 변수 선언.
    int value = 0; // 계산한 값을 받아줄 변수 선언.
    int val = 0;
    char a; // 연산자를 받을 변수 선언.

    cin >> num; // 첫번째 숫자 입력받기.
    value = num; // 반복문에 들어가기 전 첫번째 값을 담아두기.
    val = num; // n을 눌렀을 때 초기값을 예비로 담아놓는 변수.
    
    char yn;
    int i = 0;
    while (i<100)
    {
        cin >> a;
        if (a == '=')
        {
            cout << value << endl;
            cout << "Close? y or n" << endl;
            cin >> yn;
            if (yn == 'y') 
                break;     // y를 눌렀을 때 프로그램 종료
            if (yn == 'n') 
                value = val;// n을 눌렀을 때 value의 값을 새로 초기화.
                i = 0;
          
         
        }
            

        cin >> num;
        if (a == '+')
            value += num;
        else if (a == '-')
            value -= num;
        else if (a == '*')
            value *= num;
        else if (a == '/')
            value /= num;
        else if (a == '%')
            value %= num;
        i++;
    }
  


        return 0;
    }

