#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
var r3g=Module.cwrap('r3g','number',['number','array','number']);
var derp=[];
var i,tx;
var canvas=document.getElementById('rcanvas');
var ctx = canvas.getContext('2d');
setInterval(function(){
document.getElementById('disp').innerHTML="";
for(i=1;i<8;i++){
setInterval(function(){
var tstr=i*10;
var tsti=i*60;
derp=[tsti,tstr,tsti,tstr,tsti,tstr,tsti,tstr];
var llm=Math.random(111);
llm=llm*10000;
llmm=llm/2;
llm=Math.floor(llm);
llmm=Math.floor(llmm);
llm=llm/10000;
llmv=[llm,llmm];
var tx=r3g(i,derp,llmv);
document.getElementById('disp').innerHTML=tx;
var canvas=document.getElementById('rcanvas');
var ctx=canvas.getContext('2d');
ctx.fillStyle='rgb(255,255,33)';
ctx.fillRect(tx, 200, 222, 100);
ctx.fillStyle='rgb('+tx+',255,33)';
ctx.fillRect(100, (tx*100), tx, 100);
},22);
}},1000);
});
int r3g(int rr,register int ara[8],register float ch[2]){
int ll=ara[rr]+(rr*10);
ata[rr]=ll+ch[1];
return ara[rr];
}
int main()
{
ma();
}
