var firstRandomNumber = Math.floor(Math.random()*6)+1;
var secondRandomNumber = Math.floor(Math.random()*6)+1;

var firstImage = "images/dice" + firstRandomNumber + ".png";
var secondImage = "images/dice" + secondRandomNumber + ".png";


var image1 = document.querySelectorAll("img")[0].setAttribute("src", firstImage);
var image2 = document.querySelectorAll("img")[1].setAttribute("src", secondImage);

if (firstRandomNumber > secondRandomNumber){
    document.querySelector("h1").innerHTML = "🎉✨ Player 1 Won ✨🎉";
} else if (firstRandomNumber < secondRandomNumber){
    document.querySelector("h1").innerHTML = "🎉✨ Player 2 Won ✨🎉";
} else if (firstRandomNumber = secondRandomNumber){
    document.querySelector("h1").innerHTML = "Draw!";
}
