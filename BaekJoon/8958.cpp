//
//  8958.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    int count = 0, sum = 0;
    string input = "";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        for(int strInx=0; strInx<input.size(); strInx++)
        {
            if(input.at(strInx) == 'O')
            {
                count++;
                sum += count;
            }
            else
            {
                count = 0;
            }
        }
        cout<<sum<<"\n";
        count = 0;
        sum = 0;
    }

    return 0;
}
