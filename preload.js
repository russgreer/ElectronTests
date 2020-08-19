// All of the Node.js APIs are available in the preload process.
// It has the same sandbox as a Chrome extension.
 
const fetch = require('node-fetch')



window.addEventListener('DOMContentLoaded', () => {

  const replaceText = (selector, text) => {
    const element = document.getElementById(selector)
    if (element) element.innerText = text
  }

  for (const type of ['chrome', 'node', 'electron']) {
    replaceText(`${type}-version`, process.versions[type])
  }
  
  document.getElementById("btn1").addEventListener("click", () => {

    fetch('http://russgreer.com/REST')
    .then(res => res.json())
   .then(json => console.log(json));
   //fetch('https://api.github.com/users/github')
   //.then(res => res.json())
   // .then(json => console.log(json))

  });


});


