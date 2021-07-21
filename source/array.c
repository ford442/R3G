#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
let r3g=Module.cwrap('r3g','number',['number','array','number']);
let derp=[];
let hhh=window.innerHeight;
let www=window.innerWidth;
let i,tx,tstr,tsti,c;
let canvas=document.getElementById('rcanvas');
let ctx = canvas.getContext('2d');
setInterval(function(){
for(c=0;c<60;c++){
for(i=0;i<8;i++){
setTimeout(function(){
tstr=i*10;
tsti=i*60;
derp=[tsti,tstr,tsti,tstr,tsti,tstr,tsti,tstr,io,rgb1,rgb2];
var llm=Math.random(111);
llm=llm*10000;
llmm=llm/2;
llm=Math.floor(llm);
llmm=Math.floor(llmm);
llm=llm/10000;
llmv=[llm,llmm];
tx=r3g(i,derp,llmv);
io=700-(tx/i);
rgb1=Math.floor(Math.random(255));
rgb2=Math.floor(Math.random(255));
ctx.fillStyle="rgb("+rgb1+",77,44)";
ctx.fillRect(tx, io, 222, 100);
ctx.fillStyle='rgb(122,'+rgb2+',44)';
ctx.fillRect(io, tx, tx, 100);
document.getElementById('disp').innerHTML=tx;
},8);
}};
ctx.clearRect(0, 0, 700, 700);
},1000);
});
int r3g(int rr,register char ara[8],register float ch[2]){
int ll=ara[rr]+(rr*10);
ara[rr]=ll+ch[1];
return ara[rr];
}
int main()
{
ma();
}
