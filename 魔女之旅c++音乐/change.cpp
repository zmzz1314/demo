#include <iostream>
#include <string>
#include <unordered_map>
#include <windows.h>

using namespace std;

string replaceNumbers(const string& input) {
    // 定义替换规则
    unordered_map<char, string> replacementRules = {
        {'1', "3"},
        {'2', "4#"},
        {'3', "5#"},
        {'4', "6"},
        {'5', "7"},
        {'6', "1#^"},
        {'7', "2#^"}
    };
    
    string result;
    
    // 遍历输入字符串
    for (char c : input) {
        // 如果是数字且在替换规则中，进行替换
        if (isdigit(c) && replacementRules.find(c) != replacementRules.end()) {
            result += replacementRules[c];
        } else {
            // 如果不是数字或不在规则中，保持原样
            result += c;
        }
    }
    
    return result;
}

int main() {
    string input;
    
    getline(cin, input);
    
    string output = replaceNumbers(input);
    
    cout <<  output << endl;
    
    return 0;
}

