
/* GizmoScaleGuideLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel__ctor
               (GizmoScaleGuideLookAndFeel *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._xAxisColor.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._xAxisColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._xAxisColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._xAxisColor.a = (float)uVar4;
  (this->fields)._useZoomFactor = 1;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._zAxisColor.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._zAxisColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._zAxisColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._zAxisColor.a = (float)uVar4;
  (this->fields)._axisLength = 2.0;
  uVar3 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._yAxisColor.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields)._yAxisColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._yAxisColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._yAxisColor.a = (float)uVar4;
  return;
}


/* Void set_ZAxisColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel_set_ZAxisColor
               (GizmoScaleGuideLookAndFeel *this,Color *value,MethodInfo *method)

{
  fVar1 = value->g;
  fVar2 = value->b;
  fVar3 = value->a;
  (this->fields)._zAxisColor.r = value->r;
  (this->fields)._zAxisColor.g = fVar1;
  (this->fields)._zAxisColor.b = fVar2;
  (this->fields)._zAxisColor.a = fVar3;
  return;
}

