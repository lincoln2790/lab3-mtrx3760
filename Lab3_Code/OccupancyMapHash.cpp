
#include "OccupancyMapHash.h"

std::string COccupancyMapHash::GetNameOfApproach(){
    std::string approach = "HashTable";
    return approach;
}
void COccupancyMapHash::AddOccupiedLocation(std::pair<int,int> Location){
    map[Location] = true;
}

bool COccupancyMapHash::CheckIsOccupied( std::pair<int,int> Location ){
    return map[Location];
}