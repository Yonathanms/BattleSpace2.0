//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/Enemigos.h"
Enemigos::Enemigos() {
    RelojE= new Clock;
    TiempotranscurridoE = new Time;

    sprt_enemy = new Sprite;
    text_enemy1 = new Texture;
    text_enemy2 = new Texture;
    text_enemy3 = new Texture;

    text_enemy1->loadFromFile("../Recursos/enemigo"+to_string(rand()%3+1)+".png");
    text_enemy2->loadFromFile("../Recursos/enemigo"+to_string(rand()%4+1)+".png");
    text_enemy3->loadFromFile("../Recursos/enemigo"+to_string(rand()%6+1)+".png");

    sprt_enemy->setScale(1.f/5,1.f/5);
    sprt_enemy->setPosition(1400,rand()%750 + 100);

}

Sprite Enemigos::GetSpriteEnemy(int gmode) {
    if (gmode == 1) {
        sprt_enemy->setTexture(*text_enemy1);
        return *sprt_enemy;
    }
    if (gmode == 2) {
        sprt_enemy->setTexture(*text_enemy2);
        return *sprt_enemy;
    }
    if (gmode == 3) {
        sprt_enemy->setTexture(*text_enemy3);
        return *sprt_enemy;
    }
}

void Enemigos::MoveEnemy(int Move, float GameM) {
    *TiempotranscurridoE = RelojE->getElapsedTime();
    if (Move == 0){
        if (TiempotranscurridoE->asSeconds() < 0.3){
            sprt_enemy->move(-4.5f*GameM,7.0f*GameM);
        }
        if (TiempotranscurridoE->asSeconds()> 0.3 and TiempotranscurridoE->asSeconds()<0.6){
            sprt_enemy->move(-4.5f*GameM,-7.0f*GameM);
        }
        if (TiempotranscurridoE->asSeconds()>0.6){
            RelojE->restart();
        }
        cout<<TiempotranscurridoE->asSeconds()<<endl;
    }

    if (Move == 1){
        sprt_enemy->move(-5.0f, 0);
    }
    if (Move == 2){
        sprt_enemy->move(-6.0f, 0);
    }

    if(Move == 3){
        sprt_enemy->move(-4.8f, 0 );
    }
    if (Move == 4){
        sprt_enemy->move( -5.0f, 0);
    }
    if (Move == 5){
        if (TiempotranscurridoE->asSeconds() < 1){
            sprt_enemy->move(-3.0f,4.0f);
        }
        if (TiempotranscurridoE->asSeconds()> 1 and TiempotranscurridoE->asSeconds()<2){
            sprt_enemy->move(-3.0f,-4.0f);
        }
        if (TiempotranscurridoE->asSeconds()>2){
            RelojE->restart();
        }
        cout<<TiempotranscurridoE->asSeconds()<<endl;
    }

    if (Move == 6){
        if (TiempotranscurridoE->asSeconds() < 0.5){
            sprt_enemy->move(-4.0f,5.0f);
        }
        if (TiempotranscurridoE->asSeconds()> 0.5 and TiempotranscurridoE->asSeconds()<1){
            sprt_enemy->move(-4.0f,-5.0f);
        }
        if (TiempotranscurridoE->asSeconds()>1){
            RelojE->restart();
        }
        cout<<TiempotranscurridoE->asSeconds()<<endl;
    }

}

int Enemigos::GetPosXEnemy() {
    return sprt_enemy->getPosition().x;
}
