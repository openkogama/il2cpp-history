
/* Void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectMvDblSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *dblSlider,
               PlaneId__Enum planeId,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= planeId) {
      pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DLookAndFeel **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (dblSlider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[planeId];
      (dblSlider->fields)._sharedLookAndFeel = pGStack_1;
      ppGStack_3 = &(dblSlider->fields)._sharedLookAndFeel;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectMvSliderLookAndFeel(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectMvSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar1->max_length <= (uint)axisIndex) {
code_?:
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (slider != (GizmoLineSlider3D *)0x0) {
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
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


/* Void ConnectMvVertSnapCapLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectMvVertSnapCapLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoCap2D *vertSnapCap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap2DLookAndFeel *)&stack0xfffffffc;
  if (vertSnapCap != (GizmoCap2D *)0x0) {
    pGStack_1 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void ConnectRtCamLookSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectRtCamLookSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DLookAndFeel *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    pGStack_1 = (this->fields)._rtCamLookSliderLookAndFeel;
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


/* Void ConnectRtMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectRtMidCapLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  if (cap != (GizmoCap3D *)0x0) {
    pGStack_1 = (this->fields)._rtMidCapLookAndFeel;
    (cap->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(cap->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectRtSliderLookAndFeel(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectRtSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= (uint)axisIndex) {
      pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DLookAndFeel **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[axisIndex];
      (slider->fields)._sharedLookAndFeel = pGStack_1;
      ppGStack_3 = &(slider->fields)._sharedLookAndFeel;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectScDblSliderLookAndFeel(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScDblSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSlidersLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= planeId) {
      pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DLookAndFeel **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[planeId];
      (slider->fields)._sharedLookAndFeel = pGStack_1;
      ppGStack_3 = &(slider->fields)._sharedLookAndFeel;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectScGizmoScaleGuideLookAndFeel(GizmoScaleGuide) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScGizmoScaleGuideLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoScaleGuide *scaleGuide,MethodInfo *method)

{
  pGStack_1 = (GizmoScaleGuideLookAndFeel *)&stack0xfffffffc;
  if (scaleGuide != (GizmoScaleGuide *)0x0) {
    pGStack_1 = (this->fields)._scScaleGuideLookAndFeel;
    (scaleGuide->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(scaleGuide->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectScMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScMidCapLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  if (cap != (GizmoCap3D *)0x0) {
    pGStack_1 = (this->fields)._scMidCapLookAndFeel;
    (cap->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(cap->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectScSliderLookAndFeel(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar1->max_length <= (uint)axisIndex) {
code_?:
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (slider != (GizmoLineSlider3D *)0x0) {
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
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


/* List`1[System.Enum] GetAllowedMvVertSnapCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetAllowedMvVertSnapCapTypes
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DType);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Enum>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Enum_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
  uStack_2 = 1;
  uVar3 = func_?(TypeInfo__RTG__GizmoCap2DType,&uStack_2);
  if (pLVar1 != (List_1_System_Enum_ *)0x0) {
    pMStack_4 = MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_;
    func_?(pLVar1,uVar3);
    pMStack_4 = (MethodInfo *)0x0;
    uVar3 = func_?(TypeInfo__RTG__GizmoCap2DType,&pMStack_4);
    func_?(pLVar1,uVar3,
                    MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_)
    ;
    return pLVar1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar1 = (List_1_System_Enum_ *)(*pcVar5)();
  return pLVar1;
}


/* List`1[System.Enum] GetAllowedScMidCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetAllowedScMidCapTypes
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3DType);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Enum>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Enum_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
  uStack_2 = 2;
  uVar3 = func_?(TypeInfo__RTG__GizmoCap3DType,&uStack_2);
  if (pLVar1 != (List_1_System_Enum_ *)0x0) {
    pMStack_4 = MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_;
    func_?(pLVar1,uVar3);
    pMStack_4 = (MethodInfo *)0x3;
    uVar3 = func_?(TypeInfo__RTG__GizmoCap3DType,&pMStack_4);
    func_?(pLVar1,uVar3,
                    MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_)
    ;
    return pLVar1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar1 = (List_1_System_Enum_ *)(*pcVar5)();
  return pLVar1;
}


/* GizmoPlaneSlider3DLookAndFeel GetMvDblSliderLookAndFeel(PlaneId) */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetMvDblSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pGVar6 = (GizmoPlaneSlider3DLookAndFeel *)(*pcVar5)();
    return pGVar6;
  }
  if (planeId < pGVar2->max_length) {
    return pGVar2->vector[planeId];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pGVar6 = (GizmoPlaneSlider3DLookAndFeel *)(*pcVar5)();
  return pGVar6;
}


/* GizmoLineSlider3DLookAndFeel GetMvSglSliderLookAndFeel(Int32, AxisSign) */

GizmoLineSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetMvSglSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DLookAndFeel *)(*pcVar5)();
      return pGVar6;
    }
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_7 = (undefined *)func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DLookAndFeel *)(*pcVar5)();
      return pGVar6;
    }
  }
  return pGVar2->vector[axisIndex];
}


/* GizmoPlaneSlider3DLookAndFeel GetScDblSliderLookAndFeel(PlaneId) */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetScDblSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSlidersLookAndFeel;
  if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pGVar6 = (GizmoPlaneSlider3DLookAndFeel *)(*pcVar5)();
    return pGVar6;
  }
  if (planeId < pGVar2->max_length) {
    return pGVar2->vector[planeId];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pGVar6 = (GizmoPlaneSlider3DLookAndFeel *)(*pcVar5)();
  return pGVar6;
}


/* GizmoLineSlider3DLookAndFeel GetScSglSliderLookAndFeel(Int32, AxisSign) */

GizmoLineSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetScSglSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DLookAndFeel *)(*pcVar5)();
      return pGVar6;
    }
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_7 = (undefined *)func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DLookAndFeel *)(*pcVar5)();
      return pGVar6;
    }
  }
  return pGVar2->vector[axisIndex];
}


