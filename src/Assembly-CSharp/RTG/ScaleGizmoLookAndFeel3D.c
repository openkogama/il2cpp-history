
/* Void ConnectDblSliderLookAndFeel(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_ConnectDblSliderLookAndFeel
               (ScaleGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
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


/* Void ConnectGizmoScaleGuideLookAndFeel(GizmoScaleGuide) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_ConnectGizmoScaleGuideLookAndFeel
               (ScaleGizmoLookAndFeel3D *this,GizmoScaleGuide *scaleGuide,MethodInfo *method)

{
  pGStack_1 = (GizmoScaleGuideLookAndFeel *)&stack0xfffffffc;
  if (scaleGuide != (GizmoScaleGuide *)0x0) {
    pGStack_1 = (this->fields)._scaleGuideLookAndFeel;
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


/* Void ConnectMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_ConnectMidCapLookAndFeel
               (ScaleGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  if (cap != (GizmoCap3D *)0x0) {
    pGStack_1 = (this->fields)._midCapLookAndFeel;
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


/* Void ConnectSliderLookAndFeel(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_ConnectSliderLookAndFeel
               (ScaleGizmoLookAndFeel3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* List`1[System.Enum] GetAllowedMidCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_GetAllowedMidCapTypes
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* GizmoPlaneSlider3DLookAndFeel GetDblSliderLookAndFeel(PlaneId) */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_GetDblSliderLookAndFeel
          (ScaleGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSlidersLookAndFeel;
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


/* GizmoLineSlider3DLookAndFeel GetSglSliderLookAndFeel(Int32, AxisSign) */

GizmoLineSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_GetSglSliderLookAndFeel
          (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Boolean IsNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_IsNegativeSliderVisible
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

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


/* Boolean IsPositiveSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_IsPositiveSliderVisible
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

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


/* Boolean IsSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_IsSliderVisible
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
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

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetAxisColor
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,Color color,MethodInfo *method)

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
                      pGVar5 = (this->fields)._scaleGuideLookAndFeel;
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
                    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if (pGVar4->max_length < 3) goto code_?;
                      pGVar5 = (this->fields)._scaleGuideLookAndFeel;
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
                          (pGVar4 = (this->fields)._dblSlidersLookAndFeel,
                          pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
                    if (pGVar4->max_length == 0) goto code_?;
                    pGVar5 = (this->fields)._scaleGuideLookAndFeel;
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


/* Void SetBoxSliderDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetBoxSliderDepth
               (ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetBoxSliderHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetBoxSliderHeight
               (ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetDblSliderFillAlpha(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetDblSliderFillAlpha
               (ScaleGizmoLookAndFeel3D *this,float alpha,MethodInfo *method)

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
  pGVar3 = (this->fields)._dblSlidersLookAndFeel;
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


/* Void SetDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetDblSliderSize
               (ScaleGizmoLookAndFeel3D *this,float size,MethodInfo *method)

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


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetHoveredColor
               (ScaleGizmoLookAndFeel3D *this,Color hoveredColor,MethodInfo *method)

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
      pGVar5 = (this->fields)._midCapLookAndFeel;
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


/* Void SetMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapBoxDepth
               (ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapBoxHeight
               (ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapBoxWidth
               (ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

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


/* Void SetMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapColor
               (ScaleGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
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


/* Void SetMidCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapFillMode
               (ScaleGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
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


/* Void SetMidCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapShadeMode
               (ScaleGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetMidCapSphereRadius
               (ScaleGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapType
               (ScaleGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

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


/* Void SetNegativeSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetNegativeSliderVisible
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderVis;
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


/* Void SetPositiveSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetPositiveSliderVisible
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._sglSliderVis;
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


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetScale
               (ScaleGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

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


/* Void SetScaleGuideAxisLength(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetScaleGuideAxisLength
               (ScaleGizmoLookAndFeel3D *this,float length,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._scaleGuideLookAndFeel;
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


/* Void SetSliderBoxCapDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderBoxCapDepth
               (ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderBoxCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderBoxCapHeight
               (ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderBoxCapWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderBoxCapWidth
               (ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderCapFillMode
               (ScaleGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderCapShadeMode
               (ScaleGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderCapType
               (ScaleGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderConeCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderConeCapBaseRadius
               (ScaleGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderConeCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderConeCapHeight
               (ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderFillMode
               (ScaleGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderLength(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderLength
               (ScaleGizmoLookAndFeel3D *this,float axisLength,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderLineType(GizmoLine3DType) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderLineType
               (ScaleGizmoLookAndFeel3D *this,GizmoLine3DType__Enum lineType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderPyramidCapDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderPyramidCapDepth
               (ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderPyramidCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderPyramidCapHeight
               (ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderPyramidCapWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderPyramidCapWidth
               (ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderShadeMode
               (ScaleGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderSphereCapRadius(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderSphereCapRadius
               (ScaleGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderTriPrismCapDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderTriPrismCapDepth
               (ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderTriPrismCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderTriPrismCapHeight
               (ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderTriPrismCapWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
     ScaleGizmoLookAndFeel3D_SetSliderTriPrismCapWidth
               (ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
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


/* Void SetSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderVisible
               (ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
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

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetUseZoomFactor
               (ScaleGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

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
        pGVar8 = (this->fields)._scaleGuideLookAndFeel;
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


/* ScaleGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor
               (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._midCapLookAndFeel = pGVar1;
  func_?(&(this->fields)._midCapLookAndFeel,pGVar1);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderVis = pBVar2;
  func_?(&(this->fields)._sglSliderVis,pBVar2);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderCapVis = pBVar2;
  func_?(&(this->fields)._sglSliderCapVis,pBVar2);
  pBVar2 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  (this->fields)._dblSliderVis = pBVar2;
  func_?(&(this->fields)._dblSliderVis,pBVar2);
  this_00 = (GizmoScaleGuideLookAndFeel *)func_?(TypeInfo__RTG__GizmoScaleGuideLookAndFeel)
  ;
  GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._scaleGuideLookAndFeel = this_00;
  func_?(&(this->fields)._scaleGuideLookAndFeel,this_00);
  (this->fields)._isScaleGuideVisible = 1;
  pGVar3 = (GizmoLineSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._sglSlidersLookAndFeel = pGVar3;
  func_?(&(this->fields)._sglSlidersLookAndFeel,pGVar3);
  pGVar4 = (GizmoPlaneSlider3DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel,3);
  (this->fields)._dblSlidersLookAndFeel = pGVar4;
  func_?(&(this->fields)._dblSlidersLookAndFeel,pGVar4);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar5 = 0;
  pGVar3 = (this->fields)._sglSlidersLookAndFeel;
  while (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar3->max_length <= (int)uVar5) {
      pGVar4 = (this->fields)._dblSlidersLookAndFeel;
      uVar5 = 0;
      if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
        iVar6 = 0x10;
        goto code_?;
      }
      break;
    }
    pGVar3 = (this->fields)._sglSlidersLookAndFeel;
    pGVar7 = (GizmoLineSlider3DLookAndFeel *)func_?();
    GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar3 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar7 != (GizmoLineSlider3DLookAndFeel *)0x0) && (iVar6 = func_?(), iVar6 == 0))
    goto code_?;
    if (pGVar3->max_length <= uVar5) goto code_?;
    pGVar3->vector[uVar5] = pGVar7;
    func_?();
    uVar5 = uVar5 + 1;
    pGVar3 = (this->fields)._sglSlidersLookAndFeel;
  }
  goto code_?;
code_?:
  if ((int)pGVar3->max_length <= (int)uVar5) goto code_?;
  if (pGVar3->max_length <= uVar5) goto code_?;
  if ((*ppGVar8 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar1 = ((*ppGVar8)->fields)._capLookAndFeel, pGVar1 == (GizmoCap3DLookAndFeel *)0x0))
  goto code_?;
  uVar5 = uVar5 + 1;
  (pGVar1->fields)._capType = 2;
  ppGVar8 = ppGVar8 + 1;
  goto code_?;
code_?:
  pGVar3 = (this->fields)._sglSlidersLookAndFeel;
  uVar5 = 0;
  if (pGVar3 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar8 = pGVar3->vector;
  for (; (int)uVar5 < (int)pGVar3->max_length; uVar5 = uVar5 + 1) {
    if (pGVar3->max_length <= uVar5) goto code_?;
    if (*ppGVar8 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              ((GizmoPlaneSlider3DSettings *)*ppGVar8,5.5,(MethodInfo *)0x0);
    ppGVar8 = ppGVar8 + 1;
  }
  pCVar9 = RTSystemValues::RTSystemValues_get_XAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  ScaleGizmoLookAndFeel3D_SetAxisColor(this,0,*pCVar9,(MethodInfo *)0x0);
  pCVar9 = RTSystemValues::RTSystemValues_get_YAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  ScaleGizmoLookAndFeel3D_SetAxisColor(this,1,*pCVar9,(MethodInfo *)0x0);
  pCVar9 = RTSystemValues::RTSystemValues_get_ZAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  ScaleGizmoLookAndFeel3D_SetAxisColor(this,2,*pCVar9,(MethodInfo *)0x0);
  pCVar9 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  pGVar3 = (this->fields)._sglSlidersLookAndFeel;
  uVar5 = 0;
  fVar10 = pCVar9->r;
  fVar11 = pCVar9->g;
  fVar12 = pCVar9->b;
  fVar13 = pCVar9->a;
  if (pGVar3 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar8 = pGVar3->vector;
  for (; (int)uVar5 < (int)pGVar3->max_length; uVar5 = uVar5 + 1) {
    if (pGVar3->max_length <= uVar5) goto code_?;
    pGVar7 = *ppGVar8;
    if (pGVar7 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    (pGVar7->fields)._hoveredColor.r = fVar10;
    (pGVar7->fields)._hoveredColor.g = fVar11;
    (pGVar7->fields)._hoveredColor.b = fVar12;
    (pGVar7->fields)._hoveredColor.a = fVar13;
    pGVar1 = (pGVar7->fields)._capLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    ppGVar8 = ppGVar8 + 1;
    (pGVar1->fields)._hoveredColor.r = fVar10;
    (pGVar1->fields)._hoveredColor.g = fVar11;
    (pGVar1->fields)._hoveredColor.b = fVar12;
    (pGVar1->fields)._hoveredColor.a = fVar13;
  }
  pGVar4 = (this->fields)._dblSlidersLookAndFeel;
  uVar5 = 0;
  if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
  ppGVar14 = pGVar4->vector;
  for (; (int)uVar5 < (int)pGVar4->max_length; uVar5 = uVar5 + 1) {
    if (pGVar4->max_length <= uVar5) goto code_?;
    pGVar15 = *ppGVar14;
    if (pGVar15 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    fVar16 = (pGVar15->fields)._color.a;
    (pGVar15->fields)._hoveredBorderColor.r = fVar10;
    (pGVar15->fields)._hoveredBorderColor.g = fVar11;
    (pGVar15->fields)._hoveredBorderColor.b = fVar12;
    (pGVar15->fields)._hoveredBorderColor.a = fVar13;
    color.g = fVar11;
    color.r = fVar10;
    color.b = fVar12;
    color.a = fVar13;
    pCVar9 = ColorEx::ColorEx_KeepAllButAlpha
                        ((Color *)&stack0xffffffd4,color,fVar16,(MethodInfo *)0x0);
    fVar16 = pCVar9->g;
    fVar17 = pCVar9->b;
    fVar18 = pCVar9->a;
    ppGVar14 = ppGVar14 + 1;
    (pGVar15->fields)._hoveredColor.r = pCVar9->r;
    (pGVar15->fields)._hoveredColor.g = fVar16;
    (pGVar15->fields)._hoveredColor.b = fVar17;
    (pGVar15->fields)._hoveredColor.a = fVar18;
  }
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  (pGVar1->fields)._hoveredColor.r = fVar10;
  (pGVar1->fields)._hoveredColor.g = fVar11;
  (pGVar1->fields)._hoveredColor.b = fVar12;
  (pGVar1->fields)._hoveredColor.a = fVar13;
  pBVar2 = (this->fields)._sglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
  if (pBVar2->max_length != 0) {
    pBVar2->vector[0] = 1;
    pBVar2 = (this->fields)._sglSliderCapVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length == 0) goto code_?;
    pBVar2->vector[0] = 1;
    pBVar2 = (this->fields)._sglSliderVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length < 2) goto code_?;
    pBVar2->vector[1] = 1;
    pBVar2 = (this->fields)._sglSliderCapVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length < 2) goto code_?;
    pBVar2->vector[1] = 1;
    pBVar2 = (this->fields)._sglSliderVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length < 3) goto code_?;
    pBVar2->vector[2] = 1;
    pBVar2 = (this->fields)._sglSliderCapVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length < 3) goto code_?;
    pBVar2->vector[2] = 1;
    pCVar9 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                        ((Color *)&stack0xffffffd4,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._midCapLookAndFeel;
    fVar10 = pCVar9->g;
    fVar11 = pCVar9->b;
    fVar12 = pCVar9->a;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    (pGVar1->fields)._color.r = pCVar9->r;
    (pGVar1->fields)._color.g = fVar10;
    (pGVar1->fields)._color.b = fVar11;
    (pGVar1->fields)._color.a = fVar12;
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    (pGVar1->fields)._capType = 2;
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth(pGVar1,0.9,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight(pGVar1,0.9,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth(pGVar1,0.9,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius(pGVar1,0.65,(MethodInfo *)0x0);
    fVar10 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
    if (fVar10 < 0.0) {
      fVar11 = 0.0;
code_?:
      fVar10 = fVar11;
    }
    else {
      fVar11 = _UNK_?;
      if (_UNK_? < fVar10) goto code_?;
    }
    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
    uVar5 = 0;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
    ppGVar14 = pGVar4->vector;
    while ((int)uVar5 < (int)pGVar4->max_length) {
      if (pGVar4->max_length <= uVar5) goto code_?;
      pGVar15 = *ppGVar14;
      if (pGVar15 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      pCVar9 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffd4,(pGVar15->fields)._color,fVar10,
                           (MethodInfo *)0x0);
      fVar11 = pCVar9->g;
      fVar12 = pCVar9->b;
      fVar13 = pCVar9->a;
      iVar6 = 0;
      (pGVar15->fields)._color.r = pCVar9->r;
      (pGVar15->fields)._color.g = fVar11;
      (pGVar15->fields)._color.b = fVar12;
      (pGVar15->fields)._color.a = fVar13;
      fVar16 = fVar10;
      pCVar9 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffe4,(pGVar15->fields)._hoveredColor,fVar10,
                           (MethodInfo *)0x0);
      fVar11 = pCVar9->g;
      fVar12 = pCVar9->b;
      fVar13 = pCVar9->a;
      ppGVar14 = (GizmoPlaneSlider3DLookAndFeel **)((int)fVar16 + 4);
      (pGVar15->fields)._hoveredColor.r = pCVar9->r;
      (pGVar15->fields)._hoveredColor.g = fVar11;
      (pGVar15->fields)._hoveredColor.b = fVar12;
      (pGVar15->fields)._hoveredColor.a = fVar13;
      uVar5 = iVar6 + 1;
    }
    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
    uVar5 = 0;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
    ppGVar14 = pGVar4->vector;
    for (; (int)uVar5 < (int)pGVar4->max_length; uVar5 = uVar5 + 1) {
      if (pGVar4->max_length <= uVar5) goto code_?;
      pGVar15 = *ppGVar14;
      if (pGVar15 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                (pGVar15,1.9,(MethodInfo *)0x0);
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                (pGVar15,1.9,(MethodInfo *)0x0);
      ppGVar14 = ppGVar14 + 1;
    }
    pBVar2 = (this->fields)._dblSliderVis;
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if (pBVar2->max_length != 0) {
      pBVar2->vector[0] = 1;
      pBVar2 = (this->fields)._dblSliderVis;
      if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
      if (1 < pBVar2->max_length) {
        pBVar2->vector[1] = 1;
        pBVar2 = (this->fields)._dblSliderVis;
        if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
        if (2 < pBVar2->max_length) {
          pBVar2->vector[2] = 1;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  goto code_?;
  while( true ) {
    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
    pGVar15 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar15,(MethodInfo *)0x0);
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar15 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (iVar19 = func_?(), iVar19 == 0)) goto code_?;
    if (pGVar4->max_length <= uVar5) goto code_?;
    *(GizmoPlaneSlider3DLookAndFeel **)((int)pGVar4->vector + iVar6 + -0x10) = pGVar15;
    func_?();
    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if (pGVar4->max_length <= uVar5) goto code_?;
    iVar19 = *(int *)((int)pGVar4->vector + iVar6 + -0x10);
    if (iVar19 == 0) break;
    uVar5 = uVar5 + 1;
    *(undefined4 *)(iVar19 + 8) = 1;
    iVar6 = iVar6 + 4;
    pGVar4 = (this->fields)._dblSlidersLookAndFeel;
    if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar4->max_length <= (int)uVar5) {
      pGVar3 = (this->fields)._sglSlidersLookAndFeel;
      uVar5 = 0;
      if (pGVar3 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar8 = pGVar3->vector;
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


/* Single get_BoxSliderDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_BoxSliderDepth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_BoxSliderHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_BoxSliderHeight
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_DblSliderFillAlpha() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_DblSliderFillAlpha
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* Single get_DblSliderSize() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_DblSliderSize
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

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
      return (pGVar2->vector[0]->fields)._raTriangleXLength;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_HoveredColor
                  (Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_MidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapBoxDepth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Single get_MidCapBoxHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapBoxHeight
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_MidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapBoxWidth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Color get_MidCapColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapColor
                  (Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
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


/* Single get_MidCapSphereRadius() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_MidCapSphereRadius
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._sphereRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_Scale() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_Scale
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_ScaleGuideAxisLength() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_ScaleGuideAxisLength
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scaleGuideLookAndFeel;
  if (pGVar2 != (GizmoScaleGuideLookAndFeel *)0x0) {
    return (pGVar2->fields)._axisLength;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_SliderBoxCapDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderBoxCapDepth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderBoxCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderBoxCapHeight
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderBoxCapWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderBoxCapWidth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* GizmoFillMode3D get_SliderCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderCapFillMode
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* GizmoShadeMode get_SliderCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderCapShadeMode
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* GizmoCap3DType get_SliderCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderCapType
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderConeCapBaseRadius() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderConeCapBaseRadius
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderConeCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderConeCapHeight
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* GizmoFillMode3D get_SliderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderFillMode
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* GizmoLine3DType get_SliderLineType() */

GizmoLine3DType__Enum
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderLineType
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderPyramidCapDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderPyramidCapDepth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderPyramidCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderPyramidCapHeight
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderPyramidCapWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderPyramidCapWidth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* GizmoShadeMode get_SliderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderShadeMode
          (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderSphereCapRadius() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderSphereCapRadius
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderTriPrismCapDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapDepth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderTriPrismCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapHeight
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Single get_SliderTriPrismCapWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::
      ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapWidth
                (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Boolean get_UseZoomFactor() */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_UseZoomFactor
               (ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._useZoomFactor;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Color get_XColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_XColor
                  (Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Color get_YColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_YColor
                  (Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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


/* Color get_ZColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_ZColor
                  (Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSlidersLookAndFeel;
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

