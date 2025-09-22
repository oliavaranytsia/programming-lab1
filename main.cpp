#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int task;
    cout << "select your task (1 or 2)" << endl;
    cin >> task;
    if (task == 1) {
        double xA, yA, xB, yB, xC, yC;
        cout << "==TASK #1==" << endl;
        cout << "write a x1 " << endl;
        cin >> xA;
        cout << "write a y1 " << std::endl;
        cin >> yA;
        cout << "write b x2 " << std::endl;
        cin >> xB;
        cout << "write b y2 " << std::endl;
        cin >> yB;
        cout << "write c x3 " << std::endl;
        cin >> xC;
        cout << "write c y3 " << std::endl;
        cin >> yC;
        double distance_to_b = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
        double distance_to_c = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
        if (distance_to_b > distance_to_c) {
            cout << "the closest point is C with distance:" << distance_to_c << endl;
        } else if (distance_to_b < distance_to_c) {
            cout << "the closest point is B with distance:" << distance_to_b << endl;
        } else { cout << "distance is equal " << endl; }
    } else if (task == 2) {
        cout << "" << endl;
        cout << "===========" << endl;
        cout << "==TASK #2==" << endl;
        cout << "===========" << endl;
        cout << "" << endl;

        double x, result;
        cout << "write a number: " << endl;
        cin >> x;
        if (x <= 7) {
            result = -3 * x + 9;
        } else {
            result = 1 / (x - 7);
        }
        cout << "Function = " << result << endl;
    } else {
        cout << "there is no such task" << endl;
    }
}