/* Void Inherit(MoveGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_Inherit
               (UniversalGizmoLookAndFeel3D *this,MoveGizmoLookAndFeel3D *lookAndFeel,
               MethodInfo *method)

{
  if (lookAndFeel != (MoveGizmoLookAndFeel3D *)0x0) {
    pCVar1 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_XColor
                       ((Color *)&stack0xffffffdc,(ScaleGizmoLookAndFeel3D *)lookAndFeel,
                        (MethodInfo *)0x0);
    UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,0,*pCVar1,(MethodInfo *)0x0);
    pCVar1 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_YColor
                       ((Color *)&stack0xffffffdc,(ScaleGizmoLookAndFeel3D *)lookAndFeel,
                        (MethodInfo *)0x0);
    UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,1,*pCVar1,(MethodInfo *)0x0);
    pCVar1 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_ZColor
                       ((Color *)&stack0xffffffdc,(ScaleGizmoLookAndFeel3D *)lookAndFeel,
                        (MethodInfo *)0x0);
    UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,2,*pCVar1,(MethodInfo *)0x0);
    fVar2 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_BoxSliderDepth
                       ((ScaleGizmoLookAndFeel3D *)lookAndFeel,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
    uVar4 = 0;
    if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
      ppGVar5 = pGVar3->vector;
      for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1) {
        if (pGVar3->max_length <= uVar4) goto code_?;
        if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
        goto code_?;
        GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                  ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar5,fVar2,(MethodInfo *)0x0);
        ppGVar5 = ppGVar5 + 1;
      }
      fVar2 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_BoxSliderHeight
                         ((ScaleGizmoLookAndFeel3D *)lookAndFeel,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
      uVar4 = 0;
      if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar5 = pGVar3->vector;
        for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1) {
          if (pGVar3->max_length <= uVar4) goto code_?;
          if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
          goto code_?;
          GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                    ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar5,fVar2,(MethodInfo *)0x0);
          ppGVar5 = ppGVar5 + 1;
        }
        fVar2 = UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtXSnapStep
                           ((UniversalGizmoSettings3D *)lookAndFeel,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
        uVar4 = 0;
        if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
          ppGVar5 = pGVar3->vector;
          for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1) {
            if (pGVar3->max_length <= uVar4) goto code_?;
            if (*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
            RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
                      ((RotationGizmoLookAndFeel3D *)*ppGVar5,fVar2,(MethodInfo *)0x0);
            ppGVar5 = ppGVar5 + 1;
          }
          fVar2 = MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderBoxDepth
                             (lookAndFeel,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
          uVar4 = 0;
          if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
            ppGVar7 = pGVar6->vector;
            for (; (int)uVar4 < (int)pGVar6->max_length; uVar4 = uVar4 + 1) {
              if (pGVar6->max_length <= uVar4) goto code_?;
              if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
              GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderBoxDepth
                        (*ppGVar7,fVar2,(MethodInfo *)0x0);
              ppGVar7 = ppGVar7 + 1;
            }
            fVar2 = MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderBoxHeight
                               (lookAndFeel,(MethodInfo *)0x0);
            pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
            uVar4 = 0;
            if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
              ppGVar7 = pGVar6->vector;
              for (; (int)uVar4 < (int)pGVar6->max_length; uVar4 = uVar4 + 1) {
                if (pGVar6->max_length <= uVar4) goto code_?;
                if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
                          ((RotationGizmoLookAndFeel3D *)*ppGVar7,fVar2,(MethodInfo *)0x0);
                ppGVar7 = ppGVar7 + 1;
              }
              GVar8 = MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderFillMode
                                 (lookAndFeel,(MethodInfo *)0x0);
              pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
              uVar4 = 0;
              if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                ppGVar7 = pGVar6->vector;
                for (; (int)uVar4 < (int)pGVar6->max_length; uVar4 = uVar4 + 1) {
                  if (pGVar6->max_length <= uVar4) goto code_?;
                  if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                  ((*ppGVar7)->fields)._borderFillMode = GVar8;
                  ppGVar7 = ppGVar7 + 1;
                }
                GVar9 = MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderShadeMode
                                   (lookAndFeel,(MethodInfo *)0x0);
                pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
                uVar4 = 0;
                if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                  ppGVar7 = pGVar6->vector;
                  for (; (int)uVar4 < (int)pGVar6->max_length; uVar4 = uVar4 + 1) {
                    if (pGVar6->max_length <= uVar4) goto code_?;
                    if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    ((*ppGVar7)->fields)._borderShadeMode = GVar9;
                    ppGVar7 = ppGVar7 + 1;
                  }
                  GVar10 = MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderType
                                     (lookAndFeel,(MethodInfo *)0x0);
                  pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
                  uVar4 = 0;
                  if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                    ppGVar7 = pGVar6->vector;
                    for (; (int)uVar4 < (int)pGVar6->max_length; uVar4 = uVar4 + 1) {
                      if (pGVar6->max_length <= uVar4) goto code_?;
                      if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                      ((*ppGVar7)->fields)._quadBorderType = GVar10;
                      ppGVar7 = ppGVar7 + 1;
                    }
                    fVar2 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_DblSliderFillAlpha
                                       ((ScaleGizmoLookAndFeel3D *)lookAndFeel,(MethodInfo *)0x0);
                    UniversalGizmoLookAndFeel3D_SetMvDblSliderFillAlpha
                              (this,fVar2,(MethodInfo *)0x0);
                    fVar2 = MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderSize
                                       (lookAndFeel,(MethodInfo *)0x0);
                    UniversalGizmoLookAndFeel3D_SetMvDblSliderSize(this,fVar2,(MethodInfo *)0x0);
                    bVar11 = UniversalGizmoLookAndFeel2D::
                            UniversalGizmoLookAndFeel2D_IsMvPositiveSliderCapVisible
                                      ((UniversalGizmoLookAndFeel2D *)lookAndFeel,0,
                                       (MethodInfo *)0x0);
                    pBVar12 = (this->fields)._mvDblSliderVis;
                    if (pBVar12 != (Boolean__Array *)0x0) {
                      if (pBVar12->max_length == 0) goto code_?;
                      pBVar12->vector[0] = bVar11;
                      bVar11 = UniversalGizmoLookAndFeel2D::
                              UniversalGizmoLookAndFeel2D_IsMvPositiveSliderCapVisible
                                        ((UniversalGizmoLookAndFeel2D *)lookAndFeel,1,
                                         (MethodInfo *)0x0);
                      pBVar12 = (this->fields)._mvDblSliderVis;
                      if (pBVar12 != (Boolean__Array *)0x0) {
                        if (pBVar12->max_length < 2) goto code_?;
                        pBVar12->vector[1] = bVar11;
                        bVar11 = UniversalGizmoLookAndFeel2D::
                                UniversalGizmoLookAndFeel2D_IsMvPositiveSliderCapVisible
                                          ((UniversalGizmoLookAndFeel2D *)lookAndFeel,2,
                                           (MethodInfo *)0x0);
                        pBVar12 = (this->fields)._mvDblSliderVis;
                        if (pBVar12 != (Boolean__Array *)0x0) {
                          if (pBVar12->max_length < 3) goto code_?;
                          pBVar12->vector[2] = bVar11;
                          pCVar1 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_HoveredColor
                                             ((Color *)&stack0xffffffdc,
                                              (ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                              (MethodInfo *)0x0);
                          UniversalGizmoLookAndFeel3D_SetMvHoveredColor
                                    (this,*pCVar1,(MethodInfo *)0x0);
                          fVar2 = UniversalGizmoSettings2D::
                                   UniversalGizmoSettings2D_get_MvXSnapStep
                                             ((UniversalGizmoSettings2D *)lookAndFeel,
                                              (MethodInfo *)0x0);
                          pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                          uVar4 = 0;
                          if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                            ppGVar5 = pGVar3->vector;
                            for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1) {
                              if (pGVar3->max_length <= uVar4) goto code_?;
                              pGVar13 = *ppGVar5;
                              if (pGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0)
                              goto code_?;
                              CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                                        ((CameraMoveSettings *)pGVar13,fVar2,(MethodInfo *)0x0);
                              pGVar14 = (pGVar13->fields)._capLookAndFeel;
                              if (pGVar14 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                              GizmoPlaneSlider3DSettings::
                              GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                                        ((GizmoPlaneSlider3DSettings *)pGVar14,fVar2,
                                         (MethodInfo *)0x0);
                              ppGVar5 = ppGVar5 + 1;
                            }
                            pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
                            uVar4 = 0;
                            if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                              ppGVar7 = pGVar6->vector;
                              for (; (int)uVar4 < (int)pGVar6->max_length; uVar4 = uVar4 + 1) {
                                if (pGVar6->max_length <= uVar4) goto code_?;
                                if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                goto code_?;
                                Sphere::Sphere_set_Radius
                                          ((Sphere *)*ppGVar7,fVar2,(MethodInfo *)0x0);
                                ppGVar7 = ppGVar7 + 1;
                              }
                              fVar2 = ScaleGizmoLookAndFeel3D::
                                       ScaleGizmoLookAndFeel3D_get_SliderBoxCapDepth
                                                 ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                  (MethodInfo *)0x0);
                              pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                              uVar4 = 0;
                              if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                ppGVar5 = pGVar3->vector;
                                for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1)
                                {
                                  if (pGVar3->max_length <= uVar4) goto code_?;
                                  if ((*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                     (pGVar14 = ((*ppGVar5)->fields)._capLookAndFeel,
                                     pGVar14 == (GizmoCap3DLookAndFeel *)0x0)) goto code_?;
                                  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth
                                            (pGVar14,fVar2,(MethodInfo *)0x0);
                                  ppGVar5 = ppGVar5 + 1;
                                }
                                fVar2 = ScaleGizmoLookAndFeel3D::
                                         ScaleGizmoLookAndFeel3D_get_SliderBoxCapHeight
                                                   ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                    (MethodInfo *)0x0);
                                pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                uVar4 = 0;
                                if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                  ppGVar5 = pGVar3->vector;
                                  for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1
                                      ) {
                                    if (pGVar3->max_length <= uVar4) goto code_?;
                                    if ((*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                       (pGVar14 = ((*ppGVar5)->fields)._capLookAndFeel,
                                       pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                    goto code_?;
                                    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
                                              (pGVar14,fVar2,(MethodInfo *)0x0);
                                    ppGVar5 = ppGVar5 + 1;
                                  }
                                  fVar2 = ScaleGizmoLookAndFeel3D::
                                           ScaleGizmoLookAndFeel3D_get_SliderBoxCapWidth
                                                     ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                      (MethodInfo *)0x0);
                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                  uVar4 = 0;
                                  if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                    ppGVar5 = pGVar3->vector;
                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                        uVar4 = uVar4 + 1) {
                                      if (pGVar3->max_length <= uVar4) goto code_?;
                                      if ((*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                         (pGVar14 = ((*ppGVar5)->fields)._capLookAndFeel,
                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                      goto code_?;
                                      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                      ppGVar5 = ppGVar5 + 1;
                                    }
                                    GVar8 = ScaleGizmoLookAndFeel3D::
                                             ScaleGizmoLookAndFeel3D_get_SliderCapFillMode
                                                       ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                        (MethodInfo *)0x0);
                                    pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                    uVar4 = 0;
                                    if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                      ppGVar5 = pGVar3->vector;
                                      for (; (int)uVar4 < (int)pGVar3->max_length;
                                          uVar4 = uVar4 + 1) {
                                        if (pGVar3->max_length <= uVar4) goto code_?;
                                        if ((*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                           (pGVar14 = ((*ppGVar5)->fields)._capLookAndFeel,
                                           pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                        goto code_?;
                                        (pGVar14->fields)._fillMode = GVar8;
                                        ppGVar5 = ppGVar5 + 1;
                                      }
                                      GVar9 = ScaleGizmoLookAndFeel3D::
                                               ScaleGizmoLookAndFeel3D_get_SliderCapShadeMode
                                                         ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                          (MethodInfo *)0x0);
                                      pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                      uVar4 = 0;
                                      if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                        ppGVar5 = pGVar3->vector;
                                        for (; (int)uVar4 < (int)pGVar3->max_length;
                                            uVar4 = uVar4 + 1) {
                                          if (pGVar3->max_length <= uVar4) goto code_?;
                                          if ((*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                             (pGVar14 = ((*ppGVar5)->fields)._capLookAndFeel,
                                             pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                          goto code_?;
                                          (pGVar14->fields)._shadeMode = GVar9;
                                          ppGVar5 = ppGVar5 + 1;
                                        }
                                        GVar15 = ScaleGizmoLookAndFeel3D::
                                                 ScaleGizmoLookAndFeel3D_get_SliderCapType
                                                           ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                            (MethodInfo *)0x0);
                                        pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                        uVar4 = 0;
                                        if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                          ppGVar5 = pGVar3->vector;
                                          for (; (int)uVar4 < (int)pGVar3->max_length;
                                              uVar4 = uVar4 + 1) {
                                            if (pGVar3->max_length <= uVar4)
                                            goto code_?;
                                            if ((*ppGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0)
                                               || (pGVar14 = ((*ppGVar5)->fields)._capLookAndFeel,
                                                  pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                            goto code_?;
                                            (pGVar14->fields)._capType = GVar15;
                                            ppGVar5 = ppGVar5 + 1;
                                          }
                                          bVar11 = MoveGizmoLookAndFeel3D::
                                                  MoveGizmoLookAndFeel3D_IsSliderCapVisible
                                                            (lookAndFeel,0,AxisSign__Enum_Positive,
                                                             (MethodInfo *)0x0);
                                          pBVar12 = (this->fields)._mvSglSliderCapVis;
                                          if (pBVar12 != (Boolean__Array *)0x0) {
                                            if (pBVar12->max_length == 0) goto code_?;
                                            pBVar12->vector[0] = bVar11;
                                            bVar11 = MoveGizmoLookAndFeel3D::
                                                    MoveGizmoLookAndFeel3D_IsSliderCapVisible
                                                              (lookAndFeel,1,AxisSign__Enum_Positive
                                                               ,(MethodInfo *)0x0);
                                            pBVar12 = (this->fields)._mvSglSliderCapVis;
                                            if (pBVar12 != (Boolean__Array *)0x0) {
                                              if (pBVar12->max_length < 2) goto code_?;
                                              pBVar12->vector[1] = bVar11;
                                              bVar11 = MoveGizmoLookAndFeel3D::
                                                      MoveGizmoLookAndFeel3D_IsSliderCapVisible
                                                                (lookAndFeel,2,
                                                                 AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                              pBVar12 = (this->fields)._mvSglSliderCapVis;
                                              if (pBVar12 != (Boolean__Array *)0x0) {
                                                if (pBVar12->max_length < 3) goto code_?;
                                                pBVar12->vector[2] = bVar11;
                                                bVar11 = MoveGizmoLookAndFeel3D::
                                                        MoveGizmoLookAndFeel3D_IsSliderCapVisible
                                                                  (lookAndFeel,0,
                                                                   AxisSign__Enum_Negative,
                                                                   (MethodInfo *)0x0);
                                                pBVar12 = (this->fields)._mvSglSliderCapVis;
                                                if (pBVar12 != (Boolean__Array *)0x0) {
                                                  if (pBVar12->max_length < 4) goto code_?;
                                                  pBVar12->vector[3] = bVar11;
                                                  bVar11 = MoveGizmoLookAndFeel3D::
                                                          MoveGizmoLookAndFeel3D_IsSliderCapVisible
                                                                    (lookAndFeel,1,
                                                                     AxisSign__Enum_Negative,
                                                                     (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderCapVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 5)
                                                    goto code_?;
                                                    pBVar12->vector[4] = bVar11;
                                                    bVar11 = MoveGizmoLookAndFeel3D::
                                                                                                                        
                                                  MoveGizmoLookAndFeel3D_IsSliderCapVisible
                                                            (lookAndFeel,2,AxisSign__Enum_Negative,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderCapVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 6)
                                                    goto code_?;
                                                    pBVar12->vector[5] = bVar11;
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderConeCapHeight
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_ConeHeight
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderConeCapBaseRadius
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_ConeRadius
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    GVar8 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderFillMode
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if (*ppGVar5 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar5)->fields)._fillMode = GVar8;
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = 
                                                  UniversalGizmoLookAndFeel3D_get_MvDblSliderSize
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,(MethodInfo *)0x0);
                                                  UniversalGizmoLookAndFeel3D_SetMvSliderLength
                                                            (this,fVar2,(MethodInfo *)0x0);
                                                  GVar16 = ScaleGizmoLookAndFeel3D::
                                                                                                                      
                                                  ScaleGizmoLookAndFeel3D_get_SliderLineType
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if (*ppGVar5 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar5)->fields)._lineType = GVar16;
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderPyramidCapDepth
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_PyramidDepth
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderPyramidCapHeight
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_PyramidHeight
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderPyramidCapWidth
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_PyramidWidth
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    GVar9 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderShadeMode
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if (*ppGVar5 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar5)->fields)._shadeMode = GVar9;
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderSphereCapRadius
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_SphereRadius
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapDepth
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_TrPrismDepth
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapHeight
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_TrPrismHeight
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    fVar2 = ScaleGizmoLookAndFeel3D::
                                                                                                                          
                                                  ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapWidth
                                                            ((ScaleGizmoLookAndFeel3D *)lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      if ((*ppGVar5 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar14 = ((*ppGVar5)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar14 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_TrPrismWidth
                                                                (pGVar14,fVar2,(MethodInfo *)0x0);
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    bVar11 = 
                                                  UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,0,AxisSign__Enum_Positive,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length == 0)
                                                    goto code_?;
                                                    pBVar12->vector[0] = bVar11;
                                                    bVar11 = 
                                                  UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,1,AxisSign__Enum_Positive,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 2)
                                                    goto code_?;
                                                    pBVar12->vector[1] = bVar11;
                                                    bVar11 = 
                                                  UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,2,AxisSign__Enum_Positive,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 3)
                                                    goto code_?;
                                                    pBVar12->vector[2] = bVar11;
                                                    bVar11 = 
                                                  UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,0,AxisSign__Enum_Negative,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 4)
                                                    goto code_?;
                                                    pBVar12->vector[3] = bVar11;
                                                    bVar11 = 
                                                  UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,1,AxisSign__Enum_Negative,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 5)
                                                    goto code_?;
                                                    pBVar12->vector[4] = bVar11;
                                                    bVar11 = 
                                                  UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
                                                            ((UniversalGizmoLookAndFeel3D *)
                                                             lookAndFeel,2,AxisSign__Enum_Negative,
                                                             (MethodInfo *)0x0);
                                                  pBVar12 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if (pBVar12->max_length < 6)
                                                    goto code_?;
                                                    pBVar12->vector[5] = bVar11;
                                                    bVar11 = RotationGizmoLookAndFeel3D::
                                                                                                                        
                                                  RotationGizmoLookAndFeel3D_get_UseZoomFactor
                                                            ((RotationGizmoLookAndFeel3D *)
                                                             lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  uVar4 = 0;
                                                  if (pGVar3 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar5 = pGVar3->vector;
                                                    for (; (int)uVar4 < (int)pGVar3->max_length;
                                                        uVar4 = uVar4 + 1) {
                                                      if (pGVar3->max_length <= uVar4)
                                                      goto code_?;
                                                      pGVar13 = *ppGVar5;
                                                      if (pGVar13 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      (pGVar13->fields)._useZoomFactor = bVar11;
                                                      pGVar14 = (pGVar13->fields)._capLookAndFeel;
                                                      if (pGVar14 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      (pGVar14->fields)._useZoomFactor = bVar11;
                                                      ppGVar5 = ppGVar5 + 1;
                                                    }
                                                    pGVar6 = (this->fields).
                                                              _mvDblSlidersLookAndFeel;
                                                    uVar4 = 0;
                                                    if (pGVar6 !=
                                                        (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                                                    {
                                                      ppGVar7 = pGVar6->vector;
                                                      for (; (int)uVar4 < (int)pGVar6->max_length;
                                                          uVar4 = uVar4 + 1) {
                                                        if (pGVar6->max_length <= uVar4)
                                                        goto code_?;
                                                        if (*ppGVar7 ==
                                                            (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                        goto code_?;
                                                        ((*ppGVar7)->fields)._useZoomFactor = bVar11
                                                        ;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                      pCVar1 = MoveGizmoLookAndFeel3D::
                                                                                                                              
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapBorderColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  fVar2 = pCVar1->g;
                                                  fVar18 = pCVar1->b;
                                                  fVar19 = pCVar1->a;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    (pGVar17->fields)._borderColor.r = pCVar1->r;
                                                    (pGVar17->fields)._borderColor.g = fVar2;
                                                    (pGVar17->fields)._borderColor.b = fVar18;
                                                    (pGVar17->fields)._borderColor.a = fVar19;
                                                    fVar2 = MoveGizmoLookAndFeel3D::
                                                                                                                          
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapCircleRadius
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    (pGVar17->fields)._circleRadius = fVar2;
                                                    pCVar1 = MoveGizmoLookAndFeel3D::
                                                                                                                          
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  fVar2 = pCVar1->g;
                                                  fVar18 = pCVar1->b;
                                                  fVar19 = pCVar1->a;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    (pGVar17->fields)._color.r = pCVar1->r;
                                                    (pGVar17->fields)._color.g = fVar2;
                                                    (pGVar17->fields)._color.b = fVar18;
                                                    (pGVar17->fields)._color.a = fVar19;
                                                    GVar20 = MoveGizmoLookAndFeel3D::
                                                                                                                          
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapFillMode
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    (pGVar17->fields)._fillMode = GVar20;
                                                    pCVar1 = MoveGizmoLookAndFeel3D::
                                                                                                                          
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapHoveredBorderColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  fVar2 = pCVar1->g;
                                                  fVar18 = pCVar1->b;
                                                  fVar19 = pCVar1->a;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    (pGVar17->fields)._hoveredBorderColor.r =
                                                         pCVar1->r;
                                                    (pGVar17->fields)._hoveredBorderColor.g = fVar2;
                                                    (pGVar17->fields)._hoveredBorderColor.b = fVar18;
                                                    (pGVar17->fields)._hoveredBorderColor.a = fVar19;
                                                    pCVar1 = MoveGizmoLookAndFeel3D::
                                                                                                                          
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapHoveredColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  fVar2 = pCVar1->g;
                                                  fVar18 = pCVar1->b;
                                                  fVar19 = pCVar1->a;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    (pGVar17->fields)._hoveredColor.r = pCVar1->r;
                                                    (pGVar17->fields)._hoveredColor.g = fVar2;
                                                    (pGVar17->fields)._hoveredColor.b = fVar18;
                                                    (pGVar17->fields)._hoveredColor.a = fVar19;
                                                    fVar2 = MoveGizmoLookAndFeel3D::
                                                                                                                          
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapQuadHeight
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  this_00 = (GizmoPlaneSlider3DLookAndFeel *)
                                                            (this->fields)._mvVertSnapCapLookAndFeel
                                                  ;
                                                  if (this_00 !=
                                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                    GizmoPlaneSlider3DLookAndFeel::
                                                                                                        
                                                  GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                                                            (this_00,fVar2,(MethodInfo *)0x0);
                                                  fVar2 = MoveGizmoLookAndFeel3D::
                                                                                                                      
                                                  MoveGizmoLookAndFeel3D_get_VertSnapCapQuadWidth
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar17 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                  if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                    CameraMoveSettings::
                                                    CameraMoveSettings_set_AccelerationRate
                                                              ((CameraMoveSettings *)pGVar17,fVar2,
                                                               (MethodInfo *)0x0);
                                                    iVar21 = EditorToolbar::
                                                             EditorToolbar_get_NumTabs
                                                                       ((EditorToolbar *)lookAndFeel
                                                                        ,(MethodInfo *)0x0);
                                                    if ((iVar21 != 1) && (iVar21 != 0)) {
                                                      return;
                                                    }
                                                    pGVar17 = (this->fields).
                                                             _mvVertSnapCapLookAndFeel;
                                                    if (pGVar17 != (GizmoCap2DLookAndFeel *)0x0) {
                                                      (pGVar17->fields)._capType = iVar21;
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
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Inherit(RotationGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_Inherit_1
               (UniversalGizmoLookAndFeel3D *this,RotationGizmoLookAndFeel3D *lookAndFeel,
               MethodInfo *method)

{
  if (lookAndFeel != (RotationGizmoLookAndFeel3D *)0x0) {
    pCVar1 = RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_XBorderColor
                        ((Color *)&stack0xffffffdc,lookAndFeel,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._rtAxesLookAndFeel;
    if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      pGVar3 = pGVar2->vector[0];
      fVar4 = pCVar1->g;
      fVar5 = pCVar1->b;
      fVar6 = pCVar1->a;
      if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        (pGVar3->fields)._borderColor.r = pCVar1->r;
        (pGVar3->fields)._borderColor.g = fVar4;
        (pGVar3->fields)._borderColor.b = fVar5;
        (pGVar3->fields)._borderColor.a = fVar6;
        pCVar1 = RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_YBorderColor
                            ((Color *)&stack0xffffffdc,lookAndFeel,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._rtAxesLookAndFeel;
        if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
          if (pGVar2->max_length < 2) goto code_?;
          pGVar3 = pGVar2->vector[1];
          fVar4 = pCVar1->g;
          fVar5 = pCVar1->b;
          fVar6 = pCVar1->a;
          if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            (pGVar3->fields)._borderColor.r = pCVar1->r;
            (pGVar3->fields)._borderColor.g = fVar4;
            (pGVar3->fields)._borderColor.b = fVar5;
            (pGVar3->fields)._borderColor.a = fVar6;
            pCVar1 = RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_ZBorderColor
                                ((Color *)&stack0xffffffdc,lookAndFeel,(MethodInfo *)0x0);
            pGVar2 = (this->fields)._rtAxesLookAndFeel;
            if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
              if (pGVar2->max_length < 3) goto code_?;
              pGVar3 = pGVar2->vector[2];
              fVar4 = pCVar1->g;
              fVar5 = pCVar1->b;
              fVar6 = pCVar1->a;
              if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                (pGVar3->fields)._borderColor.r = pCVar1->r;
                (pGVar3->fields)._borderColor.g = fVar4;
                (pGVar3->fields)._borderColor.b = fVar5;
                (pGVar3->fields)._borderColor.a = fVar6;
                pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)
                          RotationGizmoLookAndFeel3D::
                          RotationGizmoLookAndFeel3D_get_AxisCullAlphaScale
                                    (lookAndFeel,(MethodInfo *)0x0);
                pGVar2 = (this->fields)._rtAxesLookAndFeel;
                uVar7 = 0;
                if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                  ppGVar8 = pGVar2->vector;
                  while( true ) {
                    if ((int)pGVar2->max_length <= (int)uVar7) break;
                    if (pGVar2->max_length <= uVar7) goto code_?;
                    pGVar9 = *ppGVar8;
                    if (pGVar9 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    pGVar2 = (GizmoPlaneSlider3DLookAndFeel__Array *)&UNK_?;
                    GizmoPlaneSlider3DLookAndFeel::
                    GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                              (pGVar9,(float)pGVar3,(MethodInfo *)0x0);
                    uVar7 = uVar7 + 1;
                    ppGVar8 = (GizmoPlaneSlider3DLookAndFeel **)&pGVar3->monitor;
                    pGVar3 = pGVar9;
                  }
                  GVar10 = RotationGizmoLookAndFeel3D::
                           RotationGizmoLookAndFeel3D_get_AxisBorderFillMode
                                     (lookAndFeel,(MethodInfo *)0x0);
                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                  uVar7 = 0;
                  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                    ppGVar8 = pGVar2->vector;
                    for (; (int)uVar7 < (int)pGVar2->max_length; uVar7 = uVar7 + 1) {
                      if (pGVar2->max_length <= uVar7) goto code_?;
                      if (*ppGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                      ((*ppGVar8)->fields)._borderFillMode = GVar10;
                      ppGVar8 = ppGVar8 + 1;
                    }
                    GVar11 = RotationGizmoLookAndFeel3D::
                             RotationGizmoLookAndFeel3D_get_AxisBorderType
                                       (lookAndFeel,(MethodInfo *)0x0);
                    pGVar2 = (this->fields)._rtAxesLookAndFeel;
                    uVar7 = 0;
                    if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      ppGVar8 = pGVar2->vector;
                      for (; (int)uVar7 < (int)pGVar2->max_length; uVar7 = uVar7 + 1) {
                        if (pGVar2->max_length <= uVar7) goto code_?;
                        if (*ppGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                        goto code_?;
                        ((*ppGVar8)->fields)._circleBorderType = GVar11;
                        ppGVar8 = ppGVar8 + 1;
                      }
                      puVar12 = (undefined *)
                                RotationGizmoLookAndFeel3D::
                                RotationGizmoLookAndFeel3D_get_AxisCylTorusHeight
                                          (lookAndFeel,(MethodInfo *)0x0);
                      pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._rtAxesLookAndFeel;
                      fVar4 = 0.0;
                      if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        pbVar13 = &(pGVar3->fields)._useZoomFactor;
                        for (; (int)fVar4 < (int)(pGVar3->fields)._scale;
                            fVar4 = (float)((int)fVar4 + 1)) {
                          if ((uint)(pGVar3->fields)._scale <= (uint)fVar4) goto code_?;
                          pGVar3 = *(GizmoPlaneSlider3DLookAndFeel **)pbVar13;
                          if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                          goto code_?;
                          puVar14 = &UNK_?;
                          GizmoPlaneSlider3DLookAndFeel::
                          GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusHeight
                                    (pGVar3,(float)puVar12,(MethodInfo *)0x0);
                          pbVar13 = puVar12 + 4;
                          puVar12 = puVar14;
                        }
                        puVar12 = (undefined *)
                                  RotationGizmoLookAndFeel3D::
                                  RotationGizmoLookAndFeel3D_get_AxisCylTorusWidth
                                            (lookAndFeel,(MethodInfo *)0x0);
                        pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._rtAxesLookAndFeel
                        ;
                        fVar4 = 0.0;
                        if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                          pbVar13 = &(pGVar3->fields)._useZoomFactor;
                          for (; (int)fVar4 < (int)(pGVar3->fields)._scale;
                              fVar4 = (float)((int)fVar4 + 1)) {
                            if ((uint)(pGVar3->fields)._scale <= (uint)fVar4)
                            goto code_?;
                            pGVar3 = *(GizmoPlaneSlider3DLookAndFeel **)pbVar13;
                            if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                            goto code_?;
                            puVar14 = &UNK_?;
                            GizmoPlaneSlider3DLookAndFeel::
                            GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusWidth
                                      (pGVar3,(float)puVar12,(MethodInfo *)0x0);
                            pbVar13 = puVar12 + 4;
                            puVar12 = puVar14;
                          }
                          puVar12 = (undefined *)
                                    RotationGizmoLookAndFeel3D::
                                    RotationGizmoLookAndFeel3D_get_AxisTorusThickness
                                              (lookAndFeel,(MethodInfo *)0x0);
                          pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)
                                    (this->fields)._rtAxesLookAndFeel;
                          fVar4 = 0.0;
                          if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                            pbVar13 = &(pGVar3->fields)._useZoomFactor;
                            while( true ) {
                              if ((int)(pGVar3->fields)._scale <= (int)fVar4) break;
                              if ((uint)(pGVar3->fields)._scale <= (uint)fVar4)
                              goto code_?;
                              pGVar3 = *(GizmoPlaneSlider3DLookAndFeel **)pbVar13;
                              if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                              goto code_?;
                              puVar14 = &UNK_?;
                              GizmoPlaneSlider3DLookAndFeel::
                              GizmoPlaneSlider3DLookAndFeel_set_BorderTorusThickness
                                        (pGVar3,(float)puVar12,(MethodInfo *)0x0);
                              fVar4 = (float)((int)fVar4 + 1);
                              pbVar13 = puVar12 + 4;
                              puVar12 = puVar14;
                            }
                            bVar15 = UniversalGizmoLookAndFeel3D_IsMvPositiveSliderVisible
                                              ((UniversalGizmoLookAndFeel3D *)lookAndFeel,0,
                                               (MethodInfo *)0x0);
                            pBVar16 = (this->fields)._rtAxesVis;
                            if (pBVar16 != (Boolean__Array *)0x0) {
                              if (pBVar16->max_length == 0) goto code_?;
                              pBVar16->vector[0] = bVar15;
                              bVar15 = UniversalGizmoLookAndFeel3D_IsMvPositiveSliderVisible
                                                ((UniversalGizmoLookAndFeel3D *)lookAndFeel,1,
                                                 (MethodInfo *)0x0);
                              pBVar16 = (this->fields)._rtAxesVis;
                              if (pBVar16 != (Boolean__Array *)0x0) {
                                if (pBVar16->max_length < 2) goto code_?;
                                pBVar16->vector[1] = bVar15;
                                bVar15 = UniversalGizmoLookAndFeel3D_IsMvPositiveSliderVisible
                                                  ((UniversalGizmoLookAndFeel3D *)lookAndFeel,2,
                                                   (MethodInfo *)0x0);
                                pBVar16 = (this->fields)._rtAxesVis;
                                if (pBVar16 != (Boolean__Array *)0x0) {
                                  if (pBVar16->max_length < 3) goto code_?;
                                  pBVar16->vector[2] = bVar15;
                                  pCVar1 = RotationGizmoLookAndFeel3D::
                                            RotationGizmoLookAndFeel3D_get_CamLookSliderBorderColor
                                                      ((Color *)&stack0xffffffdc,lookAndFeel,
                                                       (MethodInfo *)0x0);
                                  pGVar17 = (this->fields)._rtCamLookSliderLookAndFeel;
                                  fVar4 = pCVar1->g;
                                  fVar5 = pCVar1->b;
                                  fVar6 = pCVar1->a;
                                  if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                    (pGVar17->fields)._borderColor.r = pCVar1->r;
                                    (pGVar17->fields)._borderColor.g = fVar4;
                                    (pGVar17->fields)._borderColor.b = fVar5;
                                    (pGVar17->fields)._borderColor.a = fVar6;
                                    pCVar1 = RotationGizmoLookAndFeel3D::
                                              RotationGizmoLookAndFeel3D_get_CamLookSliderHoveredBorderColor
                                                        ((Color *)&stack0xffffffdc,lookAndFeel,
                                                         (MethodInfo *)0x0);
                                    pGVar17 = (this->fields)._rtCamLookSliderLookAndFeel;
                                    fVar4 = pCVar1->g;
                                    fVar5 = pCVar1->b;
                                    fVar6 = pCVar1->a;
                                    if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                      (pGVar17->fields)._hoveredBorderColor.r = pCVar1->r;
                                      (pGVar17->fields)._hoveredBorderColor.g = fVar4;
                                      (pGVar17->fields)._hoveredBorderColor.b = fVar5;
                                      (pGVar17->fields)._hoveredBorderColor.a = fVar6;
                                      fVar4 = RotationGizmoLookAndFeel3D::
                                               RotationGizmoLookAndFeel3D_get_CamLookSliderPolyBorderThickness
                                                         (lookAndFeel,(MethodInfo *)0x0);
                                      pGVar17 = (this->fields)._rtCamLookSliderLookAndFeel;
                                      if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                        GizmoPlaneSlider2DLookAndFeel::
                                        GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness
                                                  (pGVar17,fVar4,(MethodInfo *)0x0);
                                        GVar18 = RotationGizmoLookAndFeel3D::
                                                 RotationGizmoLookAndFeel3D_get_CamLookSliderPolyBorderType
                                                           (lookAndFeel,(MethodInfo *)0x0);
                                        pGVar17 = (this->fields)._rtCamLookSliderLookAndFeel;
                                        if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                          (pGVar17->fields)._polygonBorderType = GVar18;
                                          fVar4 = (lookAndFeel->fields)._camLookSliderRadiusOffset;
                                          fVar5 = 0.0;
                                          if (0.0 <= fVar4) {
                                            fVar5 = fVar4;
                                          }
                                          (this->fields)._rtCamLookSliderRadiusOffset = fVar5;
                                          (this->fields)._isRtCamLookSliderVisible =
                                               (lookAndFeel->fields)._isCamLookSliderVisible;
                                          pCVar1 = RotationGizmoLookAndFeel3D::
                                                    RotationGizmoLookAndFeel3D_get_HoveredColor
                                                              ((Color *)&stack0xffffffdc,lookAndFeel
                                                               ,(MethodInfo *)0x0);
                                          UniversalGizmoLookAndFeel3D_SetRtHoveredColor
                                                    (this,*pCVar1,(MethodInfo *)0x0);
                                          pCVar1 = RotationGizmoLookAndFeel3D::
                                                                                                        
                                                  RotationGizmoLookAndFeel3D_get_HoveredMidCapColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                          pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                          fVar4 = pCVar1->g;
                                          fVar5 = pCVar1->b;
                                          fVar6 = pCVar1->a;
                                          if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                            (pGVar19->fields)._hoveredColor.r = pCVar1->r;
                                            (pGVar19->fields)._hoveredColor.g = fVar4;
                                            (pGVar19->fields)._hoveredColor.b = fVar5;
                                            (pGVar19->fields)._hoveredColor.a = fVar6;
                                            pCVar1 = RotationGizmoLookAndFeel3D::
                                                                                                            
                                                  RotationGizmoLookAndFeel3D_get_MidCapBorderColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                            pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                            fVar4 = pCVar1->g;
                                            fVar5 = pCVar1->b;
                                            fVar6 = pCVar1->a;
                                            if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                              (pGVar19->fields)._sphereBorderColor.r = pCVar1->r;
                                              (pGVar19->fields)._sphereBorderColor.g = fVar4;
                                              (pGVar19->fields)._sphereBorderColor.b = fVar5;
                                              (pGVar19->fields)._sphereBorderColor.a = fVar6;
                                              bVar15 = RotationGizmoLookAndFeel3D::
                                                                                                            
                                                  RotationGizmoLookAndFeel3D_get_IsMidCapBorderVisible
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                              pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                              if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                                (pGVar19->fields)._isSphereBorderVisible = bVar15;
                                                pCVar1 = RotationGizmoLookAndFeel3D::
                                                          RotationGizmoLookAndFeel3D_get_MidCapColor
                                                                    ((Color *)&stack0xffffffdc,
                                                                     lookAndFeel,(MethodInfo *)0x0);
                                                pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                                fVar4 = pCVar1->g;
                                                fVar5 = pCVar1->b;
                                                fVar6 = pCVar1->a;
                                                if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                                  (pGVar19->fields)._color.r = pCVar1->r;
                                                  (pGVar19->fields)._color.g = fVar4;
                                                  (pGVar19->fields)._color.b = fVar5;
                                                  (pGVar19->fields)._color.a = fVar6;
                                                  (this->fields)._isRtMidCapVisible =
                                                       (lookAndFeel->fields)._isMidCapVisible;
                                                  numSlices = RotationGizmoLookAndFeel3D::
                                                                                                                            
                                                  RotationGizmoLookAndFeel3D_get_NumAxisTorusWireAxialSlices
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  UniversalGizmoLookAndFeel3D_SetRtNumAxisTorusWireAxialSlices
                                                            (this,numSlices,(MethodInfo *)0x0);
                                                  fVar4 = RotationGizmoLookAndFeel3D::
                                                           RotationGizmoLookAndFeel3D_get_Radius
                                                                     (lookAndFeel,(MethodInfo *)0x0)
                                                  ;
                                                  UniversalGizmoLookAndFeel3D_SetRtRadius
                                                            (this,fVar4,(MethodInfo *)0x0);
                                                  pCVar1 = RotationGizmoLookAndFeel3D::
                                                                                                                        
                                                  RotationGizmoLookAndFeel3D_get_RotationArcBorderColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar7 = 0;
                                                  fVar4 = pCVar1->r;
                                                  fVar5 = pCVar1->g;
                                                  fVar6 = pCVar1->b;
                                                  fVar20 = pCVar1->a;
                                                  if (pGVar2 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar2->vector;
                                                    for (; (int)uVar7 < (int)pGVar2->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if (pGVar2->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar21 = ((*ppGVar8)->fields).
                                                                   _rotationArcLookAndFeel,
                                                         pGVar21 == (GizmoRotationArc3DLookAndFeel *)
                                                                   0x0)) goto code_?;
                                                      ppGVar8 = ppGVar8 + 1;
                                                      (pGVar21->fields)._borderColor.r = fVar4;
                                                      (pGVar21->fields)._borderColor.g = fVar5;
                                                      (pGVar21->fields)._borderColor.b = fVar6;
                                                      (pGVar21->fields)._borderColor.a = fVar20;
                                                    }
                                                    pGVar17 = (this->fields).
                                                             _rtCamLookSliderLookAndFeel;
                                                    if ((pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)
                                                                   0x0) &&
                                                       (pGVar22 = (pGVar17->fields).
                                                                 _rotationArcLookAndFeel,
                                                       pGVar22 != (GizmoRotationArc2DLookAndFeel *)
                                                                 0x0)) {
                                                      (pGVar22->fields)._borderColor.r = fVar4;
                                                      (pGVar22->fields)._borderColor.g = fVar5;
                                                      (pGVar22->fields)._borderColor.b = fVar6;
                                                      (pGVar22->fields)._borderColor.a = fVar20;
                                                      pCVar1 = RotationGizmoLookAndFeel3D::
                                                                                                                                
                                                  RotationGizmoLookAndFeel3D_get_RotationArcColor
                                                            ((Color *)&stack0xffffffdc,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar7 = 0;
                                                  fVar4 = pCVar1->r;
                                                  fVar5 = pCVar1->g;
                                                  fVar6 = pCVar1->b;
                                                  fVar20 = pCVar1->a;
                                                  if (pGVar2 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar2->vector;
                                                    for (; (int)uVar7 < (int)pGVar2->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if (pGVar2->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar21 = ((*ppGVar8)->fields).
                                                                   _rotationArcLookAndFeel,
                                                         pGVar21 == (GizmoRotationArc3DLookAndFeel *)
                                                                   0x0)) goto code_?;
                                                      ppGVar8 = ppGVar8 + 1;
                                                      (pGVar21->fields)._color.r = fVar4;
                                                      (pGVar21->fields)._color.g = fVar5;
                                                      (pGVar21->fields)._color.b = fVar6;
                                                      (pGVar21->fields)._color.a = fVar20;
                                                    }
                                                    pGVar17 = (this->fields).
                                                             _rtCamLookSliderLookAndFeel;
                                                    if ((pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)
                                                                   0x0) &&
                                                       (pGVar22 = (pGVar17->fields).
                                                                 _rotationArcLookAndFeel,
                                                       pGVar22 != (GizmoRotationArc2DLookAndFeel *)
                                                                 0x0)) {
                                                      (pGVar22->fields)._color.r = fVar4;
                                                      (pGVar22->fields)._color.g = fVar5;
                                                      (pGVar22->fields)._color.b = fVar6;
                                                      (pGVar22->fields)._color.a = fVar20;
                                                      bVar15 = RotationGizmoLookAndFeel3D::
                                                                                                                            
                                                  RotationGizmoLookAndFeel3D_get_IsRotationArcVisible
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar7 = 0;
                                                  if (pGVar2 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar2->vector;
                                                    for (; (int)uVar7 < (int)pGVar2->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if (pGVar2->max_length <= uVar7)
                                                      goto code_?;
                                                      if (*ppGVar8 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar8)->fields)._isRotationArcVisible =
                                                           bVar15;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar17 = (this->fields).
                                                             _rtCamLookSliderLookAndFeel;
                                                    if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)
                                                                  0x0) {
                                                      (pGVar17->fields)._isRotationArcVisible = bVar15
                                                      ;
                                                      pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)
                                                                UniversalGizmoSettings2D::
                                                                                                                                
                                                  UniversalGizmoSettings2D_get_MvXSnapStep
                                                            ((UniversalGizmoSettings2D *)lookAndFeel
                                                             ,(MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar7 = 0;
                                                  if (pGVar2 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar2->vector;
                                                    for (; (int)uVar7 < (int)pGVar2->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if (pGVar2->max_length <= uVar7)
                                                      goto code_?;
                                                      pGVar9 = *ppGVar8;
                                                      if (pGVar9 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      pGVar2 = (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)
                                                  &UNK_?;
                                                  Sphere::Sphere_set_Radius
                                                            ((Sphere *)pGVar9,(float)pGVar3,
                                                             (MethodInfo *)0x0);
                                                  ppGVar8 = (GizmoPlaneSlider3DLookAndFeel **)
                                                             &pGVar3->monitor;
                                                  pGVar3 = pGVar9;
                                                  }
                                                  pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                                  if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                                    GizmoPlaneSlider3DSettings::
                                                    GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                                                              ((GizmoPlaneSlider3DSettings *)pGVar19,
                                                               (float)pGVar3,(MethodInfo *)0x0);
                                                    pSVar23 = System.Xml.dll::System::Xml::
                                                              XsdCachingReader::
                                                              XsdCachingReader_get_Prefix
                                                                        ((XsdCachingReader *)
                                                                         lookAndFeel,
                                                                         (MethodInfo *)0x0);
                                                    pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                    uVar7 = 0;
                                                    if (pGVar2 !=
                                                        (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                                                    {
                                                      ppGVar8 = pGVar2->vector;
                                                      for (; (int)uVar7 < (int)pGVar2->max_length;
                                                          uVar7 = uVar7 + 1) {
                                                        if (pGVar2->max_length <= uVar7)
                                                        goto code_?;
                                                        pGVar3 = *ppGVar8;
                                                        if (pGVar3 ==
                                                            (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                        goto code_?;
                                                        (pGVar3->fields)._shadeMode =
                                                             (int32_t)pSVar23;
                                                        ppGVar8 = ppGVar8 + 1;
                                                        (pGVar3->fields)._borderShadeMode =
                                                             (int32_t)pSVar23;
                                                      }
                                                      pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                                      if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        (pGVar19->fields)._shadeMode =
                                                             (int32_t)pSVar23;
                                                        bVar15 = RotationGizmoLookAndFeel3D::
                                                                                                                                
                                                  RotationGizmoLookAndFeel3D_get_UseShortestRotationArc
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar7 = 0;
                                                  if (pGVar2 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar2->vector;
                                                    for (; (int)uVar7 < (int)pGVar2->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if (pGVar2->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar21 = ((*ppGVar8)->fields).
                                                                   _rotationArcLookAndFeel,
                                                         pGVar21 == (GizmoRotationArc3DLookAndFeel *)
                                                                   0x0)) goto code_?;
                                                      (pGVar21->fields)._useShortestRotation = bVar15;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar17 = (this->fields).
                                                             _rtCamLookSliderLookAndFeel;
                                                    if ((pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)
                                                                   0x0) &&
                                                       (pGVar22 = (pGVar17->fields).
                                                                 _rotationArcLookAndFeel,
                                                       pGVar22 != (GizmoRotationArc2DLookAndFeel *)
                                                                 0x0)) {
                                                      (pGVar22->fields)._useShortestRotation = bVar15;
                                                      bVar15 = RotationGizmoLookAndFeel3D::
                                                                                                                            
                                                  RotationGizmoLookAndFeel3D_get_UseZoomFactor
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar7 = 0;
                                                  if (pGVar2 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar2->vector;
                                                    for (; (int)uVar7 < (int)pGVar2->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if (pGVar2->max_length <= uVar7)
                                                      goto code_?;
                                                      if (*ppGVar8 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar8)->fields)._useZoomFactor = bVar15;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar19 = (this->fields)._rtMidCapLookAndFeel;
                                                    if (pGVar19 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      (pGVar19->fields)._useZoomFactor = bVar15;
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
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Inherit(ScaleGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_Inherit_2
               (UniversalGizmoLookAndFeel3D *this,ScaleGizmoLookAndFeel3D *lookAndFeel,
               MethodInfo *method)

{
  if ((lookAndFeel != (ScaleGizmoLookAndFeel3D *)0x0) &&
     (pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel,
     pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0)) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      UniversalGizmoLookAndFeel3D_SetScAxisColor
                (this,0,(pGVar1->vector[0]->fields)._color,(MethodInfo *)0x0);
      pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length < 2) goto code_?;
        if (pGVar1->vector[1] != (GizmoLineSlider3DLookAndFeel *)0x0) {
          UniversalGizmoLookAndFeel3D_SetScAxisColor
                    (this,1,(pGVar1->vector[1]->fields)._color,(MethodInfo *)0x0);
          pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length < 3) goto code_?;
            if (pGVar1->vector[2] != (GizmoLineSlider3DLookAndFeel *)0x0) {
              UniversalGizmoLookAndFeel3D_SetScAxisColor
                        (this,2,(pGVar1->vector[2]->fields)._color,(MethodInfo *)0x0);
              pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if (pGVar1->max_length == 0) goto code_?;
                if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
                  fVar2 = (pGVar1->vector[0]->fields)._boxDepth;
                  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
                  uVar3 = 0;
                  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                    ppGVar4 = pGVar1->vector;
                    for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
                      if (pGVar1->max_length <= uVar3) goto code_?;
                      if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar4 ==
                          (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar4,fVar2,(MethodInfo *)0x0
                                );
                      ppGVar4 = ppGVar4 + 1;
                    }
                    if (iRam_? != 0) {
                      if (*(int *)(iRam_? + 0xc) == 0) goto code_?;
                      if (*(int *)(iRam_? + 0x10) != 0) {
                        uVar3 = 0;
                        fVar2 = *(float *)(*(int *)(iRam_? + 0x10) + 0x20);
                        pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
                        if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                          ppGVar4 = pGVar1->vector;
                          for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
                            if (pGVar1->max_length <= uVar3) goto code_?;
                            if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar4 ==
                                (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                            GizmoPlaneSlider3DLookAndFeel::
                            GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                                      ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar4,fVar2,
                                       (MethodInfo *)0x0);
                            ppGVar4 = ppGVar4 + 1;
                          }
                          if (iRam_? != 0) {
                            if (*(int *)(iRam_? + 0xc) == 0) goto code_?;
                            if (*(int *)(iRam_? + 0x10) != 0) {
                              fVar2 = *(float *)(*(int *)(iRam_? + 0x10) + 0x28);
                              pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
                              uVar3 = 0;
                              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                ppGVar4 = pGVar1->vector;
                                for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
                                  if (pGVar1->max_length <= uVar3) goto code_?;
                                  if (*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0)
                                  goto code_?;
                                  RotationGizmoLookAndFeel3D::
                                  RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
                                            ((RotationGizmoLookAndFeel3D *)*ppGVar4,fVar2,
                                             (MethodInfo *)0x0);
                                  ppGVar4 = ppGVar4 + 1;
                                }
                                if (iRam_? != 0) {
                                  if (*(int *)(iRam_? + 0xc) == 0) goto code_?;
                                  if (*(int *)(iRam_? + 0x10) != 0) {
                                    UniversalGizmoLookAndFeel3D_SetScDblSliderFillAlpha
                                              (this,*(float *)(*(int *)(iRam_? + 0x10) + 0x50)
                                               ,(MethodInfo *)0x0);
                                    if (iRam_? != 0) {
                                      if (*(int *)(iRam_? + 0xc) == 0) goto code_?;
                                      if (*(int *)(iRam_? + 0x10) != 0) {
                                        UniversalGizmoLookAndFeel3D_SetScDblSliderSize
                                                  (this,*(float *)(*(int *)(iRam_? + 0x10) +
                                                                  0x1c),(MethodInfo *)0x0);
                                        if (iRam_? != 0) {
                                          if (*(int *)(iRam_? + 0xc) == 0)
                                          goto code_?;
                                          pBVar5 = (this->fields)._scDblSliderVis;
                                          if (pBVar5 != (Boolean__Array *)0x0) {
                                            if (pBVar5->max_length == 0) goto code_?;
                                            pBVar5->vector[0] =
                                                 *(char *)(iRam_? + 0x10) != '\0';
                                            if (iRam_? != 0) {
                                              if (*(uint *)(iRam_? + 0xc) < 2)
                                              goto code_?;
                                              pBVar5 = (this->fields)._scDblSliderVis;
                                              if (pBVar5 != (Boolean__Array *)0x0) {
                                                if (pBVar5->max_length < 2) goto code_?;
                                                pBVar5->vector[1] =
                                                     *(char *)(iRam_? + 0x11) != '\0';
                                                if (iRam_? != 0) {
                                                  if (*(uint *)(iRam_? + 0xc) < 3)
                                                  goto code_?;
                                                  pBVar5 = (this->fields)._scDblSliderVis;
                                                  if (pBVar5 != (Boolean__Array *)0x0) {
                                                    if (pBVar5->max_length < 3)
                                                    goto code_?;
                                                    pBVar5->vector[2] =
                                                         *(char *)(iRam_? + 0x12) != '\0';
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if (*(int *)(iRam_? + 0x10) != 0) {
                                                                                                                
                                                  UniversalGizmoLookAndFeel3D_SetScHoveredColor
                                                            (this,*(Color *)(*(int *)(iRam_? +
                                                                                     0x10) + 0x44),
                                                             (MethodInfo *)0x0);
                                                  if ((iRam_? != 0) &&
                                                     (pGVar6 = (this->fields)._scMidCapLookAndFeel,
                                                     pGVar6 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                    GizmoCap3DLookAndFeel::
                                                    GizmoCap3DLookAndFeel_set_BoxDepth
                                                              (pGVar6,*(float *)(iRam_? + 0x38
                                                                                ),(MethodInfo *)0x0)
                                                    ;
                                                    if ((iRam_? != 0) &&
                                                       (pGVar6 = (this->fields)._scMidCapLookAndFeel
                                                       , pGVar6 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_BoxHeight
                                                                (pGVar6,*(float *)(iRam_? +
                                                                                  0x34),
                                                                 (MethodInfo *)0x0);
                                                      if ((iRam_? != 0) &&
                                                         (pGVar6 = (this->fields).
                                                                   _scMidCapLookAndFeel,
                                                         pGVar6 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                        GizmoCap3DLookAndFeel::
                                                        GizmoCap3DLookAndFeel_set_BoxWidth
                                                                  (pGVar6,*(float *)(iRam_? +
                                                                                    0x30),
                                                                   (MethodInfo *)0x0);
                                                        if (iRam_? != 0) {
                                                          pGVar6 = (this->fields).
                                                                   _scMidCapLookAndFeel;
                                                          fVar2 = *(float *)(iRam_? + 0x68);
                                                          fVar7 = *(float *)(iRam_? + 0x6c);
                                                          fVar8 = *(float *)(iRam_? + 0x70);
                                                          if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0
                                                             ) {
                                                            (pGVar6->fields)._color.r =
                                                                 *(float *)(iRam_? + 100);
                                                            (pGVar6->fields)._color.g = fVar2;
                                                            (pGVar6->fields)._color.b = fVar7;
                                                            (pGVar6->fields)._color.a = fVar8;
                                                            if ((iRam_? != 0) &&
                                                               (pGVar6 = (this->fields).
                                                                         _scMidCapLookAndFeel,
                                                               pGVar6 != (GizmoCap3DLookAndFeel *)
                                                                         0x0)) {
                                                              (pGVar6->fields)._fillMode =
                                                                   *(int32_t *)(iRam_? + 0xc);
                                                              if ((iRam_? != 0) &&
                                                                 (pGVar6 = (this->fields).
                                                                           _scMidCapLookAndFeel,
                                                                 pGVar6 != (GizmoCap3DLookAndFeel *)
                                                                           0x0)) {
                                                                (pGVar6->fields)._shadeMode =
                                                                     *(int32_t *)
                                                                      (iRam_? + 0x10);
                                                                if ((iRam_? != 0) &&
                                                                   (pGVar6 = (this->fields).
                                                                             _scMidCapLookAndFeel,
                                                                   pGVar6 != (GizmoCap3DLookAndFeel
                                                                              *)0x0)) {
                                                                  GizmoCap3DLookAndFeel::
                                                                                                                                    
                                                  GizmoCap3DLookAndFeel_set_SphereRadius
                                                            (pGVar6,*(float *)(iRam_? + 0x3c),
                                                             (MethodInfo *)0x0);
                                                  if (iRam_? != 0) {
                                                    iVar9 = *(int *)(iRam_? + 8);
                                                    if ((iVar9 == 2) || (iVar9 == 3)) {
                                                      pGVar6 = (this->fields)._scMidCapLookAndFeel;
                                                      if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      (pGVar6->fields)._capType = iVar9;
                                                    }
                                                    if (iRam_? != 0) {
                                                      fVar2 = *(float *)(iRam_? + 0x14);
                                                      uVar3 = 0;
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    while( true ) {
                                                      if ((int)pGVar1->max_length <= (int)uVar3)
                                                      break;
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      pGVar10 = *ppGVar4;
                                                      if (pGVar10 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      CameraMoveSettings::
                                                      CameraMoveSettings_set_AccelerationRate
                                                                ((CameraMoveSettings *)pGVar10,fVar2
                                                                 ,(MethodInfo *)0x0);
                                                      pGVar6 = (pGVar10->fields)._capLookAndFeel;
                                                      if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                                                            ((GizmoPlaneSlider3DSettings *)pGVar6,
                                                             fVar2,(MethodInfo *)0x0);
                                                  uVar3 = uVar3 + 1;
                                                  ppGVar4 = ppGVar4 + 1;
                                                  }
                                                  uVar3 = 0;
                                                  pGVar11 = (this->fields)._scDblSlidersLookAndFeel;
                                                  if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar12 = pGVar11->vector;
                                                    for (; (int)uVar3 < (int)pGVar11->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar11->max_length <= uVar3)
                                                      goto code_?;
                                                      if (*ppGVar12 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      Sphere::Sphere_set_Radius
                                                                ((Sphere *)*ppGVar12,fVar2,
                                                                 (MethodInfo *)0x0);
                                                      ppGVar12 = ppGVar12 + 1;
                                                    }
                                                    pGVar6 = (this->fields)._scMidCapLookAndFeel;
                                                    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                                                            ((GizmoPlaneSlider3DSettings *)pGVar6,
                                                             fVar2,(MethodInfo *)0x0);
                                                  if ((iRam_? != 0) &&
                                                     (this_00 = (GizmoPlaneSlider3DLookAndFeel *)
                                                                (this->fields).
                                                                _scScaleGuideLookAndFeel,
                                                     this_00 != (GizmoPlaneSlider3DLookAndFeel *)0x0
                                                     )) {
                                                    GizmoPlaneSlider3DLookAndFeel::
                                                                                                        
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusHeight
                                                            (this_00,*(float *)(iRam_? + 0x3c)
                                                             ,(MethodInfo *)0x0);
                                                  if (iRam_? != 0) {
                                                    if (*(int *)(iRam_? + 0xc) == 0)
                                                    goto code_?;
                                                    if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                       (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                 0x10) + 0x54),
                                                       iVar9 != 0)) {
                                                      fVar2 = *(float *)(iVar9 + 0x38);
                                                      uVar3 = 0;
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_BoxDepth
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x34);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_BoxHeight
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x30);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_BoxWidth
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        iVar13 = *(int32_t *)(iVar9 + 0xc);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar6->fields)._fillMode = iVar13;
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        iVar13 = *(int32_t *)(iVar9 + 0x10);
                                                        uVar3 = 0;
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar6->fields)._shadeMode = iVar13;
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                                                                                
                                                  UniversalGizmoLookAndFeel3D_SetScSliderCapType
                                                            (this,*(GizmoCap3DType__Enum *)
                                                                   (iVar9 + 8),(MethodInfo *)0x0);
                                                  if (iRam_? != 0) {
                                                    if (*(int *)(iRam_? + 0xc) == 0)
                                                    goto code_?;
                                                    pBVar5 = (this->fields)._scSglSliderCapVis;
                                                    if (pBVar5 != (Boolean__Array *)0x0) {
                                                      if (pBVar5->max_length == 0)
                                                      goto code_?;
                                                      pBVar5->vector[0] =
                                                           *(char *)(iRam_? + 0x10) != '\0';
                                                      if (iRam_? != 0) {
                                                        if (*(uint *)(iRam_? + 0xc) < 2)
                                                        goto code_?;
                                                        pBVar5 = (this->fields)._scSglSliderCapVis;
                                                        if (pBVar5 != (Boolean__Array *)0x0) {
                                                          if (pBVar5->max_length < 2)
                                                          goto code_?;
                                                          pBVar5->vector[1] =
                                                               *(char *)(iRam_? + 0x11) !=
                                                               '\0';
                                                          if (iRam_? != 0) {
                                                            if (*(uint *)(iRam_? + 0xc) < 3)
                                                            goto code_?;
                                                            pBVar5 = (this->fields).
                                                                     _scSglSliderCapVis;
                                                            if (pBVar5 != (Boolean__Array *)0x0) {
                                                              if (pBVar5->max_length < 3)
                                                              goto code_?;
                                                              pBVar5->vector[2] =
                                                                   *(char *)(iRam_? + 0x12) !=
                                                                   '\0';
                                                              if (iRam_? != 0) {
                                                                if (*(uint *)(iRam_? + 0xc) <
                                                                    4) goto code_?;
                                                                pBVar5 = (this->fields).
                                                                         _scSglSliderCapVis;
                                                                if (pBVar5 != (Boolean__Array *)0x0)
                                                                {
                                                                  if (pBVar5->max_length < 4)
                                                                  goto code_?;
                                                                  pBVar5->vector[3] =
                                                                       *(char *)(iRam_? + 0x13
                                                                                ) != '\0';
                                                                  if (iRam_? != 0) {
                                                                    if (*(uint *)(iRam_? + 0xc
                                                                                 ) < 5)
                                                                    goto code_?;
                                                                    pBVar5 = (this->fields).
                                                                             _scSglSliderCapVis;
                                                                    if (pBVar5 != (Boolean__Array *)
                                                                                  0x0) {
                                                                      if (pBVar5->max_length < 5)
                                                                      goto code_?;
                                                                      pBVar5->vector[4] =
                                                                           *(char *)(iRam_? +
                                                                                    0x14) != '\0';
                                                                      if (iRam_? != 0) {
                                                                        if (*(uint *)(iRam_? +
                                                                                     0xc) < 6)
                                                                        goto code_?;
                                                                        pBVar5 = (this->fields).
                                                                                 _scSglSliderCapVis;
                                                                        if (pBVar5 != (
                                                  Boolean__Array *)0x0) {
                                                    if (pBVar5->max_length < 6)
                                                    goto code_?;
                                                    pBVar5->vector[5] =
                                                         *(char *)(iRam_? + 0x15) != '\0';
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        fVar2 = *(float *)(iVar9 + 0x1c);
                                                        uVar3 = 0;
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_ConeHeight
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x20);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_ConeRadius
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if (*(int *)(iRam_? + 0x10) != 0) {
                                                        iVar13 = *(int32_t *)
                                                                 (*(int *)(iRam_? + 0x10) +
                                                                 0x10);
                                                        uVar3 = 0;
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if (*ppGVar4 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar4)->fields)._fillMode = iVar13;
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if (*(int *)(iRam_? + 0x10) != 0) {
                                                                                                                
                                                  UniversalGizmoLookAndFeel3D_SetScSliderLength
                                                            (this,*(float *)(*(int *)(iRam_? +
                                                                                     0x10) + 0x14),
                                                             (MethodInfo *)0x0);
                                                  if (iRam_? != 0) {
                                                    if (*(int *)(iRam_? + 0xc) == 0)
                                                    goto code_?;
                                                    if (*(int *)(iRam_? + 0x10) != 0) {
                                                      iVar13 = *(int32_t *)
                                                               (*(int *)(iRam_? + 0x10) + 0xc)
                                                      ;
                                                      uVar3 = 0;
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if (*ppGVar4 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar4)->fields)._lineType = iVar13;
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x2c);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_PyramidDepth
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x24);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_PyramidHeight
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x28);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_PyramidWidth
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if (*(int *)(iRam_? + 0x10) != 0) {
                                                        iVar13 = *(int32_t *)
                                                                 (*(int *)(iRam_? + 0x10) + 8)
                                                        ;
                                                        uVar3 = 0;
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if (*ppGVar4 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar4)->fields)._shadeMode = iVar13;
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x3c);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_SphereRadius
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x48);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_TrPrismDepth
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        uVar3 = 0;
                                                        fVar2 = *(float *)(iVar9 + 0x44);
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_TrPrismHeight
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      if ((*(int *)(iRam_? + 0x10) != 0) &&
                                                         (iVar9 = *(int *)(*(int *)(iRam_? +
                                                                                   0x10) + 0x54),
                                                         iVar9 != 0)) {
                                                        fVar2 = *(float *)(iVar9 + 0x40);
                                                        uVar3 = 0;
                                                        pGVar1 = (this->fields).
                                                                 _scSglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      if ((*ppGVar4 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar6 = ((*ppGVar4)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar6 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      GizmoCap3DLookAndFeel::
                                                      GizmoCap3DLookAndFeel_set_TrPrismWidth
                                                                (pGVar6,fVar2,(MethodInfo *)0x0);
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    if (iRam_? != 0) {
                                                      if (*(int *)(iRam_? + 0xc) == 0)
                                                      goto code_?;
                                                      pBVar5 = (this->fields)._scSglSliderVis;
                                                      if (pBVar5 != (Boolean__Array *)0x0) {
                                                        if (pBVar5->max_length == 0)
                                                        goto code_?;
                                                        pBVar5->vector[0] =
                                                             *(char *)(iRam_? + 0x10) != '\0';
                                                        if (iRam_? != 0) {
                                                          if (*(uint *)(iRam_? + 0xc) < 2)
                                                          goto code_?;
                                                          pBVar5 = (this->fields)._scSglSliderVis;
                                                          if (pBVar5 != (Boolean__Array *)0x0) {
                                                            if (pBVar5->max_length < 2)
                                                            goto code_?;
                                                            pBVar5->vector[1] =
                                                                 *(char *)(iRam_? + 0x11) !=
                                                                 '\0';
                                                            if (iRam_? != 0) {
                                                              if (*(uint *)(iRam_? + 0xc) < 3)
                                                              goto code_?;
                                                              pBVar5 = (this->fields).
                                                                       _scSglSliderVis;
                                                              if (pBVar5 != (Boolean__Array *)0x0) {
                                                                if (pBVar5->max_length < 3)
                                                                goto code_?;
                                                                pBVar5->vector[2] =
                                                                     *(char *)(iRam_? + 0x12)
                                                                     != '\0';
                                                                if (iRam_? != 0) {
                                                                  if (*(uint *)(iRam_? + 0xc)
                                                                      < 4) goto code_?;
                                                                  pBVar5 = (this->fields).
                                                                           _scSglSliderVis;
                                                                  if (pBVar5 != (Boolean__Array *)
                                                                                0x0) {
                                                                    if (pBVar5->max_length < 4)
                                                                    goto code_?;
                                                                    pBVar5->vector[3] =
                                                                         *(char *)(iRam_? +
                                                                                  0x13) != '\0';
                                                                    if (iRam_? != 0) {
                                                                      if (*(uint *)(iRam_? +
                                                                                   0xc) < 5)
                                                                      goto code_?;
                                                                      pBVar5 = (this->fields).
                                                                               _scSglSliderVis;
                                                                      if (pBVar5 != (Boolean__Array
                                                                                     *)0x0) {
                                                                        if (pBVar5->max_length < 5)
                                                                        goto code_?;
                                                                        pBVar5->vector[4] =
                                                                             *(char *)(iRam_?
                                                                                      + 0x14) !=
                                                                             '\0';
                                                                        if (iRam_? != 0) {
                                                                          if (*(uint *)(iRam_?
                                                                                       + 0xc) < 6)
                                                                          goto code_?;
                                                                          pBVar5 = (this->fields).
                                                                                   _scSglSliderVis;
                                                                          if (pBVar5 != (
                                                  Boolean__Array *)0x0) {
                                                    if (pBVar5->max_length < 6)
                                                    goto code_?;
                                                    pBVar5->vector[5] =
                                                         *(char *)(iRam_? + 0x15) != '\0';
                                                    if (iRam_? != 0) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar3 = 0;
                                                      bVar14 = *(bool *)(iRam_? + 0x18);
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar4 = pGVar1->vector;
                                                    for (; (int)uVar3 < (int)pGVar1->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar1->max_length <= uVar3)
                                                      goto code_?;
                                                      pGVar10 = *ppGVar4;
                                                      if (pGVar10 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      (pGVar10->fields)._useZoomFactor = bVar14;
                                                      pGVar6 = (pGVar10->fields)._capLookAndFeel;
                                                      if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      (pGVar6->fields)._useZoomFactor = bVar14;
                                                      ppGVar4 = ppGVar4 + 1;
                                                    }
                                                    pGVar11 = (this->fields)._scDblSlidersLookAndFeel
                                                    ;
                                                    uVar3 = 0;
                                                    if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar12 = pGVar11->vector;
                                                    for (; (int)uVar3 < (int)pGVar11->max_length;
                                                        uVar3 = uVar3 + 1) {
                                                      if (pGVar11->max_length <= uVar3)
                                                      goto code_?;
                                                      if (*ppGVar12 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar12)->fields)._useZoomFactor = bVar14;
                                                      ppGVar12 = ppGVar12 + 1;
                                                    }
                                                    pGVar6 = (this->fields)._scMidCapLookAndFeel;
                                                    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      (pGVar6->fields)._useZoomFactor = bVar14;
                                                      pGVar15 = (this->fields).
                                                               _scScaleGuideLookAndFeel;
                                                      if (pGVar15 != (GizmoScaleGuideLookAndFeel *)
                                                                    0x0) {
                                                        (pGVar15->fields)._useZoomFactor = bVar14;
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
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean IsMvDblSliderVisible(PlaneId) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvDblSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (planeId < pBVar2->max_length) {
    return pBVar2->vector[planeId] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
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


/* Boolean IsMvNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
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


/* Boolean IsMvPositiveSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvPositiveSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
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


/* Boolean IsMvSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
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


/* Boolean IsMvVertSnapCapTypeAllowed(GizmoCap2DType) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvVertSnapCapTypeAllowed
               (UniversalGizmoLookAndFeel3D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  if (capType == GizmoCap2DType__Enum_Circle) {
    return 1;
  }
  return capType == GizmoCap2DType__Enum_Quad;
}


/* Boolean IsRtAxisVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsRtAxisVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._rtAxesVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsScDblSliderVisible(PlaneId) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scDblSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (planeId < pBVar2->max_length) {
    return pBVar2->vector[planeId] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsScMidCapTypeAllowed(GizmoCap3DType) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScMidCapTypeAllowed
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  if (capType == GizmoCap3DType__Enum_Box) {
    return 1;
  }
  return capType == GizmoCap3DType__Enum_Sphere;
}


/* Boolean IsScNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderCapVis;
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


/* Boolean IsScNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderVis;
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


/* Boolean IsScPositiveSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsScPositiveSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsScSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderCapVis;
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


/* Boolean IsScSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderVis;
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


/* Void SetMvAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvAxisColor
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      (pGVar2->fields)._color.r = color.r;
      (pGVar2->fields)._color.g = color.g;
      (pGVar2->fields)._color.b = color.b;
      (pGVar2->fields)._color.a = color.a;
      pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar3->fields)._color.r = color.r;
          (pGVar3->fields)._color.g = color.g;
          (pGVar3->fields)._color.b = color.b;
          (pGVar3->fields)._color.a = color.a;
          pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 3U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 3];
            if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar2->fields)._color.r = color.r;
              (pGVar2->fields)._color.g = color.g;
              (pGVar2->fields)._color.b = color.b;
              (pGVar2->fields)._color.a = color.a;
              pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
                    pGVar4 = (this->fields)._mvDblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 2) goto code_?;
                      pGVar5 = pGVar4->vector[1];
                      goto code_?;
                    }
                  }
                  else if (axisIndex == 1) {
                    pGVar4 = (this->fields)._mvDblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 3) goto code_?;
                      pGVar5 = pGVar4->vector[2];
                      goto code_?;
                    }
                  }
                  else if ((axisIndex == 2) &&
                          (pGVar4 = (this->fields)._mvDblSlidersLookAndFeel,
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


/* Void SetMvBoxSliderDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvBoxSliderDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
      goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3,depth,(MethodInfo *)0x0);
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


/* Void SetMvBoxSliderHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvBoxSliderHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
      goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3,height,(MethodInfo *)0x0);
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


/* Void SetMvCylinderSliderRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvCylinderSliderRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
                ((RotationGizmoLookAndFeel3D *)*ppGVar3,radius,(MethodInfo *)0x0);
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


/* Void SetMvDblSliderBorderBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderBoxDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderBorderBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderBoxHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderBorderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderBorderType(GizmoQuad3DBorderType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderType
               (UniversalGizmoLookAndFeel3D *this,GizmoQuad3DBorderType__Enum borderType,
               MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderFillAlpha(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderFillAlpha
               (UniversalGizmoLookAndFeel3D *this,float alpha,MethodInfo *method)

{
  if (alpha < 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = _UNK_?;
    if (alpha <= _UNK_?) goto code_?;
  }
  alpha = fVar1;
code_?:
  uVar2 = 0;
  pGVar3 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar3->vector;
    while( true ) {
      if ((int)pGVar3->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar3->max_length <= uVar2) break;
      pGVar5 = *ppGVar4;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      pCVar6 = ColorEx::ColorEx_KeepAllButAlpha
                         (&CStack_7,(pGVar5->fields)._color,alpha,(MethodInfo *)0x0);
      fVar1 = pCVar6->g;
      fVar8 = pCVar6->b;
      fVar9 = pCVar6->a;
      (pGVar5->fields)._color.r = pCVar6->r;
      (pGVar5->fields)._color.g = fVar1;
      (pGVar5->fields)._color.b = fVar8;
      (pGVar5->fields)._color.a = fVar9;
      pCVar6 = ColorEx::ColorEx_KeepAllButAlpha
                         ((Color *)&stack0xffffffdc,(pGVar5->fields)._hoveredColor,alpha,
                          (MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      fVar1 = pCVar6->g;
      fVar8 = pCVar6->b;
      fVar9 = pCVar6->a;
      ppGVar4 = ppGVar4 + 1;
      (pGVar5->fields)._hoveredColor.r = pCVar6->r;
      (pGVar5->fields)._hoveredColor.g = fVar1;
      (pGVar5->fields)._hoveredColor.b = fVar8;
      (pGVar5->fields)._hoveredColor.a = fVar9;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetMvDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderSize
               (UniversalGizmoLookAndFeel3D *this,float size,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderVisible(PlaneId, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvDblSliderVis;
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


/* Void SetMvHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color hoveredColor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
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
    pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvNegativeSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
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


/* Void SetMvNegativeSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
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


/* Void SetMvPositiveSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvPositiveSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_SetMvScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
      this_01 = (this_00->fields)._capLookAndFeel;
      if (this_01 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)this_01,scale,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    uVar2 = 0;
    pGVar4 = (this->fields)._mvDblSlidersLookAndFeel;
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar5 = pGVar4->vector;
      while( true ) {
        if ((int)pGVar4->max_length <= (int)uVar2) {
          return;
        }
        if (pGVar4->max_length <= uVar2) break;
        if (*ppGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        Sphere::Sphere_set_Radius((Sphere *)*ppGVar5,scale,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppGVar5 = ppGVar5 + 1;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMvSliderBoxCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderBoxCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth(this_00,depth,(MethodInfo *)0x0);
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


/* Void SetMvSliderBoxCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderBoxCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight(this_00,height,(MethodInfo *)0x0);
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


/* Void SetMvSliderBoxCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderBoxCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth(this_00,width,(MethodInfo *)0x0);
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


/* Void SetMvSliderCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap3DLookAndFeel *)0x0))
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


/* Void SetMvSliderCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._shadeMode = shadeMode;
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


/* Void SetMvSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap3DLookAndFeel *)0x0))
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


/* Void SetMvSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
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


/* Void SetMvSliderConeCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderConeCapBaseRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeRadius(this_00,radius,(MethodInfo *)0x0);
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


/* Void SetMvSliderConeCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderConeCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeHeight(this_00,height,(MethodInfo *)0x0);
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


/* Void SetMvSliderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
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


/* Void SetMvSliderLength(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderLength
               (UniversalGizmoLookAndFeel3D *this,float axisLength,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,axisLength,(MethodInfo *)0x0);
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


/* Void SetMvSliderLineType(GizmoLine3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderLineType
               (UniversalGizmoLookAndFeel3D *this,GizmoLine3DType__Enum lineType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
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


/* Void SetMvSliderPyramidCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderPyramidCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidDepth(this_00,depth,(MethodInfo *)0x0)
      ;
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


/* Void SetMvSliderPyramidCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderPyramidCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidHeight
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


/* Void SetMvSliderPyramidCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderPyramidCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidWidth(this_00,width,(MethodInfo *)0x0)
      ;
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


/* Void SetMvSliderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._shadeMode = shadeMode;
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


/* Void SetMvSliderSphereCapRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderSphereCapRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
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


/* Void SetMvSliderTriPrismCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderTriPrismCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismDepth(this_00,depth,(MethodInfo *)0x0)
      ;
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


/* Void SetMvSliderTriPrismCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderTriPrismCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismHeight
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


/* Void SetMvSliderTriPrismCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderTriPrismCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismWidth(this_00,width,(MethodInfo *)0x0)
      ;
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


/* Void SetMvSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
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


/* Void SetMvUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
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
    pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
    uVar1 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      while( true ) {
        if ((int)pGVar6->max_length <= (int)uVar1) {
          return;
        }
        if (pGVar6->max_length <= uVar1) break;
        if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        uVar1 = uVar1 + 1;
        ((*ppGVar7)->fields)._useZoomFactor = useZoomFactor;
        ppGVar7 = ppGVar7 + 1;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetMvVertSnapCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapCircleRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapHoveredBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapQuadHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapQuadWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetMvVertSnapCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((capType == GizmoCap2DType__Enum_Circle) || (capType == GizmoCap2DType__Enum_Quad)) {
    pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Void SetRtAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderColor
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= (uint)axisIndex) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = pGVar2->vector[axisIndex];
    if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      (pGVar5->fields)._borderColor.r = color.r;
      (pGVar5->fields)._borderColor.g = color.g;
      (pGVar5->fields)._borderColor.b = color.b;
      (pGVar5->fields)._borderColor.a = color.a;
      return;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtAxisBorderCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderCullAlphaScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                (*ppGVar3,scale,(MethodInfo *)0x0);
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


/* Void SetRtAxisBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
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


/* Void SetRtAxisBorderType(GizmoCircle3DBorderType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderType
               (UniversalGizmoLookAndFeel3D *this,GizmoCircle3DBorderType__Enum borderType,
               MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._circleBorderType = borderType;
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


/* Void SetRtAxisCylTorusHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisCylTorusHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusHeight
                (*ppGVar3,height,(MethodInfo *)0x0);
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


/* Void SetRtAxisCylTorusWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisCylTorusWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusWidth
                (*ppGVar3,width,(MethodInfo *)0x0);
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


/* Void SetRtAxisTorusThickness(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisTorusThickness
               (UniversalGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderTorusThickness
                (*ppGVar3,thickness,(MethodInfo *)0x0);
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


/* Void SetRtAxisVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._rtAxesVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtCamLookSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
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


/* Void SetRtCamLookSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderHoveredBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
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


/* Void SetRtCamLookSliderPolyBorderThickness(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderPolyBorderThickness
               (UniversalGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  this_00 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (this_00 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness
              (this_00,thickness,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRtCamLookSliderPolyBorderType(GizmoPolygon2DBorderType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderPolyBorderType
               (UniversalGizmoLookAndFeel3D *this,GizmoPolygon2DBorderType__Enum polyBorderType,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._polygonBorderType = polyBorderType;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtCamLookSliderRadiusOffset(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderRadiusOffset
               (UniversalGizmoLookAndFeel3D *this,float offset,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= offset) {
    fVar1 = offset;
  }
  (this->fields)._rtCamLookSliderRadiusOffset = fVar1;
  return;
}


/* Void SetRtHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color hoveredColor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._hoveredColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredColor.a = hoveredColor.a;
      (pGVar4->fields)._hoveredBorderColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredBorderColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredBorderColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredBorderColor.a = hoveredColor.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtHoveredMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtHoveredMidCapColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* Void SetRtMidCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtMidCapBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._sphereBorderColor.r = color.r;
    (pGVar2->fields)._sphereBorderColor.g = color.g;
    (pGVar2->fields)._sphereBorderColor.b = color.b;
    (pGVar2->fields)._sphereBorderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtMidCapBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtMidCapBorderVisible
               (UniversalGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._isSphereBorderVisible = isVisible;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtMidCapColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* Void SetRtNumAxisTorusWireAxialSlices(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtNumAxisTorusWireAxialSlices
               (UniversalGizmoLookAndFeel3D *this,int32_t numSlices,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_NumBorderTorusWireAxialSlices
                (*ppGVar3,numSlices,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
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


/* Void SetRtRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_SetRtRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                (*ppGVar3,radius,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    this_00 = (this->fields)._rtMidCapLookAndFeel;
    if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
                (this_00,radius,(MethodInfo *)0x0);
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


/* Void SetRtRotationArcBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtRotationArcBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar4 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._borderColor.r = color.r;
      (pGVar4->fields)._borderColor.g = color.g;
      (pGVar4->fields)._borderColor.b = color.b;
      (pGVar4->fields)._borderColor.a = color.a;
    }
    pGVar5 = (this->fields)._rtCamLookSliderLookAndFeel;
    if ((pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar5->fields)._rotationArcLookAndFeel,
       pGVar6 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar6->fields)._borderColor.r = color.r;
      (pGVar6->fields)._borderColor.g = color.g;
      (pGVar6->fields)._borderColor.b = color.b;
      (pGVar6->fields)._borderColor.a = color.a;
      return;
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


/* Void SetRtRotationArcColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtRotationArcColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar4 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._color.r = color.r;
      (pGVar4->fields)._color.g = color.g;
      (pGVar4->fields)._color.b = color.b;
      (pGVar4->fields)._color.a = color.a;
    }
    pGVar5 = (this->fields)._rtCamLookSliderLookAndFeel;
    if ((pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar5->fields)._rotationArcLookAndFeel,
       pGVar6 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar6->fields)._color.r = color.r;
      (pGVar6->fields)._color.g = color.g;
      (pGVar6->fields)._color.b = color.b;
      (pGVar6->fields)._color.a = color.a;
      return;
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


/* Void SetRtRotationArcVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtRotationArcVisible
               (UniversalGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar3)->fields)._isRotationArcVisible = isVisible;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar4 = (this->fields)._rtCamLookSliderLookAndFeel;
    if (pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      (pGVar4->fields)._isRotationArcVisible = isVisible;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_SetRtScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      Sphere::Sphere_set_Radius((Sphere *)*ppGVar3,scale,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    this_00 = (this->fields)._rtMidCapLookAndFeel;
    if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)this_00,scale,(MethodInfo *)0x0);
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


/* Void SetRtShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._shadeMode = shadeMode;
      (pGVar4->fields)._borderShadeMode = shadeMode;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar5 = (this->fields)._rtMidCapLookAndFeel;
    if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar5->fields)._shadeMode = shadeMode;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetRtUseShortestRotationArc(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtUseShortestRotationArc
               (UniversalGizmoLookAndFeel3D *this,bool useShortest,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar4 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      (pGVar4->fields)._useShortestRotation = useShortest;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar5 = (this->fields)._rtCamLookSliderLookAndFeel;
    if ((pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar5->fields)._rotationArcLookAndFeel,
       pGVar6 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar6->fields)._useShortestRotation = useShortest;
      return;
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


/* Void SetRtUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar3)->fields)._useZoomFactor = useZoomFactor;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar4 = (this->fields)._rtMidCapLookAndFeel;
    if (pGVar4 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar4->fields)._useZoomFactor = useZoomFactor;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScAxisColor
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      (pGVar2->fields)._color.r = color.r;
      (pGVar2->fields)._color.g = color.g;
      (pGVar2->fields)._color.b = color.b;
      (pGVar2->fields)._color.a = color.a;
      pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar3->fields)._color.r = color.r;
          (pGVar3->fields)._color.g = color.g;
          (pGVar3->fields)._color.b = color.b;
          (pGVar3->fields)._color.a = color.a;
          pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 3U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 3];
            if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar2->fields)._color.r = color.r;
              (pGVar2->fields)._color.g = color.g;
              (pGVar2->fields)._color.b = color.b;
              (pGVar2->fields)._color.a = color.a;
              pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
                    pGVar4 = (this->fields)._scDblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 2) goto code_?;
                      pGVar5 = (this->fields)._scScaleGuideLookAndFeel;
                      pGVar6 = pGVar4->vector[1];
                      if (pGVar5 != (GizmoScaleGuideLookAndFeel *)0x0) {
                        (pGVar5->fields)._xAxisColor.r = color.r;
                        (pGVar5->fields)._xAxisColor.g = color.g;
                        (pGVar5->fields)._xAxisColor.b = color.b;
                        (pGVar5->fields)._xAxisColor.a = color.a;
                        goto code_?;
                      }
                    }
                  }
                  else if (axisIndex == 1) {
                    pGVar4 = (this->fields)._scDblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 3) goto code_?;
                      pGVar5 = (this->fields)._scScaleGuideLookAndFeel;
                      pGVar6 = pGVar4->vector[2];
                      if (pGVar5 != (GizmoScaleGuideLookAndFeel *)0x0) {
                        (pGVar5->fields)._yAxisColor.r = color.r;
                        (pGVar5->fields)._yAxisColor.g = color.g;
                        (pGVar5->fields)._yAxisColor.b = color.b;
                        (pGVar5->fields)._yAxisColor.a = color.a;
                        goto code_?;
                      }
                    }
                  }
                  else if ((axisIndex == 2) &&
                          (pGVar4 = (this->fields)._scDblSlidersLookAndFeel,
                          pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
                    if (pGVar4->max_length == 0) goto code_?;
                    pGVar5 = (this->fields)._scScaleGuideLookAndFeel;
                    pGVar6 = pGVar4->vector[0];
                    if (pGVar5 != (GizmoScaleGuideLookAndFeel *)0x0) {
                      (pGVar5->fields)._zAxisColor.r = color.r;
                      (pGVar5->fields)._zAxisColor.g = color.g;
                      (pGVar5->fields)._zAxisColor.b = color.b;
                      (pGVar5->fields)._zAxisColor.a = color.a;
code_?:
                      if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        pCVar7 = ColorEx::ColorEx_KeepAllButAlpha
                                            (&CStack_8,color,(pGVar6->fields)._color.a,
                                             (MethodInfo *)0x0);
                        fVar9 = pCVar7->g;
                        fVar10 = pCVar7->b;
                        fVar11 = pCVar7->a;
                        (pGVar6->fields)._color.r = pCVar7->r;
                        (pGVar6->fields)._color.g = fVar9;
                        (pGVar6->fields)._color.b = fVar10;
                        (pGVar6->fields)._color.a = fVar11;
                        (pGVar6->fields)._borderColor.r = color.r;
                        (pGVar6->fields)._borderColor.g = color.g;
                        (pGVar6->fields)._borderColor.b = color.b;
                        (pGVar6->fields)._borderColor.a = color.a;
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
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetScBoxSliderDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScBoxSliderDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
      goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3,depth,(MethodInfo *)0x0);
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


/* Void SetScBoxSliderHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScBoxSliderHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
      goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3,height,(MethodInfo *)0x0);
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


/* Void SetScCylinderSliderRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScCylinderSliderRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
                ((RotationGizmoLookAndFeel3D *)*ppGVar3,radius,(MethodInfo *)0x0);
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


/* Void SetScDblSliderFillAlpha(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScDblSliderFillAlpha
               (UniversalGizmoLookAndFeel3D *this,float alpha,MethodInfo *method)

{
  if (alpha < 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = _UNK_?;
    if (alpha <= _UNK_?) goto code_?;
  }
  alpha = fVar1;
code_?:
  uVar2 = 0;
  pGVar3 = (this->fields)._scDblSlidersLookAndFeel;
  if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar3->vector;
    while( true ) {
      if ((int)pGVar3->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar3->max_length <= uVar2) break;
      pGVar5 = *ppGVar4;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      pCVar6 = ColorEx::ColorEx_KeepAllButAlpha
                         (&CStack_7,(pGVar5->fields)._color,alpha,(MethodInfo *)0x0);
      fVar1 = pCVar6->g;
      fVar8 = pCVar6->b;
      fVar9 = pCVar6->a;
      (pGVar5->fields)._color.r = pCVar6->r;
      (pGVar5->fields)._color.g = fVar1;
      (pGVar5->fields)._color.b = fVar8;
      (pGVar5->fields)._color.a = fVar9;
      pCVar6 = ColorEx::ColorEx_KeepAllButAlpha
                         ((Color *)&stack0xffffffdc,(pGVar5->fields)._hoveredColor,alpha,
                          (MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      fVar1 = pCVar6->g;
      fVar8 = pCVar6->b;
      fVar9 = pCVar6->a;
      ppGVar4 = ppGVar4 + 1;
      (pGVar5->fields)._hoveredColor.r = pCVar6->r;
      (pGVar5->fields)._hoveredColor.g = fVar1;
      (pGVar5->fields)._hoveredColor.b = fVar8;
      (pGVar5->fields)._hoveredColor.a = fVar9;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetScDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScDblSliderSize
               (UniversalGizmoLookAndFeel3D *this,float size,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                (this_00,size,(MethodInfo *)0x0);
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                (this_00,size,(MethodInfo *)0x0);
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


/* Void SetScDblSliderVisible(PlaneId, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scDblSliderVis;
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


/* Void SetScHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color hoveredColor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
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
    pGVar6 = (this->fields)._scDblSlidersLookAndFeel;
    uVar1 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGStack_7 = pGVar6->vector;
      for (; (int)uVar1 < (int)pGVar6->max_length; uVar1 = uVar1 + 1) {
        if (pGVar6->max_length <= uVar1) goto code_?;
        pGVar8 = *ppGStack_7;
        if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        fVar9 = (pGVar8->fields)._color.a;
        (pGVar8->fields)._hoveredBorderColor.r = hoveredColor.r;
        (pGVar8->fields)._hoveredBorderColor.g = hoveredColor.g;
        (pGVar8->fields)._hoveredBorderColor.b = hoveredColor.b;
        (pGVar8->fields)._hoveredBorderColor.a = hoveredColor.a;
        pCVar10 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_11,hoveredColor,fVar9,(MethodInfo *)0x0);
        fVar9 = pCVar10->g;
        fVar12 = pCVar10->b;
        fVar13 = pCVar10->a;
        ppGStack_7 = ppGStack_7 + 1;
        (pGVar8->fields)._hoveredColor.r = pCVar10->r;
        (pGVar8->fields)._hoveredColor.g = fVar9;
        (pGVar8->fields)._hoveredColor.b = fVar12;
        (pGVar8->fields)._hoveredColor.a = fVar13;
      }
      pGVar5 = (this->fields)._scMidCapLookAndFeel;
      if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
        (pGVar5->fields)._hoveredColor.r = hoveredColor.r;
        (pGVar5->fields)._hoveredColor.g = hoveredColor.g;
        (pGVar5->fields)._hoveredColor.b = hoveredColor.b;
        (pGVar5->fields)._hoveredColor.a = hoveredColor.a;
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetScMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapBoxDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScMidCapBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapBoxHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScMidCapBoxWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapBoxWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapColor
               (UniversalGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* Void SetScMidCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._fillMode = fillMode;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScMidCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScMidCapSphereRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapSphereRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScMidCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((capType == GizmoCap3DType__Enum_Box) || (capType == GizmoCap3DType__Enum_Sphere)) {
    pGVar2 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScNegativeSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderCapVis;
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


/* Void SetScNegativeSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderVis;
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


/* Void SetScPositiveSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScPositiveSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = isVisible;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_SetScScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
    pGVar5 = (this->fields)._scDblSlidersLookAndFeel;
    if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar6 = pGVar5->vector;
      for (; (int)uVar2 < (int)pGVar5->max_length; uVar2 = uVar2 + 1) {
        if (pGVar5->max_length <= uVar2) goto code_?;
        if (*ppGVar6 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        Sphere::Sphere_set_Radius((Sphere *)*ppGVar6,scale,(MethodInfo *)0x0);
        ppGVar6 = ppGVar6 + 1;
      }
      pGVar4 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScScaleGuideAxisLength(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScScaleGuideAxisLength
               (UniversalGizmoLookAndFeel3D *this,float length,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._scScaleGuideLookAndFeel;
  if (this_00 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusHeight
              (this_00,length,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScScaleGuideVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScScaleGuideVisible
               (UniversalGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  (this->fields)._isScScaleGuideVisible = isVisible;
  return;
}


/* Void SetScSliderBoxCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderBoxCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth(this_00,depth,(MethodInfo *)0x0);
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


/* Void SetScSliderBoxCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderBoxCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight(this_00,height,(MethodInfo *)0x0);
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


/* Void SetScSliderBoxCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderBoxCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth(this_00,width,(MethodInfo *)0x0);
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


/* Void SetScSliderCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap3DLookAndFeel *)0x0))
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


/* Void SetScSliderCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._shadeMode = shadeMode;
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


/* Void SetScSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap3DLookAndFeel *)0x0))
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


/* Void SetScSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderCapVis;
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


/* Void SetScSliderConeCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderConeCapBaseRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeRadius(this_00,radius,(MethodInfo *)0x0);
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


/* Void SetScSliderConeCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderConeCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeHeight(this_00,height,(MethodInfo *)0x0);
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


/* Void SetScSliderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
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


/* Void SetScSliderLength(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderLength
               (UniversalGizmoLookAndFeel3D *this,float axisLength,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,axisLength,(MethodInfo *)0x0);
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


/* Void SetScSliderLineType(GizmoLine3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderLineType
               (UniversalGizmoLookAndFeel3D *this,GizmoLine3DType__Enum lineType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
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


/* Void SetScSliderPyramidCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderPyramidCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidDepth(this_00,depth,(MethodInfo *)0x0)
      ;
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


/* Void SetScSliderPyramidCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderPyramidCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidHeight
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


/* Void SetScSliderPyramidCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderPyramidCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_PyramidWidth(this_00,width,(MethodInfo *)0x0)
      ;
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


/* Void SetScSliderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._shadeMode = shadeMode;
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


/* Void SetScSliderSphereCapRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderSphereCapRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
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


/* Void SetScSliderTriPrismCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderTriPrismCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismDepth(this_00,depth,(MethodInfo *)0x0)
      ;
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


/* Void SetScSliderTriPrismCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderTriPrismCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismHeight
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


/* Void SetScSliderTriPrismCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderTriPrismCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap3DLookAndFeel *)0x0))
      goto code_?;
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_TrPrismWidth(this_00,width,(MethodInfo *)0x0)
      ;
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


/* Void SetScSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scSglSliderVis;
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


/* Void SetScUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
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
    pGVar6 = (this->fields)._scDblSlidersLookAndFeel;
    uVar1 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      for (; (int)uVar1 < (int)pGVar6->max_length; uVar1 = uVar1 + 1) {
        if (pGVar6->max_length <= uVar1) goto code_?;
        if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        ((*ppGVar7)->fields)._useZoomFactor = useZoomFactor;
        ppGVar7 = ppGVar7 + 1;
      }
      pGVar5 = (this->fields)._scMidCapLookAndFeel;
      if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
        (pGVar5->fields)._useZoomFactor = useZoomFactor;
        pGVar8 = (this->fields)._scScaleGuideLookAndFeel;
        if (pGVar8 != (GizmoScaleGuideLookAndFeel *)0x0) {
          (pGVar8->fields)._useZoomFactor = useZoomFactor;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* UniversalGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D__ctor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._mvVertSnapCapLookAndFeel = pGVar1;
  func_?(&(this->fields)._mvVertSnapCapLookAndFeel,pGVar1);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._mvSglSliderVis = pBVar2;
  func_?(&(this->fields)._mvSglSliderVis,pBVar2);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._mvSglSliderCapVis = pBVar2;
  func_?(&(this->fields)._mvSglSliderCapVis,pBVar2);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  (this->fields)._mvDblSliderVis = pBVar2;
  func_?(&(this->fields)._mvDblSliderVis,pBVar2);
  pGVar3 = (GizmoLineSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._mvSglSlidersLookAndFeel = pGVar3;
  func_?(&(this->fields)._mvSglSlidersLookAndFeel,pGVar3);
  pGVar4 = (GizmoPlaneSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel,3);
  (this->fields)._mvDblSlidersLookAndFeel = pGVar4;
  func_?(&(this->fields)._mvDblSlidersLookAndFeel,pGVar4);
  (this->fields)._isRtMidCapVisible = 1;
  pGVar5 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._rtMidCapLookAndFeel = pGVar5;
  func_?(&(this->fields)._rtMidCapLookAndFeel,pGVar5);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  (this->fields)._rtAxesVis = pBVar2;
  func_?(&(this->fields)._rtAxesVis,pBVar2);
  pGVar4 = (GizmoPlaneSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  (this->fields)._rtAxesLookAndFeel = pGVar4;
  func_?(&(this->fields)._rtAxesLookAndFeel,pGVar4);
  (this->fields)._isRtCamLookSliderVisible = 1;
  (this->fields)._rtCamLookSliderRadiusOffset = 0.65;
  pGVar6 = (GizmoPlaneSlider2DLookAndFeel *)
            func_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar6,(MethodInfo *)0x0);
  (this->fields)._rtCamLookSliderLookAndFeel = pGVar6;
  func_?(&(this->fields)._rtCamLookSliderLookAndFeel,pGVar6);
  pGVar5 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._scMidCapLookAndFeel = pGVar5;
  func_?(&(this->fields)._scMidCapLookAndFeel,pGVar5);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._scSglSliderVis = pBVar2;
  func_?();
  pBVar2 = (Boolean__Array *)func_?();
  (this->fields)._scSglSliderCapVis = pBVar2;
  func_?(&(this->fields)._scSglSliderCapVis);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  (this->fields)._scDblSliderVis = pBVar2;
  func_?(&(this->fields)._scDblSliderVis,pBVar2);
  (this->fields)._isScMidCapVisible = 1;
  this_01 = (GizmoScaleGuideLookAndFeel *)func_?(TypeInfo__RTG__GizmoScaleGuideLookAndFeel)
  ;
  GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._scScaleGuideLookAndFeel = this_01;
  func_?(&(this->fields)._scScaleGuideLookAndFeel,this_01);
  (this->fields)._isScScaleGuideVisible = 1;
  pGVar3 = (GizmoLineSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._scSglSlidersLookAndFeel = pGVar3;
  func_?();
  pGVar4 = (GizmoPlaneSlider3DLookAndFeel__Array *)func_?();
  (this->fields)._scDblSlidersLookAndFeel = pGVar4;
  func_?();
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  puVar7 = (undefined1 *)0x0;
  pGVar3 = (this->fields)._mvSglSlidersLookAndFeel;
  while (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar3->max_length <= (int)puVar7) {
      pGVar4 = (this_00->fields)._mvDblSlidersLookAndFeel;
      uVar8 = 0;
      if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
      break;
    }
    pGVar3 = (this_00->fields)._mvSglSlidersLookAndFeel;
    this = (UniversalGizmoLookAndFeel3D *)&UNK_?;
    this_02 = (UniversalGizmoLookAndFeel3D *)func_?();
    GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor
              ((GizmoLineSlider3DLookAndFeel *)this_02,(MethodInfo *)0x0);
    if (pGVar3 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
    if ((this_02 != (UniversalGizmoLookAndFeel3D *)0x0) &&
       (iVar9 = func_?(), this = this_02, iVar9 == 0)) goto code_?;
    if ((UniversalGizmoLookAndFeel3D *)pGVar3->max_length <= this) goto code_?;
    pGVar3->vector[(int)this] = (GizmoLineSlider3DLookAndFeel *)this_02;
    func_?();
    puVar7 = (undefined1 *)((int)&this->klass + 1);
    pGVar3 = (this_00->fields)._mvSglSlidersLookAndFeel;
  }
  goto code_?;
  while( true ) {
    pGVar4 = (this_00->fields)._mvDblSlidersLookAndFeel;
    pGVar10 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar10,(MethodInfo *)0x0);
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (iVar9 = func_?(), iVar9 == 0)) goto code_?;
    if (pGVar4->max_length <= uVar8) goto code_?;
    pGVar4->vector[uVar8] = pGVar10;
    func_?();
    pGVar4 = (this_00->fields)._mvDblSlidersLookAndFeel;
    uVar8 = uVar8 + 1;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar4->max_length <= (int)uVar8) {
      this = (UniversalGizmoLookAndFeel3D *)(this_00->fields)._mvSglSlidersLookAndFeel;
      uVar8 = 0;
      if ((GizmoLineSlider3DLookAndFeel__Array *)this != (GizmoLineSlider3DLookAndFeel__Array *)0x0)
      {
        ppGVar11 = ((GizmoLineSlider3DLookAndFeel__Array *)this)->vector;
        goto code_?;
      }
      break;
    }
  }
  goto code_?;
code_?:
  if ((int)((GizmoLineSlider3DLookAndFeel__Array *)this)->max_length <= (int)uVar8)
  goto code_?;
  if (((GizmoLineSlider3DLookAndFeel__Array *)this)->max_length <= uVar8) goto code_?;
  if (*ppGVar11 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
  this = (UniversalGizmoLookAndFeel3D *)0x40b00000;
  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
            ((GizmoPlaneSlider3DSettings *)*ppGVar11,5.5,(MethodInfo *)0x0);
  uVar8 = uVar8 + 1;
  ppGVar11 = ppGVar11 + 1;
  goto code_?;
code_?:
  pCVar12 = RTSystemValues::RTSystemValues_get_XAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetMvAxisColor(this_00,0,*pCVar12,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_YAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetMvAxisColor(this_00,1,*pCVar12,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_ZAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetMvAxisColor(this_00,2,*pCVar12,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetMvHoveredColor(this_00,*pCVar12,(MethodInfo *)0x0);
  fVar13 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetMvDblSliderFillAlpha(this_00,fVar13,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetMvDblSliderSize(this_00,1.5,(MethodInfo *)0x0);
  pBVar2 = (this_00->fields)._mvDblSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
  if (pBVar2->max_length != 0) {
    pBVar2->vector[0] = 1;
    pBVar2 = (this_00->fields)._mvDblSliderVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (1 < pBVar2->max_length) {
      pBVar2->vector[1] = 1;
      pBVar2 = (this_00->fields)._mvDblSliderVis;
      if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
      if (2 < pBVar2->max_length) {
        pBVar2->vector[2] = 1;
        pBVar2 = (this_00->fields)._mvSglSliderVis;
        if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
        if (pBVar2->max_length != 0) {
          pBVar2->vector[0] = 1;
          pBVar2 = (this_00->fields)._mvSglSliderCapVis;
          if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
          if (pBVar2->max_length != 0) {
            pBVar2->vector[0] = 1;
            pBVar2 = (this_00->fields)._mvSglSliderVis;
            if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
            if (1 < pBVar2->max_length) {
              pBVar2->vector[1] = 1;
              pBVar2 = (this_00->fields)._mvSglSliderCapVis;
              if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
              if (1 < pBVar2->max_length) {
                pBVar2->vector[1] = 1;
                pBVar2 = (this_00->fields)._mvSglSliderVis;
                if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
                if (2 < pBVar2->max_length) {
                  pBVar2->vector[2] = 1;
                  pBVar2 = (this_00->fields)._mvSglSliderCapVis;
                  if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
                  if (2 < pBVar2->max_length) {
                    pBVar2->vector[2] = 1;
                    pGVar1 = (this_00->fields)._mvVertSnapCapLookAndFeel;
                    if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar1->fields)._fillMode = 1;
                      fVar13 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
                      color.g = _UNK_?;
                      color.r = _UNK_?;
                      color.b = _UNK_?;
                      color.a = _UNK_?;
                      pCVar12 = ColorEx::ColorEx_KeepAllButAlpha
                                          ((Color *)&stack0xffffffe8,color,fVar13,(MethodInfo *)0x0)
                      ;
                      pGVar1 = (this_00->fields)._mvVertSnapCapLookAndFeel;
                      fVar13 = pCVar12->g;
                      fVar14 = pCVar12->b;
                      fVar15 = pCVar12->a;
                      if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                        (pGVar1->fields)._color.r = pCVar12->r;
                        (pGVar1->fields)._color.g = fVar13;
                        (pGVar1->fields)._color.b = fVar14;
                        (pGVar1->fields)._color.a = fVar15;
                        fVar15 = _UNK_?;
                        fVar14 = _UNK_?;
                        fVar13 = _UNK_?;
                        pGVar1 = (this_00->fields)._mvVertSnapCapLookAndFeel;
                        if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                          (pGVar1->fields)._borderColor.r = _UNK_?;
                          (pGVar1->fields)._borderColor.g = fVar13;
                          (pGVar1->fields)._borderColor.b = fVar14;
                          (pGVar1->fields)._borderColor.a = fVar15;
                          pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                              ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
                          fVar13 = pCVar12->r;
                          fVar14 = pCVar12->g;
                          fVar15 = pCVar12->b;
                          fVar16 = pCVar12->a;
                          newAlpha = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0)
                          ;
                          color_00.g = fVar14;
                          color_00.r = fVar13;
                          color_00.b = fVar15;
                          color_00.a = fVar16;
                          pCVar12 = ColorEx::ColorEx_KeepAllButAlpha
                                              ((Color *)&stack0xffffffe8,color_00,newAlpha,
                                               (MethodInfo *)0x0);
                          pGVar1 = (this_00->fields)._mvVertSnapCapLookAndFeel;
                          fVar13 = pCVar12->g;
                          fVar14 = pCVar12->b;
                          fVar15 = pCVar12->a;
                          if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                            (pGVar1->fields)._hoveredColor.r = pCVar12->r;
                            (pGVar1->fields)._hoveredColor.g = fVar13;
                            (pGVar1->fields)._hoveredColor.b = fVar14;
                            (pGVar1->fields)._hoveredColor.a = fVar15;
                            pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
                            pGVar1 = (this_00->fields)._mvVertSnapCapLookAndFeel;
                            fVar13 = pCVar12->g;
                            fVar14 = pCVar12->b;
                            fVar15 = pCVar12->a;
                            if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                              (pGVar1->fields)._hoveredBorderColor.r = pCVar12->r;
                              (pGVar1->fields)._hoveredBorderColor.g = fVar13;
                              (pGVar1->fields)._hoveredBorderColor.b = fVar14;
                              (pGVar1->fields)._hoveredBorderColor.a = fVar15;
                              iVar9 = 0;
                              pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
                              while (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                if ((int)pGVar4->max_length <= iVar9) {
                                  pBVar2 = (this_00->fields)._rtAxesVis;
                                  if (pBVar2 != (Boolean__Array *)0x0) {
                                    if (pBVar2->max_length == 0) goto code_?;
                                    pBVar2->vector[0] = 1;
                                    pBVar2 = (this_00->fields)._rtAxesVis;
                                    if (pBVar2 != (Boolean__Array *)0x0) {
                                      if (pBVar2->max_length < 2) goto code_?;
                                      pBVar2->vector[1] = 1;
                                      pBVar2 = (this_00->fields)._rtAxesVis;
                                      if (pBVar2 != (Boolean__Array *)0x0) {
                                        if (pBVar2->max_length < 3) goto code_?;
                                        pBVar2->vector[2] = 1;
                                        pGVar5 = (this_00->fields)._rtMidCapLookAndFeel;
                                        if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
                                          (pGVar5->fields)._capType = 3;
                                          fVar16 = _UNK_?;
                                          fVar15 = _UNK_?;
                                          fVar14 = _UNK_?;
                                          fVar13 = _UNK_?;
                                          pGVar6 = (this_00->fields)._rtCamLookSliderLookAndFeel;
                                          if (pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                            (pGVar6->fields)._planeType = 2;
                                            pGVar5 = (this_00->fields)._rtMidCapLookAndFeel;
                                            if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
                                              (pGVar5->fields)._color.r = fVar13;
                                              (pGVar5->fields)._color.g = fVar14;
                                              (pGVar5->fields)._color.b = fVar15;
                                              (pGVar5->fields)._color.a = fVar16;
                                              pGVar5 = (this_00->fields)._rtMidCapLookAndFeel;
                                              if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
                                                (pGVar5->fields)._hoveredColor.r = fVar13;
                                                (pGVar5->fields)._hoveredColor.g = fVar14;
                                                (pGVar5->fields)._hoveredColor.b = fVar15;
                                                (pGVar5->fields)._hoveredColor.a = fVar16;
                                                pGVar5 = (this_00->fields)._rtMidCapLookAndFeel;
                                                if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
                                                  (pGVar5->fields)._isSphereBorderVisible = 1;
                                                  fVar15 = _UNK_?;
                                                  fVar14 = _UNK_?;
                                                  fVar13 = _UNK_?;
                                                  pGVar5 = (this_00->fields)._rtMidCapLookAndFeel;
                                                  if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
                                                    (pGVar5->fields)._sphereBorderColor.r =
                                                         _UNK_?;
                                                    (pGVar5->fields)._sphereBorderColor.g = fVar13;
                                                    (pGVar5->fields)._sphereBorderColor.b = fVar14;
                                                    (pGVar5->fields)._sphereBorderColor.a = fVar15;
                                                    this = (UniversalGizmoLookAndFeel3D *)
                                                           (this_00->fields)._rtAxesLookAndFeel;
                                                    uVar8 = 0;
                                                    if ((GizmoPlaneSlider3DLookAndFeel__Array *)this
                                                        != (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                           0x0) {
                                                      ppGVar17 = ((
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)this)->
                                                  vector;
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
                                  }
                                  break;
                                }
                                pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
                                this = (UniversalGizmoLookAndFeel3D *)&UNK_?;
                                pGVar18 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
                                pGVar10 = pGVar18;
                                GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor
                                          (pGVar18,(MethodInfo *)0x0);
                                if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
                                if ((pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                                   (iVar9 = func_?(),
                                   this = (UniversalGizmoLookAndFeel3D *)pGVar18, iVar9 == 0))
                                goto code_?;
                                if ((UniversalGizmoLookAndFeel3D *)pGVar4->max_length <= this)
                                goto code_?;
                                *(GizmoPlaneSlider3DLookAndFeel **)
                                 ((int)((GizmoPlaneSlider3DLookAndFeel__Array *)
                                       (pGVar4->vector + -4))->vector +
                                 (int)&pGVar10[-1].fields._raTriangleBorderType) = pGVar18;
                                uVar8 = (int)((GizmoPlaneSlider3DLookAndFeel__Array *)
                                              (pGVar4->vector + -4))->vector +
                                         (int)&pGVar10[-1].fields._raTriangleBorderType;
                                func_?();
                                pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
                                if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
                                if (pGVar4->max_length <= uVar8) goto code_?;
                                iVar19 = *(int *)((int)((GizmoPlaneSlider3DLookAndFeel__Array *)
                                                      (pGVar4->vector + -4))->vector +
                                                (int)&pGVar10[-1].fields._raTriangleBorderType);
                                if (iVar19 == 0) break;
                                iVar9 = uVar8 + 1;
                                *(undefined4 *)(iVar19 + 8) = 2;
                                pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
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
  goto code_?;
code_?:
  if ((int)((GizmoPlaneSlider3DLookAndFeel__Array *)this)->max_length <= (int)uVar8)
  goto code_?;
  if (((GizmoPlaneSlider3DLookAndFeel__Array *)this)->max_length <= uVar8) goto code_?;
  if (*ppGVar17 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
  this = (UniversalGizmoLookAndFeel3D *)0x40d00000;
  GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
            (*ppGVar17,6.5,(MethodInfo *)0x0);
  uVar8 = uVar8 + 1;
  ppGVar17 = ppGVar17 + 1;
  goto code_?;
code_?:
  pGVar5 = (this_00->fields)._rtMidCapLookAndFeel;
  if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius(pGVar5,6.5,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_XAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
  if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
  if (pGVar4->max_length != 0) {
    pGVar10 = pGVar4->vector[0];
    fVar13 = pCVar12->g;
    fVar14 = pCVar12->b;
    fVar15 = pCVar12->a;
    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    (pGVar10->fields)._borderColor.r = pCVar12->r;
    (pGVar10->fields)._borderColor.g = fVar13;
    (pGVar10->fields)._borderColor.b = fVar14;
    (pGVar10->fields)._borderColor.a = fVar15;
    pCVar12 = RTSystemValues::RTSystemValues_get_YAxisColor
                        ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if (1 < pGVar4->max_length) {
      pGVar10 = pGVar4->vector[1];
      fVar13 = pCVar12->g;
      fVar14 = pCVar12->b;
      fVar15 = pCVar12->a;
      if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar10->fields)._borderColor.r = pCVar12->r;
      (pGVar10->fields)._borderColor.g = fVar13;
      (pGVar10->fields)._borderColor.b = fVar14;
      (pGVar10->fields)._borderColor.a = fVar15;
      pCVar12 = RTSystemValues::RTSystemValues_get_ZAxisColor
                          ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
      pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
      if (2 < pGVar4->max_length) {
        pGVar10 = pGVar4->vector[2];
        fVar13 = pCVar12->g;
        fVar14 = pCVar12->b;
        fVar15 = pCVar12->a;
        if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          (pGVar10->fields)._borderColor.r = pCVar12->r;
          (pGVar10->fields)._borderColor.g = fVar13;
          (pGVar10->fields)._borderColor.b = fVar14;
          (pGVar10->fields)._borderColor.a = fVar15;
          pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                              ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
          pGVar4 = (this_00->fields)._rtAxesLookAndFeel;
          uVar8 = 0;
          fVar13 = pCVar12->r;
          fVar14 = pCVar12->g;
          fVar15 = pCVar12->b;
          fVar16 = pCVar12->a;
          if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
            ppGVar17 = pGVar4->vector;
            for (; (int)uVar8 < (int)pGVar4->max_length; uVar8 = uVar8 + 1) {
              if (pGVar4->max_length <= uVar8) goto code_?;
              pGVar10 = *ppGVar17;
              if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
              ppGVar17 = ppGVar17 + 1;
              (pGVar10->fields)._hoveredColor.r = fVar13;
              (pGVar10->fields)._hoveredColor.g = fVar14;
              (pGVar10->fields)._hoveredColor.b = fVar15;
              (pGVar10->fields)._hoveredColor.a = fVar16;
              (pGVar10->fields)._hoveredBorderColor.r = fVar13;
              (pGVar10->fields)._hoveredBorderColor.g = fVar14;
              (pGVar10->fields)._hoveredBorderColor.b = fVar15;
              (pGVar10->fields)._hoveredBorderColor.a = fVar16;
            }
            pGVar6 = (this_00->fields)._rtCamLookSliderLookAndFeel;
            if (pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness
                        (pGVar6,4.0,(MethodInfo *)0x0);
              fVar15 = _UNK_?;
              fVar14 = _UNK_?;
              fVar13 = _UNK_?;
              pGVar6 = (this_00->fields)._rtCamLookSliderLookAndFeel;
              if (pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                (pGVar6->fields)._borderColor.r = _UNK_?;
                (pGVar6->fields)._borderColor.g = fVar13;
                (pGVar6->fields)._borderColor.b = fVar14;
                (pGVar6->fields)._borderColor.a = fVar15;
                pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                    ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
                pGVar6 = (this_00->fields)._rtCamLookSliderLookAndFeel;
                fVar13 = pCVar12->g;
                fVar14 = pCVar12->b;
                fVar15 = pCVar12->a;
                if (pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                  (pGVar6->fields)._hoveredBorderColor.r = pCVar12->r;
                  (pGVar6->fields)._hoveredBorderColor.g = fVar13;
                  (pGVar6->fields)._hoveredBorderColor.b = fVar14;
                  (pGVar6->fields)._hoveredBorderColor.a = fVar15;
                  this = (UniversalGizmoLookAndFeel3D *)(this_00->fields)._rtAxesLookAndFeel;
                  uVar8 = 0;
                  if ((GizmoPlaneSlider3DLookAndFeel__Array *)this !=
                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                    ppGVar17 = ((GizmoPlaneSlider3DLookAndFeel__Array *)this)->vector;
                    for (; (int)uVar8 <
                           (int)((GizmoPlaneSlider3DLookAndFeel__Array *)this)->max_length;
                        uVar8 = uVar8 + 1) {
                      if (((GizmoPlaneSlider3DLookAndFeel__Array *)this)->max_length <= uVar8)
                      goto code_?;
                      if (*ppGVar17 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                      this = (UniversalGizmoLookAndFeel3D *)0x2;
                      GizmoPlaneSlider3DLookAndFeel::
                      GizmoPlaneSlider3DLookAndFeel_set_NumBorderTorusWireAxialSlices
                                (*ppGVar17,2,(MethodInfo *)0x0);
                      ppGVar17 = ppGVar17 + 1;
                    }
                    uVar8 = 0;
                    pGVar3 = (this_00->fields)._scSglSlidersLookAndFeel;
                    while (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                      if ((int)pGVar3->max_length <= (int)uVar8) {
                        pGVar4 = (this_00->fields)._scDblSlidersLookAndFeel;
                        iVar9 = 0;
                        if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                        goto code_?;
                        break;
                      }
                      pGVar3 = (this_00->fields)._scSglSlidersLookAndFeel;
                      this_03 = (GizmoLineSlider3DLookAndFeel *)func_?();
                      GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor
                                (this_03,(MethodInfo *)0x0);
                      if (pGVar3 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
                      if ((this_03 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                         (iVar9 = func_?(), iVar9 == 0)) goto code_?;
                      if (pGVar3->max_length <= uVar8) goto code_?;
                      pGVar3->vector[uVar8] = this_03;
                      func_?();
                      uVar8 = uVar8 + 1;
                      pGVar3 = (this_00->fields)._scSglSlidersLookAndFeel;
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
  goto code_?;
  while( true ) {
    pGVar4 = (this_00->fields)._scDblSlidersLookAndFeel;
    this = (UniversalGizmoLookAndFeel3D *)&UNK_?;
    pGVar18 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
    pGVar10 = pGVar18;
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar18,(MethodInfo *)0x0);
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (iVar9 = func_?(), this = (UniversalGizmoLookAndFeel3D *)pGVar18, iVar9 == 0))
    goto code_?;
    if ((UniversalGizmoLookAndFeel3D *)pGVar4->max_length <= this) goto code_?;
    *(GizmoPlaneSlider3DLookAndFeel **)
     ((int)pGVar4->vector + (int)&pGVar10[-1].fields._raTriangleBorderType) = pGVar18;
    uVar8 = (int)pGVar4->vector + (int)&pGVar10[-1].fields._raTriangleBorderType;
    func_?();
    pGVar4 = (this_00->fields)._scDblSlidersLookAndFeel;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if (pGVar4->max_length <= uVar8) goto code_?;
    iVar19 = *(int *)((int)pGVar4->vector + (int)&pGVar10[-1].fields._raTriangleBorderType);
    if (iVar19 == 0) break;
    iVar9 = uVar8 + 1;
    *(undefined4 *)(iVar19 + 8) = 1;
    pGVar4 = (this_00->fields)._scDblSlidersLookAndFeel;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar4->max_length <= iVar9) {
      pGVar3 = (this_00->fields)._scSglSlidersLookAndFeel;
      uVar8 = 0;
      if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar11 = pGVar3->vector;
        goto code_?;
      }
      break;
    }
  }
  goto code_?;
code_?:
  if ((int)pGVar3->max_length <= (int)uVar8) goto code_?;
  if (pGVar3->max_length <= uVar8) goto code_?;
  if ((*ppGVar11 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar5 = ((*ppGVar11)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
  goto code_?;
  uVar8 = uVar8 + 1;
  (pGVar5->fields)._capType = 2;
  ppGVar11 = ppGVar11 + 1;
  goto code_?;
code_?:
  this = (UniversalGizmoLookAndFeel3D *)(this_00->fields)._scSglSlidersLookAndFeel;
  uVar8 = 0;
  if ((GizmoLineSlider3DLookAndFeel__Array *)this == (GizmoLineSlider3DLookAndFeel__Array *)0x0)
  goto code_?;
  ppGVar11 = ((GizmoLineSlider3DLookAndFeel__Array *)this)->vector;
  for (; (int)uVar8 < (int)((GizmoLineSlider3DLookAndFeel__Array *)this)->max_length;
      uVar8 = uVar8 + 1) {
    if (((GizmoLineSlider3DLookAndFeel__Array *)this)->max_length <= uVar8) goto code_?;
    if (*ppGVar11 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    this = (UniversalGizmoLookAndFeel3D *)0x40b00000;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              ((GizmoPlaneSlider3DSettings *)*ppGVar11,5.5,(MethodInfo *)0x0);
    ppGVar11 = ppGVar11 + 1;
  }
  pCVar12 = RTSystemValues::RTSystemValues_get_XAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetScAxisColor(this_00,0,*pCVar12,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_YAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetScAxisColor(this_00,1,*pCVar12,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_ZAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetScAxisColor(this_00,2,*pCVar12,(MethodInfo *)0x0);
  pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                      ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
  UniversalGizmoLookAndFeel3D_SetScHoveredColor(this_00,*pCVar12,(MethodInfo *)0x0);
  pBVar2 = (this_00->fields)._scSglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
  if (pBVar2->max_length != 0) {
    pBVar2->vector[0] = 1;
    pBVar2 = (this_00->fields)._scSglSliderCapVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length != 0) {
      pBVar2->vector[0] = 1;
      pBVar2 = (this_00->fields)._scSglSliderVis;
      if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
      if (1 < pBVar2->max_length) {
        pBVar2->vector[1] = 1;
        pBVar2 = (this_00->fields)._scSglSliderCapVis;
        if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
        if (1 < pBVar2->max_length) {
          pBVar2->vector[1] = 1;
          pBVar2 = (this_00->fields)._scSglSliderVis;
          if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
          if (2 < pBVar2->max_length) {
            pBVar2->vector[2] = 1;
            pBVar2 = (this_00->fields)._scSglSliderCapVis;
            if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
            if (2 < pBVar2->max_length) {
              pBVar2->vector[2] = 1;
              pCVar12 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                                  ((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
              pGVar5 = (this_00->fields)._scMidCapLookAndFeel;
              fVar13 = pCVar12->g;
              fVar14 = pCVar12->b;
              fVar15 = pCVar12->a;
              if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              (pGVar5->fields)._color.r = pCVar12->r;
              (pGVar5->fields)._color.g = fVar13;
              (pGVar5->fields)._color.b = fVar14;
              (pGVar5->fields)._color.a = fVar15;
              pGVar5 = (this_00->fields)._scMidCapLookAndFeel;
              if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              (pGVar5->fields)._capType = 2;
              pGVar5 = (this_00->fields)._scMidCapLookAndFeel;
              if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
                        (pGVar5,0.9,(MethodInfo *)0x0);
              pGVar5 = (this_00->fields)._scMidCapLookAndFeel;
              if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
                        (pGVar5,0.9,(MethodInfo *)0x0);
              pGVar5 = (this_00->fields)._scMidCapLookAndFeel;
              if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth
                        (pGVar5,0.9,(MethodInfo *)0x0);
              pGVar5 = (this_00->fields)._scMidCapLookAndFeel;
              if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
                        (pGVar5,0.65,(MethodInfo *)0x0);
              fVar13 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
              UniversalGizmoLookAndFeel3D_SetScDblSliderFillAlpha(this_00,fVar13,(MethodInfo *)0x0);
              UniversalGizmoLookAndFeel3D_SetScDblSliderSize(this_00,1.9,(MethodInfo *)0x0);
              pBVar2 = (this_00->fields)._scDblSliderVis;
              if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
              if (pBVar2->max_length != 0) {
                pBVar2->vector[0] = 1;
                pBVar2 = (this_00->fields)._scDblSliderVis;
                if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
                if (1 < pBVar2->max_length) {
                  pBVar2->vector[1] = 1;
                  pBVar2 = (this_00->fields)._scDblSliderVis;
                  if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
                  if (2 < pBVar2->max_length) {
                    pBVar2->vector[2] = 1;
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
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Boolean get_IsRtMidCapBorderVisible() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_IsRtMidCapBorderVisible
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._isSphereBorderVisible;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsRtRotationArcVisible() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_IsRtRotationArcVisible
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._isRotationArcVisible;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Single get_MvBoxSliderDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvBoxSliderDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._boxDepth;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvBoxSliderHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvBoxSliderHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._boxHeight;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvCylinderSliderRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvCylinderSliderRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._cylinderRadius;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvDblSliderBorderBoxDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderBoxDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* GizmoFillMode3D get_MvDblSliderBorderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* GizmoShadeMode get_MvDblSliderBorderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* GizmoQuad3DBorderType get_MvDblSliderBorderType() */

