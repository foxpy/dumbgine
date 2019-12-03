class Zip {
	protected:
		zip_t *zip;
		zip_error_t ze;
		std::string strerror;
	public:
		Zip(std::string &path);
		~Zip();
};
