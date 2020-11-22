#include <iostream>

using namespace std;

int main()
{
    int number_of_pods, peas_per_pod, total_peas;

    cout << "press return after entering a number.\n";
    cout << "enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "enter the numver of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "if you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << " and ";
    cout << peas_per_pod;
    cout << " peas in each pod,then \n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";

    return 0;
}

/**
% g++ -o peas_pod peas_pod.cpp
% ./peas_pod
press return after entering a number.
enter the number of pods:
10
enter the numver of peas in a pod:
8
if you have 10 pea pods
 and 8 peas in each pod,then
you have 80 peas in all the pods.

c++11版本编译
 g++ -o peas_pod -std=c++11 peas_pod.cpp
*/
