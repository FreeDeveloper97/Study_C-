//
//  10809.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int resultArray[26];
    for(int i=0; i<26; i++)
        resultArray[i] = -1;
    int index;
    string input;
    cin>>input;
    for(int i=0; i<input.size(); i++)
    {
        index = (int)input.at(i)-97;
        if(resultArray[index] == -1)
            resultArray[index] = i;
    }
    for(int i=0; i<26; i++)
    {
        cout<<resultArray[i]<<" ";
    }

    return 0;
}
