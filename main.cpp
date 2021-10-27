#include <iostream>

bool checkDone (int arr[]) {
     for (int i = 0; i < 9; i++){
      if (arr[i] == 0)
        return false;
     }
     return true;
}


bool horizontal (int arr[]) {
  if (arr[0] == arr[1] && arr[1] == arr[2] && arr[1] != 0)
    return true;
  else if (arr[3] == arr[4] && arr[4] == arr[5] && arr[4] != 0)
    return true;
  else if (arr[6] == arr[7] && arr[7] == arr[8] && arr[7] != 0)
    return true;
  else
    return false;
}

bool vertical  (int arr[]) {
  if (arr[0] == arr[3] && arr[3] == arr[6] && arr[3] != 0)
    return true;
  else if (arr[1] == arr[4] && arr[4] == arr[7] && arr[4] != 0)
    return true;
  else if (arr[2] == arr[5] && arr[5] == arr[8] && arr[5] != 0)
    return true;
  else
    return false;
}

bool diagonal  (int arr[]) {
  if (arr[0] == arr[4] && arr[4] == arr[8] && arr[4] != 0)
    return true;
  else if (arr[2] == arr[4] && arr[4] == arr[6] && arr[4] != 0)
    return true;
  else
    return false;
}

bool win (bool diagonal, bool vertical, bool horizontal){
  if (diagonal || vertical || horizontal){
  return true;
  }
  else
  return false;
}

int main() {
  int arr[9] = {0};
  int i = 0;

while (checkDone(arr) == false) {

      if (i%2 == 0) {  //i is even
        std::cout << "\n Enter box number";
        int boxNum;
        std::cin >> boxNum;
        if (arr [boxNum-1] == 1 || arr [boxNum-1] == 2){
          std::cout<<"no.";
          continue;
         }
        arr[boxNum-1] = 2;
        std::cout << "even";
        }
      else{
        std::cout << "\n Enter box number";
        int boxNum;
        std::cin >> boxNum;
        if (arr [boxNum-1] == 1 || arr [boxNum-1] == 2){
         std::cout<<"no.";
                   continue;
         }
        arr[boxNum-1] = 1;
        std::cout << "odd";
        }

      for (int x = 0; x < 9; x++){
        if (x%3 == 0){
          std::cout << "\n";
        }
        printf("%d",arr[x]);
      }


      if (win(diagonal(arr), vertical(arr), horizontal(arr)) == true){
        if (i%2 == 0){
          std::cout << "\n gg even";
          break;}
        else{
          std::cout << "\n gg odd";
          break;   }    
      }
      else{
        if (i == 8){
          std::cout << "Draw";
        }
      }
          i++;
}

}
