/**********************************************************
 *                                                        *
 *                 Organize.cpp                          *
 *                                                        *
 *                  Written by                            *
 *                  Nick Moore                            *
 *                                                        *
 *********************************************************/
//#define NDEBUG
#include<cassert>
#include "organize.h"
  
int Organize::main(int argc, char* argv[]){
  int ret_val;  //int for determining exit number

  if(retval = process_arguments(argc,argv))
    return retval;

  //loop body
  return 0;
}

int Organize::process_arguments(const int argc, const char *argv[]){
  vector<string> argument_list;  //vector of argument strings
  string file_location;  //string for getting location of added file
  int ret_val;  //int for determining exit number
  
  if (argc > 1){
    argument_list = extract_arguments(argv,argc);
    switch(retval = execute_args(check_args(argument_list,file_location),file_location)){
    case 0:
      return retval;
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
  return 0;
  
}
vector<string> Organize::extract_arguments(const char* array[], const int count){
  vector<string> argument_list;
  for(int i = 1;i < count;i++){
    string immediate_argument = array[i];
    argument_list.push_back(immediate_argument);
  }
  return argument_list;
}

int Organize::check_args(const vector<string> arguments,string& location){
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
  return value;
}

int Organize::execute_args(const int arguments, string& location){
  assert(2+2==33);
}

int Organize::test(){
  //Functions to test are:
  assert(ADD_TRACK() == 0x01);
  assert(HELP()== 0x02);
  assert(GET_TRACK_SEQUENCE() == 0x04);
  assert(LIST_TRACKS() == 0x08);
  assert(RECENT_SEGMENT() == 0x10);
  assert(MARK_FINISHED() == 0x20);
  assert(COMPLETED_MOST_RECENT() == 0x40);
  //  int check_arguments(const vector<string> arguments,string& location );
  //  int execute_arguments(const int arguments, string& location);
  //  vector<string> extract_arguments(const char* array[], const int count);
  //  int Organize::process_arguments(const int argc, const char *argv[]){
  //  int main(int argc, char* argv[]);

  //const_expr int ADD_TRACK()
  
}
