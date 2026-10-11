// download_time.cpp  -  Lab 02 worked example: Download Time Calculator 
// Each // line in a function body is the pseudocode step it implements. 
#include <iostream> 
using namespace std;
double inputSize();
// reads file size (MB) 
double inputSpeed();
// reads speed (Mbps) 
double computeTime(double sizeMB, double speedMbps);  // returns seconds 
void   display(double seconds);
int main()
{
	double sizeMB, speedMbps, seconds;
	// shows the result 
  // CALL inputSize RETURNING sizeMB 
	sizeMB = inputSize();
	// CALL inputSpeed RETURNING speedMbps 
	speedMbps = inputSpeed();
	// CALL computeTime with sizeMB and speedMbps RETURNING seconds 
	seconds = computeTime(sizeMB, speedMbps);
	// CALL display with seconds
    display(seconds);

    return 0;
}

double inputSize()
{
    double sizeMB;
    // DISPLAY prompt for the file size in megabytes 
    cout << "Enter file size (MB)         : ";
    // READ sizeMB 
    cin >> sizeMB;
    // RETURN sizeMB 
    return sizeMB;
}

double inputSpeed()
{
    double speedMbps;
    // DISPLAY prompt for the connection speed in megabits per second 
    cout << "Enter connection speed (Mbps): ";
    // READ speedMbps 
    cin >> speedMbps;
    // RETURN speedMbps 
    return speedMbps;
}

double computeTime(double sizeMB, double speedMbps)
{
    // COMPUTE sizeMb as sizeMB x 8   (1 byte = 8 bits) 
    double sizeMb = sizeMB * 8.0;
    // COMPUTE seconds as sizeMb / speedMbps 
    double seconds = sizeMb / speedMbps;
    // RETURN seconds 
    return seconds;
}

void display(double seconds)
{
    // COMPUTE minutes as seconds / 60 
    double minutes = seconds / 60.0;
    // DISPLAY seconds as the download time in seconds 
    cout << "Estimated download time      : " << seconds << " seconds" << endl;
    // DISPLAY minutes as the download time in minutes 
    cout << "                             = " << minutes << " minutes" << endl;
}
	