import socket

def run_server():
    # create a socket object
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    server_ip = "127.0.0.1"         # Standard loopback interface address (localhost)
    port = 8000                     # Port to listen on (non-privileged ports are > 1023)

    server.bind((server_ip, port))  # bind the socket to a specific address and port
    server.listen(0)                # listen for incoming connections
    print(f"Listening on {server_ip}:{port}")

    client_socket, client_address = server.accept() # accept incoming connections
    print(f"Accepted connection from {client_address[0]}:{client_address[1]}")

    # receive data from the client
    while True:
        request = client_socket.recv(1024)
        request = request.decode("utf-8") # convert bytes to string
        
        # if we receive "close" from the client, then we break
        # out of the loop and close the conneciton
        if request.lower() == "close":
            # send response to the client which acknowledges that the
            # connection should be closed and break out of the loop
            client_socket.send("closed".encode("utf-8"))
            break

        print(f"Received: {request}")

        response = "accepted".encode("utf-8") # convert string to bytes
        client_socket.send(response)    # convert and send accept response to the client

    client_socket.close()   # close connection socket with the client
    print("Connection to client closed")
    server.close()   # close server socket

run_server()