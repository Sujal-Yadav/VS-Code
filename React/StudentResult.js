import React, {Component} from 'react'
import ReactDOM from 'react-dom/client';
import "./test.css";
import styles from "./test.css"

const Styles = {
    main: {
        color: "red",
        backgroundColor: "blue",
        fontSize: "50px",
        fontFamily: "Arial"
    }

};

function StudResult({ bool }) {
    if (bool === true) {
        return StudentPassed();
    }

    else {
        return StudentFailed();
    }

    function StudentPassed() {
        return <h1>Student has passed the exam</h1>
        // return <h1 className='main' style={Styles.main}>Student has passed the exam</h1>
    }
    
    function StudentFailed() {
        return <h1 style={{ color: "Red" }}>Student has failed the exam</h1>
    }
}




export default StudResult;
