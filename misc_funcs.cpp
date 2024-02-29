// Using this as a way to explore how header files work and having functions outside of classes
// I wanted to use some of the functions from previous assignments
// but they weren't really relevant to specifically copy to the new one
// So this way i can reuse them as much as i like under the namespace i created.

#include<string>
using std::string;

namespace misc_funcs
{
  string tester()
  {
    string not_number{""};
    return not_number;
  }
}