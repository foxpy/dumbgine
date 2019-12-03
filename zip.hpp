#include <string>
#include <stdexcept>
#include <cstdint>
#include <zip.h>

class Zip {
	private:
		zip_t *zip;
		zip_error_t ze;
		std::string strerror;

		zip_int64_t num_files;

	public:
		Zip(std::string &path);
		~Zip();

		std::int64_t length();
};
