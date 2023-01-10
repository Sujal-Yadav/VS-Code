import React, { Component } from 'react';
import {createRoot} from 'react-dom/client';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import Book from './book';
import StudResult from './StudentResult';
// const rootElement = document.getElementById("root");
// const root = createRoot(rootElement);

const myfunc = (
  <table>
    <tr>
      <th>Fruits</th>
      <th>Colour</th>
      <th>Vegetables</th>
    </tr>
    <tr>
      <td>Banana</td>
      <td>Yellow</td>
      <td>Potato</td>
    </tr>
    <tr>
      <td>Mango</td>
      <td>Green</td>
      <td>Tomato</td>
    </tr>
    <tr>
      <td>Apple</td>
      <td>Red</td>
      <td>Cabbage</td>
    </tr>
  </table>
);

function Func(){
  return <h1>Learnign React</h1>
}

function Lab(props){
  return <h2>Thus ia lab {props.val} of FullStack.</h2>
}


// root.render(myfunc);
// root.render(<Func/>);
// root.render(<Lab val="19"/>);
// root.render(<Book val="History" />);
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(<StudResult bool={false} />)