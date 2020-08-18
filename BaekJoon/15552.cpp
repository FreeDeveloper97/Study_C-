//
//  15552.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/18.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    unsigned int T,A,B = 0;
    cin>>T;

    for(int i=0; i<T; i++)
    {
        cin>>A>>B;
        cout<<A+B<<"\n";
    }

    return 0;
}
