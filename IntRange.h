#pragma once

class IntRange
{
	private:
		int first;
		unsigned int second;
	public:
		int GetFirst() const { return first; }
		unsigned GetSecond() const { return  second; }
		void SetFirst(int value);
		void SetSecond(unsigned int value);
		bool Init(int x, int y);
		void Display() const;
		void Read();
		
		void range—heck(int N);
};	