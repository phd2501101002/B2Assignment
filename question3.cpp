#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// TODO: Define Point struct if not given
// struct Point {
// };

void print_point_rotation(double x_before, double y_before,
                          double theta, double x_after, double y_after) {
    cout << "Before rotation: (x=" << x_before << ", y=" << y_before << ")\n";
    cout << "After rotation (θ=" << theta << " rad): "
         << "(x=" << x_after << ", y=" << y_after << ")\n";
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

    // TODO: Declare point, pivot, and angle variables
    
    // TODO: Read input from file: x, y, theta, px, py

    // TODO: Compute rotated coordinates around pivot

    // TODO: Print rotated point


    return 0;
}
