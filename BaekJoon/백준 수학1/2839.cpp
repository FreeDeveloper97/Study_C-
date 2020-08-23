//
//  2839.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/23.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//
//
#include <iostream>
using namespace std;
int main() {
    int n;
    int count3 = 0, count5 = 0;
    int rest;
    bool find = false;
    cin>>n;

    count5 = n/5;
    rest = n%5;
    if(rest == 0)
        cout<<count5;
    else
    {
        while(!find)
        {
            if(count5<0)
            {
                cout<<-1;
                find = true;
            }
            else if(rest%3 == 0)
            {
                count3 = rest/3;
                cout<<count5+count3;
                find = true;
            }
            else
            {
                count5--;
                rest+=5;
            }
        }
    }
    return 0;
}
