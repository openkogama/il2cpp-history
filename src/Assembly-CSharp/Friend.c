
/* Friend(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::Friend::Friend__ctor
               (Friend *this,int32_t friendID,int32_t id,FriendStatus__Enum status,
               MethodInfo *method)

{
  (this->fields).friendID = friendID;
  (this->fields).profileID = id;
  (this->fields).status = status;
  return;
}

