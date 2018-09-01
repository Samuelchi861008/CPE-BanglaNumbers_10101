/* **************************************************************************

    * File Name : Bangla_Numbers.cpp

    * Creation Date : 2018-08-31 10:58:59

    * Last Modified : 2018-09-01 10:52:13

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <iomanip> //setw()
#define kuti 10000000 //定義kuti為10000000
#define lakh 100000 //定義lakh為100000
#define hajar 1000 //定義hajar為1000
#define shata 100 //定義shata為100
using namespace std;

void bangla(long long n) //分析bangla numbers
{
    if(n >= kuti) //若n大於等於10000000
    {
        bangla(n / kuti);
        cout << " kuti";
        n %= kuti;
    }
    if(n >= lakh) //若n大於等於100000
    {
        bangla(n / lakh);
        cout << " lakh";
        n %= lakh;
    }
    if(n >= hajar) //若n大於等於1000
    {
        bangla(n / hajar);
        cout << " hajar";
        n %= hajar;
    }
    if(n >= shata) //若n大於等於100
    {
        bangla(n / shata);
        cout << " shata";
        n %= shata;
    }
    if(n) //若n不為0
        cout << " " << n;
}

int main()
{
    long long inputNum; //因為最多為999999999999999位數，所以使用long long
    int count = 1; //計算次數，以1起始


    while(cin >> inputNum)
    {
        cout << setw(4) << count << "."; //開頭佔4個字元
        if(inputNum == 0) //若輸入為0，則直接印出0
            cout << " 0";
        else
            bangla(inputNum);
        cout << "\n";
        count++;
    }
    return 0;
}
