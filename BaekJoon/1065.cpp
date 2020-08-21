//
//  1065.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
bool oneNumber(int n)
{
    if(n>99)
    {
        int first = n%10;
        int second = n/10%10;
        int term1 = first-second;
        int term2;
        n = n/10;
        while(n > 9)
        {
            first = n%10;
            second = n/10%10;
            term2 = first-second;
            if(term1 == term2)
            {
                term1 = term2;
                n = n/10;
            }
            else
                return false;
        }
        return true;
    }
    else
        return true;
}
int main() {
    int n, count = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(oneNumber(i))
        {
            count++;
        }
    }
    cout<<count;

    return 0;
}
