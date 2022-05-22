#pragma once
#include <string>
#include <memory>
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>


class Animal
{
public:
	enum class eType {
		Mammal = 1,
		Bird = 2
	};

protected:
	std::string mName;
	unsigned int mLifespan = 42;

public:
	std::string getName() { return mName; }
	void setName(std::string name) { mName = name; }
	int getLifeSpan() { return mLifespan; }
	void setLifeSpan(unsigned int lifeSpan) { mLifespan = lifeSpan; }

	virtual eType getType() = 0;

	virtual void read(std::ostream& ostream, std::istream& istream);
	virtual void write(std::ostream& ostream);

	virtual void read(std::ifstream& istream);
	virtual void write(std::ofstream& ostream);

	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animlal);

	friend std::ifstream& operator >> (std::ifstream& istream, Animal& animal);
	friend std::ofstream& operator << (std::ofstream& ostream, Animal& animlal);



};

