#include "my_stl.h"
#include <cctype>
#include <algorithm>

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


int getMin(const std::vector<int>& nums)
{
    if (nums.empty())
        return 0;

    int minValue = nums[0];

    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i] < minValue)
        {
            minValue = nums[i];
        }
    }

    return minValue;
}


int getMax(const std::vector<int>& nums)
{
    if (nums.empty())
        return 0;

    int maxValue = nums[0];

    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i] > maxValue)
        {
            maxValue = nums[i];
        }
    }

    return maxValue;
}


int getSumOfNumbers(const std::vector<int>& nums, char operation)
{
    if (nums.empty())
        return 0;

    int result = (operation == '*') ? 1 : 0;

    for (int num : nums)
    {
        switch (operation)
        {
            case '+': result += num; break;
            case '-': result -= num; break;
            case '*': result *= num; break;
            default: return 0;
        }
    }

    return result;
}


std::string toUpperCase(const std::string& st)
{
    std::string result;
    result.reserve(st.size());

    for (char c : st)
    {
        result += std::toupper(static_cast<unsigned char>(c));
    }

    return result;
}


std::string toLowerCase(const std::string& st)
{
    std::string result;
    result.reserve(st.size());

    for (char c : st)
    {
        result += std::tolower(static_cast<unsigned char>(c));
    }

    return result;
}


std::string swapCase(const std::string& st)
{
    std::string result;
    result.reserve(st.size());

    for (char c : st)
    {
        if (std::islower(static_cast<unsigned char>(c)))
        {
            result += std::toupper(static_cast<unsigned char>(c));
        }
        else if (std::isupper(static_cast<unsigned char>(c)))
        {
            result += std::tolower(static_cast<unsigned char>(c));
        }
        else
        {
            result += c;
        }
    }

    return result;
}

}