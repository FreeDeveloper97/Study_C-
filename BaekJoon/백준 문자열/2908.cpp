//
//  2908.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    int after1, after2;
    cin>>num1>>num2;
    after1 = (num1%10)*100 + (num1/10%10)*10 + (num1/100);
    after2 = (num2%10)*100 + (num2/10%10)*10 + (num2/100);

    if(after1 > after2)
        cout<<after1;
    else
        cout<<after2;
    return 0;
}
