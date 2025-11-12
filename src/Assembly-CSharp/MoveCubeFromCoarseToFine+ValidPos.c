
/* MoveCubeFromCoarseToFine+ValidPos(Boolean, Vector3) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine+ValidPos::MoveCubeFromCoarseToFine_ValidPos__ctor
               (MoveCubeFromCoarseToFine_ValidPos *this,bool valid,Vector3 *pos,MethodInfo *method)

{
  fVar1 = pos->y;
  fVar2 = pos->z;
  (this->fields).pos.x = pos->x;
  (this->fields).pos.y = fVar1;
  (this->fields).pos.z = fVar2;
  (this->fields).valid = valid;
  return;
}

