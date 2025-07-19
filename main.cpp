#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window; // creates window
    window.setWindowFlags(Qt::Window | Qt::FramelessWindowHint); // sets window to be without b
    window.setStyleSheet("background-color: black;"); // sets background to black
    window.showFullScreen(); // shows full screen (:
    return app.exec();
}
