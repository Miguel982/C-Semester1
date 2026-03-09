#include <iostream>
#include <vector>
#include <random>

using namespace std;

//Choose between manually inputing grades or randomly asssigning grades
bool const randomGrades = false;

void sortArray(vector<int>&);
void printArray(vector<int>);
void initializeArray(vector<int>&);
void findHighestGrades(vector<int>);
void findLowestGrades(vector<int>);
void findAverageGrade(vector<int>);
void findMedianGrade(vector<int>);
void findAmountOfA(vector<int>);
void findAmountOfB(vector<int>);
void findAmountOfC(vector<int>);
void findAmountOfD(vector<int>);
void findAmountOfF(vector<int>);

//Finds the number of students who got the inputed grade letter
void findAmountOfGrade(vector<int>, char);

int main(){

    int numOfStudents;
    int userinput;

    //Makes sure the user enters a number between 0 and 200
    while(true){
        cout << "How many students grades would you like to input?" << endl;
        cin >> numOfStudents;

        if(numOfStudents < 0 || numOfStudents > 200){
            cout << "Please enter an amount between 0 and 200\n" << endl;
            continue;
        }

        break;
    }

    vector<int> studentGrades(numOfStudents);

    if(randomGrades){

        //Sets random grades between 0 and 100
        initializeArray(studentGrades);
    }
    else{
        for(int i = 0; i < numOfStudents; i++){
            cout << "Input grade " << i + 1 << ": ";
            cin >> studentGrades[i];
        }
    }
    
    printArray(studentGrades);
    sortArray(studentGrades);

    while(true) {
        
        cout << "\n----------------------------" << endl;
        cout << "1) 4 Highest Grades" << endl;
        cout << "2) 4 Lowest Grades" << endl;
        cout << "3) Average Grade" << endl;
        cout << "4) Median Grade" << endl;
        cout << "5) Number of A Grades" << endl;
        cout << "6) Number of B Grades" << endl;
        cout << "7) Number of C Grades" << endl;
        cout << "8) Number of D Grades" << endl;
        cout << "9) Number of F Grades" << endl;
        cout << "0) Exit" << endl;
        cout << "Select an option:" << endl;

        cin >> userinput;
        cout << endl;

        switch(userinput){
            case 0:
                cout << "Thank you for using our program :)";
                return 0;

            case 1:
                findHighestGrades(studentGrades);
                break;
            
            case 2:
                findLowestGrades(studentGrades);
                break;

            case 3:
                findAverageGrade(studentGrades);
                break;
                
            case 4:
                findMedianGrade(studentGrades);
                break;
                
            case 5:
                findAmountOfA(studentGrades);
                break;
                
            case 6:
                findAmountOfB(studentGrades);
                break;
                
            case 7:
                findAmountOfC(studentGrades);
                break;
                
            case 8:
                findAmountOfD(studentGrades);
                break;
                
            case 9:
                findAmountOfF(studentGrades);
                break;
            
            default:
                cout << "Please selcet a valid option" << endl;
        }
    }
    
    return 0;
}

//Sorts array from lowest to highest (Bubble Sort)
void sortArray(vector<int>& array){
    for(int i = 0; i < array.size(); i++){
        for(int j = i + 1; j < array.size(); j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

//Used so that the 0's in the initialized array are not confused with actual grades
void initializeArray(vector<int>& array){
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(0, 100);

    for(int i = 0; i < array.size(); i++){
        array[i] = randomInt(engine);
    }
}


//Prints entire vector
void printArray(vector<int> array){
    
    cout << "\nBelow is the list of grades:" << endl;

    for(int i = 0; i < array.size() ; i++){

        if(i < array.size() - 1) {
            cout << array[i] << ", ";
        }
        else{
            cout << array[i] << endl;
        }
    }
}

//Prints at Max 4 grades
void findLowestGrades(vector<int> grades){
    int numStudents = grades.size();
    cout << "These are the lowest grades:" << endl;
    
    int limit = numStudents >= 4? 4 : numStudents;

    for(int i = 0 ; i < limit; i++){
        cout << grades[i] << endl;
    }
}

//Prints at Max 4 grades
void findHighestGrades(vector<int> grades){
    int numStudents = grades.size();
    cout << "These are the highest grades:" << endl;

    int limit = numStudents >= 4? 4 : numStudents;
    int start = grades.size() - 1;
    
    for(int i = start ; i > (start - limit); i--){
        cout << grades[i] << endl;
    }
}

void findAverageGrade(vector<int> grades){
    int numStudents = grades.size();
    int sum = 0;

    for(int grade : grades){
        sum += grade;
    }

    cout << "The average of all the students is " << sum / (numStudents * 1.0)  << endl;
}

void findMedianGrade(vector<int> grades){
    int numStudents = grades.size();
    
    bool isOdd = numStudents % 2 != 0;

    cout << "The median grade is: ";

    if(isOdd){
        int pos = numStudents / 2;
        cout << grades[pos] << endl;

    }
    else{
        int pos = numStudents / 2;
        double average = (grades[pos] + grades[pos - 1]) / 2.0;

        cout << average << endl;
    }
}

void findAmountOfA(vector<int> grades){
    int upperLim = 100;
    int lowerLim = 90;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " student(s) who got an A";
}

void findAmountOfB(vector<int> grades){
    int upperLim = 89;
    int lowerLim = 80;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " student(s) who got an B";
}

void findAmountOfC(vector<int> grades){
    int upperLim = 79;
    int lowerLim = 65;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " student(s) who got an C";
}

void findAmountOfD(vector<int> grades){
    int upperLim = 64;
    int lowerLim = 50;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " student(s) who got an D";
}

void findAmountOfF(vector<int> grades){
    int upperLim = 49;
    int lowerLim = 0;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " student(s) who got an F";
}

void findAmountOfGrade(vector<int> grades, char gradeLetter){
    int upperLim, lowerLim;
    int numOfGrade = 0;

    switch (gradeLetter)
    {
        case 'A': 
            upperLim = 100;
            lowerLim = 90;
            break;

        case 'B': 
            upperLim = 89;
            lowerLim = 80;
            break;

        case 'C': 
            upperLim = 79;
            lowerLim = 65;
            break;

        case 'D': 
            upperLim = 64;
            lowerLim = 50;
            break;

        case 'F': 
            upperLim = 49;
            lowerLim = 0;
            break;
    }

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " student(s) who got an " << gradeLetter << endl;
}