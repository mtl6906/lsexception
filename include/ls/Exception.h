#ifndef LS_EXCEPTION_H
#define LS_EXCEPTION_H

#include "stdexcept"
#include "iostream"
#include "vector"
#include "string"

namespace ls
{
	class Exception : public std::exception
	{
		public:
			enum Code : int
			{
				LS_EFORMAT = -29,
				LS_ENOCONTENT,
				LS_EEXIST,
				LS_EFULL,
				LS_ESTAT,
				LS_EOPEN,
				LS_EREAD,
				LS_EWRITE,
				LS_ECREAT,
				LS_EEOF,
				LS_ECNTL,
				LS_EAUTH,
				LS_EUNLINK,
				LS_ESOCKET,
				LS_EBIND,
				LS_ELISTEN,
				LS_EACCEPT,
				LS_ECONN,
				LS_ERECV,
				LS_ESEND,
				LS_EFCNTL,
				LS_EFIN,
				LS_ENOCOMPLETE,
				LS_ENOLENGTH,
				LS_EALLOCATE,
				LS_EWOULDBLOCK,
				LS_ETYPE,
				LS_ERESET,
				LS_EREUSEPORT,
				LS_OK
			};
			static std::vector<std::string> messages;
			explicit Exception(int code);
			const char *what() const noexcept override;
			int getCode();
			virtual std::string &message() const;
		protected:
			int code;
	};
}

#endif
