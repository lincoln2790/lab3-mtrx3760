// OccupancyMapHash.cpp
#include "OccupancyMapHash.h"
// Includes hash derived class function implementation

std::string COccupancyMapHash::GetNameOfApproach(){
    std::string approach = "HashTable";
    return approach;
}
void COccupancyMapHash::AddOccupiedLocation(std::pair<int,int> Location){
    // Assigning the value for that location key as true
    map[Location] = true;
}

bool COccupancyMapHash::CheckIsOccupied( std::pair<int,int> Location ){
    return map[Location];
    //it is as simple as returning the value corresponding to the Location key
}