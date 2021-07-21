#include <stdio.h>
#include <stdlib.h>
#include <emscripten.h>
EM_JS(void,ma,(),{
let display=document.getElementById('disp').innerHTML;
let r3g=Module.cwrap('r3g','number',['number','array']);
setInterval(function(){
let derp=[];
derp=[0,1,2,3,4,5,6,7];
for (let i=0;i<8;i++){
display=r3g(derp);
derp[0]=derp[0]+1;
}},1);
});
int r3g(register char ara[8]){
return ara[0];
}
int main()
{
ma();
}
