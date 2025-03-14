
#include "Bureaucrat.hpp"
#include "AForm.hpp"
int main() {
    try {
        Bureaucrat highRank("High Rank", 1);
        Bureaucrat lowRank("Low Rank", 150);
        AForm form1("Important Form", 100, 50);
        AForm form2("Very Important Form", 1, 1);

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

        lowRank.signForm(form1);  // Should fail
        highRank.signForm(form1); // Should succeed
        highRank.signForm(form2); // Should succeed

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}