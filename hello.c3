module hello;

import std::io;

struct Greeter {
    // public:
    int id;
    // Default constructor with no parameters
}

fn void Greeter.init(Greeter* self) {
        self.id = 42;
}

fn void Greeter.say_hello(Greeter* self) {
        io::printfn("Hello World from C3++! Greeter ID: %d", self.id);
}

fn void Greeter.finalize(Greeter* self) {
        io::printn("Greeter destroyed cleanly.");
}


fn void main(String[] args) {
    Greeter g;
    Greeter.init(&g);
    g.say_hello();
}
