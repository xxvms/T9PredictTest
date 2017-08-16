//
// Created by tombr on 16/08/2017.
//

#ifndef T9PREDICTTEST_WORDSTREE_H
#define T9PREDICTTEST_WORDSTREE_H


#include <string>

class WordsTree
{
public:
    WordsTree();
    ~WordsTree();

    void AddWord(const std::string& word);
    bool DoesWordExist(const std::string word)const;
};




#endif //T9PREDICTTEST_WORDSTREE_H
