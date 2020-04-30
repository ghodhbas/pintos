#ifndef THREAD_FIXED_POINT_H
#define THREAD_FIXED_POINT_H

typedef int fixed_point;

#define F 65536

// Convert a value to a fixed-point value
#define FP_CONVT(A) ((fixed_point)(A*F))

// Add two fixed-point values
#define FP_ADD(A,B) (A + B)

// Add 2 fixed point values
#define FP_ADD_MIX(A,B) (A + (B*F))

// Subtract 2 fixed point values 
#define FP_SUB(A,B) (A - B)

// Subtract int and fixed point
#define FP_SUB_MIX(A,B) (A - (B*F))

//Multiply 2 fixed point
#define FP_MULT(A,B) ((fixed_point)(((int64_t) A) * B/F))

//Multiply 1 fixed point and 1 int
#define FP_MULT_MIX(A,B) (A * B)

#define FP_DIV(A,B) ((fixed_point)((((int64_t) A) * F) / B))

#define FP_DIV_MIX(A,B) (A / B)

#define FP_INT_PART(A) (A / F)

//Getting rounded int of fixed point
#define FP_ROUND(A) (A >= 0 ? ((A + F/2) / F) : ((A - F/2) / F))

#endif