GizmoQuad3DBorderType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Single get_MvDblSliderFillAlpha() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderFillAlpha
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._color.a;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Single get_MvDblSliderSize() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderSize
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Color get_MvHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_MvNXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvNXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 4) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[3];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_MvNYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvNYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 5) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[4];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_MvNZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvNZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 6) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[5];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_MvPXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvPXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_MvPYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvPYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_MvPZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvPZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[2];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Single get_MvScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_MvScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._scale;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderBoxCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderBoxCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._boxDepth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderBoxCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderBoxCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._boxHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderBoxCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderBoxCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._boxWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode3D get_MvSliderCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
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


/* GizmoShadeMode get_MvSliderCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderCapShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._shadeMode;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoCap3DType get_MvSliderCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
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


/* Single get_MvSliderConeCapBaseRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderConeCapBaseRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._coneRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderConeCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderConeCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._coneHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode3D get_MvSliderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._fillMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_MvSliderLength() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderLength
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._length;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoLine3DType get_MvSliderLineType() */

GizmoLine3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderLineType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._lineType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_MvSliderPyramidCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderPyramidCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._pyramidDepth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderPyramidCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderPyramidCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._pyramidHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderPyramidCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderPyramidCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._pyramidWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoShadeMode get_MvSliderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._shadeMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_MvSliderSphereCapRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderSphereCapRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._sphereRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderTriPrismCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderTriPrismCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._trPrismDepth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderTriPrismCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderTriPrismCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._trPrismHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderTriPrismCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderTriPrismCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._trPrismWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Boolean get_MvUseZoomFactor() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_MvUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._useZoomFactor;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Color get_MvVertSnapCapBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Color get_MvVertSnapCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Color get_MvVertSnapCapHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Color get_MvVertSnapCapHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
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


/* Single get_MvVertSnapCapQuadHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvVertSnapCapQuadHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._quadHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* GizmoFillMode3D get_RtAxisBorderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_RtAxisBorderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
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


/* GizmoCircle3DBorderType get_RtAxisBorderType() */

GizmoCircle3DBorderType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_RtAxisBorderType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
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
      return (pGVar2->vector[0]->fields)._circleBorderType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_RtAxisCullAlphaScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisCullAlphaScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
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
      return (pGVar2->vector[0]->fields)._borderCircleCullAlphaScale;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtAxisCylTorusWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisCylTorusWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
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
      return (pGVar2->vector[0]->fields)._borderCylTorusWidth;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtAxisTorusThickness() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisTorusThickness
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
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
      return (pGVar2->vector[0]->fields)._borderTorusThickness;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_RtCamLookSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtCamLookSliderBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
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


/* Color get_RtCamLookSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtCamLookSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
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


/* Single get_RtCamLookSliderPolyBorderThickness() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtCamLookSliderPolyBorderThickness
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._borderPolyThickness;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* GizmoPolygon2DBorderType get_RtCamLookSliderPolyBorderType() */

GizmoPolygon2DBorderType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_RtCamLookSliderPolyBorderType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._polygonBorderType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Color get_RtHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
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


