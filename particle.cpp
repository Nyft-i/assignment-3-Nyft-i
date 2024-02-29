#include"particle.h"

#include<string>
using std::string;

// Parameterised constructor. con_ prefix indicates constructor variable.
particle::particle(string con_type, double con_rest_mass, int con_charge, double con_velocity, double con_beta_value)
{
  particle_type = con_type;
  rest_mass = con_rest_mass;
  charge = con_charge;
  velocity = con_velocity;
  beta_value = con_beta_value;
}

// Destructor
particle::~particle(){}

// Getter functions (accessors) to 
// This should include function returning beta value 
std::string particle::get_type(){return particle_type;}
double particle::get_rest_mass(){return rest_mass;}
int particle::get_charge(){return charge;}
double particle::get_velocity(){return velocity;}
double particle::get_beta(){return beta_value;}

// Setter functions, to change value of data members
// Make sure you check input validity before changing something
// Hint: you can use the input checking functions you used in assignment 1
void particle::set_type(std::string set_type){particle_type = set_type;}
void particle::set_rest_mass(double set_rest_mass){rest_mass = set_rest_mass;}
void particle::set_charge(int set_charge){charge = set_charge;}
// These two need special validation beyond the data-type.
void set_velocity(double set_velocity){}
void set_beta(double set_beta_value){}

// Implementation of print_data function 
void particle::print_data()
{
  std::cout<<"Type: "<<particle_type<<std::endl;
  std::cout<<"Rest Mass (MeV): "<<rest_mass<<std::endl;
  std::cout<<"Charge: "<<charge<<std::endl;
  std::cout<<"Velocity: "<<velocity<<std::endl;
  std::cout<<"Beta Value: "<<beta_value<<std::endl;
}

// Overloaded function to take a particle name if the user enters it or if they do not it just changes the name to "anti-whateveritwasbefore"
void particle::make_antiparticle(string new_type)
{
  particle_type = new_type;
  charge = charge * -1;
}
void particle::make_antiparticle()
{
  // Changes the name if no name is given to be anti- or not.
  // Doesn't really work for instance if the starting particle is a positron, as an electron would be an anti-positron, which isn't technically incorrect.
  string prefix{"anti-"};
  if(particle_type.rfind(prefix, 0) == 0)
  {
    particle_type.erase(0, prefix.length());
  }
  else
  {
    particle_type = "anti-" + particle_type;
  }
  charge = charge * -1;
}

