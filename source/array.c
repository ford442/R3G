#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
let r3g=Module.cwrap('r3g','number',['number','array','number']);
let derp=[];
let i,tx,tstr,tsti,c;
let canvas=document.getElementById('rcanvas');
let ctx = canvas.getContext('2d');
let hhh=window.innerHeight;
let www=window.innerWidth;
setInterval(function(){
for(c=1;c<60;c++){
for(i=1;i<8;i++){
setTimeout(function(){
tstr=i*10;
tsti=i*60;
derp=[tsti,tstr,tsti,tstr,tsti,tstr,tsti,tstr];
var llm=Math.random(111);
llm=llm*10000;
llmm=llm/2;
llm=Math.floor(llm);
llmm=Math.floor(llmm);
llm=llm/10000;
llmv=[llm,llmm];
tx=r3g(i,derp,llmv);
ctx.fillStyle='rgb('+(Math.floor(Math.random(100)*255))+',255,33)';
ctx.fillRect(tx, 200, 222, 100);
ctx.fillRect(100, tx, tx, 100);
document.getElementById('disp').innerHTML=tx;
document.getElementById('disp').style.top=Math.floor(Math.floor(hhh*.222)+(Math.floor(Math.random(25))));
document.getElementById('disp').style.left=Math.floor(Math.floor(www*.444)+(Math.floor(Math.random(25))));
},16);
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
