//Nathan Hebert 01/26/2016
//This class creates a fraction reduces it to smallest terms
class Fraction
{

//Public class members
public:
	Fraction();
	void setNumerator(int); //This function sets the numerator 
	void setDenominator(int); //This function sets the denominator
	void getReduce(); //This function reduces the fraction
	void getOutput() const; //This fucntion gets the output

//Private class members
private:
	int numerator_; //Numerator
	int denominator_; //Denominator

};