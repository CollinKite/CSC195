#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
public:
    void setWingspan(int wingspan) { mWingspan = wingspan; }
    int getWingspan() { return mWingspan; }
    void setNumEggs(unsigned int numEggs) { mNumEggs = numEggs; }
    int getNumEggs() { return mNumEggs; }
    eType getType() override { return eType::Bird; }

    void read(std::ostream& ostream, std::istream& istream) override;
    void write(std::ostream& ostream) override;

    void read(std::ifstream& istream) override;
    void write(std::ofstream& ostream) override;
protected:
    int mWingspan{ 0 };
    unsigned int mNumEggs{ 0 };
};

