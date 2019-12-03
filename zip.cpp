#include <string>
#include <stdexcept>
#include <zip.h>

#include "zip.hpp"

Zip::Zip(std::string &path) {
	int errorp;
	if ((zip = zip_open(path.c_str(), ZIP_RDONLY, &errorp)) == NULL) {
		zip_error_init_with_code(&ze, errorp);
		strerror.assign(zip_error_strerror(&ze));
		zip_error_fini(&ze);
		if (errorp == ZIP_ER_NOENT) throw std::invalid_argument(strerror);
		else throw std::runtime_error(strerror);
	}
}

Zip::~Zip() {
	zip_discard(zip);
}
