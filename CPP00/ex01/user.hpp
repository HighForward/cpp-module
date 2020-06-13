class Contact
{
    public:
    /* method */
        Contact();
        ~Contact();
        void get_infos(std::string temp[11]);
        void print_infos();

    private:
    /* attributs */
    std::string info[11];
};