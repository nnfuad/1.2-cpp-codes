#include <iostream>
#include <string>

using namespace std;

class StringFinder {
private:
    string strings[100];
    string uniqueString[100];
    int n;                    

public:
    
    StringFinder(string arr[], int size) {
        n = size;
        for (int i = 0; i < n; ++i) {
            strings[i] = arr[i];
        }
    }

    
    string findThirdLargest() {
        
        int uniqueCount = 0;
        for (int i = 0; i < n; ++i) {
            bool isDuplicate = false;
            for (int j = 0; j < uniqueCount; ++j) {
                if (strings[i] == uniqueString[j]) {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate) {
                uniqueString[uniqueCount++] = strings[i];
            }
        }

        
        if (uniqueCount < 3) {
            return "Not enough unique strings to find the third largest.";
        }

        
        for (int i = 0; i < uniqueCount - 1; ++i) {
            for (int j = 0; j < uniqueCount - i - 1; ++j) {
                if (uniqueString[j] < uniqueString[j + 1]) {
                    string temp = uniqueString[j];
                    uniqueString[j] = uniqueString[j + 1];
                    uniqueString[j + 1] = temp;
                }
            }
        }

        return uniqueString[2]; 
    }
};

int main() {
    
    string arr[100] = {"apple", "banana", "orange", "guava", "grape", "banana", "apple"};
    int n = 7; 

    
    StringFinder stringFinder(arr, n);

    
    string thirdLargest = stringFinder.findThirdLargest();
    cout << "The third largest string is: " << thirdLargest << endl;

    return 0;
}