#include <iostream>
#include <cmath>    // For sin() and cos()
#include <iomanip>  // For setting output width

using namespace std;

int main() {
    const int amplitude = 10;          // Amplitude of the wave
    const int frequency = 1;           // Frequency of the wave (number of cycles in the range)
    const double pi = 3.141592653589793;
    const int steps = 100;             // Number of steps in one cycle of the wave

    cout << "Sine and Cosine Wave Display\n";
    cout << "Angle\tSine\t\tCosine\n";
    cout << "---------------------------------------\n";
    
    for (int i = 0; i <= steps; ++i) {
        // Calculate angle in radians for each step
        double angle = 2 * pi * frequency * i / steps;
        
        // Calculate sine and cosine values, scaled by amplitude
        double sineVal = amplitude * sin(angle);
        double cosineVal = amplitude * cos(angle);

        // Print angle and corresponding sine/cosine values
        cout << setw(5) << i * (360 / steps) << "\t";    // Display angle in degrees
        cout << setw(8) << sineVal << "\t" << setw(8) << cosineVal << "\n";
    }

    return 0;
}