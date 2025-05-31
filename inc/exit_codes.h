// Exit codes for the return value of functions
// or for other actions

#ifndef EXIT_CODES_H_
#define EXIT_CODES_H_

// `EC` means `Exit Code`

// Basic codes
#define EC_SUCCESS 0
#define EC_FAILURE 1

// Arguments
#define EC_INVALID_ARGUMENT 2

// File managment
#define EC_FILE_NOT_FOUND 3
#define EC_CANNOT_OPEN_FILE 4
#define EC_CANNOT_READ_FILE 5
#define EC_CANNOT_WRITE_FILE 6

// Memory
#define EC_FAILED_MEMORY_ALLOCATION 7
#define EC_NULL_POINTER_ERROR 8

// Other
#define EC_DIVISION_BY_ZERO 9
#define EC_TIMEOUT 10
#define EC_UNSUPPORTED 11
#define EC_INTERNAL 12
#define EC_IO_ERROR 13
#define EC_PERMISSION_DENIED 14


#endif /* EXIT_CODES_H_ */