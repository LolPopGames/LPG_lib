// Exit codes for the return value of functions
// or for other actions

#ifndef EXIT_CODES
#define EXIT_CODES

// `EC` meands `Exit Code`

#define EC_SUCCESS 0
#define EC_FAILURE 1

#define EC_INVALID_ARGUMENT 2

#define EC_FILE_NOT_FOUND 3
#define EC_CANNOT_OPEN_FILE 4
#define EC_CANNOT_READ_FILE 5
#define EC_CANNOT_WRITE_FILE 6

#define EC_FAILED_MEMORY_ALLOCATION 7
#define EC_NULL_POINTER_ERROR 8

#define EC_DIVISION_BY_ZERO 9
#define EC_TIMEOUT 10
#define EC_UNSUPPORTED 11
#define EC_INTERNAL 12
#define EC_IO_ERROR 13
#define EC_PERMISSION_DENIED 14


#endif