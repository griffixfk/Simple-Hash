#include <iostream>

#include "_Shash.h"

#include <random>

SimpleHash sHash;

unsigned int SimpleHash::_SimpleHash(const std::string& text)
{

	if (text.empty())
	{
		std::cout << "Error text empty" << std::endl;
	}

	unsigned int hash = 0;

	for (char c : text)
	{
		hash = (hash * 44) + c;
	}

	return hash;
}


std::string SimpleHash::_SimpleSalt()
{
	std::string salText;

	static const char characters[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	std::mt19937 generator(static_cast<unsigned int>(time(NULL)));

	std::uniform_int_distribution<int>dist(0, sizeof(characters) - 1);

	              // length salt
	for (int i = 0; i < 16; ++i)
		salText += characters[dist(generator)];


	return salText;
}