//
//  2446.cpp
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

    for(int i=0; i<n; i++)
    {
        for(int space=1; space<=i; space++)
        {
                cout<<" ";
        }
        for(int star=n*2-1 - 2*i; star>0; star--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-2; i>=0; i--)
    {
        for(int space=1; space<=i; space++)
        {
                cout<<" ";
        }
        for(int star=n*2-1 - 2*i; star>0; star--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
