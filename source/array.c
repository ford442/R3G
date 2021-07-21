#include <stdio.h>
#include <stdlib.h>
#include <emscripten.h>
int blnk;
EM_JS(void,ma,(),{
let display=document.getElementById('disp').innerHTML;
let r3g=Module.cwrap('r3g','number',['number','array']);
setInterval(function(){
let derp=[];
let blank=0;
derp = [0,1,2,3,4,5,6,7];
for (blank<8;blank++;){
display=r3g(blank,derp);
}},1);
});
int r3g(blnk,register char ara[8]){
return ara[blnk];
}
int main()
{
ma();
}
