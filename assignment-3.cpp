// PHYS 30762 Programming in C++
// Assignment 3
// Practice with C++ classes and their interactions

// I've done my best to set this up such that 'make' should correctly generate the exe file required to run the program.

#include"particle.h"
#include"detector.h"
#include"misc_funcs.h"

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using std::string;
using std::vector;

// Main program
int main()
{
  vector<particle> particles;
  
  // Create the following particles: 
  // two electrons, four muons, three taus, one antielectron, one antimuon, one antitau 
  particles.push_back(particle("Electron", 0.5110, -1, 1000));
  particles.push_back(particle("Electron", 0.5110, -1, 1e10)); //proving that if the speed is too big it will get set to zero.
  particles.push_back(particle("Muon", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));
  particles.push_back(particle("", , ));



  // Print out the data from all the particles (put them in a vector)

  // Create the following detectors: a tracker, a calorimeter, a muon chamber

  // Pass the list of particles into each detector

  // Print a summary of how many particles were detected
  return 0;
}