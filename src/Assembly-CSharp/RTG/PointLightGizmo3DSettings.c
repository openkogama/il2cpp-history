
/* Void SetRadiusSnapStep(Single) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DSettings::
     PointLightGizmo3DSettings_SetRadiusSnapStep
               (PointLightGizmo3DSettings *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= snapStep) {
    fVar1 = snapStep;
  }
  (this->fields)._radiusSnapStep = fVar1;
  return;
}


/* PointLightGizmo3DSettings() */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DSettings::PointLightGizmo3DSettings__ctor
               (PointLightGizmo3DSettings *this,MethodInfo *method)

{
  (this->fields)._radiusSnapStep = 0.1;
  return;
}

