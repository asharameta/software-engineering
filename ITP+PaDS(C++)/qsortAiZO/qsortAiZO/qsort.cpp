////
////  main.cpp
////  Sortowanie Shell
////
////  Created by Kiryl Lysiuk on 11/19/19.
////  Copyright © 2019 Kiryl Lysiuk. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <chrono>
//#include <ctime>
//
//using namespace std;
//
//void printArray(vector<int> arr, int n)
//{
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//vector<int> createVector(int arg, vector<int> arr, int n) {
//    if (arg == 0) {
//        for (int i = 0; i < n; i++) {
//            int num = rand() % 9;
//            arr.push_back(num);
//        }
//    }
//    else if (arg == 1) {
//        for (int i = 0; i < n; i++) {
//            int num;
//            cin >> num;
//            arr.push_back(num);
//        }
//    }
//    return arr;
//}
//
//vector<int> shellSort(vector<int> arr, int n)
//{
//    for (int gap = n / 2; gap > 0; gap /= 2)
//    {
//        for (int i = gap; i < n; i += 1)
//        {
//            int temp = arr[i];
//            int j;
//            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
//                arr[j] = arr[j - gap];
//            arr[j] = temp;
//        }
//    }
//    return arr;
//}
//
//vector<int> shellMain(vector<int> staticVec, int n, int steps) {
//    for (int from = 0; from < steps; from++) {
//        int hNumbers = 0;
//        vector<int> myVec;
//
//        for (int i = from; i < n; i += steps) {
//            myVec.push_back(staticVec[i]);
//            hNumbers++;
//        }
//        myVec = shellSort(myVec, hNumbers);
//        for (int i = from; i < n; i += steps) {
//            staticVec[i] = myVec[myVec.size() - hNumbers];
//            hNumbers--;
//        }
//    }
//    return staticVec;
//}
//
//void shellSortTest() {
//    int n;
//    vector<int> myVec;
//    cout << "How many elements: " << endl;
//    cin >> n;
//    cout << "Enter you array: " << endl;
//    myVec = createVector(1, myVec, n);
//    cout << "Your array: ";
//    printArray(myVec, n);
//
//    cout << "Indent 7: ";
//    myVec = shellMain(myVec, n, 7);
//    printArray(myVec, n);
//    cout << "Indent 5: ";
//    myVec = shellMain(myVec, n, 5);
//    printArray(myVec, n);
//    cout << "Indent 3: ";
//    myVec = shellMain(myVec, n, 3);
//    printArray(myVec, n);
//}
//
//auto mTime(vector<int> staticVec, int n, int st) {
//    auto t1 = std::chrono::high_resolution_clock::now();
//    shellMain(staticVec, n, st);
//    auto t2 = std::chrono::high_resolution_clock::now();
//    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
//    return duration;
//}
//
//int timeMeasure(int n) {
//    vector<int> myVec;
//    myVec = createVector(0, myVec, n);
//    cout << "<==================>" << endl;
//    cout << "Elements: " << n << ", Steps: 7, Spent Time: " << 0.000001 * mTime(myVec, n, 7) << endl;
//    cout << "Elements: " << n << ", Steps: 5, Spent Time: " << 0.000001 * mTime(myVec, n, 5) << endl;
//    cout << "Elements: " << n << ", Steps: 3, Spent Time: " << 0.000001 * mTime(myVec, n, 3) << endl;
//    return 0;
//}
//
//int main(int argc, const char* argv[]) {
//    int ans;
//    while (true) {
//        cout << "1. Shell Sort with your own array. " << endl;
//        cout << "2. Time test with random numbers. " << endl;
//        cout << "0. Exit. " << endl;
//
//        cin >> ans;
//
//        if (ans == 1) {
//            shellSortTest();
//        }
//        else if (ans == 2) {
//            timeMeasure(10000);
//            timeMeasure(100000);
//            timeMeasure(1000000);
//        }
//        else if (ans == 0) {
//            return 0;
//        }
//    }
//    return 0;
//}
