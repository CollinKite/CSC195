#pragma once
#include "Animal.h"
#include "MyBase.h"
class Mammal :
    public Animal, MyBase 
{
public:
    void setNumLegs(unsigned int legs) { mNumLegs = legs; }
    int getNumLegs() { return mNumLegs; }
    eType getType() override { return eType::Mammal; }

    void read(std::ostream& ostream, std::istream& istream) override;
    void write(std::ostream& ostream) override;

    void read(std::ifstream& istream) override;
    void write(std::ofstream& ostream) override;

protected:
    int mNumLegs{ 0 };
};

