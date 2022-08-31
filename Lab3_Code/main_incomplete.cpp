// main_incomplete.cpp
// Includes testing of the Hash and 2D vector method
#include "OccupancyMapHash.h"
#include "OccupancyMapVec.h"
#include <iostream>

//-----------------------------------------------------------------------------
int main(){
  // Comprehensive test
  // A single instance of each derived class is created, and its performance is evaluated.
  COccupancyMapHash myMapHash;
  myMapHash.EvalPerformance( "ExampleObservations_Small.txt", "ExampleNotObserved_Small.txt" );
  COccupancyMapVec myMap2DVec;
  myMap2DVec.EvalPerformance( "ExampleObservations_Small.txt", "ExampleNotObserved_Small.txt" );
  
  return 0;
}

