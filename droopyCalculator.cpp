#include <iostream>
#include <fstream>

int main(int argc, char const *argv[]) {

  // Getting information from text file

  std::ifstream ifs;

  ifs.open("droopyAverage.txt");

  double droopyTime;
  double actualTime;

  double differenceDroopy;
  double currentDifference;

  std::cout << "Enter Droopy Time" << '\n';
  std::cin >> droopyTime;

  std::cout << "Enter Actual Time" << '\n';
  std::cin >> actualTime;

  differenceDroopy = actualTime - droopyTime;
  ifs >> currentDifference;

  ifs.close();

  // Writing information to the file

  std::ofstream ofs;

  ofs.open("droopyAverage.txt");

  if (currentDifference == 0) {
    std::cout << "The current Droopy average is: " << currentDifference << " minutes and the added Droopy difference is: " << differenceDroopy << " minutes, making the total Droopy Difference: " << differenceDroopy <<" minutes" << '\n';
    ofs << differenceDroopy;
  } else {
    std::cout << "The current Droopy average is: " << currentDifference << " minutes and the added Droopy difference is: " << differenceDroopy << " minutes, making the total Droopy Difference: " << ((differenceDroopy + currentDifference)/2) <<" minutes" << '\n';
    ofs << ((differenceDroopy + currentDifference)/2);
  }

  ofs.close();

  // Screw you droopy I spent an hour on this

  std::cout << "Thank you for using Droopy Calculator" << '\n';

  return 0;
}
