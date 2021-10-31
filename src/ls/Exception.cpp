#include "ls/Exception.h"
#include "cerrno"
#include "cstring"

using namespace std;

namespace ls
{
	const vector<string> Exception::messages = {
		"format error",
		"no content error",
		"exist error",
		"buffer full",
		"stat error",
		"open error",
		"read error",
		"write error",
		"creat error",
		"end of file",
		"fcntl error",
		"no auth",
		"unlink error",
		"socket error",
		"bind error",
		"listen error",
		"accept error",
		"connect error",
		"recv error",
		"send error",
		"fcntl error",
		"recv fin",
		"no complete",
		"no content-length",
		"allocate error",
		"wouldblock error"
	};

	Exception::Exception(Code code) : code(code)
	{
		
	}
	
	const char *Exception::what() const noexcept 
	{
		string text = message() + ": " + strerror(errno) + "'";
		errno = 0;
		return text.c_str();
	}

	Exception::Code Exception::getCode()
	{
		return code;
	}

	string Exception::message() const 
	{
		return messages[(int)code];
	}
}	
