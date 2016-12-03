#ifndef DIAGRAMWINDOW_H
#define DIAGRAMWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include "node.h"

class DiagramWindow : public QMainWindow
{
    Q_OBJECT

public:
    DiagramWindow(QWidget *parent = 0);
    ~DiagramWindow();

private slots:
    void addNode();
    void addLink();
    void del();
    void cut();
    void copy();
    void paste();
    void bringToFront();
    void sendToBack();
    void properties();
    void updateActions();

private:
    typedef QPair<Node *, Node *> NodePair;

    void createActions();
    void createMenus();
    void createToolBars();
    void setZValue(int z);
    void setupNode(Node *node);
    Node *selectedNode() const;
    Link *selectedLink() const;
    NodePair selectedNodePair() const;

    QMenu *fileMenu;
    QMenu *editMenu;
    QToolBar *editToolBar;

    //File
    QAction *newAct;
    QAction *exitAct;
    //Edit
    QAction *nodeAct;
    QAction *linkAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *cutAct;
    QAction *delAct;

    QGraphicsScene *scene;
    QGraphicsView *view;

    int minZ;
    int maxZ;
    int seqNumber;
};

#endif // DIAGRAMWINDOW_H
