// PHYS 30762 Programming in C++
// Assignment 3
// Practice with C++ classes and their interactions

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using std::string;
using std::vector;

// Beginning of particle class
class particle
{
private:
  string particle_type;
  double rest_mass;
  int charge; // This normally would not be an integer but this class is only for leptons, so therefore it is just +/-1
  double velocity;
  double beta_value;

  const double light_speed = 2.99792458e8;
public:
  // Constructors
  particle(){};
  // Parameterised constructor. con_ prefix indicates constructor variable.
  particle(string con_type, double con_rest_mass, int con_charge, double con_velocity, double con_beta_value);

  // Destructor
  ~particle();

  // Getter functions (accessors) to 
  // This should include function returning beta value 
  string get_type(){return particle_type;}
  double get_rest_mass(){return rest_mass;}
  int get_charge(){return charge;}
  double get_velocity(){return velocity;}
  double get_beta(){return beta_value;}


  // Setter functions, to change value of data members
  // Make sure you check input validity before changing something
  // Hint: you can use the input checking functions you used in assignment 1

  // Function to print info about a particle
  void print_data();

};

// Implementation of parametised constructor.
particle::particle(string con_type, double con_rest_mass, int con_charge, double con_velocity, double con_beta_value)
{
  particle_type = con_type;
  rest_mass = con_rest_mass;
  charge = con_charge;
  velocity = con_velocity;
  beta_value = con_beta_value;
}

// Destructor implementation
particle::~particle()
{
  // Not currently sure what to put here.
}

// Implementation of print_data function 
void particle::print_data()
{
  std::cout<<"Type: "<<particle_type<<std::endl;
  std::cout<<"Rest Mass (MeV): "<<rest_mass<<std::endl;
  std::cout<<"Charge: "<<charge<<std::endl;
  std::cout<<"Velocity: "<<velocity<<std::endl;
  std::cout<<"Beta Value: "<<beta_value<<std::endl;
}

// End of particle class and associated member functions

// Beginning of detector class

// Functionalities needed, in addition to constructor/destructor/setters/getters (see slides on BB):
// - write a function that takes a particle 
//   and returns a bool and a print-out on whether this type of detector detected the particle
//   depending on the detector/particle combination (see slides on BB)
// - have data members that keep track of how many particles were detected by this particular detector, 
//   and of which type
// - write a function (accessor) that prints how many particles passed through this detector

// End of detector class

// Main program
int main()
{
  vector<particle> particles;
  particles.push_back(particle("Electron", 0.5110, -1, 1000, 3.33564095e-6));

  particles[0].print_data();
  // Create the following particles: 
  // two electrons, four muons, three taus, one antielectron, one antimuon, one antitau 
  // Use the parameterised constructor

  // Print out the data from all the particles (put them in a vector)

  // Create the following detectors: a tracker, a calorimeter, a muon chamber

  // Pass the list of particles into each detector

  // Print a summary of how many particles were detected

  return 0;
}