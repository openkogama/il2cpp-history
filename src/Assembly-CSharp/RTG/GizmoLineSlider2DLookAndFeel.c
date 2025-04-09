
/* GizmoLineSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor
               (GizmoLineSlider2DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._length = 50.0;
  (this->fields)._scale = 1.0;
  (this->fields)._boxThickness = 3.0;
  (this->fields)._isRotationArcVisible = 1;
  (this->fields)._color.r = fVar4;
  (this->fields)._color.g = fVar3;
  (this->fields)._color.b = fVar2;
  (this->fields)._color.a = fVar1;
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_6,(MethodInfo *)0x0);
  fVar4 = pCVar5->g;
  fVar3 = pCVar5->b;
  fVar2 = pCVar5->a;
  (this->fields)._hoveredColor.r = pCVar5->r;
  (this->fields)._hoveredColor.g = fVar4;
  (this->fields)._hoveredColor.b = fVar3;
  (this->fields)._hoveredColor.a = fVar2;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._borderColor.r = _UNK_?;
  (this->fields)._borderColor.g = fVar4;
  (this->fields)._borderColor.b = fVar3;
  (this->fields)._borderColor.a = fVar2;
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_6,(MethodInfo *)0x0);
  fVar4 = pCVar5->g;
  fVar3 = pCVar5->b;
  fVar2 = pCVar5->a;
  (this->fields)._hoveredBorderColor.r = pCVar5->r;
  (this->fields)._hoveredBorderColor.g = fVar4;
  (this->fields)._hoveredBorderColor.b = fVar3;
  (this->fields)._hoveredBorderColor.a = fVar2;
  this_00 = (GizmoRotationArc3DLookAndFeel *)
            func_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  ppGVar7 = &(this->fields)._rotationArcLookAndFeel;
  *ppGVar7 = (GizmoRotationArc2DLookAndFeel *)this_00;
  func_?(ppGVar7,this_00);
  this_01 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._capLookAndFeel;
  *(GizmoCap2DLookAndFeel **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DLookAndFeel::
     GizmoLineSlider2DLookAndFeel_set_HoveredBorderColor
               (GizmoLineSlider2DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._hoveredBorderColor.r = value.r;
  (this->fields)._hoveredBorderColor.g = value.g;
  (this->fields)._hoveredBorderColor.b = value.b;
  (this->fields)._hoveredBorderColor.a = value.a;
  return;
}

