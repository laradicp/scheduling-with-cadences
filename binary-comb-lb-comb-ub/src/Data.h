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
        int maxCadence;
        std::vector<std::pair<std::vector<bool>, std::vector<int>>> families;
        int cadencesSize;
        int familiesSize;
        std::vector<int> familySize;
        std::vector<int> lb;

        static bool compareCadencePairs(std::pair<std::pair<int, int>, bool> p1, std::pair<std::pair<int, int>, bool> p2);
        static bool compareCadences(std::pair<int, int> c1, std::pair<int, int> c2);
        int used(int j, int i, std::vector<int> &s, std::vector<double> &score, std::vector<int> &jobsPerScore, std::vector<std::vector<int>> &familiesPerScore, std::vector<std::vector<int>> &intersection);
        void calculateLB(int i, std::vector<int> &s, std::vector<double> &score, std::vector<int> &jobsPerScore, std::vector<std::vector<int>> &familiesPerScore, std::vector<std::vector<int>> &intersection);

    public:
        Data(std::string filePath);
        
        int getDimension();

        int cadenceType(int c);

        int getCadence(int c);

        int getMaxCadence();

        int getFamilyMember(int f, int i);

        int getCadencesSize();

        int getFamiliesSize();
        
        void setFamilySize(int f, int size);
        int getFamilySize(int f);

        bool getCadencesPerFamily(int f, int c);

        int getUpperBound();
        int getLowerBound();

        std::vector<int> getLowerBoundSol();
};

#endif
