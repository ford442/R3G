#include <stdio.h>
#include <stdlib.h>
#include <emscripten.h>
EM_JS(void,ma,(),{
let r3g=Module.cwrap('r3g','number',['number','array']);
let derp=[];
let i;
setInterval(function(){
derp=[0,1,2,3,4,5,6,7];
for (i=0;i<8;i++){
derp=[i,i,2,3,4,5,6,7];
document.getElementById('disp').innerHTML=100;
document.getElementById('disp').innerHTML=r3g(derp);
}},1);
});
int r3g(register char ara[8]){
return ara[1];
}
int main()
{
ma();
}
