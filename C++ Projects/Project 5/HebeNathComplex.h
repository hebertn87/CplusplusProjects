//Nathan Hebert 2/2/16
//This class is a complex number class, which allows the user to add a complex numbers together.

//This is namespace Hebert
namespace Hebert
{
	//This is class complex
	class Complex
	{
	//Public members, (all functions)
	public:
		Complex(double = 0, double = 0);
		void setReal(double);
		void setImaginary(double);
		Complex getAddition(Complex) const;
		Complex getSubtraction(Complex) const;
		double getReal() const;
		double getImaginary() const;
		void getPrint() const;

	//Private data members
	private:
		double real_;
		double imaginary_;
	};
}