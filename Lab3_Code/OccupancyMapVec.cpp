#include "OccupancyMapVec.h"

std::string COccupancyMapHash::GetNameOfApproach(){
    std::string approach = "2D Vector";
    return approach;
}
void COccupancyMapHash::AddOccupiedLocation(std::pair<int,int> Location){

}

bool COccupancyMapHash::CheckIsOccupied( std::pair<int,int> Location ){
    return false;
}