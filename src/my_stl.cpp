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

}
