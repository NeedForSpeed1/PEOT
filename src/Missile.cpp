//#include math lib here
#include <GlutInfo.h>
#include <application.h>
#include <Timing.h>

#include <stdio.h>

class Missile : public Application
{
    enum ShotType
    {
        UNUSED = 0,
        MISSILE
        //extend in future
    };

    struct Round
    {
        Particle particle;
        ShotType type;
        unsigned startTime;

        void render()
        {
            Vector position;
            particle.getPosition(&position);

            glColor3f(0, 0, 0);
            glPushMatrix();
            glTranslatef(position.x, position.y, position.z);
            glutSolidSphere(0.3f, 5, 4);
            glPopMatrix();

            glColor3f(0.75, 0.75, 0.75);
            glPushMatrix();
            glTranslatef(position.x, 0, position.z);
            glScalef(1.0f, 0.1f, 1.0f);
            glutSolidSphere(0.6f, 5, 4);
            glPopMatrix();
        }
    };

    const static unsigned max_rounds = 8;

    Round ammo[max_rounds];

    ShotType currShotType;

    void release();

public:

    Missile();

    virtual const char* getTitle();

    virtual void update();

    virtual void display();

    virtual void mouse(int button, int state, int x, int y);

    virtual void key(unsigned char key);
};


Missile::Missile()
    : currShotType(MISSILE)
{
    // defualt state is unused
    for (Round* shot = ammo; shot < ammo + max_rounds; shot++)
    {
        shot->type = UNUSED;
    }
}

const char* Missile::getTitle()
{
    return "Missile";
}

void Missile::release()
{
    Round* shot;
    for (shot = ammo; shot < ammo + max_rounds; shot++)
    {
        if (shot->type == UNUSED) break;
    }

    // none left to release
    if (shot >= ammo + max_rounds) return;


    switch (currShotType)
    {
    case MISSILE:
        shot->particle.resetCompMass(200.0f); 
        shot->particle.setVelocity(0.0f, 30.0f, 40.0f);
        shot->particle.setAcceleration(0.0f, -20.0f, 0.0f);
        break;
    //add more cases as we extend
    }


    shot->particle.setPosition(0.0f, 1.5f, 0.0f);
    shot->startTime = TimingData::get().lastFrameTimestamp;
    shot->type = currShotType;

    shot->particle.clearAccumulator();
}

void Missile::update()
{
    //duration of last frame (seconds)
    float duration = (float)TimingData::get().lastFrameDuration * 0.001f;
    if (duration <= 0.0f) return;

    // Update physics of each particle 
    for (Round* shot = ammo; shot < ammo + max_rounds; shot++)
    {
        if (shot->type != UNUSED)
        {
            shot->particle.integrate(duration);

            // is it out of range or other condition that prevents its appearance now?
            if (shot->particle.getPosition().y < 0.0f ||
                shot->startTime + 5000 < TimingData::get().lastFrameTimestamp ||
                shot->particle.getPosition().z > 200.0f)
            {
                // object pooling for better performance
                shot->type = UNUSED;
            }
        }
    }

    Application::update();
}

void Missile::display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(-25.0, 8.0, 5.0, 0.0, 5.0, 22.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(0.0f, 1.5f, 0.0f);
    glutSolidSphere(0.1f, 5, 5);
    glTranslatef(0.0f, -1.5f, 0.0f);
    glColor3f(0.75f, 0.75f, 0.75f);
    glScalef(1.0f, 0.1f, 1.0f);
    glutSolidSphere(0.1f, 5, 5);
    glPopMatrix();

    glColor3f(0.75f, 0.75f, 0.75f);
    glBegin(GL_LINES);
    for (unsigned i = 0; i < 200; i += 10)
    {
        glVertex3f(-5.0f, 0.0f, i);
        glVertex3f(5.0f, 0.0f, i);
    }
    glEnd();

    // Render each particle
    for (Round* shot = ammo; shot < ammo + max_rounds; shot++)
    {
        if (shot->type != UNUSED)
        {
            shot->render();
        }
    }

    glColor3f(0.0f, 0.0f, 0.0f);
    renderText(10.0f, 34.0f, "Click: Release\n1-4: Select Type");
    //display the selected type
    if (currShotType==MISSILE)  //may need to change logic if == not pulling ocrrectly
    {
        renderText(10.0f, 10.0f, "Missile Released");
        //add more conditions later as we extend
    }
    else {renderText(10.0f, 10.0f, "Ivalid Type Selected"); }
}

void Missile::mouse(int button, int state, int x, int y)
{
    if (state == GLUT_DOWN) release();
}

void Missile::key(unsigned char key)
{
    switch (key)
    {
    case '1': currentShotType = MISSILE; break;
        //add more cases as we extend
    }
}


Application* getApplication()
{
    return new Missile();
}