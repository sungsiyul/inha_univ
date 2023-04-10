#include "myString.h"			//myString.h�� ����� ����� ��� ��밡���ϰ� ��.

//������
myString::myString(int size){	//��ü�� ������ �� ���� �ϳ��� �Ѱܹ޾� size�� ���
	length = size;				//size�� length�� ����.
	str = new char[length];		//length��ŭ�� ���ڿ��� �����Ҵ�. �� �����ڷ� �Ѱܹ��� size�� ũ�⸸ŭ ���ڿ��� �����Ҵ���
	for(int i = 0; i < length; i++){	//�Ҵ�� �迭 0 ~ size-1����
		str[i] = 0;						//���� 0���� �ʱ�ȭ��.
	}
}

//���������
myString::myString(const myString& copyobj) : length(copyobj.length) {	//�޾ƿ� ��ü�� length�� this->length�� ����.
	str = new char[length];					//this->str : length ũ���� ���ڿ��� �����Ҵ�
	for (int i = 0; i < length; i++) {		//0���� length-1����
		str[i] = copyobj.str[i];			//�޾ƿ� ��ü str ���ڿ��� this->str ���ڿ��� ����
	}
}

//�Ҹ���
myString::~myString() {		//�Ҹ��ڸ� ���� �ش� ��ü�� ������ scope�� �������� ��
	delete[] str;			//�����Ҵ�� ���ڿ� str�� �Ҹ��Ŵ.
}

//*****set function
void myString::setString(int length, char* str) {	//�̹� ������ ��ü�� string�� �����Ͽ� �����ϴ� �Լ�
	this->length = length;				//�޾ƿ� length�� this->length�� ����
	for (int i = 0; i < length; i++) {	//0���� length-1����
		this->str[i] = str[i];			//�޾ƿ� str ���ڿ��� this->str ���ڿ��� ����
	}
}
//*****concatenate
myString myString::operator+(myString& right) {	//��ü�� ��ü�� ���ؼ� ��ü�� ����ϴ� +�����ڿ����ε�
	int result_length = length + right.length -1;	//length�� null���� ���ԵǾ��ִµ� �ΰ��� �迭�� �������� null���� �Ѱ��� �Ǳ� ������ 1�� ���� ���� ����� ���� ��ü�� length�̴�.
	myString result(result_length);					//result��� ��ü ����, ������(constructure)�� ���� result_length ũ���� ���ڿ��� �����Ҵ��.
	
	for (int i = 0; i < length-1; i++) {		//������ ���� ��ü�� ���ڿ����� result.str�� ���ʴ�� ����. null���ڸ� ���� �ʱ� ���� ������ length-1 �̸����� ��.
		result.str[i] = str[i];					
	}
	for (int j = 0; j < right.length; j++) {	//������ ������ ��ü�� ���ڿ��� result��ü�� ������ �迭�� null���ڰ� �����ϹǷ� ������ length �̸����� ��.
		result.str[length-1+j] = right.str[j];	//���� ���� ��ü�� ���ڸ� �� ������ �������� ���ʴ�� ������ ��ü�� ���ڿ��� result.str�� ����.
	}
	return result;	//�ϼ��� result��ü�� return��.
}					//�����ڸ� ���� �����Ҵ� �Ǿ��� result.str�� �ش� scope�� ���������鼭 �Ҹ��ڸ� ���� �Ҹ�ȴ�.

//copy(���Կ�����)
void myString::operator=(myString& right) {
	if (&right != this) {				//���� �ּҿ� �ִ� ��(�ڱ��ڽ�)�� �����ϸ� �״�� �ڱ��ڽ��� ���� ����
		if (length != right.length) {	//�����ϴ� �迭�� ���̰� ���� ���� ��
			delete[] str;				//this�� �迭�� �����ְ�
			length = right.length;		//this�� length�� ������ ���� length�� �����Ѵ�.
			str = new char[length];		//����, ���ο� length��ŭ ���ڿ��� �����Ҵ��Ѵ�.
		}
		for (int i = 0; i < length; i++) {	//���Ӱ� �Ҵ�� str�� ������ str�� �״�� ����
			str[i] = right.str[i];
		}
	}
}

