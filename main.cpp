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

//constants for handling options
const_expr int ADD_TRACK()  {return 1;}
const_expr int HELP()  {return 2;}
const_expr int GET_TRACK_SEQUENCE()  {return 4;}
const_expr int LIST_TRACKS()  {return 8;}
const_expr int RECENT_SEGMENT()  {return 16;}
const_expr int MARK_FINISHED()  {return 32;}
const_expr int COMPLETED_MOST_RECENT()  {return 64;}

int check_args(const vector<string> arguments,string& location );
int execute_args(const int arguments, string& location);

int main(int argc, char* argv[]){

  //error string
  const string ERROR_STRING = "ERROR: The return value was: ";
  
  //vector of argument strings
  vector<string> argument_list;
  
  //string for getting location of added file
  string file_location;

  //int for determining exit number
  int ret_val;

    
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
	cout << ERROR_STRING << ret_val;
	return 1;
      case 2:
	cout << ERROR_STRING << ret_val;	
	return 2;
      default:
	cout << ERROR_STRING << ret_val;	
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
      if(element == "-h" || element == "--help"){
	std::cout << "Help option was set" << std::endline;
	value |= HELP();
	return value;
      }
      if(element == "-a" || element == "--add-track"){
	std::cout << "Add-track option was set" << std::endline;
	value |= ADD_TRACK();
      }
      if(element == "-g" || element == "--get-track-sequence"){
	std::cout << "Get track sequence option was set" << std::endline;
	value |= GET_TRACK_SEQUENCE();
      }
      if(element == "-l" || element == "--list-tracks"){
	std::cout << "List tracks sequence option was set" << std::endline;
	value |=  LIST_TRACKS();
      }
      if(element == "-r" || element == "--recent-segment"){
	std::cout << "List tracks sequence option was set" << std::endline;
	value |= RECENT_SEGMENT();
      }
      if(element == "-m" || element.substr(0,16) == "--mark-finished="){
	std::cout << "Mark finished sequence option was set" << std::endline;
	value |= MARK_FINISHED();
      }
      if(element == "-c" || element == "--completed-most-recent"){
	std::cout << "Completed most recent sequence option was set" << std::endline;
	value |= COMPLETED_MOST_RECENT();
      }
    }
  }
  return 0;
}

int execute_args(const int arguments, string& location){

}
