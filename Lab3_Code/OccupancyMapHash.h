#ifndef _OCCUPANCYMAPHASH_H
#define _OCCUPANCYMAPHASH_H
#include "OccupancyMapBase.h"
#include <unordered_map>

struct pair_hash
{
    template <class T1, class T2>
    std::size_t operator() (const std::pair<T1, T2> &pair) const {
        return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
    }
};


class COccupancyMapHash: public COccupancyMapBase{
    public:
        std::string GetNameOfApproach();
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );
    private:
        std::unordered_map< std::pair<int,int> , int, pair_hash > map;


};


#endif
