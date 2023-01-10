import React from 'react'
class Book extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            subject: props.val,
            ISBN: "651546841315",
            page: "210",
            year: 1964,
            cost: 100,
            color: "Red"
        };
    }
    changeyear = () => {
        this.setState({ year: "2010" })
        this.setState({page: "250"})
    }

    changeCost = () => {
            let x = 10;
            this.setState({cost: this.state.cost + x})
    }

    render() {
        return (
            <div>
                <h1>My Subject is {this.state.subject}</h1>
                <h2>
                    It is a {this.state.page} number of page which have {this.state.ISBN} number and of {this.state.year}.
                </h2>
                <h2>
                    The book is having a {this.state.color} color and costs {this.state.cost} $.
                </h2>
                <button type="button" onClick={this.changeyear}>Get newest</button>
                <button type="button" onClick={this.changeCost}>Change Cost</button>
            </div>
        );
    }
}

export default Book;