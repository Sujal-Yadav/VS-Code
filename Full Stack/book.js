import React from 'react'
class Book extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            type: "Science",
            ISBN: "51263587894665",
            page: "120",
            year: 1964
        };
    }
    changetype = () => {
        this.setState({ page: "210" });
    }
    render() {
        return (
            <div>
                <h1>My {this.state.type}</h1>
                <p>
                    It is a {this.state.page}
                    {this.state.type}
                    from {this.state.year}.
                </p>
                <button
                    type="button"
                    onClick={this.changetype}
                >Change color</button>
            </div>
        );
    }
}

export default Car;