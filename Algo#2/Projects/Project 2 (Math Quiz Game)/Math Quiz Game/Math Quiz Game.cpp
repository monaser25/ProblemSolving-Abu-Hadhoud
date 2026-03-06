#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enQuestionLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5 };

struct stQuestion
{
	int Number1 = 0;
	int Number2 = 0;
	enOperationType OperationType;
	enQuestionLevel QuestionLevel;
	int CorrectAnswer = 0;
	int PlayerAnswer = 0;
	bool AnswerResult = false;
};

struct stQuizz
{
	stQuestion QuestionList[100];
	short NumberOfQuestions = 0;
	enQuestionLevel QuizLevel;
	enOperationType OpType;
	int NumberOfRightAnswer = 0;
	int NumberOfWrongAnswer = 0;
	bool IsPass = false;
};

int RandomNumber(int From, int To) {

	//Function To Generate a random Number :
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}


short ReadHowManyQuestions() {

	short NumberOfQuestions = 0;

	do
	{
		cout << "How Many Questions do you want to answer ?  ";
		cin >> NumberOfQuestions;
	} while (NumberOfQuestions < 1 || NumberOfQuestions > 10);

	return NumberOfQuestions;
}

enQuestionLevel ReadQuestionsLevel() {

	short QuestionLevel = 1;

	do
	{
		cout << "Enter Question Level [1] Easy,[2] Med, [3] Hard, [4] Mix :  ";
		cin >> QuestionLevel;
	} while (QuestionLevel < 1 || QuestionLevel > 4);

	return enQuestionLevel(QuestionLevel);
}

enOperationType ReadOperationType() {

	short OpType = 1;

	do
	{
		cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix : ";
		cin >> OpType;
	} while (OpType < 1 || OpType > 5);

	return enOperationType(OpType);
}

enOperationType GetRandomOperation() {

	return enOperationType(RandomNumber(1, 4));
}

int SimpleCalculator(int Number1, int Number2, enOperationType OpType) {

	switch (OpType) {
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Sub:
		return Number1 - Number2;
	case enOperationType::Mul:
		return Number1 * Number2;
	case enOperationType::Div:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

stQuestion GenerateQuestion(enQuestionLevel QuizzLevel, enOperationType OpType) {

	stQuestion Question;

	if (QuizzLevel == enQuestionLevel::Mix)
		QuizzLevel = enQuestionLevel(RandomNumber(1, 3));

	if (OpType == enOperationType::MixOp)
		OpType = GetRandomOperation();


	Question.OperationType = OpType;

	switch (QuizzLevel) {
	case enQuestionLevel::EasyLevel:
		Question.Number1 = RandomNumber(1, 10);
		Question.Number2 = RandomNumber(1, 10);

		Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuizzLevel;
		return Question;
	case enQuestionLevel::MedLevel:
		Question.Number1 = RandomNumber(10, 50);
		Question.Number2 = RandomNumber(10, 50);

		Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuizzLevel;
		return Question;
	case enQuestionLevel::HardLevel:
		Question.Number1 = RandomNumber(50, 100);
		Question.Number2 = RandomNumber(50, 100);

		Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuizzLevel;
		return Question;
	}

	return Question;
}

void GenerateQuizzQuestions(stQuizz& Quizz) {

	for (int i = 0; i < Quizz.NumberOfQuestions; i++)
	{
		Quizz.QuestionList[i] = GenerateQuestion(Quizz.QuizLevel, Quizz.OpType);
	}

}

string GetOpTypeSymbol(enOperationType OpType) {

	switch (OpType) {
	case enOperationType::Add:
		return "+";
	case enOperationType::Sub:
		return "-";
	case enOperationType::Mul:
		return "*";
	case enOperationType::Div:
		return "/";
	default:
		return "Mix";
	}
}

void PrintQuestion(stQuizz Quizz, int QuestionNumber) {

	cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n\n";
	cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
	cout << Quizz.QuestionList[QuestionNumber].Number2 << " " <<
		GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType);
	cout << "\n___________________" << endl;
}

int ReadPlayerAnswer() {
	int Answer = 0;
	cin >> Answer;

	return Answer;
}

void setColorBackground(bool Result) {

	if (Result)
		system("color 2F");
	else
	{
		cout << "\b";
		system("color 4F");
	}
}

void CorrectTheQuestionAnswer(stQuizz& Quizz, int QuestionNumber) {

	if (Quizz.QuestionList[QuestionNumber].CorrectAnswer != Quizz.QuestionList[QuestionNumber].PlayerAnswer) {
		Quizz.NumberOfWrongAnswer++;
		Quizz.QuestionList[QuestionNumber].AnswerResult = false;
		cout << "\nWrong Answer :-(";
		cout << "\nCorrect answer is : " << Quizz.QuestionList[QuestionNumber].CorrectAnswer << endl;
	}
	else {
		Quizz.NumberOfRightAnswer++;
		Quizz.QuestionList[QuestionNumber].AnswerResult = true;
		cout << "\nCorrect Answer :-)" << endl;
	}

	setColorBackground(Quizz.QuestionList[QuestionNumber].AnswerResult);
}

void AskAndCorrectQuestionList(stQuizz& Quizz) {

	for (int QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
	{
		PrintQuestion(Quizz, QuestionNumber);
		Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadPlayerAnswer();
		CorrectTheQuestionAnswer(Quizz, QuestionNumber);
	}

	Quizz.IsPass = (Quizz.NumberOfRightAnswer >= Quizz.NumberOfWrongAnswer);

}

string FinalResultText(bool IsPass) {
	if (IsPass)
		return "Pass :-)";
	else
		return "Fail :-(";
}

string GetQuestionLevelText(enQuestionLevel QuestionLevel) {

	string arrQuestionLevel[4] = { "Easy","Med","Hard","Mix" };
	return arrQuestionLevel[QuestionLevel - 1];
}

void PrintQuizzResult(stQuizz Quizz) {

	cout << "\n_______________________________________\n";
	cout << "\n Final Result is " << FinalResultText(Quizz.IsPass);
	cout << "\n_______________________________________\n";
	cout << "\nNumber Of Questions : " << Quizz.NumberOfQuestions;
	cout << "\nQuestions Level     : " << GetQuestionLevelText(Quizz.QuizLevel);
	cout << "\nOpType              : " << GetOpTypeSymbol(Quizz.OpType);
	cout << "\nNumber Of Right Answer : " << Quizz.NumberOfRightAnswer;
	cout << "\nNumber Of Wrong Answer : " << Quizz.NumberOfWrongAnswer;
	cout << "\n_______________________________________\n";

	setColorBackground(Quizz.IsPass);
}

void PlayMathGame() {

	stQuizz Quizz;

	Quizz.NumberOfQuestions = ReadHowManyQuestions();
	Quizz.QuizLevel = ReadQuestionsLevel();
	Quizz.OpType = ReadOperationType();

	GenerateQuizzQuestions(Quizz);
	AskAndCorrectQuestionList(Quizz);
	PrintQuizzResult(Quizz);
}

void ClearScreen() {
	system("cls");
	system("color 0F");
}

void StartGame() {

	char AddMore = 'Y';

	do
	{
		ClearScreen();
		PlayMathGame();

		cout << "\nDo you want to play again ? Y/N :  ";
		cin >> AddMore;
	} while (AddMore == 'Y' || AddMore == 'y');


}

int main() {

	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}