#include "RomanToInt.h"

int romanToInt(std::string s){
    int sum = 0;
    int lastMember = 0;
    auto rEnd = s.rend();
    for(auto rIt = s.rbegin(); rIt != rEnd; ++rIt){
        int newMember = 0;
        if(*rIt == 'I'){
            newMember = 1;
        } else if(*rIt == 'X') {
            newMember = 10;
        } else if(*rIt == 'V') {
            newMember = 5;
        } else if(*rIt == 'C') {
            newMember = 100;
        } else if(*rIt == 'L') {
            newMember = 50;
        } else if(*rIt == 'M') {
            newMember = 1000;
        } else if(*rIt == 'D') {
            newMember = 500;
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