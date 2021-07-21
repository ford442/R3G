
#include "array.h"

EM_JS(void,ma,(),
{
let r3g = Module.cwrap('r3g', 'array', ['array']);
let derp = [];
derp = [0,1,2,3,4,5,6,7];
console.log(r3g(derp))
});

int r3g(ara) {
words = {ara[0],ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7]};
return words[7]);
}
int main()
{
ma();
}