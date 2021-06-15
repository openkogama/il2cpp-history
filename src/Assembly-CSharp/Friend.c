
/* Friend(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::Friend::Friend__ctor
               (Friend *this,int32_t friendID,int32_t id,FriendStatus__Enum status,
               MethodInfo *method)

{
  (this->fields).profileID = -1;
  (this->fields).friendID = -1;
  (this->fields).status = -1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).friendID = friendID;
  (this->fields).profileID = id;
  (this->fields).status = status;
  return;
}

