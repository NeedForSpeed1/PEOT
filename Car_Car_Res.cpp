#include "Car_Car_Res.h"

void Car_Car_Res::Collide(Car c1, Car c2)
{
    //add in sequence of conditions and effects here
    bool collision = false; //just a filler for now until tie in coll_detection

    if (collision)  //may be able to remove this condition later
    {
        //c1 hits c2 in center while c2 at rest
        float c1_y_center = (c1.getPos_FD().getY() + c1.getPos_FP().getY())/2.0f;
        float c1_x_center = c1.getPos_FD().getX();
        float c2_y_center = (c2.getPos_FD().getY() + c2.getPos_FP().getY())/2.0f;
        float c2_x_center = c2.getPos_FD().getX();
        if (c1_x_center==c2_x_center && c1_y_center==c2_y_center)
        {
            //effect on c2 by c1
            c2.Update(2, c1.getMass(), c1.getAccel());
            //effect on c1 by c2
            c1.Update(2, c2.getMass(), c2.getAccel());  //c2's acceleration sohuld be (0,0,0,1) because it's at rest
        }

        //c1 hits c2 in center while c2 not at rest
            //c1 has greater velocity
            //c2 has greater velocity
            //equal velocity
        
        //c1 hits c2 from bottom angle while c2 at rest

        //c1 hits c2 from top angle while c2 at rest


    }
}