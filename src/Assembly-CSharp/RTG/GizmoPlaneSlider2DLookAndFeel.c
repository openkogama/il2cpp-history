
/* GizmoPlaneSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
    cRam_? = '\x01';
  }
  (this->fields)._fillMode = 2;
  (this->fields)._scale = 1.0;
  (this->fields)._quadWidth = 25.0;
  (this->fields)._quadHeight = 25.0;
  (this->fields)._circleRadius = 12.0;
  (this->fields)._isRotationArcVisible = 1;
  this_00 = (GizmoRotationArc3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._rotationArcLookAndFeel;
  *(GizmoRotationArc3DLookAndFeel **)method_00 = this_00;
  func_?(method_00,this_00);
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
  fVar3 = pCVar1->r;
  fVar4 = pCVar1->g;
  fVar5 = pCVar1->b;
  fVar6 = pCVar1->a;
  (this->fields)._borderPolyThickness = 8.0;
  (this->fields)._hoveredBorderColor.r = fVar3;
  (this->fields)._hoveredBorderColor.g = fVar4;
  (this->fields)._hoveredBorderColor.b = fVar5;
  (this->fields)._hoveredBorderColor.a = fVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Color get_BorderColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_get_BorderColor(Color *__return_storage_ptr__,GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

{
  fVar1 = (this->fields)._borderColor.g;
  fVar2 = (this->fields)._borderColor.b;
  fVar3 = (this->fields)._borderColor.a;
  __return_storage_ptr__->r = (this->fields)._borderColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Color get_HoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_get_HoveredBorderColor(Color *__return_storage_ptr__,GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

{
  fVar1 = (this->fields)._hoveredBorderColor.g;
  fVar2 = (this->fields)._hoveredBorderColor.b;
  fVar3 = (this->fields)._hoveredBorderColor.a;
  __return_storage_ptr__->r = (this->fields)._hoveredBorderColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Void set_BorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderColor(GizmoPlaneSlider2DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._borderColor.r = value.r;
  (this->fields)._borderColor.g = value.g;
  (this->fields)._borderColor.b = value.b;
  (this->fields)._borderColor.a = value.a;
  return;
}


/* Void set_BorderPolyThickness(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness(GizmoPlaneSlider2DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderPolyThickness = fVar1;
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_HoveredBorderColor(GizmoPlaneSlider2DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._hoveredBorderColor.r = value.r;
  (this->fields)._hoveredBorderColor.g = value.g;
  (this->fields)._hoveredBorderColor.b = value.b;
  (this->fields)._hoveredBorderColor.a = value.a;
  return;
}

