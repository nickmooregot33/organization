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

  const string ERROR_STRING = "ERROR: The return value was: ";    //error string

  /**
   * {A function which processes the argument flags used in the command
   *      line invocation of the organizer, in preparation for executing 
   *      the options.  Use before execute_arguments(), but after parsing the
   *      arguments into a vector of strings, instead of the usual argc 
   *      and argv arguments.}
   * \param arguments {A vector of strings which hold the argument list 
   *   from main's argv.}
   * \param location {A reference to a string to be modified by 
   *   check_arguments().  This string will hold the location of a file to be 
   *   used for adding a track, if the --add-track or -a switches are used.}
   * \return {An int representing a one-hot bit-vector to be used in 
   *       options from a command-line invocation.}
   */
  int check_arguments(const vector<string> arguments,string& location );

  /**
   * 
   * \param arguments
   * \param location
   * \return 
   */
  int execute_arguments(const int arguments, string& location);

  /**
   * \param array[]
   * \param count
   * \return 
   */
  vector<string> extract_arguments(const char* array[], const int count);

  /**
   * \param argc
   * \param argv[]
   * \return 
   */
  int main(int argc, char* argv[]);

  /**
   * Test function to do all the unit tests
   */
  int test();
}

#endif
