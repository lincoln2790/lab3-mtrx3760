#include "OccupancyMapBase.h"
#include "OccupancyMapHash.h"

std::string COccupancyMapHash::GetNameOfApproach(){
    std::string approach = "HashTable";
    return approach;
}
void COccupancyMapHash::AddOccupiedLocation(std::pair<int,int> Location){
    mObservedPoints

}


bool COccupancyMapHash::CheckIsOccupied( std::pair<int,int> Location ){
    int i = 0;  // counter.
    // now start at from the beginning
    // and keep iterating over the element till you find
    // nth element...or reach the end of vector.    
    bool isOccupied = false;

    for(std::pair<int,int> p : GetObservedPoints()){
        if(p == Location){

            isOccupied = true;
            break;
        }
        i++;

    }
    return isOccupied;
}