#include "match.hpp"
#include <cstring>

const char* match(const char* s, char ch)
{
    return strchr(s,ch);
}