/* Color get_RtHoveredMidCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtHoveredMidCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* Color get_RtMidCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtMidCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* Int32 get_RtNumAxisTorusWireAxialSlices() */

int32_t Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtNumAxisTorusWireAxialSlices
                  (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._numBorderTorusWireAxialSlices;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Single get_RtRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtRadius(UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._sphereRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_RtRotationArcBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtRotationArcBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    if ((pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar6 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
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


/* Color get_RtRotationArcColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtRotationArcColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    if ((pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar6 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
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


/* Single get_RtScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_RtScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* GizmoShadeMode get_RtShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_RtShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._shadeMode;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Boolean get_RtUseShortestRotationArc() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_RtUseShortestRotationArc
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if ((pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar6 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      return (pGVar6->fields)._useShortestRotation;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_RtUseZoomFactor() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_RtUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._useZoomFactor;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Color get_RtXBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtXBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
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


/* Color get_RtYBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtYBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
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


/* Color get_RtZBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtZBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[2];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
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


/* Single get_ScBoxSliderDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScBoxSliderDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._boxDepth;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScBoxSliderHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScBoxSliderHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._boxHeight;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScCylinderSliderRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScCylinderSliderRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._cylinderRadius;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScDblSliderFillAlpha() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScDblSliderFillAlpha
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._color.a;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Single get_ScDblSliderSize() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScDblSliderSize
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSlidersLookAndFeel;
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
      return (pGVar2->vector[0]->fields)._raTriangleXLength;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_ScHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Single get_ScMidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapBoxDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxDepth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_ScMidCapBoxHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapBoxHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_ScMidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapBoxWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_ScMidCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScMidCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* GizmoFillMode3D get_ScMidCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScMidCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._fillMode;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* GizmoShadeMode get_ScMidCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScMidCapShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._shadeMode;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Single get_ScMidCapSphereRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapSphereRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._sphereRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* GizmoCap3DType get_ScMidCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_ScMidCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._capType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Color get_ScNXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScNXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 4) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[3];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_ScNYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScNYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 5) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[4];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_ScNZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScNZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 6) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[5];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_ScPXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScPXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_ScPYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScPYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Color get_ScPZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScPZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[2];
    if (pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) {
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


/* Single get_ScScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_ScScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_ScScaleGuideAxisLength() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScScaleGuideAxisLength
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scScaleGuideLookAndFeel;
  if (pGVar2 != (GizmoScaleGuideLookAndFeel *)0x0) {
    return (pGVar2->fields)._axisLength;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_ScSliderBoxCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderBoxCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._boxDepth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderBoxCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderBoxCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._boxHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderBoxCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderBoxCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._boxWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode3D get_ScSliderCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
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


/* GizmoShadeMode get_ScSliderCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderCapShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._shadeMode;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoCap3DType get_ScSliderCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
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


/* Single get_ScSliderConeCapBaseRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderConeCapBaseRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._coneRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderConeCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderConeCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._coneHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode3D get_ScSliderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._fillMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_ScSliderLength() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderLength
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._length;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoLine3DType get_ScSliderLineType() */

GizmoLine3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderLineType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._lineType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_ScSliderPyramidCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderPyramidCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._pyramidDepth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderPyramidCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderPyramidCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._pyramidHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderPyramidCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderPyramidCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._pyramidWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoShadeMode get_ScSliderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._shadeMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_ScSliderSphereCapRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderSphereCapRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._sphereRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderTriPrismCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderTriPrismCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._trPrismDepth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderTriPrismCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderTriPrismCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._trPrismHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScSliderTriPrismCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderTriPrismCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._trPrismWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Boolean get_ScUseZoomFactor() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_ScUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._useZoomFactor;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

