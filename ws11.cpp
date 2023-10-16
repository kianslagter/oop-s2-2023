#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// vector of int.
// used to store the records
typedef vector<int> Records;
// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
 private:
  fstream _file;
  string _filename;

 public:
  RecordsManager(string filename) : _filename(filename) {}
  void read(Records& records) {
    _file.open(_filename, ios::in);
    if (_file.is_open()) {
      string line;
      while (std::getline(_file, line)) {
        try {
          records.push_back(stoi(line));
        } catch (const invalid_argument& ia) {
          cerr << "Invalid argument when reading the file: " << _filename
               << endl;
          exit(1);
        } catch (const out_of_range& oor) {
          cerr << "Out of range when reading the file: " << _filename << endl;
          exit(1);
        }
      }
      _file.close();
    } else {
      cerr << "Unable to open file: " << _filename << endl;
      exit(1);
    }
  }
};
int main() {
  // RecordsManager receordM("test_clean.txt");
  RecordsManager receordM("test_corrupt1.txt");
  // RecordsManager receordM("test_corrupt2.txt");
  Records myRecords;
  // reads records
  receordM.read(myRecords);
  // calculate and print out the sum
  int sum = 0;
  for (int i = 0; i < myRecords.size(); i++) {
    sum += myRecords[i];
  }
  cout << sum << endl;
  return 0;
}
