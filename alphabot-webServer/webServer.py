from flask import Flask, render_template, url_for, request, redirect
import time, alphabot
import time
app = Flask(__name__)
bot = alphabot.AlphaBot()
bot.stop()
    
@app.route("/", methods=['POST']) #http://127.0.0.1:5000/, di default Flask usa la porta 5000
def bot():
    error = None
    if (request.method == 'POST'):
        value = float(request.form['val']) / 1000 #seconds
        if request.form['btn'] == 'up':
            bot.forward()
            time.sleep(value)
            bot.stop()
        elif request.form['btn'] == 'right':
            bot.right()
            time.sleep(value)
            bot.stop()
        elif request.form['btn'] == 'down':
            bot.backward()
            time.sleep(value)
            bot.stop()
        elif request.form['btn'] == 'left':
            bot.left()
            time.sleep(value)
            bot.stop()
    return render_template("webpage_alphabot.html", error = error)

def main():
    app.run(host="127.0.0.1",debug=True)

if __name__=="__main__":
    main()