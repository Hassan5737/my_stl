#include <iostream>
#include "my_stl.h"

using namespace std;
using namespace my_stl;

int main()
{
    cout << "===== STRING FUNCTIONS =====\n";

    cout << stringRepeat("Hi", 3, "-") << endl;
    cout << zFill("6500", 7) << endl;
    cout << stringReverse("hello") << endl;

    cout << toUpperCase("hello") << endl;
    cout << toLowerCase("HELLO") << endl;
    cout << swapCase("HeLLo") << endl;

    cout << trimString("   hello   ") << endl;
    cout << substring("Hello World", 0, 5) << endl;
    cout << cleanString("He@llo_123!") << endl;

    cout << parseQueryString("name=Osama&age=40") << endl;
    cout << wordCount("Hello world from Hassan") << endl;

    cout << parseInt("123abc") << endl;
    cout << isNaN("123a") << endl;

    cout << isTitleCase("Hello World") << endl;
    cout << startsWith("Hello", "He") << endl;

    cout << slice("Hello World", 0, 5, 1) << endl;

    cout << ord("A") << endl;
    cout << chr(65) << endl;

    cout << "\n===== VECTOR FUNCTIONS =====\n";

    vector<int> nums = {1, 2, 3, 4, 5};

    cout << getMin(nums) << endl;
    cout << getMax(nums) << endl;
    cout << getSumOfNumbers(nums, '+') << endl;

    cout << inArray(nums, 3) << endl;

    vector<string> names = {"Osama", "Ali"};
    vector<string> newNames = pushItem(names, "Ahmed");

    for (auto s : newNames)
        cout << s << " ";
    cout << endl;

    vector<string> filled = fillVector(3, "Test");
    for (auto s : filled)
        cout << s << " ";
    cout << endl;

    vector<int> range = createRange(5, 10);
    for (int n : range)
        cout << n << " ";
    cout << endl;

    vector<string> replaced = replaceStrings(names, "Ali", "Ahmed", 1);
    for (auto s : replaced)
        cout << s << " ";
    cout << endl;

    cout << join(names, ", ") << endl;

    cout << "\n===== MATH FUNCTIONS =====\n";

    cout << floorNumber(3.7) << endl;
    cout << ceilNumber(3.2) << endl;
    cout << roundNumber(3.5) << endl;

    cout << "\n===== OTHER =====\n";

    cout << moneyFormat(1000000) << endl;
    cout << generateChars(true, true, true) << endl;

    cout << "\n===== ALPHABET RANGE =====\n";

    auto letters = generateAlphabetRange('a', 'd');
    for (auto l : letters)
    {
        cout << l.upper << "(" << l.upperASCII << ") - ";
        cout << l.lower << "(" << l.lowerASCII << ")\n";
    }

    return 0;
}