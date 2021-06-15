
/* MvCharacterController+NoCollisionData(Vector3, Boolean) */

void Assembly-CSharp.dll::MvCharacterController+NoCollisionData::
     MvCharacterController_NoCollisionData__ctor
               (MvCharacterController_NoCollisionData *this,Vector3 pos,bool val,MethodInfo *method)

{
  *(undefined8 *)&(this->position).z = pos._0_8_;
  this[1].position.x = pos.z;
  *(bool *)&this[1].position.y = val;
  return;
}

