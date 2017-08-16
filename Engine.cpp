//
// Created by tombr on 16/08/2017.
//

#include "Engine.h"

Strings Engine::GetWordsByDigits(const Digits& digits) const
{
    Strings result;
    if(digits.size() == 0)
    {
        return result;
    }

    result.push_back("");

    return result;
}
