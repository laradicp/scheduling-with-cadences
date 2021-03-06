#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>

class Data
{
    private:
        int dimension;
        std::vector<std::pair<int, int>> cadences;
        std::vector<std::pair<std::vector<bool>, std::vector<int>>> families;
        int cadencesSize;
        int familiesSize;
        std::vector<int> familySize;

    public:
        Data(std::string filePath);
        
        int getDimension();

        int cadenceType(int c);

        int getCadence(int c);

        int getFamilyMember(int f, int i);

        int getCadencesSize();

        int getFamiliesSize();
        
        int getFamilySize(int f);

        bool getCadencesPerFamily(int f, int c);

        int getUpperBound();
};

#endif
