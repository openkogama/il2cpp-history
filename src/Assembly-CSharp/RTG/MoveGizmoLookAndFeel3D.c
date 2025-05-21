
/* Void ConnectVertSnapCapLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_ConnectVertSnapCapLookAndFeel
               (MoveGizmoLookAndFeel3D *this,GizmoCap2D *vertSnapCap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap2DLookAndFeel *)&stack0xfffffffc;
  if (vertSnapCap != (GizmoCap2D *)0x0) {
    pGStack_1 = (this->fields)._vertSnapCapLookAndFeel;
    (vertSnapCap->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(vertSnapCap->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* List`1[System.Enum] GetAllowedMidCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_GetAllowedMidCapTypes
          (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3DType);
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
  uStack_1 = 2;
  pOVar2 = (Object *)func_?(TypeInfo__RTG__GizmoCap3DType,&uStack_1);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,pOVar2,
               MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_);
    pOVar2 = (Object *)func_?(TypeInfo__RTG__GizmoCap3DType);
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


/* List`1[System.Enum] GetAllowedVertSnapCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_GetAllowedVertSnapCapTypes
          (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DType);
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
  pOVar2 = (Object *)func_?(TypeInfo__RTG__GizmoCap2DType,&uStack_1);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,pOVar2,
               MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_);
    pOVar2 = (Object *)func_?(TypeInfo__RTG__GizmoCap2DType);
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


/* Boolean IsNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_IsNegativeSliderCapVisible
               (MoveGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (axisIndex + 3U < pBVar2->max_length) {
    return pBVar2->vector[axisIndex + 3] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_IsSliderCapVisible
               (MoveGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderCapVis;
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
    if (axisIndex + 3U < pBVar2->max_length) {
      return pBVar2->vector[axisIndex + 3] != 0;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetAxisColor
               (MoveGizmoLookAndFeel3D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      (pGVar2->fields)._color.r = color.r;
      (pGVar2->fields)._color.g = color.g;
      (pGVar2->fields)._color.b = color.b;
      (pGVar2->fields)._color.a = color.a;
      pGVar1 = (this->fields)._sglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar3->fields)._color.r = color.r;
          (pGVar3->fields)._color.g = color.g;
          (pGVar3->fields)._color.b = color.b;
          (pGVar3->fields)._color.a = color.a;
          pGVar1 = (this->fields)._sglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 3U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 3];
            if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar2->fields)._color.r = color.r;
              (pGVar2->fields)._color.g = color.g;
              (pGVar2->fields)._color.b = color.b;
              (pGVar2->fields)._color.a = color.a;
              pGVar1 = (this->fields)._sglSlidersLookAndFeel;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if (pGVar1->max_length <= axisIndex + 3U) goto code_?;
                if ((pGVar1->vector[axisIndex + 3] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                   (pGVar3 = (pGVar1->vector[axisIndex + 3]->fields)._capLookAndFeel,
                   pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
                  (pGVar3->fields)._color.r = color.r;
                  (pGVar3->fields)._color.g = color.g;
                  (pGVar3->fields)._color.b = color.b;
                  (pGVar3->fields)._color.a = color.a;
                  if (axisIndex == 0) {
                    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 2) goto code_?;
                      pGVar5 = pGVar4->vector[1];
                      goto code_?;
                    }
                  }
                  else if (axisIndex == 1) {
                    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 3) goto code_?;
                      pGVar5 = pGVar4->vector[2];
                      goto code_?;
                    }
                  }
                  else if ((axisIndex == 2) &&
                          (pGVar4 = (this->fields)._dblSlidersLookAndFeel,
                          pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
                    if (pGVar4->max_length == 0) goto code_?;
                    pGVar5 = pGVar4->vector[0];
code_?:
                    if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      pCVar6 = ColorEx::ColorEx_KeepAllButAlpha
                                         (&CStack_7,color,(pGVar5->fields)._color.a,
                                          (MethodInfo *)0x0);
                      fVar8 = pCVar6->g;
                      fVar9 = pCVar6->b;
                      fVar10 = pCVar6->a;
                      (pGVar5->fields)._color.r = pCVar6->r;
                      (pGVar5->fields)._color.g = fVar8;
                      (pGVar5->fields)._color.b = fVar9;
                      (pGVar5->fields)._color.a = fVar10;
                      (pGVar5->fields)._borderColor.r = color.r;
                      (pGVar5->fields)._borderColor.g = color.g;
                      (pGVar5->fields)._borderColor.b = color.b;
                      (pGVar5->fields)._borderColor.a = color.a;
                      return;
                    }
                  }
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetDblSliderBorderBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetDblSliderBorderBoxDepth
               (MoveGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderBoxDepth
                (*ppGVar3,depth,(MethodInfo *)0x0);
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


/* Void SetDblSliderBorderBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetDblSliderBorderBoxHeight
               (MoveGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
                ((RotationGizmoLookAndFeel3D *)*ppGVar3,height,(MethodInfo *)0x0);
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


/* Void SetDblSliderBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetDblSliderBorderFillMode
               (MoveGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._borderFillMode = fillMode;
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


/* Void SetDblSliderBorderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetDblSliderBorderShadeMode
               (MoveGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._borderShadeMode = shadeMode;
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


/* Void SetDblSliderBorderType(GizmoQuad3DBorderType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderBorderType
               (MoveGizmoLookAndFeel3D *this,GizmoQuad3DBorderType__Enum borderType,
               MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._quadBorderType = borderType;
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


/* Void SetDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderSize
               (MoveGizmoLookAndFeel3D *this,float size,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      this_00 = *ppGVar3;
      if (this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)this_00,size,(MethodInfo *)0x0);
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)this_00,size,(MethodInfo *)0x0);
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


/* Void SetDblSliderVisible(PlaneId, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderVisible
               (MoveGizmoLookAndFeel3D *this,PlaneId__Enum planeId,bool isVisible,MethodInfo *method
               )

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._dblSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (planeId < pBVar2->max_length) {
    pBVar2->vector[planeId] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetHoveredColor
               (MoveGizmoLookAndFeel3D *this,Color hoveredColor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._hoveredColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredColor.a = hoveredColor.a;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredColor.r = hoveredColor.r;
      (pGVar5->fields)._hoveredColor.g = hoveredColor.g;
      (pGVar5->fields)._hoveredColor.b = hoveredColor.b;
      (pGVar5->fields)._hoveredColor.a = hoveredColor.a;
    }
    pGVar6 = (this->fields)._dblSlidersLookAndFeel;
    uVar1 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      while( true ) {
        if ((int)pGVar6->max_length <= (int)uVar1) {
          return;
        }
        if (pGVar6->max_length <= uVar1) break;
        pGVar8 = *ppGVar7;
        if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        fVar9 = (pGVar8->fields)._color.a;
        (pGVar8->fields)._hoveredBorderColor.r = hoveredColor.r;
        (pGVar8->fields)._hoveredBorderColor.g = hoveredColor.g;
        (pGVar8->fields)._hoveredBorderColor.b = hoveredColor.b;
        (pGVar8->fields)._hoveredBorderColor.a = hoveredColor.a;
        pCVar10 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_11,hoveredColor,fVar9,(MethodInfo *)0x0);
        uVar1 = uVar1 + 1;
        fVar9 = pCVar10->g;
        fVar12 = pCVar10->b;
        fVar13 = pCVar10->a;
        ppGVar7 = ppGVar7 + 1;
        (pGVar8->fields)._hoveredColor.r = pCVar10->r;
        (pGVar8->fields)._hoveredColor.g = fVar9;
        (pGVar8->fields)._hoveredColor.b = fVar12;
        (pGVar8->fields)._hoveredColor.a = fVar13;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapBoxDepth
               (MoveGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth(this_00,depth,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapBoxHeight
               (MoveGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight(this_00,height,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapBoxWidth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapBoxWidth
               (MoveGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth(this_00,width,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapShadeMode
               (MoveGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._shadeMode = shadeMode;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMidCapSphereRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapSphereRadius
               (MoveGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius(this_00,radius,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapType
               (MoveGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((capType == GizmoCap3DType__Enum_Box) || (capType == GizmoCap3DType__Enum_Sphere)) {
    pGVar2 = (this->fields)._midCapLookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pGVar2->fields)._capType = capType;
  }
  return;
}


/* Void SetNegativeCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetNegativeCapVisible
               (MoveGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (axisIndex + 3U < pBVar2->max_length) {
    pBVar2->vector[axisIndex + 3] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetScale
               (MoveGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) break;
      if (pGVar1->max_length <= uVar2) goto code_?;
      this_00 = *ppGVar3;
      if (this_00 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)this_00,scale,(MethodInfo *)0x0);
      pGVar4 = (this_00->fields)._capLookAndFeel;
      if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)pGVar4,scale,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    uVar2 = 0;
    pGVar5 = (this->fields)._dblSlidersLookAndFeel;
    if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar6 = pGVar5->vector;
      for (; (int)uVar2 < (int)pGVar5->max_length; uVar2 = uVar2 + 1) {
        if (pGVar5->max_length <= uVar2) goto code_?;
        if (*ppGVar6 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        Sphere::Sphere_set_Radius((Sphere *)*ppGVar6,scale,(MethodInfo *)0x0);
        ppGVar6 = ppGVar6 + 1;
      }
      pGVar4 = (this->fields)._midCapLookAndFeel;
      if (pGVar4 != (GizmoCap3DLookAndFeel *)0x0) {
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                  ((GizmoPlaneSlider3DSettings *)pGVar4,scale,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetSliderCapVisible
               (MoveGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderCapVis;
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
    if (axisIndex + 3U < pBVar2->max_length) {
      pBVar2->vector[axisIndex + 3] = isVisible;
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


/* Void SetUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetUseZoomFactor
               (MoveGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._useZoomFactor = useZoomFactor;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      (pGVar5->fields)._useZoomFactor = useZoomFactor;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar6 = (this->fields)._dblSlidersLookAndFeel;
    uVar1 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      for (; (int)uVar1 < (int)pGVar6->max_length; uVar1 = uVar1 + 1) {
        if (pGVar6->max_length <= uVar1) goto code_?;
        if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        ((*ppGVar7)->fields)._useZoomFactor = useZoomFactor;
        ppGVar7 = ppGVar7 + 1;
      }
      pGVar5 = (this->fields)._midCapLookAndFeel;
      if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
        (pGVar5->fields)._useZoomFactor = useZoomFactor;
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetVertSnapCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetVertSnapCapBorderColor
               (MoveGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Void SetVertSnapCapCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetVertSnapCapCircleRadius
               (MoveGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._circleRadius = radius;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetVertSnapCapColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapColor
               (MoveGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Void SetVertSnapCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapFillMode
               (MoveGizmoLookAndFeel3D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._fillMode = fillMode;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetVertSnapCapHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetVertSnapCapHoveredBorderColor
               (MoveGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Void SetVertSnapCapHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetVertSnapCapHoveredColor
               (MoveGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Void SetVertSnapCapQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetVertSnapCapQuadHeight
               (MoveGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._vertSnapCapLookAndFeel;
  if (this_00 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
              (this_00,height,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVertSnapCapQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_SetVertSnapCapQuadWidth
               (MoveGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._vertSnapCapLookAndFeel;
  if (this_00 != (GizmoCap2DLookAndFeel *)0x0) {
    CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
              ((CameraMoveSettings *)this_00,width,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVertSnapCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapType
               (MoveGizmoLookAndFeel3D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((capType == GizmoCap2DType__Enum_Circle) || (capType == GizmoCap2DType__Enum_Quad)) {
    pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
    if (pGVar2 == (GizmoCap2DLookAndFeel *)0x0) {
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pGVar2->fields)._capType = capType;
  }
  return;
}


/* MoveGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor
               (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._midCapLookAndFeel = pGVar1;
  func_?(&(this->fields)._midCapLookAndFeel,pGVar1);
  pGVar2 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar2,(MethodInfo *)0x0);
  (this->fields)._vertSnapCapLookAndFeel = pGVar2;
  func_?(&(this->fields)._vertSnapCapLookAndFeel,pGVar2);
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderVis = pBVar3;
  func_?(&(this->fields)._sglSliderVis,pBVar3);
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderCapVis = pBVar3;
  func_?(&(this->fields)._sglSliderCapVis);
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  (this->fields)._dblSliderVis = pBVar3;
  func_?(&(this->fields)._dblSliderVis,pBVar3);
  pGVar4 = (GizmoLineSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._sglSlidersLookAndFeel = pGVar4;
  func_?(&(this->fields)._sglSlidersLookAndFeel,pGVar4);
  pGVar5 = (GizmoPlaneSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel,3);
  (this->fields)._dblSlidersLookAndFeel = pGVar5;
  func_?(&(this->fields)._dblSlidersLookAndFeel,pGVar5);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar6 = 0;
  pGVar4 = (this->fields)._sglSlidersLookAndFeel;
  while (pGVar4 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar4->max_length <= (int)uVar6) {
      pGVar5 = (this->fields)._dblSlidersLookAndFeel;
      uVar6 = 0;
      if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
      break;
    }
    pGVar4 = (this->fields)._sglSlidersLookAndFeel;
    pGVar7 = (GizmoLineSlider3DLookAndFeel *)func_?();
    GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar4 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar7 != (GizmoLineSlider3DLookAndFeel *)0x0) && (iVar8 = func_?(), iVar8 == 0)
       ) goto code_?;
    if (pGVar4->max_length <= uVar6) goto code_?;
    pGVar4->vector[uVar6] = pGVar7;
    func_?();
    uVar6 = uVar6 + 1;
    pGVar4 = (this->fields)._sglSlidersLookAndFeel;
  }
  goto code_?;
code_?:
  if ((int)pGVar4->max_length <= (int)uVar6) goto code_?;
  if (pGVar4->max_length <= uVar6) goto code_?;
  if (*ppGVar9 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
            ((GizmoPlaneSlider3DSettings *)*ppGVar9,5.5,(MethodInfo *)0x0);
  uVar6 = uVar6 + 1;
  ppGVar9 = ppGVar9 + 1;
  goto code_?;
code_?:
  pCVar10 = RTSystemValues::RTSystemValues_get_XAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  MoveGizmoLookAndFeel3D_SetAxisColor(this,0,*pCVar10,(MethodInfo *)0x0);
  pCVar10 = RTSystemValues::RTSystemValues_get_YAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  MoveGizmoLookAndFeel3D_SetAxisColor(this,1,*pCVar10,(MethodInfo *)0x0);
  pCVar10 = RTSystemValues::RTSystemValues_get_ZAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  MoveGizmoLookAndFeel3D_SetAxisColor(this,2,*pCVar10,(MethodInfo *)0x0);
  pCVar10 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  pGVar4 = (this->fields)._sglSlidersLookAndFeel;
  uVar6 = 0;
  fVar11 = pCVar10->r;
  fVar12 = pCVar10->g;
  fVar13 = pCVar10->b;
  fVar14 = pCVar10->a;
  if (pGVar4 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar9 = pGVar4->vector;
  for (; (int)uVar6 < (int)pGVar4->max_length; uVar6 = uVar6 + 1) {
    if (pGVar4->max_length <= uVar6) goto code_?;
    pGVar7 = *ppGVar9;
    if (pGVar7 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    (pGVar7->fields)._hoveredColor.r = fVar11;
    (pGVar7->fields)._hoveredColor.g = fVar12;
    (pGVar7->fields)._hoveredColor.b = fVar13;
    (pGVar7->fields)._hoveredColor.a = fVar14;
    pGVar1 = (pGVar7->fields)._capLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    ppGVar9 = ppGVar9 + 1;
    (pGVar1->fields)._hoveredColor.r = fVar11;
    (pGVar1->fields)._hoveredColor.g = fVar12;
    (pGVar1->fields)._hoveredColor.b = fVar13;
    (pGVar1->fields)._hoveredColor.a = fVar14;
  }
  pGVar5 = (this->fields)._dblSlidersLookAndFeel;
  uVar6 = 0;
  if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar15 = pGVar5->vector;
  for (; (int)uVar6 < (int)pGVar5->max_length; uVar6 = uVar6 + 1) {
    if (pGVar5->max_length <= uVar6) goto code_?;
    pGVar16 = *ppGVar15;
    if (pGVar16 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    fVar17 = (pGVar16->fields)._color.a;
    (pGVar16->fields)._hoveredBorderColor.r = fVar11;
    (pGVar16->fields)._hoveredBorderColor.g = fVar12;
    (pGVar16->fields)._hoveredBorderColor.b = fVar13;
    (pGVar16->fields)._hoveredBorderColor.a = fVar14;
    color_00.g = fVar12;
    color_00.r = fVar11;
    color_00.b = fVar13;
    color_00.a = fVar14;
    pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                        ((Color *)&stack0xffffffd4,color_00,fVar17,(MethodInfo *)0x0);
    fVar17 = pCVar10->g;
    fVar18 = pCVar10->b;
    fVar19 = pCVar10->a;
    ppGVar15 = ppGVar15 + 1;
    (pGVar16->fields)._hoveredColor.r = pCVar10->r;
    (pGVar16->fields)._hoveredColor.g = fVar17;
    (pGVar16->fields)._hoveredColor.b = fVar18;
    (pGVar16->fields)._hoveredColor.a = fVar19;
  }
  fVar11 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
  if (fVar11 < 0.0) {
    fVar12 = 0.0;
code_?:
    fVar11 = fVar12;
  }
  else {
    fVar12 = _UNK_?;
    if (_UNK_? < fVar11) goto code_?;
  }
  pGVar5 = (this->fields)._dblSlidersLookAndFeel;
  uVar6 = 0;
  if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar15 = pGVar5->vector;
    while ((int)uVar6 < (int)pGVar5->max_length) {
      if (pGVar5->max_length <= uVar6) goto code_?;
      pGVar16 = *ppGVar15;
      if (pGVar16 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffd4,(pGVar16->fields)._color,fVar11,
                           (MethodInfo *)0x0);
      fVar12 = pCVar10->g;
      fVar13 = pCVar10->b;
      fVar14 = pCVar10->a;
      iVar8 = 0;
      (pGVar16->fields)._color.r = pCVar10->r;
      (pGVar16->fields)._color.g = fVar12;
      (pGVar16->fields)._color.b = fVar13;
      (pGVar16->fields)._color.a = fVar14;
      fVar17 = fVar11;
      pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffe4,(pGVar16->fields)._hoveredColor,fVar11,
                           (MethodInfo *)0x0);
      fVar12 = pCVar10->g;
      fVar13 = pCVar10->b;
      fVar14 = pCVar10->a;
      ppGVar15 = (GizmoPlaneSlider3DLookAndFeel **)((int)fVar17 + 4);
      (pGVar16->fields)._hoveredColor.r = pCVar10->r;
      (pGVar16->fields)._hoveredColor.g = fVar12;
      (pGVar16->fields)._hoveredColor.b = fVar13;
      (pGVar16->fields)._hoveredColor.a = fVar14;
      uVar6 = iVar8 + 1;
    }
    pGVar5 = (this->fields)._dblSlidersLookAndFeel;
    uVar6 = 0;
    if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar15 = pGVar5->vector;
      for (; (int)uVar6 < (int)pGVar5->max_length; uVar6 = uVar6 + 1) {
        if (pGVar5->max_length <= uVar6) goto code_?;
        pGVar16 = *ppGVar15;
        if (pGVar16 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                  ((GizmoPlaneSlider3DSettings *)pGVar16,1.5,(MethodInfo *)0x0);
        CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                  ((CameraMoveSettings *)pGVar16,1.5,(MethodInfo *)0x0);
        ppGVar15 = ppGVar15 + 1;
      }
      pBVar3 = (this->fields)._dblSliderVis;
      if (pBVar3 != (Boolean__Array *)0x0) {
        if (pBVar3->max_length != 0) {
          pBVar3->vector[0] = 1;
          pBVar3 = (this->fields)._dblSliderVis;
          if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
          if (1 < pBVar3->max_length) {
            pBVar3->vector[1] = 1;
            pBVar3 = (this->fields)._dblSliderVis;
            if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
            if (2 < pBVar3->max_length) {
              pBVar3->vector[2] = 1;
              pBVar3 = (this->fields)._sglSliderVis;
              if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
              if (pBVar3->max_length != 0) {
                pBVar3->vector[0] = 1;
                pBVar3 = (this->fields)._sglSliderCapVis;
                if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                if (pBVar3->max_length != 0) {
                  pBVar3->vector[0] = 1;
                  pBVar3 = (this->fields)._sglSliderVis;
                  if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                  if (1 < pBVar3->max_length) {
                    pBVar3->vector[1] = 1;
                    pBVar3 = (this->fields)._sglSliderCapVis;
                    if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                    if (1 < pBVar3->max_length) {
                      pBVar3->vector[1] = 1;
                      pBVar3 = (this->fields)._sglSliderVis;
                      if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                      if (2 < pBVar3->max_length) {
                        pBVar3->vector[2] = 1;
                        pBVar3 = (this->fields)._sglSliderCapVis;
                        if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
                        if (2 < pBVar3->max_length) {
                          pBVar3->vector[2] = 1;
                          pGVar1 = (this->fields)._midCapLookAndFeel;
                          if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                            (pGVar1->fields)._capType = 2;
                            pGVar1 = (this->fields)._midCapLookAndFeel;
                            if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
                                        (pGVar1,0.67,(MethodInfo *)0x0);
                              pCVar10 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                                                  ((Color *)&stack0xffffffd4,(MethodInfo *)0x0);
                              pGVar1 = (this->fields)._midCapLookAndFeel;
                              fVar11 = pCVar10->g;
                              fVar12 = pCVar10->b;
                              fVar13 = pCVar10->a;
                              if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                (pGVar1->fields)._color.r = pCVar10->r;
                                (pGVar1->fields)._color.g = fVar11;
                                (pGVar1->fields)._color.b = fVar12;
                                (pGVar1->fields)._color.a = fVar13;
                                pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
                                if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
                                  (pGVar2->fields)._fillMode = 1;
                                  fVar11 = RTSystemValues::RTSystemValues_get_AxisAlpha
                                                     ((MethodInfo *)0x0);
                                  color_01.g = _UNK_?;
                                  color_01.r = _UNK_?;
                                  color_01.b = _UNK_?;
                                  color_01.a = _UNK_?;
                                  pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                                                      ((Color *)&stack0xffffffd4,color_01,fVar11,
                                                       (MethodInfo *)0x0);
                                  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
                                  fVar11 = pCVar10->g;
                                  fVar12 = pCVar10->b;
                                  fVar13 = pCVar10->a;
                                  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
                                    (pGVar2->fields)._color.r = pCVar10->r;
                                    (pGVar2->fields)._color.g = fVar11;
                                    (pGVar2->fields)._color.b = fVar12;
                                    (pGVar2->fields)._color.a = fVar13;
                                    fVar13 = _UNK_?;
                                    fVar12 = _UNK_?;
                                    fVar11 = _UNK_?;
                                    pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
                                    if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
                                      (pGVar2->fields)._borderColor.r = _UNK_?;
                                      (pGVar2->fields)._borderColor.g = fVar11;
                                      (pGVar2->fields)._borderColor.b = fVar12;
                                      (pGVar2->fields)._borderColor.a = fVar13;
                                      pCVar10 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                          ((Color *)&stack0xffffffd4,
                                                           (MethodInfo *)0x0);
                                      fVar11 = pCVar10->r;
                                      fVar12 = pCVar10->g;
                                      fVar13 = pCVar10->b;
                                      fVar14 = pCVar10->a;
                                      fVar17 = RTSystemValues::RTSystemValues_get_AxisAlpha
                                                         ((MethodInfo *)0x0);
                                      color.g = fVar12;
                                      color.r = fVar11;
                                      color.b = fVar13;
                                      color.a = fVar14;
                                      pCVar10 = ColorEx::ColorEx_KeepAllButAlpha
                                                          ((Color *)&stack0xffffffd4,color,fVar17,
                                                           (MethodInfo *)0x0);
                                      pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
                                      fVar11 = pCVar10->g;
                                      fVar12 = pCVar10->b;
                                      fVar13 = pCVar10->a;
                                      if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
                                        (pGVar2->fields)._hoveredColor.r = pCVar10->r;
                                        (pGVar2->fields)._hoveredColor.g = fVar11;
                                        (pGVar2->fields)._hoveredColor.b = fVar12;
                                        (pGVar2->fields)._hoveredColor.a = fVar13;
                                        pCVar10 = RTSystemValues::
                                                  RTSystemValues_get_HoveredAxisColor
                                                            ((Color *)&stack0xffffffd4,
                                                             (MethodInfo *)0x0);
                                        pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
                                        fVar11 = pCVar10->g;
                                        fVar12 = pCVar10->b;
                                        fVar13 = pCVar10->a;
                                        if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
                                          (pGVar2->fields)._hoveredBorderColor.r = pCVar10->r;
                                          (pGVar2->fields)._hoveredBorderColor.g = fVar11;
                                          (pGVar2->fields)._hoveredBorderColor.b = fVar12;
                                          (pGVar2->fields)._hoveredBorderColor.a = fVar13;
                                          return;
                                        }
                                      }
                                    }
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
                }
              }
            }
          }
        }
code_?:
        func_?();
      }
    }
  }
  goto code_?;
  while( true ) {
    pGVar5 = (this->fields)._dblSlidersLookAndFeel;
    pGVar16 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar16,(MethodInfo *)0x0);
    if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (iVar8 = func_?(), iVar8 == 0)) goto code_?;
    if (pGVar5->max_length <= uVar6) goto code_?;
    pGVar5->vector[uVar6] = pGVar16;
    func_?();
    pGVar5 = (this->fields)._dblSlidersLookAndFeel;
    uVar6 = uVar6 + 1;
    if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar5->max_length <= (int)uVar6) {
      pGVar4 = (this->fields)._sglSlidersLookAndFeel;
      uVar6 = 0;
      if (pGVar4 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar9 = pGVar4->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Single get_DblSliderBorderBoxDepth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
      MoveGizmoLookAndFeel3D_get_DblSliderBorderBoxDepth
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderBoxDepth;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_DblSliderBorderBoxHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
      MoveGizmoLookAndFeel3D_get_DblSliderBorderBoxHeight
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderBoxHeight;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode3D get_DblSliderBorderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderFillMode
          (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderFillMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoShadeMode get_DblSliderBorderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
MoveGizmoLookAndFeel3D_get_DblSliderBorderShadeMode(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderShadeMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoQuad3DBorderType get_DblSliderBorderType() */

GizmoQuad3DBorderType__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderType
          (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._quadBorderType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_DblSliderSize() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderSize
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._quadWidth;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_MidCapBoxDepth
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxDepth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_MidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_MidCapBoxWidth
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_VertSnapCapBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
        MoveGizmoLookAndFeel3D_get_VertSnapCapBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Single get_VertSnapCapCircleRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
      MoveGizmoLookAndFeel3D_get_VertSnapCapCircleRadius
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._circleRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_VertSnapCapColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
        MoveGizmoLookAndFeel3D_get_VertSnapCapColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* GizmoFillMode2D get_VertSnapCapFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapFillMode
          (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._fillMode;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Color get_VertSnapCapHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
        MoveGizmoLookAndFeel3D_get_VertSnapCapHoveredBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Color get_VertSnapCapHoveredColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
        MoveGizmoLookAndFeel3D_get_VertSnapCapHoveredColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Single get_VertSnapCapQuadHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
      MoveGizmoLookAndFeel3D_get_VertSnapCapQuadHeight
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._quadHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_VertSnapCapQuadWidth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
      MoveGizmoLookAndFeel3D_get_VertSnapCapQuadWidth
                (MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._quadWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}

