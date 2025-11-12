
/* GizmoCap3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor
               (GizmoCap3DLookAndFeel *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._sphereBorderColor.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._sphereBorderColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._sphereBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._sphereBorderColor.a = (float)uVar4;
  (this->fields)._scale = 1.0;
  uVar1 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._hoveredColor.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._hoveredColor.a = (float)uVar4;
  (this->fields)._useZoomFactor = 1;
  (this->fields)._coneHeight = 1.65;
  (this->fields)._coneRadius = 0.5;
  (this->fields)._pyramidHeight = 1.65;
  (this->fields)._pyramidWidth = 0.8;
  (this->fields)._pyramidDepth = 0.8;
  (this->fields)._boxWidth = 0.7;
  (this->fields)._boxHeight = 0.7;
  (this->fields)._boxDepth = 0.7;
  (this->fields)._sphereRadius = 0.45;
  (this->fields)._trPrismWidth = 1.0;
  (this->fields)._trPrismHeight = 1.0;
  (this->fields)._trPrismDepth = 1.0;
  (this->fields)._numSphereBorderPoints = 100;
  uVar1 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar3 = _UNK_?;
  (this->fields)._color.g = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._color.a = (float)uVar4;
  return;
}


/* Single get_DefaultConeRadius() */

float Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultConeRadius
                (MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_DefaultPyramidDepth() */

float Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultPyramidDepth
                (MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_DefaultPyramidHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::
      GizmoCap3DLookAndFeel_get_DefaultPyramidHeight(MethodInfo *method)

{
  return _UNK_?;
}


/* Void set_BoxDepth(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._boxDepth = fVar1;
  return;
}


/* Void set_BoxHeight(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._boxHeight = fVar1;
  return;
}


/* Void set_BoxWidth(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._boxWidth = fVar1;
  return;
}


/* Void set_ConeHeight(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeHeight
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._coneHeight = fVar1;
  return;
}


/* Void set_ConeRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeRadius
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._coneRadius = fVar1;
  return;
}


/* Void set_IsSphereBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::
     GizmoCap3DLookAndFeel_set_IsSphereBorderVisible
               (GizmoCap3DLookAndFeel *this,bool value,MethodInfo *method)

{
  (this->fields)._isSphereBorderVisible = value;
  return;
}


/* Void set_NumSphereBorderPoints(Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::
     GizmoCap3DLookAndFeel_set_NumSphereBorderPoints
               (GizmoCap3DLookAndFeel *this,int32_t value,MethodInfo *method)

{
  iVar1 = 3;
  if (2 < value) {
    iVar1 = value;
  }
  (this->fields)._numSphereBorderPoints = iVar1;
  return;
}


/* Void set_PyramidDepth(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidDepth
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._pyramidDepth = fVar1;
  return;
}


/* Void set_PyramidHeight(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidHeight
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._pyramidHeight = fVar1;
  return;
}


/* Void set_PyramidWidth(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidWidth
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._pyramidWidth = fVar1;
  return;
}


/* Void set_SphereRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._sphereRadius = fVar1;
  return;
}


/* Void set_TrPrismDepth(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismDepth
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._trPrismDepth = fVar1;
  return;
}


/* Void set_TrPrismHeight(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismHeight
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._trPrismHeight = fVar1;
  return;
}


/* Void set_TrPrismWidth(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismWidth
               (GizmoCap3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._trPrismWidth = fVar1;
  return;
}

