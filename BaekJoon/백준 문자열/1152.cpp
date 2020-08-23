//
//  1152.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int count = 0;
    string input;
    getline(cin, input);
    for(int i=0; i<input.length(); i++)
    {
        if(input.at(i) == ' ')
        {
            count++;
        }
    }
    if(input.at(0) == ' ')
        count -= 1;
    if(input.at(input.size()-1) == ' ')
        count -= 1;
    cout<<count+1;

    return 0;
}
