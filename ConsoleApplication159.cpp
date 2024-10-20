#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

// Функция для проверки, является ли число квадратом
bool is_square(int n) {
    int root = static_cast<int>(sqrt(n));  // Целая часть квадратного корня
    return root * root == n;  // Проверяем, равен ли квадрат корня числу
}
string convert_to_binary(size_t num) {
    string t = "";
    size_t i = 0;
    while ( num != 0)
    {
        t = t + to_string(num%2);
        num = num / 2;
        i++;
    }
    int size = t.size();
    for (int i = 0; i < size/2; i++)
    {
        int temp = t[i];
        t[i] = t[size - 1 - i];
        t[size - 1 - i] = temp;
    }
    return t;
}
 
// Функция для генерации всех подмножеств цифр числа (включая непоследовательные)
void generate_all_subsets(const string& num_str) {
      const int l = num_str.size(); //num_str.length;
      
      vector<string> bulean;
      for (size_t i = 0; i < (int)pow(2, l); i++)
      {
          bulean.push_back(convert_to_binary(i));
      }
      for (int i = 0; i < bulean.size(); i++) {
          cout << bulean[i] << endl;
      } 
      cout  << endl << endl << endl;
     /* string bulean[8] = {
          "000", "001", 
          "010", "011", 
          "100", "101", 
          "110", "111",  
      };*/

      //for (size_t i = 0; i < pow(2, l); i++)
      //{
      //    string subset = "";
      //    for (size_t j= 0; j < l; j++)
      //    {
      //        if (bulean[i][j] == '1') {
      //            subset = subset +  num_str[j];
      //            cout << num_str[j] << " ";
      //        }
      //        
      //    } 
      //    cout << subset <<  endl;
      //} 

}

int main() {

    setlocale(LC_ALL, "Russian");
    string num_str;
    num_str = "4657";

    // Генерация всех подмножеств цифр числа
    generate_all_subsets(num_str);

    return 0;
}
