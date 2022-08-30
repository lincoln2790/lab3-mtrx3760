#include "OccupancyMapVec.h"

std::string COccupancyMapVec::GetNameOfApproach(){
    std::string approach = "2D Vector";
    return approach;
}
void COccupancyMapVec::AddOccupiedLocation(std::pair<int,int> Location){
    vec[Location.first][Location.second] = true;

}

bool COccupancyMapVec::CheckIsOccupied( std::pair<int,int> Location ){
    return vec[Location.first][Location.second];
}