//comparison
bool myString::operator==(myString& right) {
	if (length != right.length)			//�迭�� ���̰� �ٸ���, ��ġ�Ҽ��� �����Ƿ�
		return false;					//false�� return��
	for (int i = 0; i < length; i++) {	//�迭�� ���� ��ġ�� ��� �� ���� ��
		if (str[i] != right[i])			//�ϳ��� ���� ���� ����
			return false;				//false�� return��
	}
	return true;						//�������� if���� ����Ѵٸ� true�� return��.
}
bool myString::operator!=(myString& operand) {	//!=�� == ������ �����ε��� ����� �׻� �� �ݴ��̹Ƿ�
	if (length != operand.length)				//return ���� true �� false, false �� true�� �ٲ���.
		return true;					
	for (int i = 0; i < length; i++) {	
		if (str[i] != operand[i])		
			return true;				
	}
	return false;

}
//index-based approaching
char myString::operator[](int n) {		//�迭�� ��ġ�� n��° ������ ����
	if (length <= n) {					//index���� length��° ���� ���� ���̰�, �� ū ���� ������ ����� ������
		cout << "Error index ; " << n << " out of range";	//�����޽����� ���
		return 0;						//�ٷ� ������ �����ε��� ��������.
	}
	char goal;		//���ϴ� ��ġ�� ���ڸ� goal�̶�� ������ ������ ���� �����ϰ�
	goal = str[n];	//�Ѱܹ��� n��° ��ġ�� ���� goal�� �����ϰ�

	return goal;	//goal�� return��.
}
void myString::printString() {								//String�� private ����� length�� ���ڿ��� ����ϴ� �Լ�
	cout << "This string's length : " << length << endl;	//length ���
	cout << "This string is : ";							//��¹� ��� ��
	for(int i =0; i < length; i++){							//0���� length-1����
		cout << str[i];										//���ڿ��� ��� index ���� ���
	}
	cout << endl;											//�ٹٲ� ���
}

//�Է��� ���� >>������ �����ε�
istream& operator>>(istream& input, myString& a) {
	int count = 0;	//�Է¹��� ������ ������ ��¹ޱ� ���� count��� ������ ������ ����ް�, �ƹ����� ���� �ʾ����� �ʱⰪ�� 0���� ����
	char tmp[1000];	//���� �Է¹��� �ӽ� �������迭 tmp�� ū ���ڷ�(1000) ����
	input >> tmp;	//tmp�� ���� ����
	for (int i = 0; i < 1000; i++) {	//0���� 999����
		count++;						//�ݺ����� �ѹ��� �������� count ���� 1�� ������Ű�µ�
		if (tmp[i] == '\0')				//�ݺ� �� ���� �迭�� ���� NULL�� ����. ��, ������ ���� ���� index�� ������ ��
			break;						//�ݺ����� Ż���Ѵ�.
	}									//�̷��� �Ǹ� count���� NULL���ڸ� ������ ������ ���ڼ��� ����ȴ�.

	a.length = count;					//���� ��ü�� length���� (���� ���� + NULL����)���ڼ��� count�� �����Ѵ�.
	for (int j = 0; j < count; j++) {	//j�� 0 ~ count -1����
		a.str[j] = tmp[j];				//�ӽ÷� ����޾Ҵ� ���ڿ��� ��ü�� ���ڿ��� �����Ѵ�.
	}
	return input;						//input�� ��ȯ�Ѵ�.
}

//����� ���� <<������ �����ε�
ostream& operator<<(ostream& output, const myString& a) {	//���ϴ� ���·� ����� ������.
	output << "myString : ";					//��¹� ���
	for (int i = 0; i < a.length; i++) {		//0���� a.length-1����
		output << a.str[i];						//���ڿ� str�� ���
	}
	output << endl;								//�ٹٲ� ���
	return output;								//output ��ȯ
}