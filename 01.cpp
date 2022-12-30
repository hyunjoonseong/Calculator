#include <iostream>

using namespace std;


int main()
{



    int num = 0; // 숫자를 입력받을 변수 선언.
    char a = 0; // 연산자를 받을 변수 선언.
    int value = 0; // 합을 입력받을 변수 선언.
    while (1)
    {
            cin >> num;
            value = num;
           
        while (1)
        {


            cin >> a;
            if (a != '=')
            {
                cin >> num; // 첫번째 숫자 입력받기.
            }

            if (a == '+')
            {
                value += num;
            }
            else if (a == '-')
            {
                value -= num;
            }
            else if (a == '*')
            {
                value *= num;
            }
            else if (a == '/')
            {
                value /= num;
            }
            else if (a == '%')
            {
                value %= num;
            }
            else if (a == '=')
            {
                cout << value << endl;
                cout << "Close? y or n" << endl;
                cin >> a;
                if (a == 'y'|| a == 'n')
                {
                    break;     // y를 눌렀을 때 프로그램 종료
                }
               
            }

        }
        if (a == 'y')
        {
            break;     // y를 눌렀을 때 프로그램 종료
        }
    }
    return 0;
}




