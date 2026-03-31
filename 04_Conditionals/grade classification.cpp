// Grade Classification Based on Marks
 #include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks: " << endl;
    cin >> marks;
    if (marks >= 90 && marks <=100) {
        cout << "Grade A";
    }
    else if (marks >= 75 && marks <= 89) {
        cout << "Grade B";
    }
    else if (marks >= 50 && marks <= 74) {
        cout  << "Grade C";
    }
    else if (marks < 50) {
        cout << "Grade F";
    }
    else
    {
        cout << "Invalid Score";
    }
    return 0;
}
