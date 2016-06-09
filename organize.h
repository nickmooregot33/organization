#ifndef _ORGANIZE_H_
#define _ORGANIZE_H_

#include<iostream>
#include<string>
#include<vector>

/**
 * \author      Nick Moore <nickjmoore @ gmail.com >
 * \version     0.1
 * \since       0.1
 */
namespace Organize {
  
  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x01}
   */
  const_expr int ADD_TRACK()  {return 1;}

  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x02}
   */
  const_expr int HELP()  {return 2;}

  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x04}
   */
  const_expr int GET_TRACK_SEQUENCE()  {return 4;}

  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x08}
   */
  const_expr int LIST_TRACKS()  {return 8;}

  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x10}
   */
  const_expr int RECENT_SEGMENT()  {return 16;}

  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x20}
   */
  const_expr int MARK_FINISHED()  {return 32;}

  /**
   * A const_expr used in check_arguments() and execute_arguments() in
   *     generating and reading the one-hot bit-vector representing 
   *     options used in the command line invocation of the program.
   * \return {An int representing 0x40}
   */
  const_expr int COMPLETED_MOST_RECENT()  {return 64;}

  /**
   * {A string used in testing and debugging}
   */
  const string ERROR_STRING = "ERROR: The return value was: ";    //error string

  /**
   * {A function which processes the argument flags used in the command
   *      line invocation of the organizer, in preparation for executing 
   *      the options.  Use before execute_arguments(), but after parsing the
   *      arguments into a vector of strings, instead of the usual argc 
   *      and argv arguments.}
   * \param arguments {A vector of strings which hold the argument list 
   *   from main's argv.  Use extract_arguments() to generate the vector.}
   * \param location {A reference to a string to be modified by 
   *   check_arguments().  This string will hold the location of a file to be 
   *   used for adding a track, if the --add-track or -a switches are used.}
   * \return {An int representing a one-hot bit-vector to be used in 
   *       options from a command-line invocation.}
   */
  int check_arguments(const vector<string> arguments,string& location );

  /**
   * Takes a one-hot bit-vector of command-line options and executes the
   *   operations associated with them.
   * \param arguments {One-hot bit-vector of command-line options.  Use
   *   check_arguments() to generate the bit-vector.}
   * \param location {Reference to a string holding a file location to
   *   be used with the -a or --add-track command-line switches.  The string
   *   is generally loaded by check_arguments().}
   * \return {0 on success, -1 on error.}
   */
  int execute_arguments(const int arguments, string& location);

  /**
   * Takes the usual "main" arguments argc and argv and converts them to
   *   a vector of strings to be processed by check_arguments().
   * \param array[] {An array of pointers to char.  Usually just a pointer
   *   to argv, the argument vector supplied by the Operating System.}
   * \param count {An int representing the number of pointers to char in
   *   array.
   * \return {A vector of strings, each one a copy of the string pointed to 
   *   by the associated pointer to char in argv.}
   */
  vector<string> extract_arguments(const char* array[], const int count);

  /**
   * The main application, which will perform all specified operations by 
   *   the user and will be called by std::main.  For the core functionality 
   *   requirements, this will consist of only the command-line specified 
   *   operations, and the rest of the functionality will be developed once 
   *   the process is schedulable by the operational program.
   * \param argc {A copy of the argc argument passed to std::main by the 
   *   operating system.}
   * \param argv[] {A pointer to the argument vector passed to std::main by
   *   the operatin system.}
   * \return {0 on sucess.}
   */
  int main(int argc, char* argv[]);

  /**
   * Test function to do all of the unit tests required.  My lack of 
   *   experience with unit testing frameworks means this will be developed
   *   without using frameworks or knowledge of industry standard procedures.
   *   This subject will be scheduled once the core application is functional.
   */
  int test();
}

#endif
