
/* PlayerElementData(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementData::PlayerElementData__ctor
               (PlayerElementData *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).player = player;
  (this->fields).friend_1 = friend_1;
  return;
}

