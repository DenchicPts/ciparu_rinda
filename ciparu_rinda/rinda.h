#pragma once


#include <iostream>
#include <cctype>
#include <vector>
#include <string>
using namespace std;



int chartoInt(char a) {
	return a - '0';
}

int summarizeString(string res) { // Uzdevums A
	string nums = "1234567890";
	int result(0);
	for (const auto& r : res) {
		if (isdigit(r))
			result += chartoInt(r);
	}

	return result;
}

string shortenNumbers(const string& input) { // Uzdevums B
	string result;
	result.reserve(input.length());

	int countDigits = 0;

	for (const auto& ch : input) {
		if (isdigit(ch)) {
			countDigits++;
			if (countDigits <= 3)
				result += ch;
			else
				result += ' ';

		}
		else {
			countDigits = 0;
			result += ch;
		}
	}

	return result;
}

int how_many_numbers(const string& input) { // Uzdevums C
	int result(0);
	for (size_t i = 0; i < input.length(); i++)
		if (!isdigit(input[i + 1]) && isdigit(input[i]))
			result++;

	return result;
}

int SummaAll(const string& input) { // Uzdevums D
	int result = 0;
	int number = 0;

	for (const auto& ch : input) {
		if (isdigit(ch)) {
			number = number * 10 + chartoInt(ch);
		}
		else {
			result += number;
			number = 0;
		}
	}

	result += number;

	return result;
}