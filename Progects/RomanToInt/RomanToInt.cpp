#include "RomanToInt.h"

int romanToInt(std::string s){
    int sum = 0;
    int lastMember = 0;
    auto rEnd = s.rend();
    for(auto rIt = s.rbegin(); rIt != rEnd; ++rIt){
        int newMember = 0;
        switch(*rIt)
        {
            case 'I':
                newMember = 1;
                break;
            case 'V':
                newMember = 5;
                break;
            case 'X':
                newMember = 10;
                break;
            case 'L':
                newMember = 50;
                break;
            case 'C':
                newMember = 100;
                break;
            case 'D':
                newMember = 500;
                break;
            case 'M':
                newMember = 1000;
                break;
            default:
                break;
        }
        if(newMember < lastMember){
            sum -= newMember;
        } else {
            sum += newMember;
        }
        lastMember = newMember;
    }
    return sum;
};