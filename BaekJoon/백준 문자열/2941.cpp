//
//  2941.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    string input;
    string temp;
    int count = 0;
    int i = 0;
    cin>>input;

    while(i<input.size())
    {
        if(i<input.size()-1) {
            temp = input.substr(i,2);
            if (temp == "c=") {
                count++;
                i+=2;
            } else if (temp == "c-") {
                count++;
                i+=2;
            } else if (temp == "d-") {
                count++;
                i+=2;
            } else if (temp == "lj") {
                count++;
                i+=2;
            } else if (temp == "nj") {
                count++;
                i+=2;
            } else if (temp == "s=") {
                count++;
                i+=2;
            } else if (temp == "z=") {
                count++;
                i+=2;
            } else if (i == input.size()-2) {
                count+=2;
                i+=2;
            } else {
                if (i < input.size()-2) {
                    temp = input.substr(i,3);
                    if (temp == "dz=") {
                        count++;
                        i+=3;
                    }
                    else {
                        count++;
                        i++;
                    }
                }
            }
        }
        else {
            count++;
            i++;
        }

    }

    cout<<count;

    return 0;
}
