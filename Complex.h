#ifndef _BA_COMPLEX_H_
#define _BA_COMPLEX_H_

#include <cmath>

class Complex
{

private:

	// ʵ�����鲿
	double RealPart;
	double ImaginaryPart;

public:

	// Ĭ�Ϲ��캯��
	Complex()
	{
		this->RealPart = 0.0;
		this->ImaginaryPart = 0.0;
	}

	// ���캯��
	Complex(double rep, double imp)
	{
		this->RealPart = rep;
		this->ImaginaryPart = imp;
	}

	// ֱ������
	void Update(double ReP, double ImP)
	{
		this->RealPart = ReP;
		this->ImaginaryPart = ImP;
	}

	// ȡʵ��
	double Re(void)
	{
		return this->RealPart;
	}

	//ȡ�鲿
	double Im(void)
	{
		return this->ImaginaryPart;
	}

	//ȡģ��ƽ��
	double AbsSqr(void)
	{
		return (this->RealPart * this->RealPart + this->ImaginaryPart * this->ImaginaryPart);
	}

	//ȡģ
	double Abs(void)
	{
		return sqrt(this->RealPart * this->RealPart + this->ImaginaryPart * this->ImaginaryPart);
	}

	// �����ӷ�
	Complex operator+(Complex c)
	{
		return Complex(this->RealPart + c.Re(), this->ImaginaryPart + c.Im());
	}

	// ��������
	Complex operator-(Complex c)
	{
		return Complex(this->RealPart - c.Re(), this->ImaginaryPart - c.Im());
	}

	// �����˷�
	Complex operator*(Complex c)
	{
		double rep = this->RealPart * c.Re() - this->ImaginaryPart * c.Im();
		double imp = this->RealPart * c.Im() + c.Re() * this->ImaginaryPart;
		return Complex(rep, imp);
	}

	// ���ظ�ֵ�����
	void operator=(Complex rv)
	{
		this->RealPart = rv.Re();
		this->ImaginaryPart = rv.Im();
	}
};

#endif#pragma once