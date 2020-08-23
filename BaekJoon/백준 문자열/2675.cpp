//
//  2675.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int t,r;
    string input;
    cin>>t;
    while(t>0)
    {
        cin>>r;
        cin>>input;
        for(int i=0; i<input.size(); i++)
        {
            for(int j=0; j<r; j++)
            {
                cout<<input.at(i);
            }
        }
        cout<<"\n";
        t--;
    }

    return 0;
}
