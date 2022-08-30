#ifndef _OCCUPANCYMAPHASH_H
#define _OCCUPANCYMAPHASH_H
#include "OccupancyMapBase.h"
#include <unordered_map>

// A new hash function was created, since the built in hash function cannot operate on pairs
struct pair_hash{
    template <class T1, class T2>
    std::size_t operator() (const std::pair<T1, T2> &pair) const {
        return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
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
