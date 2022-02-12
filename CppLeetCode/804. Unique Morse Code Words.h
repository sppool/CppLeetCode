//Runtime: 4 ms, faster than 68.17 % of C++ online submissions for Unique Morse Code Words.
//Memory Usage: 9.2 MB, less than 8.32 % of C++ online submissions for Unique Morse Code Words.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution 
{
public:

    Solution()
    {
        dict.insert(pair<char, string>('a', ".-"));
        dict.insert(pair<char, string>('b', "-..."));
        dict.insert(pair<char, string>('c', "-.-."));
        dict.insert(pair<char, string>('d', "-.."));
        dict.insert(pair<char, string>('e', "."));
        dict.insert(pair<char, string>('f', "..-."));
        dict.insert(pair<char, string>('g', "--."));
        dict.insert(pair<char, string>('h', "...."));
        dict.insert(pair<char, string>('i', ".."));
        dict.insert(pair<char, string>('j', ".---"));
        dict.insert(pair<char, string>('k', "-.-"));
        dict.insert(pair<char, string>('l', ".-.."));
        dict.insert(pair<char, string>('m', "--"));
        dict.insert(pair<char, string>('n', "-."));
        dict.insert(pair<char, string>('o', "---"));
        dict.insert(pair<char, string>('p', ".--."));
        dict.insert(pair<char, string>('q', "--.-"));
        dict.insert(pair<char, string>('r', ".-."));
        dict.insert(pair<char, string>('s', "..."));
        dict.insert(pair<char, string>('t', "-"));
        dict.insert(pair<char, string>('u', "..-"));
        dict.insert(pair<char, string>('v', "...-"));
        dict.insert(pair<char, string>('w', ".--"));
        dict.insert(pair<char, string>('x', "-..-"));
        dict.insert(pair<char, string>('y', "-.--"));
        dict.insert(pair<char, string>('z', "--.."));
    }
    map<char, string> dict;
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        map<string, int> code_count;
        for (string word : words)
        {
            string trans = transpose(word);
            code_count.insert(pair<string, int>(trans, 0));
            code_count[trans]++; // 可有可無
        }

        return code_count.size();
    }

    string transpose(string word)
    {
        string res = "";
        for (char c : word)
        {
            res += dict[c];
        }

        return res;
    }
};
