#include "ReverseInteger.h"

int reverse(int x) {
    bool isLessThanZero = (x < 0) ? true : false;

    if(isLessThanZero){
        x *= -1;
    }

    int result = 0;
    while (x > 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }

    return (isLessThanZero) ? result *= -1 : result;
}