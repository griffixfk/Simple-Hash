#pragma once

#include <string>


class SimpleHash
{
public:
	unsigned int _SimpleHash(const std::string& tEXT);
	
	std::string _SimpleSalt();



};

extern SimpleHash sHash;