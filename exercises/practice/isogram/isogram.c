#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(!phrase)
        return false;

    uint32_t letter_flags = 0;

    while(*phrase){
        char letter = *phrase;
        if(letter >= 'a' && letter <= 'z'){
        } else if(letter >= 'A' && letter <= 'Z') {
        }
    }
}
