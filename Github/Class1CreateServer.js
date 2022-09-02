const http = require('http')
const fs = require('fs')
const port = process.env.port||4001
const server = http.createServer((req, res)=>
{
    res.statusCode = 200
    res.setHeader('Content-Type', 'text/html')
    data = fs.readFileSync('Class1CreateServer.html')
    res.end(data)
  
}
)
server.listen(port, ()=>
{
    console.log('Successful')
}
)