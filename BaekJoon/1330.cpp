//
//  1330.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/17.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a,b = 0;
    cin>>a>>b;
    
    if(a>b) {
        cout<<">"<<endl;
    }
    else if(a<b) {
        cout<<"<"<<endl;
    }
    else if(a==b) {
        cout<<"=="<<endl;
    }
    
    return 0;
}
