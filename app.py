from flask import Flask, jsonify, request
from pymongo import MongoClient
from werkzeug.exceptions import BadRequest

# Flask app initialization
app = Flask(__name__)

try:
    client = MongoClient("mongodb+srv://rishabhgarai7:rishabh123@cluster0.jo4dq.mongodb.net/mydatabase?retryWrites=true&w=majority", serverSelectionTimeoutMS=5000)
    db = client["mydatabase"]
    print("Connected to MongoDB Atlas")
except Exception as e:
    print("Connection error:", e)
    exit()  # Exit the app if MongoDB connection fails

# Main block
if __name__ == '__main__':
    app.run(debug=True)
