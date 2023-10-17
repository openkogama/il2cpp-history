
/* LodData(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::LodData::LodData__ctor
               (LodData *this,float activateDistance,bool isVisible,bool shadows,MethodInfo *method)

{
  this->isVisible = isVisible;
  this->activateDistance = activateDistance;
  this->shadows = shadows;
  return;
}

