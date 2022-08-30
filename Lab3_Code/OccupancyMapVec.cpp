#include "OccupancyMapVec.h"

std::string COccupancyMapVec::GetNameOfApproach(){
    std::string approach = "2D Vector";
    return approach;
}
void COccupancyMapVec::AddOccupiedLocation(std::pair<int,int> Location){
    vec[Location.second][Location.first] = true;
    // note: If the second value represents Y values, it represents rows, hence goes first
}

bool COccupancyMapVec::CheckIsOccupied( std::pair<int,int> Location ){
    // If assigned improperly, then it will still return false.
    if(vec[Location.first][Location.second] == NULL){
        return false;
    }
    // otherwise it will return the value stored in the 2d vector.
    return vec[Location.second][Location.first];
}

