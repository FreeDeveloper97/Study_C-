//
//  2523.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin>>n;
    for(int i=1;  i<=n; i++)
    {
        for(int star=1; star <= i; star++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1; i>0; i--)
    {
        for(int star=1; star <= i; star++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
