#define VARIABLE_COUNT 27
#define FIRST_VARIABLE 96

double variables[VARIABLE_COUNT];

double vpeek(int i){

  return(variables[i-FIRST_VARIABLE]);

}

void vpoke(int i, double val){

  variables[i-FIRST_VARIABLE]=val;

}
