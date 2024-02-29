#include"particle.h"

#include<string>
#include<algorithm>
using std::string;

// Parameterised constructor. con_ prefix indicates constructor variable.
particle::particle(string con_type, double con_rest_mass, int con_charge, double con_velocity)
{
  std::transform(con_type.begin(), con_type.end(), con_type.begin(), [](unsigned char c){return std::tolower(c);}); // Ensures that case information is ignored.
  particle_type = con_type;
  rest_mass = con_rest_mass;
  charge = con_charge;
  
  // Now lets check to make sure the velocity isn't greater than the speed of light
  if(con_velocity>light_speed)
  {
    // If the velocity is too big, just set it to a default value of zero
    velocity = 0;
    beta_value = 0;
  }
  else
  {
    // Otherwise set it to the constructor value.
    velocity = con_velocity;
    beta_value = velocity/light_speed;
  }
}

// Destructor
particle::~particle(){}

// Getter functions (accessors) to 
std::string particle::get_type(){return particle_type;}
double particle::get_rest_mass(){return rest_mass;}
int particle::get_charge(){return charge;}
double particle::get_velocity(){return velocity;}
double particle::get_beta(){return beta_value;}

// Setter functions, to change value of data members
void particle::set_type(std::string set_type){particle_type = set_type;}
void particle::set_rest_mass(double set_rest_mass){rest_mass = set_rest_mass;}
void particle::set_charge(int set_charge){charge = set_charge;}
// These two need special validation beyond the data-type.
void particle::set_velocity(double set_velocity)
{
  if(set_velocity>light_speed)
  {
    // If the velocity is too big, just set it to a default value of zero
    velocity = 0;
    beta_value = 0;
  }
  else
  {
    // Otherwise set it to the constructor value.
    velocity = set_velocity;
    beta_value = velocity/light_speed;
  }
}
void particle::set_beta(double set_beta_value)
{
  if(set_beta_value>1)
  {
    // If the velocity is too big, just set it to a default value of zero
    velocity = 0;
    beta_value = 0;
  }
  else
  {
    // Otherwise set it to the constructor value.
    beta_value = set_beta_value;
    velocity = beta_value*light_speed;

  }
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

