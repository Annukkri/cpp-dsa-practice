#include<iostream>
using namespace std;
int getMultiplication(int x, int y, int z){
int result = x*y*z;
return result;
}
int main(){
    int multiplicationAnswer = getMultiplication(2,3,4);
    cout << multiplicationAnswer << endl;
    return 0;
}

void PrintNameTentimes(){
    for(int i = 1; i <= 10 ; i++){
    cout << "Annu" << endl;
    }
}

int main(){
    PrintNameTentimes();
    return 0;
}

int convertIntocelcius(int far){
    int celsius = (far - 32)* 5/9;
    return celsius;
}

int main(){
    int ans = convertIntocelcius(5);
    cout << ans << endl;
    return 0;

}

char convertIntoUppercase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
} 
int main(){
    char result = convertIntoUppercase('a');
    cout << result << endl;
    return 0;
}   

      