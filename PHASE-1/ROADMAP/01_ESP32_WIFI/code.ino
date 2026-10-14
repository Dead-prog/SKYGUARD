#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "DRONE_console"; // your network
const char* password = "drone_password"; // your network password

WebServer server(80);

const String site = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Controller console</title>
    <style>
        @media (orientation: landscape) and (max-height: 500px) {
            body {
            margin: 0;
            min-height: 100vh;
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            background: #111827;
            color: white;
            font-family: Arial, sans-serif;
        }

        header {
            display: flex;
            flex-direction: column;
            align-items: center;
            margin-bottom: 20px;
        }

        main {
            display: grid;
            grid-template-columns: repeat(2, 1fr);
            gap: 20px;
            padding: 20px;
            width: 100%;
        }

        .controller {
            display: flex;
            flex-direction: row;
            align-items: center;
            justify-content: center;
        }

        .top-bottom {
            display: flex;
            flex-direction: column;
            align-items: center;
            margin-right: 20px;

        }

        .left-right {
            display: flex;
            flex-direction: row;
            align-items: center;
        }

        .direction {
            display: flex;
            flex-direction: row;
            align-items: center;
            justify-content: center;
            gap: 40px;
        }

        a {
            display: inline-block;
            padding: 30px 30px;
            margin: 5px;
            border-radius: 50px;
            background-color: #1f2937;
            color: white;
            text-decoration: none;
            transition: background-color 0.3s ease;
        }

        a:hover {
            background-color: #374151;
        }
    }

    </style>
</head>
<body>

    <header>
        <h1>SKYGUARD</h1>
    </header>


    <main>
        <div class="controller">
            <div class="top-bottom">
                <a href="/c-top" class="top">T</a>

                <a href="/c-bottom" class="bottom">B</a>
            </div>

            <div class="left-right">
                <a href="/c-left" class="left">L</a>

                <a href="/c-right" class="right">R</a>
            </div>
        </div>

        <div class="direction">
            <a href="/d-left" class="left">L</a>

            <a href="/d-right" class="right">R</a>
        </div>
    </main>
    
</body>
</html>)rawliteral";

void setup() {
    Serial.begin(115200);
    WiFi.softAP(ssid, password);

    Serial.println("Wi-Fi started");
    Serial.print("IP address: ");
    Serial.println(WiFi.softAPIP());

    // ---- AJOUTEZ CETTE ROUTE POUR AFFICHER LE SITE ----
    server.on("/", HTTP_GET, []() {
        server.send(200, "text/html", site);
    });

    // C-Bouton top
    server.on("/c-top", HTTP_GET, []() {
        Serial.println("Top button pressed");

        server.sendHeader("Location", "/");
        server.send(303);
    });

    // C-Bouton bottom
    server.on("/c-bottom", HTTP_GET, []() {
        Serial.println("Bottom button pressed");

        server.sendHeader("Location", "/");
        server.send(303);
    });

    // C-Bouton left
    server.on("/c-left", HTTP_GET, []() {
        Serial.println("Left button pressed");

        server.sendHeader("Location", "/");
        server.send(303);
    });

    // C-Bouton right
    server.on("/c-right", HTTP_GET, []() {
        Serial.println("Right button pressed");

        server.sendHeader("Location", "/");
        server.send(303);
    });

    // D-Bouton left
    server.on("/d-left", HTTP_GET, []() {
        Serial.println("Left button pressed");

        server.sendHeader("Location", "/");
        server.send(303);
    });

    // D-Bouton right
    server.on("/d-right", HTTP_GET, []() {
        Serial.println("Right button pressed");

        server.sendHeader("Location", "/");
        server.send(303);
    });

    server.begin();
}

void loop() {
    // Your main code here
    server.handleClient();
}
