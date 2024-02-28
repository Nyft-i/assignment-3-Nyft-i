// PHYS 30762 Programming in C++
// Assignment 3
// Practice with C++ classes and their interactions

#include"particle.h"

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
  particles.push_back(particle("Electron", 0.5110, -1, 1000, 3.33564095e-6));

  particles[0].print_data();
  particles[0].make_antiparticle();
  particles[0].print_data();
  particles[0].make_antiparticle();
  particles[0].print_data();
  particles[0].make_antiparticle();
  
  // Create the following particles: 
  // two electrons, four muons, three taus, one antielectron, one antimuon, one antitau 
  // Use the parameterised constructor

  // Print out the data from all the particles (put them in a vector)

  // Create the following detectors: a tracker, a calorimeter, a muon chamber

  // Pass the list of particles into each detector

  // Print a summary of how many particles were detected
  
  return 0;
}