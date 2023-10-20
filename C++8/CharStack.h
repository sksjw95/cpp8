#ifndef CHARSTACK_H_INCLUEDED
#define CHARSTACK_H_INCLUEDED
class CharStack {
	enum {size = 20};
	int top; // ������ �����͸� ����Ű�� ������
	char buf[size]; // ������ �������
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
