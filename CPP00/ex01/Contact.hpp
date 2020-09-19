#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    public:
    /* method */
        Contact();
        ~Contact();
        void get_infos(std::string temp[12]);
        void print_infos();
        void print_indexinfos();

    private:
    /* attributs */
    std::string info[12];
};

#endif
