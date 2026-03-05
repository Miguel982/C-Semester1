#include <iostream>
#include <array>

using namespace std;

void sortArray(array<int, 200>);
void initializeArray(array<int, 200>);
void findHighestGrades(array<int, 200>, int);
void findLowestGrades(array<int, 200>, int);
void findAverageGrade(array<int, 200>, int);
void findMedianGrade(array<int, 200>, int);
void findAmountOfA(array<int, 200>);
void findAmountOfB(array<int, 200>);
void findAmountOfC(array<int, 200>);
void findAmountOfD(array<int, 200>);
void findAmountOfF(array<int, 200>);

//Finds the number of students who got the inputed grade letter
void findAmountOfGrade(array<int, 200>, char);

int main(){

    int numOfStudents;
    int userinput;

    cout << "How many students grades would you like to input?" << endl;
    cin >> numOfStudents;

    array<int, 200> studentGrades;
    initializeArray(studentGrades);

    sortArray(studentGrades);

    while(true) {
        
        cout << "Select an option:" << endl;
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

        cin >> userinput;

        switch(userinput){
            case 0:
                cout << "Thank you for using our program :)";
                return;

            case 1:
                findHighestGrades(studentGrades, numOfStudents);
                break;
            
            case 2:
                findLowestGrades(studentGrades, numOfStudents);
                break;

            case 3:
                findAverageGrade(studentGrades, numOfStudents);
                break;
                
            case 4:
                findMedianGrade(studentGrades, numOfStudents);
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

//Sorts array from highest to lowest (Bubble Sort)
void sortArray(array<int, 200> array){
    for(int i = 0; i < array.size(); i++){
        for(int j = i + 1; j < array.size()){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

//Used so that the 0's in the initialized array are not confused with actual grades
void initializeArray(array<int, 200> array){
    for(int i = 0; i < array.size(); i++){
        array[i] = -1;
    }
}

//Prints at Max 4 grades
void findHighestGrades(array<int, 200> grades, int numStudents){
    cout << "These are the highest grades:" << endl;
    
    int limit = numStudents >= 4? 4 : numStudents;

    for(int i = 0 ; i < limit; i++){
        cout << grades[i] << endl;
    }
}

//Prints at Max 4 grades
void findLowestGrades(array<int, 200> grades, int numStudents){
    cout << "These are the lowest grades:" << endl;

    int limit = numStudents >= 4? 4 : numStudents;
    int start = grades.size() - 1;
    
    for(int i = start ; i > (start - numStudents); i--){
        cout << grades[i] << endl;
    }
}

void findAverageGrade(array<int, 200> grades, int numStudents){
    int sum = 0;

    for(int grade : grades){
        if(grade >= 0){
            sum += grade;
        }
    }

    cout << "The average of all the students is " << sum / (numStudents * 1.0)  << endl;
}

//Note: the median is the middle of the sorted array (odd number of grades)
//      or is the average of the 2 middle grades (even number of grades)
void findMedianGrade(array<int, 200> grades, int numStudents){
    bool isOdd = numStudents % 2 != 0 ? true : false;

    cout << "The median grade is: ";

    if(isOdd){
        int pos = numStudents / 2;

        cout << grades[pos] << endl;

    }
    else{
        int pos = numStudents / 2;
        int average = (grades[pos] + grades[pos - 1]) / 2.0;

        cout << average;
    }
}

void findAmountOfA(array<int, 200> grades){
    int upperLim = 100;
    int lowerLim = 90;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " who got an A";
}

void findAmountOfB(array<int, 200> grades){
    int upperLim = 89;
    int lowerLim = 80;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " who got an B";
}

void findAmountOfC(array<int, 200> grades){
    int upperLim = 79;
    int lowerLim = 65;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " who got an C";
}

void findAmountOfD(array<int, 200> grades){
    int upperLim = 64;
    int lowerLim = 50;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " who got an D";
}

void findAmountOfF(array<int, 200> grades){
    int upperLim = 49;
    int lowerLim = 0;
    int numOfGrade = 0;

    for(int grade : grades){
        if(grade <= upperLim && grade >= lowerLim){
            numOfGrade++;
        }
    }

    cout << "There are " << numOfGrade << " who got an F";
}

void findAmountOfGrade(array<int, 200> grades, char gradeLetter){
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

    cout << "There are " << numOfGrade << " who got an " << gradeLetter << endl;
}