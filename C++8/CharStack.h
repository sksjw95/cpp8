#ifndef CHARSTACK_H_INCLUEDED
#define CHARSTACK_H_INCLUEDED
class CharStack {
	enum {size = 20};
	int top; // 마지막 데이터를 가리키는 포인터
	char buf[size]; // 스택의 저장공간
public:
	CharStack():top{size}{}
	bool chkEmpty() const {
		return top == size;
	}
	bool chkFull() const {
		return !top;
	}
	bool push(char ch);
	char pop();

};
#endif
