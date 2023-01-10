 const { createPool } = require('mysql')

const pool = createPool({
    host: "127.0.0.1",
    user: "root",
    password: "Sujal@123",
    database: "test",
    connectionLimit: 10
})

pool.query(`select * from product`, function(err, result, fields) {
    if (err) {
        return console.log(err);
    }
    return console.log(result);
})
