#include "time.hpp"
#include <iostream>

std::string time(std::string &s)
{
    std::string hours, min, d, answer;
    int a = 0;
    for (char c : s){
        if (c == ':')
            a = 1;
        else if (c == ' ')
            a = 2;
        else if (a == 0)
            hours.push_back(c);
        else if (a == 1)
            min.push_back(c);
        else
            d.push_back(c);
    }
    if (d == "pm"){
        int h = stoi(hours);
        if (h == 12)
            hours = "00";
        else {
            h += 12;
            hours = std::to_string(h);
        }
    }
    if (hours.size() < 2)
        hours = '0' + hours;
    answer = hours + min;
    return answer;
}