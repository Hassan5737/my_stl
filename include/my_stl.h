#ifndef MY_STL_H
#define MY_STL_H

#include <string>

namespace my_stl
{

/**
 * stringRepeat
 * Repeats a string multiple times with an optional separator.
 *
 * Parameters:
 * st       -> The string to repeat
 * r        -> Number of repetitions
 * sep      -> Separator between repetitions
 * showEnd  -> If true, the separator is added at the end
 *
 * Returns:
 * A new string containing the repeated pattern
 */
std::string stringRepeat(
    const std::string& st,
    int r = 2,
    const std::string& sep = "",
    bool showEnd = true
);

}

#endif
