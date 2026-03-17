#ifndef MY_STL_H
#define MY_STL_H

#include <string>
#include <vector>

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

/**
 * zFill
 * Pads the beginning of a string with a fill character
 * until it reaches the specified width.
 *
 * Parameters:
 * st    -> The original string
 * width -> Desired total width of the string
 * fill  -> Character/string used for padding (default = "0")
 *
 * Returns:
 * A new string padded on the left side.
 *
 * Example:
 * zFill("6500", 7) -> "0006500"
 */
std::string zFill(
    const std::string& st,
    int width,
    const std::string& fill = "0"
);

/**
 * stringReverse
 * Returns a new string with the characters reversed.
 *
 * Parameters:
 * st -> The original string
 *
 * Returns:
 * A new string with characters in reverse order.
 *
 * Example:
 * stringReverse("hello") -> "olleh"
 */
std::string stringReverse(
    const std::string& st
);

/**
 * LetterInfo
 * Represents a letter with its uppercase/lowercase forms
 * and their corresponding ASCII values.
 */
struct LetterInfo
{
    char upper;
    int upperASCII;
    char lower;
    int lowerASCII;
};

/**
 * generateAlphabetRange
 * Generates a range of alphabet letters with their ASCII values.
 */
std::vector<LetterInfo> generateAlphabetRange(
    char start,
    char end
);

/**
 * getMin
 * Returns the minimum value in a vector of integers.
 *
 * Parameters:
 * nums -> Input vector
 *
 * Returns:
 * The smallest value in the vector.
 *
 * Notes:
 * - Returns 0 if the vector is empty.
 */
int getMin(const std::vector<int>& nums);

/**
 * getMax
 * Returns the maximum value in a vector of integers.
 *
 * Parameters:
 * nums -> Input vector
 *
 * Returns:
 * The largest value in the vector.
 *
 * Notes:
 * - Returns 0 if the vector is empty.
 */
int getMax(const std::vector<int>& nums);

}

#endif