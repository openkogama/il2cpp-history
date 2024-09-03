
/* Void ConnectDblSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_ConnectDblSliderLookAndFeel
               (MoveGizmoLookAndFeel2D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DLookAndFeel *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    pGStack_1 = (this->fields)._dblSliderLookAndFeel;
    (slider->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(slider->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectSliderLookAndFeel(GizmoLineSlider2D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_ConnectSliderLookAndFeel
               (MoveGizmoLookAndFeel2D *this,GizmoLineSlider2D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 2;
    if (pGVar1->max_length <= (uint)axisIndex) {
code_?:
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (slider != (GizmoLineSlider2D *)0x0) {
    GizmoLineSlider2D::GizmoLineSlider2D_set_SharedLookAndFeel
              (slider,pGVar1->vector[axisIndex],(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[System.Enum] GetAllowedDblSliderPlaneTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
MoveGizmoLookAndFeel2D_GetAllowedDblSliderPlaneTypes
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPlane2DType);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Enum>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
  uStack_1 = 1;
  pOVar2 = (Object *)func_?(TypeInfo__RTG__GizmoPlane2DType,&uStack_1);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,pOVar2,
               MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_);
    pOVar2 = (Object *)func_?(TypeInfo__RTG__GizmoPlane2DType);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,pOVar2,
               MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_);
    return (List_1_System_Enum_ *)this_00;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_System_Enum_ *)(*pcVar3)();
  return pLVar4;
}


/* Boolean IsNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_IsNegativeSliderVisible
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (axisIndex + 2U < pBVar2->max_length) {
    return pBVar2->vector[axisIndex + 2] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_IsSliderVisible
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < pBVar2->max_length) {
      return pBVar2->vector[axisIndex] != 0;
    }
  }
  else {
    if (pBVar2 == (Boolean__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    if (axisIndex + 2U < pBVar2->max_length) {
      return pBVar2->vector[axisIndex + 2] != 0;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetAxisBorderColor
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      (pGVar2->fields)._borderColor.r = color.r;
      (pGVar2->fields)._borderColor.g = color.g;
      (pGVar2->fields)._borderColor.b = color.b;
      (pGVar2->fields)._borderColor.a = color.a;
      pGVar1 = (this->fields)._sglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar3->fields)._borderColor.r = color.r;
          (pGVar3->fields)._borderColor.g = color.g;
          (pGVar3->fields)._borderColor.b = color.b;
          (pGVar3->fields)._borderColor.a = color.a;
          pGVar1 = (this->fields)._sglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 2];
            if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar2->fields)._borderColor.r = color.r;
              (pGVar2->fields)._borderColor.g = color.g;
              (pGVar2->fields)._borderColor.b = color.b;
              (pGVar2->fields)._borderColor.a = color.a;
              pGVar1 = (this->fields)._sglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                   (pGVar3 = (pGVar1->vector[axisIndex + 2]->fields)._capLookAndFeel,
                   pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar3->fields)._borderColor.r = color.r;
                  (pGVar3->fields)._borderColor.g = color.g;
                  (pGVar3->fields)._borderColor.b = color.b;
                  (pGVar3->fields)._borderColor.a = color.a;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetAxisColor
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      (pGVar2->fields)._color.r = color.r;
      (pGVar2->fields)._color.g = color.g;
      (pGVar2->fields)._color.b = color.b;
      (pGVar2->fields)._color.a = color.a;
      pGVar1 = (this->fields)._sglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar3->fields)._color.r = color.r;
          (pGVar3->fields)._color.g = color.g;
          (pGVar3->fields)._color.b = color.b;
          (pGVar3->fields)._color.a = color.a;
          pGVar1 = (this->fields)._sglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 2];
            if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar2->fields)._color.r = color.r;
              (pGVar2->fields)._color.g = color.g;
              (pGVar2->fields)._color.b = color.b;
              (pGVar2->fields)._color.a = color.a;
              pGVar1 = (this->fields)._sglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                   (pGVar3 = (pGVar1->vector[axisIndex + 2]->fields)._capLookAndFeel,
                   pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar3->fields)._color.r = color.r;
                  (pGVar3->fields)._color.g = color.g;
                  (pGVar3->fields)._color.b = color.b;
                  (pGVar3->fields)._color.a = color.a;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetBoxSliderThickness(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetBoxSliderThickness
               (MoveGizmoLookAndFeel2D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)*ppGVar3,thickness,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDblSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderBorderColor
               (MoveGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._borderColor.r = color.r;
    (pGVar2->fields)._borderColor.g = color.g;
    (pGVar2->fields)._borderColor.b = color.b;
    (pGVar2->fields)._borderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDblSliderCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderCircleRadius
               (MoveGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._dblSliderLookAndFeel;
  if (this_00 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
              (this_00,radius,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDblSliderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderColor
               (MoveGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._color.r = color.r;
    (pGVar2->fields)._color.g = color.g;
    (pGVar2->fields)._color.b = color.b;
    (pGVar2->fields)._color.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDblSliderFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderFillMode
               (MoveGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._fillMode = fillMode;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDblSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderHoveredBorderColor
               (MoveGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredBorderColor.r = color.r;
    (pGVar2->fields)._hoveredBorderColor.g = color.g;
    (pGVar2->fields)._hoveredBorderColor.b = color.b;
    (pGVar2->fields)._hoveredBorderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDblSliderHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderHoveredColor
               (MoveGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredColor.r = color.r;
    (pGVar2->fields)._hoveredColor.g = color.g;
    (pGVar2->fields)._hoveredColor.b = color.b;
    (pGVar2->fields)._hoveredColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDblSliderQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderQuadHeight
               (MoveGizmoLookAndFeel2D *this,float height,MethodInfo *method)

{
  this_00 = (this->fields)._dblSliderLookAndFeel;
  if (this_00 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
              ((CameraMoveSettings *)this_00,height,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDblSliderQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderQuadWidth
               (MoveGizmoLookAndFeel2D *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._dblSliderLookAndFeel;
  if (this_00 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              ((GizmoPlaneSlider3DSettings *)this_00,width,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetScale
               (MoveGizmoLookAndFeel2D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) break;
      if (pGVar1->max_length <= uVar2) goto code_?;
      this_00 = *ppGVar3;
      if (this_00 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)this_00,scale,(MethodInfo *)0x0);
      this_01 = (this_00->fields)._capLookAndFeel;
      if (this_01 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                ((GizmoPlaneSlider3DSettings *)this_01,scale,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    this_02 = (this->fields)._dblSliderLookAndFeel;
    if (this_02 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                ((GizmoPlaneSlider3DSettings *)this_02,scale,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderArrowCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderArrowCapBaseRadius
               (MoveGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = (GizmoPlaneSlider3DLookAndFeel *)((*ppGVar3)->fields)._capLookAndFeel,
         this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                (this_00,radius,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderArrowCapHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderArrowCapHeight
               (MoveGizmoLookAndFeel2D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = (GizmoPlaneSlider3DLookAndFeel *)((*ppGVar3)->fields)._capLookAndFeel,
         this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                (this_00,height,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderCapFillMode
               (MoveGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetSliderCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderCapType
               (MoveGizmoLookAndFeel2D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._capType = capType;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetSliderCircleCapRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderCircleCapRadius
               (MoveGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._circleRadius = radius;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetSliderFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderFillMode
               (MoveGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderHoveredBorderColor
               (MoveGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._hoveredBorderColor.r = color.r;
      (pGVar4->fields)._hoveredBorderColor.g = color.g;
      (pGVar4->fields)._hoveredBorderColor.b = color.b;
      (pGVar4->fields)._hoveredBorderColor.a = color.a;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      if (pGVar5 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredBorderColor.r = color.r;
      (pGVar5->fields)._hoveredBorderColor.g = color.g;
      (pGVar5->fields)._hoveredBorderColor.b = color.b;
      (pGVar5->fields)._hoveredBorderColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetSliderHoveredFillColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderHoveredFillColor
               (MoveGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._hoveredColor.r = color.r;
      (pGVar4->fields)._hoveredColor.g = color.g;
      (pGVar4->fields)._hoveredColor.b = color.b;
      (pGVar4->fields)._hoveredColor.a = color.a;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      if (pGVar5 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredColor.r = color.r;
      (pGVar5->fields)._hoveredColor.g = color.g;
      (pGVar5->fields)._hoveredColor.b = color.b;
      (pGVar5->fields)._hoveredColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetSliderLineType(GizmoLine2DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderLineType
               (MoveGizmoLookAndFeel2D *this,GizmoLine2DType__Enum lineType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._lineType = lineType;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderQuadCapHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderQuadCapHeight
               (MoveGizmoLookAndFeel2D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = (GizmoPlaneSlider3DLookAndFeel *)((*ppGVar3)->fields)._capLookAndFeel,
         this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                (this_00,height,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderQuadCapWidth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderQuadCapWidth
               (MoveGizmoLookAndFeel2D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)this_00,width,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderVisible
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < pBVar2->max_length) {
      pBVar2->vector[axisIndex] = isVisible;
      return;
    }
  }
  else {
    if (pBVar2 == (Boolean__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (axisIndex + 2U < pBVar2->max_length) {
      pBVar2->vector[axisIndex + 2] = isVisible;
      return;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MoveGizmoLookAndFeel2D() */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor
               (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoPlaneSlider2DLookAndFeel *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._dblSliderLookAndFeel = pGVar1;
  func_?(&(this->fields)._dblSliderLookAndFeel,pGVar1);
  pGVar2 = (GizmoLineSlider2DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel,4);
  (this->fields)._sglSliderLookAndFeel = pGVar2;
  func_?(&(this->fields)._sglSliderLookAndFeel,pGVar2);
  (this->fields)._isDblSliderVisible = 1;
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,4);
  (this->fields)._sglSliderVis = pBVar3;
  func_?(&(this->fields)._sglSliderVis,pBVar3);
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,4);
  (this->fields)._sglSliderCapVis = pBVar3;
  func_?(&(this->fields)._sglSliderCapVis,pBVar3);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar4 = 0;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  while (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar2->max_length <= (int)uVar4) {
      pCVar5 = RTSystemValues::RTSystemValues_get_XAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      MoveGizmoLookAndFeel2D_SetAxisColor(this,0,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_YAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      MoveGizmoLookAndFeel2D_SetAxisColor(this,1,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_XAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      MoveGizmoLookAndFeel2D_SetAxisBorderColor(this,0,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_YAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      MoveGizmoLookAndFeel2D_SetAxisBorderColor(this,1,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._sglSliderLookAndFeel;
      uVar4 = 0;
      fVar6 = pCVar5->r;
      fVar7 = pCVar5->g;
      fVar8 = pCVar5->b;
      fVar9 = pCVar5->a;
      if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        ppGVar10 = pGVar2->vector;
        goto code_?;
      }
      break;
    }
    pGVar2 = (this->fields)._sglSliderLookAndFeel;
    pGVar11 = (GizmoLineSlider2DLookAndFeel *)func_?();
    GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor(pGVar11,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) break;
    if ((pGVar11 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (iVar12 = func_?(pGVar11), iVar12 == 0)) goto code_?;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar2->vector[uVar4] = pGVar11;
    func_?(pGVar2->vector + uVar4);
    uVar4 = uVar4 + 1;
    pGVar2 = (this->fields)._sglSliderLookAndFeel;
  }
code_?:
  func_?();
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
code_?:
  if ((int)pGVar2->max_length <= (int)uVar4) goto code_?;
  if (pGVar2->max_length <= uVar4) goto code_?;
  pGVar11 = *ppGVar10;
  if (pGVar11 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
  (pGVar11->fields)._hoveredColor.r = fVar6;
  (pGVar11->fields)._hoveredColor.g = fVar7;
  (pGVar11->fields)._hoveredColor.b = fVar8;
  (pGVar11->fields)._hoveredColor.a = fVar9;
  pGVar15 = (pGVar11->fields)._capLookAndFeel;
  if (pGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  uVar4 = uVar4 + 1;
  ppGVar10 = ppGVar10 + 1;
  (pGVar15->fields)._hoveredColor.r = fVar6;
  (pGVar15->fields)._hoveredColor.g = fVar7;
  (pGVar15->fields)._hoveredColor.b = fVar8;
  (pGVar15->fields)._hoveredColor.a = fVar9;
  goto code_?;
code_?:
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  uVar4 = 0;
  fVar6 = pCVar5->r;
  fVar7 = pCVar5->g;
  fVar8 = pCVar5->b;
  fVar9 = pCVar5->a;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar10 = pGVar2->vector;
    for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
      if (pGVar2->max_length <= uVar4) goto code_?;
      pGVar11 = *ppGVar10;
      if (pGVar11 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      (pGVar11->fields)._hoveredBorderColor.r = fVar6;
      (pGVar11->fields)._hoveredBorderColor.g = fVar7;
      (pGVar11->fields)._hoveredBorderColor.b = fVar8;
      (pGVar11->fields)._hoveredBorderColor.a = fVar9;
      pGVar15 = (pGVar11->fields)._capLookAndFeel;
      if (pGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ppGVar10 = ppGVar10 + 1;
      (pGVar15->fields)._hoveredBorderColor.r = fVar6;
      (pGVar15->fields)._hoveredBorderColor.g = fVar7;
      (pGVar15->fields)._hoveredBorderColor.b = fVar8;
      (pGVar15->fields)._hoveredBorderColor.a = fVar9;
    }
    pGVar2 = (this->fields)._sglSliderLookAndFeel;
    uVar4 = 0;
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
      ppGVar10 = pGVar2->vector;
      for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
        if (pGVar2->max_length <= uVar4) goto code_?;
        if ((*ppGVar10 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
           (pGVar15 = ((*ppGVar10)->fields)._capLookAndFeel, pGVar15 == (GizmoCap2DLookAndFeel *)0x0))
        goto code_?;
        (pGVar15->fields)._capType = 2;
        ppGVar10 = ppGVar10 + 1;
      }
      pGVar2 = (this->fields)._sglSliderLookAndFeel;
      uVar4 = 0;
      if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        ppGVar10 = pGVar2->vector;
        for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
          if (pGVar2->max_length <= uVar4) goto code_?;
          if ((*ppGVar10 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
             (pGVar15 = ((*ppGVar10)->fields)._capLookAndFeel, pGVar15 == (GizmoCap2DLookAndFeel *)0x0
             )) goto code_?;
          (pGVar15->fields)._fillMode = 0;
          ppGVar10 = ppGVar10 + 1;
        }
        pGVar2 = (this->fields)._sglSliderLookAndFeel;
        uVar4 = 0;
        if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
          ppGVar10 = pGVar2->vector;
          for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
            if (pGVar2->max_length <= uVar4) goto code_?;
            if (*ppGVar10 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
            ((*ppGVar10)->fields)._fillMode = 0;
            ppGVar10 = ppGVar10 + 1;
          }
          pBVar3 = (this->fields)._sglSliderVis;
          if (pBVar3 != (Boolean__Array *)0x0) {
            if (pBVar3->max_length != 0) {
              pBVar3->vector[0] = 1;
              pBVar3 = (this->fields)._sglSliderVis;
              if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
              if (1 < pBVar3->max_length) {
                pBVar3->vector[1] = 1;
                pBVar3 = (this->fields)._sglSliderCapVis;
                if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                if (pBVar3->max_length != 0) {
                  pBVar3->vector[0] = 1;
                  pBVar3 = (this->fields)._sglSliderCapVis;
                  if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                  if (1 < pBVar3->max_length) {
                    pBVar3->vector[1] = 1;
                    pGVar1 = (this->fields)._dblSliderLookAndFeel;
                    if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      (pGVar1->fields)._fillMode = 1;
                      fVar6 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
                      color.g = _UNK_?;
                      color.r = _UNK_?;
                      color.b = _UNK_?;
                      color.a = _UNK_?;
                      pCVar5 = ColorEx::ColorEx_KeepAllButAlpha
                                         ((Color *)&stack0xffffffec,color,fVar6,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._dblSliderLookAndFeel;
                      fVar6 = pCVar5->g;
                      fVar7 = pCVar5->b;
                      fVar8 = pCVar5->a;
                      if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        (pGVar1->fields)._color.r = pCVar5->r;
                        (pGVar1->fields)._color.g = fVar6;
                        (pGVar1->fields)._color.b = fVar7;
                        (pGVar1->fields)._color.a = fVar8;
                        fVar8 = _UNK_?;
                        fVar7 = _UNK_?;
                        fVar6 = _UNK_?;
                        pGVar1 = (this->fields)._dblSliderLookAndFeel;
                        if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                          (pGVar1->fields)._borderColor.r = _UNK_?;
                          (pGVar1->fields)._borderColor.g = fVar6;
                          (pGVar1->fields)._borderColor.b = fVar7;
                          (pGVar1->fields)._borderColor.a = fVar8;
                          pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                             ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                          fVar6 = pCVar5->r;
                          fVar7 = pCVar5->g;
                          fVar8 = pCVar5->b;
                          fVar9 = pCVar5->a;
                          newAlpha = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0)
                          ;
                          color_00.g = fVar7;
                          color_00.r = fVar6;
                          color_00.b = fVar8;
                          color_00.a = fVar9;
                          pCVar5 = ColorEx::ColorEx_KeepAllButAlpha
                                             ((Color *)&stack0xffffffec,color_00,newAlpha,
                                              (MethodInfo *)0x0);
                          pGVar1 = (this->fields)._dblSliderLookAndFeel;
                          fVar6 = pCVar5->g;
                          fVar7 = pCVar5->b;
                          fVar8 = pCVar5->a;
                          if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                            (pGVar1->fields)._hoveredColor.r = pCVar5->r;
                            (pGVar1->fields)._hoveredColor.g = fVar6;
                            (pGVar1->fields)._hoveredColor.b = fVar7;
                            (pGVar1->fields)._hoveredColor.a = fVar8;
                            pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                               ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                            pGVar1 = (this->fields)._dblSliderLookAndFeel;
                            fVar6 = pCVar5->g;
                            fVar7 = pCVar5->b;
                            fVar8 = pCVar5->a;
                            if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                              (pGVar1->fields)._hoveredBorderColor.r = pCVar5->r;
                              (pGVar1->fields)._hoveredBorderColor.g = fVar6;
                              (pGVar1->fields)._hoveredBorderColor.b = fVar7;
                              (pGVar1->fields)._hoveredBorderColor.a = fVar8;
                              return;
                            }
                          }
                        }
                      }
                    }
                    goto code_?;
                  }
                }
              }
            }
code_?:
            func_?();
          }
        }
      }
    }
  }
  goto code_?;
}


