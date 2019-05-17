#include "BuildTowerIcon.h"
#include "game.h"

extern Game * game;

BuildTowerIcon::BuildTowerIcon(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/images/Tower2.png"));
}

void BuildTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if (!game->build){
        game->build = new Tower();
        game->setCursor(QString(":/images/Tower1.png"));
    }
}
