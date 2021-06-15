
/* TranslateSoundData(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::TranslateSoundData::TranslateSoundData__ctor
               (TranslateSoundData *this,float moveValue,bool moveToGridPos,Vector3 worldPos,
               MethodInfo *method)

{
  (this->worldPos).x = moveValue;
  *(bool *)&(this->worldPos).y = moveToGridPos;
  *(undefined8 *)&(this->worldPos).z = worldPos._0_8_;
  *(float *)&this[1].moveToGridPos = worldPos.z;
  return;
}

