#include "my_stl.h"

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

}