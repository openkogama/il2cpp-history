
/* Void ConnectVertSnapCapLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::
     MoveGizmoLookAndFeel3D_ConnectVertSnapCapLookAndFeel
               (MoveGizmoLookAndFeel3D *this,GizmoCap2D *vertSnapCap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap2DLookAndFeel *)&stack0xfffffffc;
  if (vertSnapCap != (GizmoCap2D *)0x0) {
    ppGStack_2 = &(vertSnapCap->fields)._sharedLookAndFeel;
    pGStack_1 = (this->fields)._vertSnapCapLookAndFeel;
    *ppGStack_2 = pGStack_1;
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
  ppGVar2 = &(this->fields)._midCapLookAndFeel;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  this_01 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  ppGVar3 = &(this->fields)._vertSnapCapLookAndFeel;
  *ppGVar3 = this_01;
  func_?(ppGVar3,this_01);
  pBVar4 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  ppBVar5 = &(this->fields)._sglSliderVis;
  *ppBVar5 = pBVar4;
  func_?(ppBVar5,pBVar4);
  pBVar4 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderCapVis = pBVar4;
  func_?(&(this->fields)._sglSliderCapVis);
  pBVar4 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  ppBVar5 = &(this->fields)._dblSliderVis;
  *ppBVar5 = pBVar4;
  func_?(ppBVar5,pBVar4);
  pGVar6 = (GizmoLineSlider3DLookAndFeel__Array *)
            func_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  ppGVar7 = &(this->fields)._sglSlidersLookAndFeel;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7,pGVar6);
  pGVar8 = (GizmoPlaneSlider3DLookAndFeel__Array *)
            func_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel,3);
  ppGVar9 = &(this->fields)._dblSlidersLookAndFeel;
  *ppGVar9 = pGVar8;
  func_?(ppGVar9,pGVar8);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar10 = 0;
  pGVar6 = *ppGVar7;
  while (pGVar6 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar6->max_length <= (int)uVar10) {
      pGVar8 = (this->fields)._dblSlidersLookAndFeel;
      uVar10 = 0;
      if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
      break;
    }
    pGVar6 = (this->fields)._sglSlidersLookAndFeel;
    pGVar11 = (GizmoLineSlider3DLookAndFeel *)func_?();
    GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(pGVar11,(MethodInfo *)0x0);
    if (pGVar6 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar11 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (iVar12 = func_?(), iVar12 == 0)) goto code_?;
    if (pGVar6->max_length <= uVar10) goto code_?;
    pGVar6->vector[uVar10] = pGVar11;
    func_?();
    uVar10 = uVar10 + 1;
    pGVar6 = (this->fields)._sglSlidersLookAndFeel;
  }
  goto code_?;
code_?:
  if ((int)pGVar6->max_length <= (int)uVar10) goto code_?;
  if (pGVar6->max_length <= uVar10) goto code_?;
  if (*ppGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
            ((GizmoPlaneSlider3DSettings *)*ppGVar13,5.5,(MethodInfo *)0x0);
  uVar10 = uVar10 + 1;
  ppGVar13 = ppGVar13 + 1;
  goto code_?;
code_?:
  pCVar14 = RTSystemValues::RTSystemValues_get_XAxisColor
                      ((Color *)&stack0xffffffd0,(MethodInfo *)0x0);
  MoveGizmoLookAndFeel3D_SetAxisColor(this,0,*pCVar14,(MethodInfo *)0x0);
  pCVar14 = RTSystemValues::RTSystemValues_get_YAxisColor
                      ((Color *)&stack0xffffffd0,(MethodInfo *)0x0);
  piVar15 = (int *)pCVar14->r;
  piVar16 = (int *)pCVar14->g;
  newAlpha_00 = (int *)0x1;
  MoveGizmoLookAndFeel3D_SetAxisColor(this,1,*pCVar14,(MethodInfo *)0x0);
  pCVar14 = (Color *)&stack0xffffffd0;
  piVar17 = (int *)&UNK_?;
  pCVar18 = RTSystemValues::RTSystemValues_get_ZAxisColor(pCVar14,(MethodInfo *)0x0);
  MoveGizmoLookAndFeel3D_SetAxisColor(this,2,*pCVar18,(MethodInfo *)0x0);
  pCVar18 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                      ((Color *)&stack0xffffffd0,(MethodInfo *)0x0);
  pGVar6 = (this->fields)._sglSlidersLookAndFeel;
  uVar10 = 0;
  fVar19 = pCVar18->r;
  fVar20 = pCVar18->g;
  fVar21 = pCVar18->b;
  fVar22 = pCVar18->a;
  if (pGVar6 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar13 = pGVar6->vector;
  for (; (int)uVar10 < (int)pGVar6->max_length; uVar10 = uVar10 + 1) {
    if (pGVar6->max_length <= uVar10) goto code_?;
    pGVar11 = *ppGVar13;
    if (pGVar11 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    (pGVar11->fields)._hoveredColor.r = fVar19;
    (pGVar11->fields)._hoveredColor.g = fVar20;
    (pGVar11->fields)._hoveredColor.b = fVar21;
    (pGVar11->fields)._hoveredColor.a = fVar22;
    pGVar1 = (pGVar11->fields)._capLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    ppGVar13 = ppGVar13 + 1;
    (pGVar1->fields)._hoveredColor.r = fVar19;
    (pGVar1->fields)._hoveredColor.g = fVar20;
    (pGVar1->fields)._hoveredColor.b = fVar21;
    (pGVar1->fields)._hoveredColor.a = fVar22;
  }
  pGVar8 = (this->fields)._dblSlidersLookAndFeel;
  uVar10 = 0;
  if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar23 = pGVar8->vector;
  for (; (int)uVar10 < (int)pGVar8->max_length; uVar10 = uVar10 + 1) {
    if (pGVar8->max_length <= uVar10) goto code_?;
    pGVar24 = *ppGVar23;
    if (pGVar24 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    fVar25 = (pGVar24->fields)._color.a;
    (pGVar24->fields)._hoveredBorderColor.r = fVar19;
    (pGVar24->fields)._hoveredBorderColor.g = fVar20;
    (pGVar24->fields)._hoveredBorderColor.b = fVar21;
    (pGVar24->fields)._hoveredBorderColor.a = fVar22;
    CVar26.g = fVar20;
    CVar26.r = fVar19;
    CVar26.b = fVar21;
    CVar26.a = fVar22;
    pCVar18 = ColorEx::ColorEx_KeepAllButAlpha
                        ((Color *)&stack0xffffffc0,CVar26,fVar25,(MethodInfo *)0x0);
    fVar25 = pCVar18->g;
    fVar27 = pCVar18->b;
    fVar28 = pCVar18->a;
    ppGVar23 = ppGVar23 + 1;
    (pGVar24->fields)._hoveredColor.r = pCVar18->r;
    (pGVar24->fields)._hoveredColor.g = fVar25;
    (pGVar24->fields)._hoveredColor.b = fVar27;
    (pGVar24->fields)._hoveredColor.a = fVar28;
  }
  newAlpha = (int *)RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
  iVar12 = iRam_?;
  if ((float)newAlpha < 0.0) {
    piVar29 = (int *)0x0;
code_?:
    newAlpha = piVar29;
  }
  else {
    piVar29 = _UNK_?;
    if ((float)_UNK_? < (float)newAlpha) goto code_?;
  }
  uVar10 = 0;
  if (iRam_? != 0) {
    piVar29 = (int *)(iRam_? + 0x10);
    for (; iVar30 = iRam_?, (int)uVar10 < *(int *)(iVar12 + 0xc); uVar10 = uVar10 + 1) {
      if (*(uint *)(iVar12 + 0xc) <= uVar10) goto code_?;
      iVar30 = *piVar29;
      if (iVar30 == 0) goto code_?;
      newAlpha_00 = newAlpha;
      pCVar18 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffc0,*(Color *)(iVar30 + 0x44),(float)newAlpha,
                           (MethodInfo *)0x0);
      fVar19 = pCVar18->g;
      fVar20 = pCVar18->b;
      fVar21 = pCVar18->a;
      piVar15 = (int *)0x0;
      *(float *)(iVar30 + 0x44) = pCVar18->r;
      *(float *)(iVar30 + 0x48) = fVar19;
      *(float *)(iVar30 + 0x4c) = fVar20;
      *(float *)(iVar30 + 0x50) = fVar21;
      newAlpha = newAlpha_00;
      pCVar18 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffd0,*(Color *)(iVar30 + 0x54),(float)newAlpha_00,
                           (MethodInfo *)0x0);
      fVar19 = pCVar18->g;
      fVar20 = pCVar18->b;
      fVar21 = pCVar18->a;
      piVar29 = piVar29 + 1;
      *(float *)(iVar30 + 0x54) = pCVar18->r;
      *(float *)(iVar30 + 0x58) = fVar19;
      *(float *)(iVar30 + 0x5c) = fVar20;
      *(float *)(iVar30 + 0x60) = fVar21;
    }
    uVar10 = 0;
    if (iRam_? != 0) {
      puVar31 = (undefined4 *)(iRam_? + 0x10);
      for (; (int)uVar10 < *(int *)(iVar30 + 0xc); uVar10 = uVar10 + 1) {
        if (*(uint *)(iVar30 + 0xc) <= uVar10) goto code_?;
        this_00 = (GizmoPlaneSlider3DSettings *)*puVar31;
        if (this_00 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                  (this_00,1.5,(MethodInfo *)0x0);
        CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                  ((CameraMoveSettings *)this_00,1.5,(MethodInfo *)0x0);
        puVar31 = puVar31 + 1;
      }
      fVar19 = pCVar14->r;
      if (fVar19 != 0.0) {
        if (*(int *)((int)fVar19 + 0xc) != 0) {
          *(undefined1 *)((int)fVar19 + 0x10) = 1;
          fVar19 = pCVar14->r;
          if (fVar19 == 0.0) goto code_?;
          if (1 < *(uint *)((int)fVar19 + 0xc)) {
            *(undefined1 *)((int)fVar19 + 0x11) = 1;
            fVar19 = pCVar14->r;
            if (fVar19 == 0.0) goto code_?;
            if (2 < *(uint *)((int)fVar19 + 0xc)) {
              *(undefined1 *)((int)fVar19 + 0x12) = 1;
              iVar12 = *piVar17;
              if (iVar12 == 0) goto code_?;
              if (*(int *)(iVar12 + 0xc) != 0) {
                *(undefined1 *)(iVar12 + 0x10) = 1;
                iVar12 = *piVar16;
                if (iVar12 == 0) goto code_?;
                if (*(int *)(iVar12 + 0xc) != 0) {
                  *(undefined1 *)(iVar12 + 0x10) = 1;
                  iVar12 = *piVar17;
                  if (iVar12 == 0) goto code_?;
                  if (1 < *(uint *)(iVar12 + 0xc)) {
                    *(undefined1 *)(iVar12 + 0x11) = 1;
                    iVar12 = *piVar16;
                    if (iVar12 == 0) goto code_?;
                    if (1 < *(uint *)(iVar12 + 0xc)) {
                      *(undefined1 *)(iVar12 + 0x11) = 1;
                      iVar12 = *piVar17;
                      if (iVar12 == 0) goto code_?;
                      if (2 < *(uint *)(iVar12 + 0xc)) {
                        *(undefined1 *)(iVar12 + 0x12) = 1;
                        iVar12 = *piVar16;
                        if (iVar12 == 0) goto code_?;
                        if (2 < *(uint *)(iVar12 + 0xc)) {
                          *(undefined1 *)(iVar12 + 0x12) = 1;
                          if (*piVar15 != 0) {
                            *(undefined4 *)(*piVar15 + 8) = 2;
                            if ((GizmoCap3DLookAndFeel *)*piVar15 != (GizmoCap3DLookAndFeel *)0x0) {
                              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
                                        ((GizmoCap3DLookAndFeel *)*piVar15,0.67,(MethodInfo *)0x0);
                              iVar12 = *piVar15;
                              pCVar14 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                                                  ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
                              fVar19 = pCVar14->g;
                              fVar20 = pCVar14->b;
                              fVar21 = pCVar14->a;
                              if (iVar12 != 0) {
                                *(float *)(iVar12 + 100) = pCVar14->r;
                                *(float *)(iVar12 + 0x68) = fVar19;
                                *(float *)(iVar12 + 0x6c) = fVar20;
                                *(float *)(iVar12 + 0x70) = fVar21;
                                if (*newAlpha_00 != 0) {
                                  *(undefined4 *)(*newAlpha_00 + 8) = 1;
                                  fVar19 = RTSystemValues::RTSystemValues_get_AxisAlpha
                                                     ((MethodInfo *)0x0);
                                  iVar12 = *newAlpha_00;
                                  color.g = (float)_UNK_?;
                                  color.r = (float)_UNK_?;
                                  color.b = (float)_UNK_?;
                                  color.a = _UNK_?;
                                  pCVar14 = ColorEx::ColorEx_KeepAllButAlpha
                                                      ((Color *)&stack0xffffffc0,color,fVar19,
                                                       (MethodInfo *)0x0);
                                  fVar19 = pCVar14->g;
                                  fVar20 = pCVar14->b;
                                  fVar21 = pCVar14->a;
                                  if (iVar12 != 0) {
                                    *(float *)(iVar12 + 0x28) = pCVar14->r;
                                    *(float *)(iVar12 + 0x2c) = fVar19;
                                    *(float *)(iVar12 + 0x30) = fVar20;
                                    *(float *)(iVar12 + 0x34) = fVar21;
                                    fVar19 = _UNK_?;
                                    uVar32 = _UNK_?;
                                    uVar33 = _UNK_?;
                                    iVar12 = *newAlpha_00;
                                    if (iVar12 != 0) {
                                      *(undefined4 *)(iVar12 + 0x48) = _UNK_?;
                                      *(undefined4 *)(iVar12 + 0x4c) = uVar33;
                                      *(undefined4 *)(iVar12 + 0x50) = uVar32;
                                      *(float *)(iVar12 + 0x54) = fVar19;
                                      pCVar14 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                          ((Color *)&stack0xffffffc0,
                                                           (MethodInfo *)0x0);
                                      fVar19 = pCVar14->r;
                                      fVar20 = pCVar14->g;
                                      this = (MoveGizmoLookAndFeel3D *)pCVar14->b;
                                      method = (MethodInfo *)pCVar14->a;
                                      fVar21 = RTSystemValues::RTSystemValues_get_AxisAlpha
                                                         ((MethodInfo *)0x0);
                                      iVar12 = *newAlpha_00;
                                      fVar34 = fVar20;
                                      CVar26.r = fVar19;
                                      CVar26 = (Color)CONCAT124(CVar26._0_12_,CVar26.r);
                                      pCVar14 = ColorEx::ColorEx_KeepAllButAlpha
                                                          ((Color *)&stack0xffffffc0,CVar26,fVar21,
                                                           (MethodInfo *)0x0);
                                      fVar19 = pCVar14->g;
                                      fVar20 = pCVar14->b;
                                      fVar21 = pCVar14->a;
                                      if (iVar12 != 0) {
                                        *(float *)(iVar12 + 0x38) = pCVar14->r;
                                        *(float *)(iVar12 + 0x3c) = fVar19;
                                        *(float *)(iVar12 + 0x40) = fVar20;
                                        *(float *)(iVar12 + 0x44) = fVar21;
                                        iVar12 = *newAlpha_00;
                                        pCVar14 = RTSystemValues::
                                                  RTSystemValues_get_HoveredAxisColor
                                                            ((Color *)&stack0xffffffc0,
                                                             (MethodInfo *)0x0);
                                        fVar19 = pCVar14->g;
                                        fVar20 = pCVar14->b;
                                        fVar21 = pCVar14->a;
                                        if (iVar12 != 0) {
                                          *(float *)(iVar12 + 0x58) = pCVar14->r;
                                          *(float *)(iVar12 + 0x5c) = fVar19;
                                          *(float *)(iVar12 + 0x60) = fVar20;
                                          *(float *)(iVar12 + 100) = fVar21;
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
    pGVar8 = (this->fields)._dblSlidersLookAndFeel;
    pGVar24 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar24,(MethodInfo *)0x0);
    if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar24 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (iVar12 = func_?(), iVar12 == 0)) goto code_?;
    if (pGVar8->max_length <= uVar10) goto code_?;
    pGVar8->vector[uVar10] = pGVar24;
    func_?();
    uVar10 = uVar10 + 1;
    pGVar8 = (this->fields)._dblSlidersLookAndFeel;
    if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar8->max_length <= (int)uVar10) {
      pGVar6 = (this->fields)._sglSlidersLookAndFeel;
      uVar10 = 0;
      if (pGVar6 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar13 = pGVar6->vector;
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
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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

