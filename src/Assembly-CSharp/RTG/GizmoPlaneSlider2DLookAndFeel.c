
/* GizmoPlaneSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor
               (GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

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
  this_00 = (GizmoRotationArc3DLookAndFeel *)
            func_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._rotationArcLookAndFeel;
  (this->fields)._rotationArcLookAndFeel = (GizmoRotationArc2DLookAndFeel *)this_00;
  func_?(method_00,this_00);
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._color.r = _UNK_?;
  (this->fields)._color.g = fVar3;
  (this->fields)._color.b = fVar2;
  (this->fields)._color.a = fVar1;
  pCVar4 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_5,(MethodInfo *)0x0);
  fVar3 = pCVar4->g;
  fVar2 = pCVar4->b;
  fVar1 = pCVar4->a;
  (this->fields)._hoveredColor.r = pCVar4->r;
  (this->fields)._hoveredColor.g = fVar3;
  (this->fields)._hoveredColor.b = fVar2;
  (this->fields)._hoveredColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._borderColor.r = _UNK_?;
  (this->fields)._borderColor.g = fVar3;
  (this->fields)._borderColor.b = fVar2;
  (this->fields)._borderColor.a = fVar1;
  pCVar4 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_5,(MethodInfo *)0x0);
  fVar3 = pCVar4->r;
  fVar2 = pCVar4->g;
  fVar1 = pCVar4->b;
  fVar6 = pCVar4->a;
  (this->fields)._borderPolyThickness = 8.0;
  (this->fields)._hoveredBorderColor.r = fVar3;
  (this->fields)._hoveredBorderColor.g = fVar2;
  (this->fields)._hoveredBorderColor.b = fVar1;
  (this->fields)._hoveredBorderColor.a = fVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Color get_BorderColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
        GizmoPlaneSlider2DLookAndFeel_get_BorderColor
                  (Color *__return_storage_ptr__,GizmoPlaneSlider2DLookAndFeel *this,
                  MethodInfo *method)

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

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
        GizmoPlaneSlider2DLookAndFeel_get_HoveredBorderColor
                  (Color *__return_storage_ptr__,GizmoPlaneSlider2DLookAndFeel *this,
                  MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
     GizmoPlaneSlider2DLookAndFeel_set_BorderColor
               (GizmoPlaneSlider2DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._borderColor.r = value.r;
  (this->fields)._borderColor.g = value.g;
  (this->fields)._borderColor.b = value.b;
  (this->fields)._borderColor.a = value.a;
  return;
}


/* Void set_BorderPolyThickness(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
     GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness
               (GizmoPlaneSlider2DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderPolyThickness = fVar1;
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
     GizmoPlaneSlider2DLookAndFeel_set_HoveredBorderColor
               (GizmoPlaneSlider2DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._hoveredBorderColor.r = value.r;
  (this->fields)._hoveredBorderColor.g = value.g;
  (this->fields)._hoveredBorderColor.b = value.b;
  (this->fields)._hoveredBorderColor.a = value.a;
  return;
}

