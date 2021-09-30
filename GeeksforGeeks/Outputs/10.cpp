// Pick the correct statement for const and volatile.
// (A) const is the opposite of volatile and vice versa.
// (B) const and volatile can’t be used for struct and union.
// (C) const and volatile can’t be used for enum.
// (D) const and volatile can’t be used for typedef.
// (E) const and volatile are independent i.e. it’s possible that a variable is defined as both const and volatile.


// Answer: (E)

// Explanation: In C, const and volatile are type qualifiers and these two are independent.
// Basically, const means that the value isn’t modifiable by the program.
// And volatile means that the value is subject to sudden change (possibly from outside the program).
// In fact, C standard mentions an example of valid declaration which is both const and volatile.
// The example is “extern const volatile int real_time_clock;” where real_time_clock may be modifiable by hardware,
// but cannot be assigned to, incremented, or decremented. So we should already treat const and volatile separately.
// Besides, these type qualifier applies for struct, union, enum and typedef as well.