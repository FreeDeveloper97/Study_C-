//
//  2577.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    int result = 0;
    int count[10] = {0};

    cin>>a>>b>>c;
    result = a*b*c;
    while(result != 0)
    {
        count[result%10]++;
        result /= 10;
    }

    for(int i=0; i<10; i++)
    {
        cout<<count[i]<<"\n";
    }

    return 0;
}
