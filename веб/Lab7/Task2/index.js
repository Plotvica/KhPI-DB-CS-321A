let list=document.getElementById("city")

list.onchange=function () {
    Array.from(document.getElementsByClassName("box")).forEach(e => {
        e.style.display="none"
    });
    document.getElementById(list.selectedIndex).style.display="block";
}