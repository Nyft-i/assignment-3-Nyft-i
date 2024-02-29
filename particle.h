#ifndef PARTICLE_H_INCLUDED
#define PARTICLE_H_INCLUDED

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using std::string;

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
  particle(string con_type, double con_rest_mass, int con_charge, double con_velocity);

  // Destructor
  ~particle();

  // Getter functions (accessors) to 
  // This should include function returning beta value 
  string get_type();
  double get_rest_mass();
  int get_charge();
  double get_velocity();
  double get_beta();


  // Setter functions, to change value of data members
  // Make sure you check input validity before changing something
  // Hint: you can use the input checking functions you used in assignment 1
  void set_type(string set_type);
  void set_rest_mass(double set_rest_mass);
  void set_charge(int set_charge);
  // These two need special validation beyond the data-type.
  void set_velocity(double set_velocity);
  void set_beta(double set_beta_value);

  // Function to print info about a particle
  void print_data();
  void make_antiparticle(string new_type);
  void make_antiparticle();
};

#endif