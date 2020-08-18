//
//  14681.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/17.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int x,y = 0;
    cin>>x>>y;
    
    if(x > 0) {
        if(y > 0) {
            cout<<1<<endl;
        }
        else if(y < 0) {
            cout<<4<<endl;
        }
    }
    
    else if(x < 0) {
        if(y > 0) {
            cout<<2<<endl;
        }
        else if(y < 0) {
            cout<<3<<endl;
        }
    }
    
    return 0;
}
