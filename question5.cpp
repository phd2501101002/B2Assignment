#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// TODO: Define Sensor struct
// struct Sensor {
// };

void print_sensor(int index, int id, double temperature, double voltage, const char* status) {
    cout << "Sensor[" << index << "]: "
         << "id=" << id << ", "
         << "temperature=" << temperature << ", "
         << "voltage=" << voltage << ", "
         << "status=" << status << "\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    ifstream input(argv[1]);
    if (!input) {
        cerr << "Error opening " << argv[1] << endl;
        return 1;
    }

    int num_sensors;
    input >> num_sensors;

    const int MAX_SENSORS = 10;

    // TODO: Create an array of Sensor

    // TODO: Read sensor data from input
    // for (int i = 0; i < num_sensors; i++) {
    // }

    // TODO: Iterate using a pointer and print sensor data


    return 0;
}
