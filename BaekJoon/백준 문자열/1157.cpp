//
//  1157.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int count[26] = {0};
    int temp, max = 0;
    int maxCount = 0;
    int index = 0;
    //Z : 90
    string input;
    cin>>input;
    for(int i=0; i<input.size(); i++)
    {
        temp = (int)input.at(i);
        //소문자
        if(temp > 90)
        {
            count[temp-97]++;
            if(count[temp-97] > max)
                max = count[temp-97];
        }
        //대문자
        else
        {
            count[temp-65]++;
            if(count[temp-65] > max)
                max = count[temp-65];
        }
    }

    for(int i=0; i<26; i++)
    {
        if(count[i] == max)
        {
            maxCount++;
            index = i;
        }

    }
    if(maxCount > 1)
        cout<<"?";
    else
        cout<<(char)(index+65);

    return 0;
}
