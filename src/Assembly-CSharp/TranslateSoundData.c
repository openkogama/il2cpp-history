
/* TranslateSoundData(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::TranslateSoundData::TranslateSoundData__ctor
               (TranslateSoundData *this,float moveValue,bool moveToGridPos,Vector3 worldPos,
               MethodInfo *method)

{
  this->moveValue = moveValue;
  this->moveToGridPos = moveToGridPos;
  (this->worldPos).x = worldPos.x;
  (this->worldPos).y = worldPos.y;
  (this->worldPos).z = worldPos.z;
  return;
}

