const express = require('express');
const app = express();

const PORT = 3000;

// Middleware para JSON
app.use(express.json());

// Rota principal
app.get('/', (req, res) => {
    res.json({
        mensagem: 'Servidor com Express funcionando 🚀'
    });
});

// Rota de teste
app.get('/teste', (req, res) => {
    res.json({
        rota: 'teste',
        status: 'ok'
    });
});

// Rota POST (exemplo)
app.post('/dados', (req, res) => {
    const dados = req.body;

    res.json({
        recebido: dados
    });
});

// Inicia servidor
app.listen(PORT, () => {
    console.log(`Rodando em http://localhost:${PORT}`);