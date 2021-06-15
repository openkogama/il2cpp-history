
/* MoveCubeFromCoarseToFine+ValidPos(Boolean, Vector3) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine+ValidPos::MoveCubeFromCoarseToFine_ValidPos__ctor
               (MoveCubeFromCoarseToFine_ValidPos *this,bool valid,Vector3 pos,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).valid = valid;
  (this->fields).pos.x = pos.x;
  (this->fields).pos.y = pos.y;
  (this->fields).pos.z = pos.z;
  return;
}

