#include "RomanToInt.h"

int romanToInt(std::string s){
    int sum = 0;
    auto rEnd = s.rend();
    for(auto rIt = s.rbegin(); rIt != rEnd; ++rIt){
        int number = 0;
        switch(*rIt)
        {
            case 'I':
                number = 1;
                break;
            case 'V':
                number = 5;
                break;
            case 'X':
                number = 10;
                break;
            case 'L':
                number = 50;
                break;
            case 'C':
                number = 100;
                break;
            case 'D':
                number = 500;
                break;
            case 'M':
                number = 1000;
                break;
            default:
                break;
        }
        if(number < sum && (sum - number != number)){
            sum -= number;
        } else{
            sum += number;
        }
    }
    return sum;
};