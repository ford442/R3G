#include "array.h"
EM_JS(void,ma,(),
{
let r3g = Module.cwrap('r3g', 'array', ['array']);
let derp = [];
derp = [0,1,2,3,4,5,6,7];
console.log(r3g(derp));
});
int r3g(register int ara[8]) {
return ara[7];
}
int main()
{
ma();
}
