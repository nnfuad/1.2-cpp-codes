#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;
class Movie {
public:
	string Name;
	string Genre;
	float Rating;

	Movie(string name, string genre, float rating) {
		Name = name;
		Genre = genre;
		Rating = rating;
	}
	Movie()
	{
		Name = "";
		Genre = "";
		Rating = 0;
	}
	Movie(const Movie& original) {
		Name = original.Name;
		Genre = original.Genre;
		Rating = original.Rating;
	}
	Movie& operator=(const Movie& original) {
			Name = original.Name;
			Genre = original.Genre;
			Rating = original.Rating;
			
			return *this;
	}
};

int main()
{
	Movie movie1("The Dark Knight", "Action", 9.5);
	Movie movie2("The Lion King", "Animated", 8);

	Movie movie3;
	Movie movie4(movie1);
	movie4 = movie2;
	//movie4.operator=(movie2); 

	Movie movie5 = movie1;
	movie5 = movie2;

	cin.get();
}