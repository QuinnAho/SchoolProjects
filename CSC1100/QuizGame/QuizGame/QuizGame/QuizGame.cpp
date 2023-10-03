#include <iostream> 

#include <map> 

#include <random> 

#include <ctime> 

#include <cstdlib> 

#include <iomanip> 



using namespace std;



int main() {





    srand(time(nullptr));



    map<int, string> questionMap;



    //A nested map that contains all the options 1-4 for all the questions 1-10. 

    map<int, map<int, string>> multipleChoice;



    //Loops through ten times to run through all questions. 

    for (int i = 1; i < 11; i++) {



        string questionString, correctString, guessedString;

        int correctNum, guessedNum, questionCounter;



        //Uses the index to get the correct question number. 

        questionCounter = i;



        // Calculate the number of questions based on the size of the multipleChoice map 

        int numQuestions = 10; // Since I have 10 questions 



        // Generate a random number between 1 and the number of questions 

        int randomQuestion = (rand() % numQuestions) + 1;



        //sets all the possible multiple choices answers (1-4) for all the questions (1-10) 

        multipleChoice[1][1] = "Arctic Ocean";

        multipleChoice[1][2] = "Pacific Ocean";

        multipleChoice[1][3] = "Indian Ocean";

        multipleChoice[1][4] = "Atlantic Ocean";



        multipleChoice[2][1] = "London";

        multipleChoice[2][2] = "Berlin";

        multipleChoice[2][3] = "Paris";

        multipleChoice[2][4] = "Madrid";



        multipleChoice[3][1] = "Venus";

        multipleChoice[3][2] = "Mars";

        multipleChoice[3][3] = "Jupiter";

        multipleChoice[3][4] = "Saturn";



        multipleChoice[4][1] = "William Shakespeare";

        multipleChoice[4][2] = "Charles Dickens";

        multipleChoice[4][3] = "Jane Austen";

        multipleChoice[4][4] = "George Orwell";



        multipleChoice[5][1] = "Go";

        multipleChoice[5][2] = "Au";

        multipleChoice[5][3] = "Ag";

        multipleChoice[5][4] = "Ge";



        multipleChoice[6][1] = "Oxygen";

        multipleChoice[6][2] = "Carbon dioxide";

        multipleChoice[6][3] = "Nitrogen";

        multipleChoice[6][4] = "Hydrogen";



        multipleChoice[7][1] = "Steve Jobs";

        multipleChoice[7][2] = "Tim Berners-Lee";

        multipleChoice[7][3] = "Bill Gates";

        multipleChoice[7][4] = "Mark Zuckerberg";



        multipleChoice[8][1] = "Elephant";

        multipleChoice[8][2] = "Giraffe";

        multipleChoice[8][3] = "Blue Whale";

        multipleChoice[8][4] = "Lion";



        multipleChoice[9][1] = "Nucleus";

        multipleChoice[9][2] = "Ribosome";

        multipleChoice[9][3] = "Mitochondria";

        multipleChoice[9][4] = "Chloroplast";



        multipleChoice[10][1] = "Mount Kilimanjaro";

        multipleChoice[10][2] = "Mount Everest";

        multipleChoice[10][3] = "Mount McKinley";

        multipleChoice[10][4] = "Mount Fuji";



        //Map that acts as a key for all the correct choices. 

        map<int, int> correctChoice;

        correctChoice[1] = 4;

        correctChoice[2] = 3;

        correctChoice[3] = 2;

        correctChoice[4] = 1;

        correctChoice[5] = 2;

        correctChoice[6] = 2;

        correctChoice[7] = 2;

        correctChoice[8] = 3;

        correctChoice[9] = 3;

        correctChoice[10] = 2;



        //Map that displays all the questions 1 - 10. 

        questionMap[1] = "Which ocean is the biggest?";

        questionMap[2] = "What is the capital of France?";

        questionMap[3] = "Which planet is known as the Red Planet?";

        questionMap[4] = "Who wrote the play Romeo and Juliet?";

        questionMap[5] = "What is the chemical symbol for gold?";

        questionMap[6] = "Which gas do planets absorb from the atmosphere during photosynthesis?";

        questionMap[7] = "Who is credited with inventing the World Wide Web?";

        questionMap[8] = "What is the largest mammal in the world?";

        questionMap[9] = "What is the powerhouse of the cell?";

        questionMap[10] = "What is the tallest mountain in the world?";



        // Use randomQuestion to select a question and its correct answer 

        questionString = questionMap[randomQuestion];

        correctNum = correctChoice[randomQuestion];

        correctString = multipleChoice[randomQuestion][correctNum];



        cout << "Question No " << questionCounter << ": " << questionString << endl;

        cout << endl;



        // Display the multiple choice options 

        for (int i = 1; i <= 4; ++i) {

            cout << i << ". " << multipleChoice[randomQuestion][i] << endl;

        }

        cout << endl;



        cout << "Choose the correct answer (1, 2, 3, or 4): " << endl;

        cout << endl;



        cin >> guessedNum;



        cout << endl;



        //If user enters a number that is not 1 -4 give an error. 



        questionMap.erase(randomQuestion);

        multipleChoice.erase(randomQuestion);

        correctChoice.erase(randomQuestion);
 
        if (guessedNum < 1 || guessedNum > 4) {

            cout << "Invalid Choice" << endl;
            cout << endl;
        }

        else {

            guessedString = multipleChoice[randomQuestion][guessedNum];

            cout << "You have selected: " << guessedString << endl;

            cout << endl;

            if (guessedNum == correctNum) {

                cout << "Correct Choice!" << endl;

            }

            else {

                cout << "Incorrect Choice" << endl;
                cout << endl;

                cout << "The correct answer is: " << correctString << endl;

            }

        }




        cout << endl;

        cout << setfill('-') << setw(80) << "" << endl;

        cout << endl;



    }



    return 0;

}







