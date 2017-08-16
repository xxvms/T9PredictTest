//
// Created by tombr on 16/08/2017.
//

#ifndef T9PREDICTTEST_ENGINE_H
#define T9PREDICTTEST_ENGINE_H

#include <vector>
#include <string>

typedef  std::vector<std::string> Strings;
typedef  std::vector<unsigned int> Digits;

class WordsTree;

class Engine
{
    WordsTree& _wordsTree;

public:
    Engine(WordsTree& words) : _wordsTree(words)
    {
    };

    Strings GetWordsByDigits(const Digits& digits)const;
};

#endif //T9PREDICTTEST_ENGINE_H
