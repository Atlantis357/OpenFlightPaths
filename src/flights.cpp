// Before we parse through the airplane data, we will initalize a map. The map will take the name of the airport as an input 
//and it will map out to a vector of pairs. The pairs will take a name of an airport and output a boolean. They will be false by default. 
// The program will parse through the the data line by line and look at the routes. When an airport A is connected to and Airport B, I would call Airport A
// on the main map which will give me access to the vector of pairs. I will call airport B on the vector of pair and set that to true, as
// those two airports will be connected. 
#include "flights.h"
#include "airport.h"
#include "graph.h"
#include <cmath>

// long double Flights::toRadians(const long double degree)
// {
//     // cmath library in C++
//     // defines the constant
//     // M_PI as the value of
//     // pi accurate to 1e-30
//     long double one_deg = (M_PI) / 180;
//     return (one_deg * degree);
// }

//  double Flights::distance(long double lat1, long double long1,
//                      long double lat2, long double long2)
// {
//     // Convert the latitudes
//     // and longitudes
//     // from degree to radians.
//     lat1 = toRadians(lat1);
//     long1 = toRadians(long1);
//     lat2 = toRadians(lat2);
//     long2 = toRadians(long2);
     
//     // Haversine Formula
//     long double dlong = long2 - long1;
//     long double dlat = lat2 - lat1;
 
//     long double ans = pow(sin(dlat / 2), 2) +
//                           cos(lat1) * cos(lat2) *
//                           pow(sin(dlong / 2), 2);
 
//     ans = 2 * asin(sqrt(ans));
 
//     // Radius of Earth in
//     // Kilometers, R = 6371
//     // Use R = 3956 for miles
//     long double R = 6371;
     
//     // Calculate the result
//     ans = ans * R;
 
//     return ans;
// }