//
//  5622.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/22.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    //문자열 입력 -> 문자나누기 -> 해당되는 시간초 증가
    string input;
    int count = 0;
    char temp;

    cin>>input;
    for(int i=0; i<input.size(); i++)
    {
        temp = input.at(i);
        switch(temp)
        {
            case 'A':
            case 'B':
            case 'C':
                count += 3;
                break;
            case 'D':
            case 'E':
            case 'F':
                count += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                count += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                count += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                count += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                count += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                count += 9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                count += 10;
                break;
        }
    }
    cout<<count;
    return 0;
}
