<head>
<meta charset="UTF-8">
<title>R*3*G</title>
</head>
<body style="background-color:brown;">
<input type="checkbox" id="di" hidden/>
<div id="ihig" hidden></div>
<div id="iwid" hidden></div>
<div id="shut" hidden>1</div>
<iframe src="./bezz.htm" style="border-width:0px;position:absolute;top:0px;left:0px;right:0px;bottom:0px;overflow:hidden;z-index:999996;display:block;overflow-y:hidden;overflow-x:hidden;pointer-events: none;" id="circle"  title="Mask"></iframe><input type="checkbox" id="di" hidden/>
<input type="button" id="btn" style="background-color: green;position: absolute;display: block;left: 5%;top: 50%;z-index: 999997;border:5px solid #e7e7e7;border-radius:50%;" onclick="document.getElementById('di').click();"></input>
<div id="disp" style="position:absolute;font-size:225px;color:green;width:300px;height:300px;top:20%;left:40%;"></div>
<canvas id="rcanvas" height="400" width="500" style="position:absolute;width:700px;height:700px;">
</body>
<script>
let bz=new BroadcastChannel('bez');
document.getElementById('btn').addEventListener('click',function(){
bz.postMessage({data: 222});});
</script>
<script async charset="utf-8" src="./r.js"></script>
<script>
let hi,wi;
hi=window.innerHeight;
wi=window.innerWidth;
hi=Math.round(hi);
wi=window.innerWidth;
wi=Math.round(wi);
document.getElementById("ihig").innerHTML=hi;
document.getElementById("circle").height=hi;
document.getElementById("circle").width=wi;
</script>
