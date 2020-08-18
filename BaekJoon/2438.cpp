//
//  2438.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/18.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int t = 0;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
