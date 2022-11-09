let rand=Math.floor(Math.random()*100);
for(let i=0;i<rand;i++){
    let div=document.createElement("div");
    div.style.position="absolute";
    div.style.width=Math.floor(Math.random()*500)+"px";
    div.style.height=Math.floor(Math.random()*500)+"px";
    div.style.top=Math.floor(Math.random()*800)+"px";
    div.style.left=Math.floor(Math.random()*800)+"px";
    div.style.border='4px';
    div.style.borderStyle='solid';
    div.style.borderColor='#' + (Math.random().toString(16) + '000000').substring(2,8).toUpperCase();
    document.getElementById('blok').appendChild(div);
}


let div=[];
 div=document.getElementsByTagName('div');
 for(let i=0;i<div.length;i++){
     div[i].style.backgroundColor='#' + (Math.random().toString(16) + '000000').substring(2,8).toUpperCase();
     
 }
 let d=document.getElementById('blok').childNodes;
for(let i=0;i<div.length;i++) {
    d[i].textContent=Math.floor(Math.random()*10);
    div[i].style.position='absolute';
    div[i].style.fontSize='20px';
    div[i].style.textAlign="center";

}


