field.onclick = function (event) {
    let fieldCoords = this.getBoundingClientRect();

    let ballX = event.clientX - fieldCoords.left - field.clientLeft - ball.clientWidth / 2;
    let ballY = event.clientY - fieldCoords.top - field.clientTop - ball.clientHeight / 2;

    ball.style.left = `${Math.max(0, Math.min(ballX, field.clientWidth - ball.clientWidth))}px`;
    ball.style.top = `${Math.max(0, Math.min(ballY, field.clientHeight - ball.clientHeight))}px`;
}