const http = require('http')
const port = process.env.port || 4003
const server = http.createServer((req,res)=>
{
    res.StatusCode = 200
    res.setHeader('Content-Type', 'text/html')
    res.end('<h1>Hello, I am creating a server</h1>')
}
)
server.listen(port, ()=>
{
    console.log('Successful')
}
)