/* Single get_BoxSliderThickness() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_BoxSliderThickness(MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._boxThickness;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_DblSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_DblSliderBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._borderColor.g;
    fVar4 = (pGVar2->fields)._borderColor.b;
    fVar5 = (pGVar2->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._borderColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_DblSliderCircleRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_DblSliderCircleRadius
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._circleRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_DblSliderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_DblSliderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._color.g;
    fVar4 = (pGVar2->fields)._color.b;
    fVar5 = (pGVar2->fields)._color.a;
    __return_storage_ptr__->r = (pGVar2->fields)._color.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Color get_DblSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_DblSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredBorderColor.g;
    fVar4 = (pGVar2->fields)._hoveredBorderColor.b;
    fVar5 = (pGVar2->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredBorderColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Color get_DblSliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_DblSliderHoveredColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredColor.g;
    fVar4 = (pGVar2->fields)._hoveredColor.b;
    fVar5 = (pGVar2->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_SliderArrowCapBaseRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderArrowCapBaseRadius
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._arrowBaseRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_SliderArrowCapHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderArrowCapHeight
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._arrowHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode2D get_SliderCapFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderCapFillMode
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._fillMode;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoCap2DType get_SliderCapType() */

GizmoCap2DType__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderCapType
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._capType;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_SliderCircleCapRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderCircleCapRadius
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._circleRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode2D get_SliderFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderFillMode
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._fillMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Color get_SliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_SliderHoveredBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._hoveredBorderColor.g;
      fVar8 = (pGVar6->fields)._hoveredBorderColor.b;
      fVar9 = (pGVar6->fields)._hoveredBorderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._hoveredBorderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_SliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_SliderHoveredColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._hoveredColor.g;
      fVar8 = (pGVar6->fields)._hoveredColor.b;
      fVar9 = (pGVar6->fields)._hoveredColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._hoveredColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* GizmoLine2DType get_SliderLineType() */

GizmoLine2DType__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderLineType
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._lineType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_SliderQuadCapHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderQuadCapHeight
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._quadHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_SliderQuadCapWidth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderQuadCapWidth(MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._quadWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_XBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_XBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_XColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_XColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._color.g;
      fVar8 = (pGVar6->fields)._color.b;
      fVar9 = (pGVar6->fields)._color.a;
      __return_storage_ptr__->r = (pGVar6->fields)._color.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_YBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_YBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_YColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_YColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._color.g;
      fVar8 = (pGVar6->fields)._color.b;
      fVar9 = (pGVar6->fields)._color.a;
      __return_storage_ptr__->r = (pGVar6->fields)._color.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}

