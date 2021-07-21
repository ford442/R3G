#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
var r3g=Module.cwrap('r3g','number',['number','array','number']);
var derp=[];
var hhh=window.innerHeight;
var www=window.innerWidth;
var i,tstr,tsti,c;
var canvas=document.getElementById('rcanvas');
var ctx = canvas.getContext('2d');
setInterval(function(){
for(c=0;c<120;c++){
for(i=0;i<8;i++){
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
var tx=r3g(i,derp,llmv);
const io=300+c;
var rgb1=Math.floor(Math.random(255));
ctx.fillStyle="rgb("+rgb1+",77,44)";
ctx.fillRect(tx, 300, 222, 100);
ctx.clearRect(tx, 300, tx, 100);
ctx.fillStyle='rgb(122,'+c+',44)';
ctx.fillRect(0, tx, tx, 100);
ctx.clearRect(25, tx, tx, 25);
canvas.style.top=Math.floor((hhh*.22)+(Math.random(333)));
canvas.style.left=Math.floor((www*.55)+(Math.random(250)));
document.getElementById('disp').innerHTML=tx;
},8);
}};
ctx.clearRect(0, 0, 700, 700);
},555);
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
