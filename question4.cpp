#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// TODO: Define TaylorTerm struct
// struct TaylorTerm {

// };

void print_taylor_term(int index, int order, double coeff, double value) {
    cout << "Term[" << index << "]: "
         << "order=" << order << ", "
         << "coeff=" << coeff << ", "
         << "value=" << value << "\n";
}

void print_taylor_result(const char* function_name, double x,
                         int terms, double approximation) {
    cout << "Approximation of " << function_name
         << "(x) at x=" << x
         << " with " << terms << " terms: "
         << approximation << "\n";
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

    double x;
    int terms;
    input >> x >> terms;

    // TODO: Create an array of TaylorTerm

    double approximation = 0.0;

    // TODO: Compute each Taylor term and store in array
    // for (int k = 0; k < terms; k++) {
    // }

    // TODO: Print final approximation


    return 0;
}
