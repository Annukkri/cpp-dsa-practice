#include<iostream>
using namespace std;
int main(){



Implicit Casting
1. int to float
int num1 = 10;
float num2 = 6.5;
int result = num1 + num2;
cout << result << endl;
return 0;
}

// char to int

char ch = 'A';
int  a = ch + 1;
cout << a << endl;
return 0;
}

// int to char

int a  = 66;
char ch = a + 1;
cout << ch << endl;
return 0;
}

Explicit Typecasting

int num1 = 3;
float num2 = 4.5;
float result = num1 + int(num2);
cout << result << endl;
return 0;
}

1.double to int

double pi = 3.14159265;
int b = 4;
int result = int(pi) + b;
cout << result << endl;
return 0;
}

2. float to char

float floatingNumber = 65.5;
char charvalue = char(floatingNumber);
cout << charvalue << endl;
return 0;
}

int a = 10;
int b = 3;
float c = a/b;
cout << c << endl;
return 0;
}

int a = 10;
int b = 3;
float c = a/(float)b;
cout << c << endl;
return 0;
}