
/* GizmoLineSlider3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor
               (GizmoLineSlider3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
    cRam_? = '\x01';
  }
  (this->fields)._length = 5.0;
  (this->fields)._scale = 1.0;
  (this->fields)._useZoomFactor = 1;
  (this->fields)._boxHeight = 0.18;
  (this->fields)._boxDepth = 0.18;
  (this->fields)._cylinderRadius = 0.15;
  (this->fields)._isRotationArcVisible = 1;
  this_00 = (GizmoRotationArc3DLookAndFeel *)
            func_?(TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
  GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._rotationArcLookAndFeel = this_00;
  func_?(&(this->fields)._rotationArcLookAndFeel,this_00);
  pCVar1 = RTSystemValues::RTSystemValues_get_XAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._color.r = pCVar1->r;
  (this->fields)._color.g = fVar3;
  (this->fields)._color.b = fVar4;
  (this->fields)._color.a = fVar5;
  pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._hoveredColor.r = pCVar1->r;
  (this->fields)._hoveredColor.g = fVar3;
  (this->fields)._hoveredColor.b = fVar4;
  (this->fields)._hoveredColor.a = fVar5;
  this_01 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._capLookAndFeel;
  (this->fields)._capLookAndFeel = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_Color(Color) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel_set_Color
               (GizmoLineSlider3DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._color.r = value.r;
  (this->fields)._color.g = value.g;
  (this->fields)._color.b = value.b;
  (this->fields)._color.a = value.a;
  return;
}

