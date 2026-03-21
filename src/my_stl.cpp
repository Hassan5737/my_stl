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

int parseInt(const std::string& st)
{
    if (st.empty())
        return 0;

    int result = 0;
    int sign = 1;
    size_t i = 0;

    if (st[0] == '-')
    {
        sign = -1;
        i = 1;
    }

    for (; i < st.length(); i++)
    {
        char c = st[i];

        if (c >= '0' && c <= '9')
        {
            result = result * 10 + (c - '0');
        }
        else
        {
            break;
        }
    }

    return result * sign;
}


bool isNaN(const std::string& st)
{
    if (st.empty())
        return true;

    size_t i = 0;

    if (st[0] == '-')
    {
        if (st.length() == 1)
            return true;

        i = 1;
    }

    for (; i < st.length(); i++)
    {
        char c = st[i];

        if (c < '0' || c > '9')
        {
            return true;
        }
    }

    return false;
}


std::string trimString(
    const std::string& st,
    const std::string& direction,
    char ch
)
{
    size_t start = 0;
    size_t end = st.length();

    if (direction == "Left" || direction == "All")
    {
        while (start < end && st[start] == ch)
            start++;
    }

    if (direction == "Right" || direction == "All")
    {
        while (end > start && st[end - 1] == ch)
            end--;
    }

    return st.substr(start, end - start);
}


std::string substring(
    const std::string& st,
    int start,
    int end,
    bool incEnd
)
{
    if (start < 0 || end > (int)st.length() || start >= end)
        return "";

    if (incEnd)
        end++;

    return st.substr(start, end - start);
}


std::string cleanString(
    const std::string& st,
    bool keepNums
)
{
    std::string result;
    result.reserve(st.size());

    for (char c : st)
    {
        if ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c == '_') ||
            (keepNums && c >= '0' && c <= '9'))
        {
            result += c;
        }
    }

    return result;
}


std::string parseQueryString(
    const std::string& st
)
{
    std::string result;
    result.reserve(st.size());

    for (char c : st)
    {
        if (c == '=')
        {
            result += ": ";
        }
        else if (c == '&')
        {
            result += '\n';
        }
        else
        {
            result += c;
        }
    }

    return result;
}


int wordCount(
    const std::string& st,
    char sep
)
{
    int count = 0;
    bool inWord = false;

    for (char c : st)
    {
        if (c == sep)
        {
            if (inWord)
            {
                count++;
                inWord = false;
            }
        }
        else
        {
            inWord = true;
        }
    }

    if (inWord)
        count++;

    return count;
}

bool isTitleCase(const std::string& st)
{
    if (st.empty())
        return false;

    if (!std::isupper(static_cast<unsigned char>(st[0])))
        return false;

    for (size_t i = 0; i < st.length(); i++)
    {
        if (st[i] == ' ')
        {
            if (i + 1 >= st.length() ||
                !std::isupper(static_cast<unsigned char>(st[i + 1])))
            {
                return false;
            }
        }
    }

    return true;
}


bool inArray(
    const std::vector<int>& arr,
    int target
)
{
    for (int num : arr)
    {
        if (num == target)
        {
            return true;
        }
    }

    return false;
}

int floorNumber(double num)
{
    int i = static_cast<int>(num);

    if (num < 0 && num != i)
        return i - 1;

    return i;
}


int ceilNumber(double num)
{
    int i = static_cast<int>(num);

    if (num > 0 && num != i)
        return i + 1;

    return i;
}


int roundNumber(double num)
{
    if (num >= 0)
        return static_cast<int>(num + 0.5);
    else
        return static_cast<int>(num - 0.5);
}


std::string join(
    const std::vector<std::string>& names,
    const std::string& sep
)
{
    std::string result;

    for (size_t i = 0; i < names.size(); i++)
    {
        result += names[i];

        if (i != names.size() - 1)
        {
            result += sep;
        }
    }

    return result;
}

std::vector<std::string> fillVector(
    int num,
    const std::string& val
)
{
    return std::vector<std::string>(num, val);
}

std::vector<int> createRange(
    int start,
    int end
)
{
    std::vector<int> result;

    if (start <= end)
    {
        result.reserve(end - start + 1);

        for (int i = start; i <= end; i++)
        {
            result.push_back(i);
        }
    }
    else
    {
        result.reserve(start - end + 1);

        for (int i = start; i >= end; i--)
        {
            result.push_back(i);
        }
    }

    return result;
}

std::string slice(
    const std::string& st,
    int start,
    int end,
    int step
)
{
    std::string result;

    int n = st.length();

    if (step == 0)
        return result;

    // Handle negative indices
    if (start < 0) start += n;
    if (end < 0) end += n;

    // Clamp values
    if (step > 0)
    {
        if (start < 0) start = 0;
        if (end > n) end = n;

        if (start >= end)
            return result;

        result.reserve((end - start) / step + 1);

        for (int i = start; i < end; i += step)
        {
            result += st[i];
        }
    }
    else
    {
        if (start >= n) start = n - 1;
        if (end < -1) end = -1;

        if (start <= end)
            return result;

        result.reserve((start - end) / (-step) + 1);

        for (int i = start; i > end; i += step)
        {
            result += st[i];
        }
    }

    return result;
}

}