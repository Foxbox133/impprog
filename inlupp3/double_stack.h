typedef struct double_stack_struct double_stack;
typedef struct double_stack_node_struct double_stack_node;


int push(double_stack* listan, double value);

void printStack(double_stack* listan);


double_stack_node *delete(double_stack*the_list, double_stack_node*deleted_node);

int pop(double_stack*listan, double *value);
int peek(double_stack*listan);

int isEmpty(double_stack* listan);


double_stack_node*make_node(double value);
double_stack*create_stack();

int stackSize(double_stack*listan);

double addition(double_stack*stack);
double subtraction(double_stack*stack);
double multiplication(double_stack*stack);
double division(double_stack*stack);
