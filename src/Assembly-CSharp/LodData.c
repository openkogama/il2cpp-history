
/* LodData(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::LodData::LodData__ctor
               (LodData *this,float activateDistance,bool isVisible,bool shadows,MethodInfo *method)

{
  this[1].isVisible = isVisible;
  this[1].activateDistance = activateDistance;
  this[1].shadows = shadows;
  return;
}

