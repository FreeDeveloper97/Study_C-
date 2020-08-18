//
//  10430.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/17.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    //(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
    //(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
    int a,b,c = 0;
    cin>>a>>b>>c;
    cout<<(a+b)%c<<endl;
    cout<<((a%c)+(b%c))%c<<endl;
    cout<<(a*b)%c<<endl;
    cout<<((a%c)*(b%c))%c<<endl;
    return 0;
}
