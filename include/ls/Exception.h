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
				LS_EFORMAT,
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
				LS_EWOULDBLOCK
			};
			static const std::vector<std::string> messages;
			explicit Exception(Code code);
			const char *what() const noexcept override;
			Code getCode();
		protected:
			virtual std::string message() const;
			Code code;
	};
}

#endif
