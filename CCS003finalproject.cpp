#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int Guess;
int Total;

class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string, string, string, string, int, int);
    void askQuestion();
};

int main()
{
    int totalWidth = 90;
    string title = "THE BEELINDA QUIZ";

    cout << right << setfill(' ') << setw(totalWidth) << title << endl;
    cout << "\nPress Enter to start " << "the quiz... " << endl;

    cin.get();

    string Name;
    int Age;

    cout << "\n'What we know is a drop, what we don't know is an ocean.' - Isaac Newton \n\n Enter your name/nickname: " << endl;
    getline(cin, Name);
    cout << endl;

    cout << "Enter your age: " << endl;
    cin >> Age;
    cout << endl;

    cout << "\nQuiz Mechanics: ";
    cout << "\n\nSubjects";
    cout << "\n\n1. Science";
    cout << "\n2. Math";
    cout << "\n3. English";
    cout << "\n4. History";
    cout << "\n5. Physical Education";

    cout << "\n\nThe questions in each subject is composed of 10 questions.\nEach question will have four multiple-choice options.\nEach question is worth 2 points and a total of 100.";
    
    string Respond;
    cout << "\n\nAre you ready to take the quiz, " << Name << "? (Yes or No): ";
    cin >> Respond;

    while (!(Respond == "yes" || Respond == "YES" || Respond == "Yes" || Respond == "ye" || Respond == "Ye" || Respond == "YE" ||
             Respond == "no" || Respond == "No" || Respond == "nO")) {
        cout << "Invalid input. Please enter 'Yes' or 'No': ";
        cin >> Respond;
    }

    if (Respond == "yes" || Respond == "YES" || Respond == "Yes" || Respond == "ye" || Respond == "Ye" || Respond == "YE") {
        cout << "\nGood Luck " << Name << "!\n";
    } else {
        cout << "\nSee you next time!\n";
        return 0;
    }

    Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;
 
	
	q1.setValues("Question 1: What is the chemical symbol for gold? ", "Au",
				"Ag", "Fe",
				"Hg", 1, 2);
	q2.setValues("Question 2: Which gas do plants primarily release during photosynthesis? ", "Oxygen",
				"Carbon Dioxide", "Nitrogen",
				"Hydrogen", 1, 2);
	q3.setValues("Question 3: What is the smallest unit of matter? ", "Atom",
				"Molecule", "Cell",
				"Electron", 1, 2);
	q4.setValues("Question 4: What force pulls objects toward the center of the Earth? ", "Magnetism",
				"Gravity", "Friction",
				"Tension", 2, 2);
	q5.setValues("Question 5: Which of the following is a renewable energy source? ", "Coal",
				"Natural Gas", "Solar Power",
				"Nuclear Energy", 3, 2);
	q6.setValues("Question 6: What is the process by which plants make their own food using sunlight? ", "Respiration",
				"Fermentation", "Photosynthesis",
				"Transpiration", 3, 2);
	q7.setValues("Question 7: What is the pH value of a neutral substance? ", "0",
				"7", "14",
				"1", 2, 2);
	q8.setValues("Question 8: Which planet is known as the 'Blue Planet' due to its abundant water? ", "Venus",
				"Mars", "Earth",
				"Neptune", 3, 2);
	q9.setValues("Question 9: What is the main function of red blood cells in the human body? ", "Carry oxygen",
				"Fight infections", "Clot blood",
				"Produce antibodies", 1, 2);
	q10.setValues("Question 10: What is the boiling point of water in Celsius? ", "100°C",
				"0°C", "50°C",
				"200°C", 1, 2);
 
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();
	
	Question q11;
	Question q12;
	Question q13;
	Question q14;
	Question q15;
	Question q16;
	Question q17;
	Question q18;
	Question q19;
	Question q20;
 
	
	q11.setValues("MATH: \n\n Question 11: What is the result of 8 + 5? ", "12",
				"13", "14",
				"15", 2, 2);
	q12.setValues("Question 12: If a shirt costs 25 pesos and is on sale for 20% off, what is the sale price? ", "5 pesos",
				"15 pesos", "20 pesos",
				"30 pesos", 3, 2);
	q13.setValues("Question 13: What is the product of 7 multiplied by 9? ", "56",
				"63", "99",
				"59", 2, 2);
	q14.setValues("Question 14: If a rectangle has a length of 12 units and a width of 6 units, what is its perimeter? ", "12 units",
				"18 units", "24 units",
				"36 units", 3, 2);
	q15.setValues("Question 15: What is the value of 4 squared (4^2)? ", "8",
				"12", "16",
				"20", 3, 2);
	q16.setValues("Question 16: If the ratio of boys to girls in a class is 2:3 and there are 15 girls, how many boys are there? ", "5",
				"10", "15",
				"20", 2, 2);
	q17.setValues("Question 17: What is the result of 35 divided by 7? ", "2",
				"4", "5",
				"6", 3, 2);
	q18.setValues("Question 18: Which of the following is the smallest prime number? ", "1",
				"2", "3",
				"4", 3, 2);
	q19.setValues("Question 19: If a car travels at a speed of 60 miles per hour, how far will it travel in 3 hours? ", "120 miles",
				"150 miles", "180 miles",
				"200 miles", 3, 2);
	q20.setValues("Question 20: What is the solution to the equation 2x - 5 = 7? ", "x = 1",
				"x = 3", "x = 6",
				"x = 8", 3, 2);
 
	q11.askQuestion();
	q12.askQuestion();
	q13.askQuestion();
	q14.askQuestion();
	q15.askQuestion();
	q16.askQuestion();
	q17.askQuestion();
	q18.askQuestion();
	q19.askQuestion();
	q20.askQuestion();
 
    Question q21;
	Question q22;
	Question q23;
	Question q24;
	Question q25;
	Question q26;
	Question q27;
	Question q28;
	Question q29;
	Question q30;
 

	q21.setValues("HISTORY: \n\n Question 21: What ancient Philippine society was known for its complex social structure, extensive trade networks, and the use of the baybayin script? ", "Maguindanao Sultanate",
				"Kingdom of Tondo", "Rajahnate of Cebu",
				"Sultanate of Sulu", 2, 2);
	q22.setValues("Question 22: Who is considered the national hero of the Philippines, known for his role in the fight against Spanish colonization? ", "Andres Bonifacio",
				"Jose Rizal", "Emilio Aguinaldo",
				"Marcelo H. Del Pilar", 2, 2);
	q23.setValues("Question 23:  In what year did the Philippine Revolution against Spanish rule officially begin? ", "1896",
				"1898", "1872",
				"1892", 1, 2);
	q24.setValues("Question 24: What event marked the end of the Philippine-American War, resulting in the establishment of American colonial rule in the Philippines? ", "Treaty of Paris",
				"Malolos Congress", "Pact of Biak-na-Bato",
				"Battle of Tirad Pass", 1, 2);
	q25.setValues("Question 25: During World War II, what was the code name of the Philippines in Japanese military operations? ", "Operation Pearl Harbor",
				"Operation Pacific Storm", "Operation Torch",
				"Operation Maru", 4, 2);
	q26.setValues("Question 26: The Philippines gained independence from the United States on what date? ", "June 12, 1898",
				"July 4, 1946", "December 10, 1935",
				"August 15, 1945", 2, 2);
	q27.setValues("Question 27: What year did President Ferdinand Marcos declare Martial Law in the Philippines? ", "1972",
				"1969", "1981",
				"1978", 1, 2);
	q28.setValues("Question 28: The EDSA People Power Revolution, which led to the ousting of President Marcos, took place in what year? ", "1",
				"2", "3",
				"4", 3, 2);
	q29.setValues("Question 29: Who was the first female president of the Philippines, serving from 1986 to 1992? ", "Gloria Macapagal-Arroyo",
				"Corazon Aquino", "Imelda Marcos",
				"Leni Robredo", 2, 2);
	q30.setValues("Question 30: In 2016, the Philippines won a case against China in an international tribunal regarding territorial claims in what body of water? ", "Pacific Ocean",
				"South China Sea", "Celebes Sea",
				"Philippine Sea", 2, 2);
 
	q21.askQuestion();
	q22.askQuestion();
	q23.askQuestion();
	q24.askQuestion();
	q25.askQuestion();
	q26.askQuestion();
	q27.askQuestion();
	q28.askQuestion();
	q29.askQuestion();
	q30.askQuestion();
	
	Question q31;
	Question q32;
	Question q33;
	Question q34;
	Question q35;
	Question q36;
	Question q37;
	Question q38;
	Question q39;
	Question q40;
 

	q31.setValues("ENGLISH: \n\n Question 31: Which of the following sentences contains a gerund? ", "She quickly ran home.",
				"Swimming is her favorite activity.", "The cat sleeps peacefully.",
				"The sunsets are stunning.", 2, 2);
	q32.setValues("Question 32: What is the correct past tense form of the verb 'to begin'? ", "Beginned",
				"Begun", "Began",
				"Begining", 3, 2);
	q33.setValues("Question 33:  Which literary term refers to the repetition of consonant sounds at the beginning of adjacent words? ", "Alliteration",
				"Simile", "Metaphor",
				"Onomatopoeia", 1, 2);
	q34.setValues("Question 34: In the sentence, 'The book on the shelf is mine,' what is the function of the word 'mine'? ", "Adjective",
				"Verb", "Pronoun",
				"Adverb", 1, 2);
	q35.setValues("Question 35: What is the purpose of a rhetorical question in writing? ", "To provide information",
				"To express strong emotion", "To engage the reader",
				"To convey a fact", 3, 2);
	q36.setValues("Question 36: Identify the correct synonym for 'ephemeral.' ", "Lasting",
				"Eternal", "Temporary",
				"Continuous", 3, 2);
	q37.setValues("Question 37: Which sentence is written in the passive voice? ", "The chef prepared a delicious meal.",
				"The cake was baked by Mary.", "The students eagerly listened to the lecture.",
				"I will finish my homework later.", 2, 2);
	q38.setValues("Question 38: What is the main purpose of a concluding paragraph in an essay? ", "Introduce new ideas",
				"Summarize key points", "Provide background information",
				"Pose a question", 2, 2);
	q39.setValues("Question 39: Which of the following is an example of an oxymoron? ", "Silent scream",
				"Beautiful sunset", "Cold fire",
				"Swift turtle", 3, 2);
	q40.setValues("Question 40: In the phrase 'between a rock and a hard place' what does the expression imply? ", "A comfortable situation",
				"An easy decision", "A difficult choice",
				"A wide range of options", 3, 2);
 
	q31.askQuestion();
	q32.askQuestion();
	q33.askQuestion();
	q34.askQuestion();
	q35.askQuestion();
	q36.askQuestion();
	q37.askQuestion();
	q38.askQuestion();
	q39.askQuestion();
	q40.askQuestion();
	
	Question q41;
	Question q42;
	Question q43;
	Question q44;
	Question q45;
	Question q46;
	Question q47;
	Question q48;
	Question q49;
	Question q50;
 
	
	q41.setValues("PHYSICAL EDUCATION: \n\n Question 41: What is the primary purpose of stretching before exercise? ", "To increase muscle strength",
				"To improve cardiovascular fitness", "To enhance flexibility and prevent injury",
				"To boost endurance", 3, 2);
	q42.setValues("Question 42: What is the target heart rate zone for cardiovascular fitness during moderate-intensity exercise? ", " 50-60% of maximum heart rate",
				"70-80% of maximum heart rate", "90-100% of maximum heart rate",
				"40-50% of maximum heart rate", 2, 2);
	q43.setValues("Question 43:  In a soccer match, which player is typically responsible for defending the goal? ", "Forward",
				"Midfielder", "Defender",
				"Goalkeeper", 4, 2);
	q44.setValues("Question 44: Which activity primarily improves muscular endurance? ", "Weightlifting",
				"Sprinting", "Yoga",
				"High-intensity interval training (HIIT)", 4, 2);
	q45.setValues("Question 45: What does the term 'anaerobic' exercise refer to?", "Exercise for flexibility",
				"Exercise that improves aerobic capacity", "Exercise that requires oxygen",
				"Exercise without the need for oxygen", 4, 2);
	q46.setValues("Question 46: Which of the following is a component of physical fitness? ", "Sportsmanship",
				"Agility", "Fair play",
				"Team spirit", 2, 2);
	q47.setValues("Question 47: What is the purpose of a cool-down after intense physical activity?",
				"To increase heart rate", "To prevent muscle soreness",
				"To improve flexibility", "To boost energy levels", 2, 2);
	q48.setValues("Question 48: In weight training, what does the term 'repetition' (rep) refer to? ", "The number of sets completed",
				"The number of exercises performed", "The number of times a specific movement is repeated",
				"The rest time between sets", 3, 2);
	q49.setValues("Question 49: Which of the following is a key principle of sports nutrition? ", "Excessive water intake",
				"Consistent calorie restriction", "Adequate hydration",
				"High consumption of sugary snacks", 3, 2);
	q50.setValues("Question 50: What is the purpose of the 'FITT' principle in designing a fitness program? ", "To assess flexibility",
				"To evaluate muscular strength", "To guide the prescription of exercise frequency, intensity, time, and type",
				"To determine body composition", 3, 2);
 
	q41.askQuestion();
	q42.askQuestion();
	q43.askQuestion();
	q44.askQuestion();
	q45.askQuestion();
	q46.askQuestion();
	q47.askQuestion();
	q48.askQuestion();
	q49.askQuestion();
	q50.askQuestion();

    
    cout << "Total Score = " << Total << " out of 100" << endl;

    
    if (Total >= 70) {
        cout << "Congrats you passed the quiz!" << endl;
    } else {
        cout << "Alas! You failed the quiz." << endl;
        cout << "Better luck next time." << endl;
    }
    return 0;
}


void Question::setValues(
    string q, string a1,
    string a2, string a3,
    string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;

    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;

    do {

        cout << "What is your answer? (Enter 1, 2, 3, or 4): ";

        if (!(cin >> Guess)) {
            cout << "\nInvalid input. Please enter a number. (1, 2, 3, 4)\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (Guess < 1 || Guess > 4) {
            cout << "\nInvalid input. Please choose between 1, 2, 3, or 4.\n\n";
        }

    } while (Guess < 1 || Guess > 4);

    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;

        Total = Total + Question_Score;
        cout << "Score = " << Total << " out of 100!" << endl;
        cout << endl;
    } else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = " << Total << " out of 100!" << endl;
        cout << "Correct answer = " << Correct_Answer << "." << endl;
        cout << endl;
    }
}
