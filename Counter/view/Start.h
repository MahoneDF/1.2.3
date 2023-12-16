//
// Created by DavoudAbadi on 12/4/2023.
//

#ifndef COUNTER_COMMANDS_H
#define COUNTER_START_H


#include "iostream"
#include <regex>
#include <string>
#include "../Commands.h"

class Start {
    enum class CommandRegex {
        ADD_USER,
        GET_MONEY,
        GET_HEALTH,
        TAP,
        BUY,
        SCOREBOARD
    };

private:
    struct Command {
        std::string regex;
        CommandRegex command;
    };

public:
    const Command regexPatterns[6] = {
            {R"(^ADD-USER$)",                                        CommandRegex::ADD_USER},
            {"^(\\S+)$",                                             CommandRegex::GET_MONEY},
            {"^(\\S+)$",                                             CommandRegex::GET_HEALTH},
            {"[a-zA-Z]",                                             CommandRegex::TAP},
            {R"(^\s*login\s+(\S+)\s+(\S+)\s*$)",                     CommandRegex::BUY},
            {R"(^\s*change\s+password\s+(\S+)\s+(\S+)\s+(\S+)\s*$)", CommandRegex::SCOREBOARD}
    };
    std::smatch getMatcher(const std::string& input, CommandRegex mainRegex);
    void run();
};



#endif //COUNTER_COMMANDS_H
