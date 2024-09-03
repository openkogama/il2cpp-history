
/* Void SetYSizeSnapStep(Single) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DSettings::BoxColliderGizmo3DSettings_SetYSizeSnapStep(BoxColliderGizmo3DSettings *this,float snapStep,MethodInfo *method)

{
  fVar1 = -0.0001;
  if (-0.0001 <= snapStep) {
    fVar1 = snapStep;
  }
  (this->fields)._ySizeSnapStep = fVar1;
  return;
}


/* Void SetZSizeSnapStep(Single) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DSettings::BoxColliderGizmo3DSettings_SetZSizeSnapStep(BoxColliderGizmo3DSettings *this,float snapStep,MethodInfo *method)

{
  fVar1 = -0.0001;
  if (-0.0001 <= snapStep) {
    fVar1 = snapStep;
  }
  (this->fields)._zSizeSnapStep = fVar1;
  return;
}


/* BoxColliderGizmo3DSettings() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DSettings::BoxColliderGizmo3DSettings__ctor(BoxColliderGizmo3DSettings *this,MethodInfo *method)

{
  (this->fields)._xSizeSnapStep = 0.1;
  (this->fields)._ySizeSnapStep = 0.1;
  (this->fields)._zSizeSnapStep = 0.1;
  (this->fields)._uniformSizeSnapStep = 0.1;
  return;
}

