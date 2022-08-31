// OccupancyMapHash.h
// includes the class declaration and hash function used for the hash method
#ifndef _OCCUPANCYMAPHASH_H
#define _OCCUPANCYMAPHASH_H
#include "OccupancyMapBase.h"
#include <unordered_map>


// A new hash function was created, since the built in hash function cannot operate on pairs
struct pair_hash{
    std::size_t operator() (const std::pair<int, int> &pair) const {
    // This function returns the bitwise XOR of the two pair values
        return std::hash<int>()(pair.first) ^ std::hash<int>()(pair.second);
    }
};

// Derived class for Hash Table method
class COccupancyMapHash: public COccupancyMapBase{
    public:
        std::string GetNameOfApproach();
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );
    private:
    // map is a hash table with a Location pair as the key, 
    // and an bool value, true if occupied, false if unoccupied
        std::unordered_map< std::pair<int,int> , bool, pair_hash > map;
    // the new hash function is passed in as a parameter for hash table

};


#endif
