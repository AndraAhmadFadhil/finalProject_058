#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
	void setY(int b) {
		this->x = b;
	}
	int getY() {
		return x;
	}
	
};

class Lingkaran :public bidangDatar { 
	/*lengkapi disini*/ 
private:
	string jejari[];
public:
	void setX(int i, string value) {
		jejari[i] = value;
	}
	string getX(int i) {
		return jejari[i];
	}

	void cekUkuran() {
		if (x > 40) {
			cout << "Ukuran Lingkaran Besar" << endl;
		}
		else if (x < 20) {
			cout << "Ukuran Lingkaran Sedang" << endl;
		}
		else if (x < 10) {
			cout << "Ukuran Lingkaran Kecil" << endl;
		}
	}
};

class Persegipanjang :public bidangDatar { 
	/*lengkapi disini*/ 
private:
	string panjang[10];
public:
	void setX(int i, string value) {
		panjang[i] = value;
	}
	string getX(int i) {
		return panjang[i];
	}
};

class Persegipanjang :public bidangDatar {
	/*lengkapi disini*/
private:
	string lebar[10];
public:
	void setX(int i, string value) {
		lebar[i] = value;
	}
	string getX(int i) {
		return lebar[i];
	}
};


float keliling(float l, float k) {
	return 3.14 * l * k;
}

float luas(float p, float l) {
	return p * l;
}

int main() { 
	/*lengkapi disini*/ 
	bidangDatar Lingkaran;

	Lingkaran.setX(0);
	cout << Lingkaran.getX();

	bidangDatar Persegipanjang;
	Persegipanjang.setX(0);
	cout << Persegipanjang.getX();
	Persegipanjang.setY(0);
	cout << Persegipanjang.getY();

}
