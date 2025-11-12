
/* TranslateSoundData(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::TranslateSoundData::TranslateSoundData__ctor
               (TranslateSoundData *this,float moveValue,bool moveToGridPos,Vector3 *worldPos,
               MethodInfo *method)

{
  fVar1 = worldPos->y;
  fVar2 = worldPos->z;
  (this->worldPos).x = worldPos->x;
  (this->worldPos).y = fVar1;
  (this->worldPos).z = fVar2;
  this->moveValue = moveValue;
  this->moveToGridPos = moveToGridPos;
  return;
}

