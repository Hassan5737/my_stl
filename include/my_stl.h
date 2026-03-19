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

/**
 * getSumOfNumbers
 * Performs an operation on all elements in the vector.
 *
 * Parameters:
 * nums      -> Input vector
 * operation -> Operation to apply ('+', '-', '*')
 *
 * Returns:
 * The result after applying the operation.
 *
 * Notes:
 * - Returns 0 if the vector is empty or operation is invalid.
 */
int getSumOfNumbers(const std::vector<int>& nums, char operation = '+');

/**
 * toUpperCase
 * Converts all characters in a string to uppercase.
 *
 * Parameters:
 * st -> The original string
 *
 * Returns:
 * A new string with all characters in uppercase.
 */
std::string toUpperCase(const std::string& st);

/**
 * toLowerCase
 * Converts all characters in a string to lowercase.
 *
 * Parameters:
 * st -> The original string
 *
 * Returns:
 * A new string with all characters in lowercase.
 */
std::string toLowerCase(const std::string& st);

/**
 * swapCase
 * Swaps the case of each character in a string.
 *
 * Parameters:
 * st -> The original string
 *
 * Returns:
 * A new string with swapped character cases.
 */
std::string swapCase(const std::string& st);

/**
 * parseInt
 * Converts a numeric string to an integer.
 *
 * Parameters:
 * st -> Input string
 *
 * Returns:
 * Parsed integer value.
 *
 * Notes:
 * - Supports negative numbers.
 * - Stops parsing at first non-digit character.
 * - Returns 0 if string is empty.
 *
 * Example:
 * parseInt("123abc") -> 123
 * parseInt("-45xyz") -> -45
 */
int parseInt(const std::string& st);

/**
 * isNaN
 * Checks if a string is not a valid number.
 *
 * Parameters:
 * st -> Input string
 *
 * Returns:
 * true  -> If string contains non-digit characters
 * false -> If string is a valid number
 *
 * Notes:
 * - Supports negative numbers.
 * - Empty string is considered not a number.
 *
 * Example:
 * isNaN("1234") -> false
 * isNaN("12a3") -> true
 */
bool isNaN(const std::string& st);


/**
 * trimString
 * Trims characters from the string based on direction.
 *
 * Parameters:
 * st        -> The original string
 * direction -> "Left", "Right", or "All"
 * ch        -> Character to trim (default = space)
 *
 * Returns:
 * A new trimmed string.
 *
 * Example:
 * trimString("  hello  ") -> "hello"
 */
std::string trimString(
    const std::string& st,
    const std::string& direction = "All",
    char ch = ' '
);

/**
 * substring
 * Extracts a portion of the string.
 *
 * Parameters:
 * st     -> The original string
 * start  -> Starting index
 * end    -> Ending index
 * incEnd -> Include end index or not
 *
 * Returns:
 * Extracted substring.
 *
 * Notes:
 * - Returns empty string if indices are invalid.
 */
std::string substring(
    const std::string& st,
    int start,
    int end,
    bool incEnd = false
);

/**
 * cleanString
 * Removes unwanted characters from a string.
 *
 * Parameters:
 * st       -> The original string
 * keepNums -> Keep digits or not
 *
 * Returns:
 * Cleaned string.
 *
 * Notes:
 * - Keeps letters and underscore.
 * - Optionally keeps numbers.
 */
std::string cleanString(
    const std::string& st,
    bool keepNums = true
);

/**
 * parseQueryString
 * Converts query string format into readable format.
 *
 * Parameters:
 * st -> Input query string
 *
 * Returns:
 * Formatted string.
 *
 * Example:
 * name=Osama&age=40 ->
 * name: Osama
 * age: 40
 */
std::string parseQueryString(
    const std::string& st
);

/**
 * wordCount
 * Counts the number of words in a string.
 *
 * Parameters:
 * st  -> The original string
 * sep -> Separator character (default = space)
 *
 * Returns:
 * Number of words.
 */
int wordCount(
    const std::string& st,
    char sep = ' '
);

/**
 * isTitleCase
 * Checks if the first letter of each word is uppercase.
 *
 * Parameters:
 * st -> The original string
 *
 * Returns:
 * true  -> If each word starts with an uppercase letter
 * false -> Otherwise
 *
 * Notes:
 * - Words are separated by spaces.
 * - Returns false if string is empty.
 *
 * Example:
 * isTitleCase("Hello World") -> true
 * isTitleCase("hello World") -> false
 */
bool isTitleCase(const std::string& st);

/**
 * inArray
 * Checks if a value exists in a vector.
 *
 * Parameters:
 * arr    -> Input vector
 * target -> Value to search for
 *
 * Returns:
 * true  -> If value exists in the vector
 * false -> Otherwise
 */
bool inArray(
    const std::vector<int>& arr,
    int target
);

/**
 * roundNumber
 * Rounds a floating-point number to the nearest integer.
 *
 * Parameters:
 * num -> Input number
 *
 * Returns:
 * Rounded integer value.
 *
 * Notes:
 * - Handles both positive and negative numbers.
 */
int roundNumber(double num);

/**
 * floorNumber
 * Returns the largest integer less than or equal to the given number.
 *
 * Parameters:
 * num -> Input number
 *
 * Returns:
 * Floor value as integer.
 */
int floorNumber(double num);

/**
 * ceilNumber
 * Returns the smallest integer greater than or equal to the given number.
 *
 * Parameters:
 * num -> Input number
 *
 * Returns:
 * Ceil value as integer.
 */
int ceilNumber(double num);

/**
 * join
 * Joins elements of a string vector into a single string with a separator.
 *
 * Parameters:
 * names -> Input vector of strings
 * sep   -> Separator between elements (default = ", ")
 *
 * Returns:
 * Joined string.
 *
 * Example:
 * {"A", "B", "C"} -> "A, B, C"
 */
std::string join(
    const std::vector<std::string>& names,
    const std::string& sep = ", "
);

}

#endif