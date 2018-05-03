int *ptr;

void FunctionThatEscapesLocalObject() {
    int pInt[100];
    ptr = &pInt[0];
}

int main(int argc, char **argv) {
    FunctionThatEscapesLocalObject();
    return ptr[argc];
}