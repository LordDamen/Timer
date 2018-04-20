// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>


using namespace std;

int main()
{
	// get start time
	auto start = chrono::steady_clock::now();

	for (int i = 0; i < 2e10; i++)
	{
		cout << ":) :( ";
	}
	auto end = chrono::steady_clock::now();

	double elapsed_time_ns = double(chrono::duration_cast<::chrono::nanoseconds> (end - start).count());

	cout << "Elapsed Time (s)" << elapsed_time_ns / 1e9 << endl;

	system("pause");
    return 0;
}

