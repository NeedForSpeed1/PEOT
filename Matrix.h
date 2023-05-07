#ifndef MATRIX_H
#define MATRIX_H
#include "VectorClass.h"

class Matrix{
	
	public:
	Matrix();
	Matrix add(const Matrix & other) const;
	Matrix subtract(const Matrix & other) const;
	VectorClass multVect(const VectorClass & vect)const;
	static Matrix getIdentity();
	//Matrix crossProduct();
	Matrix multMatrix(const Matrix & other) const;
	
	private:
	
	
	public:
	//union {
	//struct{
      	float x0;
		float x1;
		float x2;
		float x3;
		float x4;
		float x5;
		float x6;
		float x7;
		float x8;
		float x9;
		float x10;
		float x11;
		float x12;
		float x13;
		float x14;
		float x15;


    //}
	//}
}



#endif