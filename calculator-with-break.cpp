#include <iostream>
using namespace std;
int number(int i, string math);
int calculate(int ans_a, int ans_b, string math);
int main() 
{
    int total = 0, num = 0, a = 0, position = 1;
    string math;
    while(a < 1)
    {
        cout << "請輸入數字:";
        cin >> math;
        int i = 0;
        while(math[i] != 0)
        {
            i++;
        }
        for(int j = i - 1; j >= 0 ; j--)
        {
            total += ((int)math[j] - '0') * position;
            position *= 10;
        }
        a++;
    }
    while(true)
    {
        cout << "請輸入運算符號和數字:";
        cin >> math;
        int i = 0;
        while(math[i] != 0)
        {
            i++;
        }
        if((int)math[0] == '=')
        {
            break;
        }
        num = number(i, math);
        total = calculate(total, num, math);
    }
    cout << "總合為:" << total;
}
int number(int i, string math)
{
    int sum = 0;
    int position = 1;
    for(int j = i - 1; j > 0 ; j--)
    {
        sum += ((int)math[j] - '0') * position;
        position *= 10;
    }
    return sum;    
}
int calculate(int ans_a, int ans_b, string math)
{
    int total = 0;
    if(math[0] == '+')
    {
        total = ans_a + ans_b;
    }
    if(math[0] == '-')
    {
        total = ans_a - ans_b;
    }    
    if(math[0] == '*')
    {
        total = ans_a * ans_b;
    }    
    if(math[0] == '/')
    {
        total = ans_a / ans_b;
    }
    return total; 
}
