#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stof;
using std::map;


float fromCelsiusToFahrenheit(float celsius) {
    return 1.8 * celsius + 32;
}

float fromFahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 0.5556;
}

int main() {
    typedef float (*ConversionFunction)(float);
    string temperatureInfo;
    std::map<char, ConversionFunction> conversionMap;

    conversionMap['C'] = fromCelsiusToFahrenheit;
    conversionMap['F'] = fromFahrenheitToCelsius;

    cout << "Enter the temperature in the desired format: ";
    cin >> temperatureInfo;

    char lastLetter = temperatureInfo[temperatureInfo.length() - 1];
    char otherLetter = lastLetter == 'C' ? 'F' : 'C';
    temperatureInfo.pop_back();

    cout << temperatureInfo << lastLetter << " is " << 
    conversionMap[lastLetter](stof(temperatureInfo)) << otherLetter << endl;
}