import socket


def run_client():
    client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)   # create a socket object

    server_ip = "127.0.0.1"  # replace with the server's IP address
    server_port = 8000  # replace with the server's port number
    
    client.connect((server_ip, server_port))    # establish connection with server

    while True:
        msg = input("Enter message: ")      # input message and send it to the server
        client.send(msg.encode("utf-8")[:1024])

        response = client.recv(1024)    # receive message from the server
        response = response.decode("utf-8") # Convert bytes to String

        # if server sent us "closed" in the payload, we break out of the loop and close our socket
        if response.lower() == "closed":
            break

        print(f"Received: {response}")

    client.close()  # close client socket (connection to the server)
    print("Connection to server closed")

run_client()
