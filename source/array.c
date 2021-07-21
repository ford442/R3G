#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
let r3g=Module.cwrap('r3g','number',['number','array']);
let derp=[];
let i,tx;
let canvas=document.getElementById('rcanvas');
let ctx = canvas.getContext('2d');
setInterval(function(){
for(i=0;i<8;i++){
derp=[i,1,2,3,66,5,6,7];
tx=r3g(i,derp);
ctx.fillStyle='rgb(255,255,33)';
ctx.fillRect(100, 200, 222, 100);
ctx.fillStyle='rgb('+tx+',255,33)';
ctx.fillRect(100, 200, tx, 100);
};},100);
});
int r3g(int ll, register char ara[8]){
return ara[ll];
}
int main()
{
ma();
}
