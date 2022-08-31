// OccupancyMapVec.h
// includes the derived class declaration for the 2d vector method
#ifndef _OCCUPANCYMAPVEC_H
#define _OCCUPANCYMAPVEC_H
#include "OccupancyMapBase.h"
#include <vector>


// Derived class for 2d vector method
class COccupancyMapVec: public COccupancyMapBase{
    public:
        std::string GetNameOfApproach(); 
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );       
//Constructor initialises 2d vector with all false, and size n*n where n is the width and depth
        COccupancyMapVec(){ 
            vec.resize(n, std::vector<bool>(n, false));
        }
    private:
        const int n = 2048; 
        //size n is defined as a constant, change value depending on input files
        std::vector<std::vector<bool> > vec;
        //vec is a 2d vector of bools with true for an occupied space, false for unoccupied
};      

#endif
