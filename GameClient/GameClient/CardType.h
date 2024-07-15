#pragma once
#ifndef _Card_Type_H_
#define _Card_Type_H_ 
enum VectorType : unsigned char {
	Self, Left, Mid, Right
};

enum CardType : unsigned char {
	W1, W2, W3, W4, W5, W6, W7, W8, W9,
	O1, O2, O3, O4, O5, O6, O7, O8, O9,
	T1, T2, T3, T4, T5, T6, T7, T8, T9,
	E, S, W, N, Z, B, F, Empty
};

#endif // !Card_Type
