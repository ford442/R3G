#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
var r3g=Module.cwrap('r3g','number',['number','array']);
var derp=[];
var i,tx;
var canvas=document.getElementById('rcanvas');
var ctx = canvas.getContext('2d');
setInterval(function(){
document.getElementById('disp').innerHTML="";
for(i=0;i<8;i++){
setInterval(function(){
derp=[66,1,2,3,66,5,6,7];
var tx=r3g(i,derp);
document.getElementById('disp').innerHTML=tx;
var canvas=document.getElementById('rcanvas');
var ctx = canvas.getContext('2d');
ctx.fillStyle='rgb(255,255,33)';
ctx.fillRect(tx, 200, 222, 100);
ctx.fillStyle='rgb('+tx+',255,33)';
ctx.fillRect(100, (tx*100), tx, 100);
},22);
}},1000);
});
int r3g(int rr,register char ara[8]){
int ll=ara[rr]+(rr*10);
return ll;
}
int main()
{
ma();
}
