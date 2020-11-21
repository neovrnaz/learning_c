// Declaration: "Somewhere, there exists a foo."
// Definition: "...and here it is!"

/*
 * Declaration - Introduces an identifier and describes it's type
 * (It's what the compiler needs to accept references to that identifier)
 */

// Examples of Declarations:
extern int bar; // Declares a variable but does NOT define it
extern int g(int, int);
double f(int, double); // extern can be omitted for function declarations

/*
 * Definition - instantiates/implements this identifier
 */

// Examples of Declarations:
int g(int lhs, int rhs) {return lhs * rhs;}
double f(int i, double d) {return i+d;}


/* Additional Notes */

struct x; // Function Declaration
struct x {}; // Function Definition

// Declares AND defines
int bar;
