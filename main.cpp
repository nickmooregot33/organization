/**********************************************************
 *                                                        *
 *                 Organizer.cpp                          *
 *                                                        *
 *                  Written by                            *
 *                  Nick Moore                            *
 *                                                        *
 *********************************************************/

#include<iostream>
#include<string>
#include<vector>

int check_args(const vector<string> arguments );
int execute_args(const int arguments);

int main(int argc, char* argv[]){
  vector<string> argument_list;
  
  if (argc != 1){
    for(int i = 1;i < argc;i++){
      string immediate_argument = argv[i];
      argument_list.push_back(immediate_argument);
    }
    if(execute_args(check_args()))
      return 0;
    else{

    }
  }
  return 0;
}


int check_args(const vector<string> arguments){
  int value = 0;
  for(auto element : arguments){
    
  }
}

int execute_args(const int arguments){

}
