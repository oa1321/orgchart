/**
 * Demo file for the exercise on iterators
 *
 * @author Tal Zichlinsky
 * @since 2022-02
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "OrgChart.hpp"
using namespace ariel;

int main() {
  OrgChart organization;
  cout << "welcome to organization meneger" << endl;
  cout << "please enter a root name(organization head)" << endl;
  string root_name;
  cin >> root_name;
  organization.add_root(root_name);
  while(1){
    cout << "please enter a command" << endl << "1. add a sub" << endl << "2. print" << endl << "3. exit" << endl;
    int commands;
    cin >> commands;
    string parent_name;
    string child_name;
    switch(commands){
      case 1:
        cout << "please enter a parent name" << endl;
        cin >> parent_name;
        cout << "please enter a child name" << endl;
        cin >> child_name;
        organization.add_sub(parent_name, child_name);
        break;
      case 3:
        return 0;
        break;
      case 2:
        cout << organization;
      default:
        break;
    }
  }
}
