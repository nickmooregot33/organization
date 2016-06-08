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

int check_args(const vector<string> arguments,string& location );
int execute_args(const int arguments, string& location);

int main(int argc, char* argv[]){

  //vector of argument strings
  vector<string> argument_list;
  
  //string for getting location of added file
  string file_location;

  //int for determining exit number
  int ret_val
  if (argc != 1){
    for(int i = 1;i < argc;i++){
      string immediate_argument = *argv[i];
      argument_list.push_back(immediate_argument);
    }
    if(execute_args(check_args(argument_list,file_location),file_location))
      return ret_val;
    else{
      switch(ret_val){
      case 1:
	return 1;
      case 2:
	return 2;
      default:
	return retval;
      }
    }
  }

  //loop body

  
}


int check_args(const vector<string> arguments,string& location){
  int value = 0;
  for(auto element : arguments){
    if (element[0] = '-'){ //its an option
      if(element == "-h" || element == "--help")
	;
      if(element == "-a" || element == "--add-track")
	;
      if(element == "-g" || element == "--get-track-sequence")
	;
      if(element == "-l" || element == "--list-tracks")
	;
      if(element == "-r" || element == "--recent-segment")
	;
      if(element == "-m" || element.substr(0,16) == "--mark-finished=")      
	;
      if(element == "-c" || element == "--completed-most-recent")
	;
    }
      }
      
  }
}

int execute_args(const int arguments, string& location){

}
