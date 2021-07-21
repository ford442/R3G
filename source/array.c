#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
let r3g=Module.cwrap('r3g','number',['number','array']);
let derp=[];
let i,tx;
setInterval(function(){
derp=[0,1,2,3,4,5,6,7];
for(i=0;i<8;i++){
derp[i]=i+100;
tx=r3g(derp);
document.getElementById('disp').innerHTML=tx;
}},1);
});
int r3g(register char ara[8]){
return ara[1,2,3,4];
}
int main()
{
ma();
}
