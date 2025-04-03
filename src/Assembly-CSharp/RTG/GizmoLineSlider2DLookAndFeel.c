
/* GizmoLineSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor(GizmoLineSlider2DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
    cRam_? = '\x01';
  }
  (this->fields)._length = 50.0;
  (this->fields)._scale = 1.0;
  (this->fields)._boxThickness = 3.0;
  (this->fields)._isRotationArcVisible = 1;
  (this->fields)._color.r = 1.0;
  (this->fields)._color.g = 1.0;
  (this->fields)._color.b = 1.0;
  (this->fields)._color.a = 1.0;
  pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._hoveredColor.r = pCVar1->r;
  (this->fields)._hoveredColor.g = fVar3;
  (this->fields)._hoveredColor.b = fVar4;
  (this->fields)._hoveredColor.a = fVar5;
  (this->fields)._borderColor.r = 1.0;
  (this->fields)._borderColor.g = 1.0;
  (this->fields)._borderColor.b = 1.0;
  (this->fields)._borderColor.a = 1.0;
  pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._hoveredBorderColor.r = pCVar1->r;
  (this->fields)._hoveredBorderColor.g = fVar3;
  (this->fields)._hoveredBorderColor.b = fVar4;
  (this->fields)._hoveredBorderColor.a = fVar5;
  this_00 = (GizmoRotationArc3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  ppGVar6 = &(this->fields)._rotationArcLookAndFeel;
  *ppGVar6 = (GizmoRotationArc2DLookAndFeel *)this_00;
  func_?(ppGVar6,this_00);
  this_01 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._capLookAndFeel;
  *(GizmoCap2DLookAndFeel **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel_set_HoveredBorderColor(GizmoLineSlider2DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._hoveredBorderColor.r = value.r;
  (this->fields)._hoveredBorderColor.g = value.g;
  (this->fields)._hoveredBorderColor.b = value.b;
  (this->fields)._hoveredBorderColor.a = value.a;
  return;
}

