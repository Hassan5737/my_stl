#include "my_stl.h"
#include <cctype>   // isalpha, toupper, tolower
#include <algorithm> // swap

namespace my_stl
{

std::string stringRepeat(
    const std::string& st,
    int r,
    const std::string& sep,
    bool showEnd
)
{
    std::string result;

    for (int i = 0; i < r; i++)
    {
        result += st;

        if (i < r - 1)
        {
            result += sep;
        }
    }

    if (showEnd)
    {
        result += sep;
    }

    return result;
}


std::string zFill(
    const std::string& st,
    int width,
    const std::string& fill
)
{
    int len = st.length();

    if (len >= width)
    {
        return st;
    }

    std::string result = st;

    for (int i = 0; i < width - len; i++)
    {
        result = fill + result;
    }

    return result;
}


std::string stringReverse(
    const std::string& st
)
{
    std::string result;

    for (int i = st.length() - 1; i >= 0; i--)
    {
        result += st[i];
    }

    return result;
}


/**
 * generateAlphabetRange
 * Implementation
 */
std::vector<LetterInfo> generateAlphabetRange(
    char start,
    char end
)
{
    std::vector<LetterInfo> result;

   
    if (!std::isalpha(start) || !std::isalpha(end))
    {
        return result;
    }

    // Normalize to uppercase
    start = std::toupper(start);
    end   = std::toupper(end);

    
    if (start > end)
    {
        std::swap(start, end);
    }

    result.reserve(end - start + 1);

    for (char c = start; c <= end; c++)
    {
        LetterInfo info;

        info.upper = c;
        info.upperASCII = static_cast<int>(c);

        char lower = std::tolower(c);
        info.lower = lower;
        info.lowerASCII = static_cast<int>(lower);

        result.push_back(info);
    }

    return result;
}

}