#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
let r3g=Module.cwrap('r3g','number',['number','array']);
let derp=[];
let i,tx;
let canvas=document.getElementById('rcanvas');
let ctx = canvas.getContext('2d');
ctx.fillStyle='rgb(0,69,255)';
setInterval(function(){
derp=[0,1,2,3,4,5,6,7];
for(i=0;i<8;i++){
derp[1]=(i*10)+100;
tx=r3g(derp);
ctx.fillRect(100, tx, 150, 100);
}},10);
});
int r3g(register char ara[8]){
return ara[1];
}
int main()
{
ma();
}
