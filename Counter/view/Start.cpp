//
// Created by DavoudAbadi on 12/4/2023.
//

#include "CommandRegex.h"

std::smatch Start::getMatcher(const std::string &input, Start::CommandRegex mainRegex) {
    std::regex regEx(regexPatterns[static_cast<int>(mainRegex)].regex);
    std::smatch matches;
    if (std::regex_match(input, matches, regEx)) {
        return matches;
    }
    return std::smatch();
}

void Start::run() {
    while(true){
        std::string input;
        std::cin >> input;
        std::smatch matcher;
        if(!(matcher = getMatcher(input, CommandRegex::ADD_USER)).empty()){
            
        }else if(!(matcher = getMatcher(input, CommandRegex::GET_MONEY)).empty()){

        }else if(!(matcher = getMatcher(input, CommandRegex::GET_HEALTH)).empty()){

        }else if(!(matcher = getMatcher(input, CommandRegex::TAP)).empty()){

        }else if(!(matcher = getMatcher(input, CommandRegex::BUY)).empty()){

        }else if(!(matcher = getMatcher(input, CommandRegex::SCOREBOARD)).empty()){

        }
    }

}
