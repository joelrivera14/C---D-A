#include <iostream>
#include <unordered_map>

std::string match(std::string s);
int main()
{
    std::cout << match("fabdcek") << std::endl;
    return 0;
}

std::string match(std::string s)
{
    std::unordered_map<std::string, char> compare;
    compare["ab"] = 'M';
    compare["c"] = 'X';
    for (int i = 0; i < s.size(); ++i)
    {
        std::string word = "";
        for (int j = i; j < s.size(); ++j)
        {
            word += s[j];
            if (compare.count(word))
            {
                s.replace(i, word.size(), std::string(1, compare[word]));
                break;
            }
        }
    }
    return s;
}