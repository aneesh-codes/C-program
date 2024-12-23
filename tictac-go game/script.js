const board = document.getElementById('board');
const message = document.getElementById('message');
const restartButton = document.getElementById('restartButton');
let currentPlayer = 'X';
let gameState = ['', '', '', '', '', '', '', '', ''];
const winningCombinations = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
];

board.addEventListener('click', (e) => {
    const index = e.target.getAttribute('data-index');
    if (gameState[index] === '' && !checkWinner()) {
        gameState[index] = currentPlayer;
        e.target.textContent = currentPlayer;
        if (checkWinner()) {
            message.textContent = `${currentPlayer} wins!`;
        } else if (gameState.every(cell => cell !== '')) {
            message.textContent = 'It\'s a draw!';
        } else {
            currentPlayer = currentPlayer === 'X' ? 'O' : 'X';
        }
    }
});

restartButton.addEventListener('click', () => {
    gameState = ['', '', '', '', '', '', '', '', ''];
    document.querySelectorAll('.cell').forEach(cell => cell.textContent = '');
    message.textContent = '';
    currentPlayer = 'X';
});

function checkWinner() {
    return winningCombinations.some(combination => {
        return combination.every(index => {
            return gameState[index] === currentPlayer;
        });
    });
}
