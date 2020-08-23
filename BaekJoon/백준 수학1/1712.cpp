//
//  1712.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/23.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    //a + (b*n) < c*n
    //(c-b)n > a
    //n > a / (c-b)
    if(c-b <= 0)
        cout<<-1;
    else
        cout<<a/(c-b) + 1;
    return 0;
}
