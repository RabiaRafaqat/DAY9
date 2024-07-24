#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "Enter the score (0-100): ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Score out of range" << endl;
    } else {
        switch (score / 10) {
            case 10:
            case 9:
                cout << "Grade: A" << endl;
                break;
            case 8:
                cout << "Grade: B" << endl;
                break;
            case 7:
                cout << "Grade: C" << endl;
                break;
            case 6:
                cout << "Grade: D" << endl;
                break;
            default:
                cout << "Grade: F" << endl;
                break;
        }
    }
  return 0;
}
