// StreamingData.cpp is a C++ program that calculates the amount of data used during streaming based on the bitrate and duration of the stream. The program prompts the user for the streaming bitrate in megabits per second and the duration in minutes, then computes the total data used in both megabytes and gigabytes.
// Each //line in a function body is the pseudocode step it implements.
#include <iostream>
using namespace std;

double inputBitrate();
//read streaming bitrateMbps
double inputMinutes();
//read durationInMinutes
double computeDataMB(double bitrateMbps, double durationInMinutes);// returns dataMB
void display(double dataMB, double dataGB);
int main()
{
	double bitrateMbps, durationInMinutes, dataMB, dataGB;
	//shows te result
	//CALL inputBitrate RETURNING bitrateMbps
	bitrateMbps = inputBitrate();
	//CALL inputMinutes RETURNING durationInMinutes
	durationInMinutes = inputMinutes();
	//CALL computeDataMB with bitrateMbps and durationInMinutes RETURNING dataMB and dataGB
	dataMB = computeDataMB(bitrateMbps, durationInMinutes);
	dataGB = dataMB / 1024;
	//CALL display dataGB and dataMB
	display(dataMB, dataGB);

	return 0;
}

double inputBitrate()
{ 
//DISPLAY prompt for the streaming bitrate in megabits per second
cout << "Enter the streaming bitrate in megabits per second: ";
//READ bitrateMbps
double bitrateMbps;
cin >> bitrateMbps;
//RETURN bitrateMbps
return bitrateMbps;
}

double inputMinutes()
{
//DISPLAY prompt for duration in minutes
cout << "Enter the duration in minutes: ";
//READ durationInMinutes
double durationInMinutes;
cin >> durationInMinutes;
//RETURN durationInMinutes
return durationInMinutes;
}

double computeDataMB(double bitrateMbps, double durationInMinutes)
{
//COMPUTE durationInSeconds as durationInMinutes * 60       (1 minute = 60 seconds)
double durationInSeconds = durationInMinutes * 60;
//COMPUTE totalMb as bitrateMbps * Totalsecond
double totalMb = bitrateMbps * durationInSeconds;
//COMPUTE dataMB as totalMb / 8                          (1 Megabyte = 1 Megabit)
double dataMB = totalMb / 8;
//COMPUTE dataGB as dataMB / 1024                        (1 Gigabyte = 1024 Megabyte)
double dataGB = dataMB / 1024;
//RETURN dataMB
return dataMB;
}

void display(double dataMB, double dataGB)
{
//DISPLAY dataMB as data used in Megabytes
cout << "Data used: " << dataMB << " MB" << endl;
//DISPLAY dataGB as data used in Gigabytes
cout << "Data used: " << dataGB << " GB" << endl;
}