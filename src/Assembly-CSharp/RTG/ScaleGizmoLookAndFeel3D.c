
/* Void ConnectDblSliderLookAndFeel(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_ConnectDblSliderLookAndFeel(ScaleGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((PlaneId__Enum)pGVar1->max_length <= planeId) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      bVar3 = iRam_? != 0;
      (slider->fields)._sharedLookAndFeel = pGVar1->vector[(int)planeId];
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ConnectGizmoScaleGuideLookAndFeel(GizmoScaleGuide) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_ConnectGizmoScaleGuideLookAndFeel(ScaleGizmoLookAndFeel3D *this,GizmoScaleGuide *scaleGuide,MethodInfo *method)

{
  if (scaleGuide == (GizmoScaleGuide *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (scaleGuide->fields)._sharedLookAndFeel = (this->fields)._scaleGuideLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(scaleGuide->fields)._sharedLookAndFeel >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void ConnectMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_ConnectMidCapLookAndFeel(ScaleGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cap == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (cap->fields)._sharedLookAndFeel = (this->fields)._midCapLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(cap->fields)._sharedLookAndFeel >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void ConnectSliderLookAndFeel(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_ConnectSliderLookAndFeel(ScaleGizmoLookAndFeel3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
    lVar2 = (longlong)axisIndex;
  }
  else {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    lVar2 = (longlong)axisIndex + 3;
    if ((uint)pGVar1->max_length <= (uint)lVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (slider != (GizmoLineSlider3D *)0x0) {
    bVar4 = iRam_? != 0;
    (slider->fields)._sharedLookAndFeel = pGVar1->vector[lVar2];
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    lVar2 = 0xe0;
    if ((slider->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd8;
    }
    lVar2 = *(longlong *)((longlong)&slider->klass + lVar2);
    if ((lVar2 != 0) && (pGVar9 = (slider->fields)._cap3D, pGVar9 != (GizmoCap3D *)0x0)) {
      bVar4 = iRam_? != 0;
      (pGVar9->fields)._sharedLookAndFeel = *(GizmoCap3DLookAndFeel **)(lVar2 + 0x60);
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pGVar9->fields)._sharedLookAndFeel >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[System.Enum] GetAllowedMidCapTypes() */

List_1_System_Enum_ * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_GetAllowedMidCapTypes(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap3DType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Enum>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)FUN_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
  auStackX_18[0] = 2;
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoCap3DType,auStackX_18);
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pOVar4 = (this_00->fields)._items;
    if (pOVar4 != (Object__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if (uVar5 < (uint)pOVar4->max_length) {
        (this_00->fields)._size = uVar5 + 1;
        FUN_?(pOVar4,(longlong)(int)uVar5,pOVar1);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
      }
      auStackX_18[0] = 3;
      pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoCap3DType,auStackX_18);
      pMVar2 = MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_;
      pOVar4 = (this_00->fields)._items;
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      if (pOVar4 != (Object__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if ((uint)pOVar4->max_length <= uVar5) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
          return (List_1_System_Enum_ *)this_00;
        }
        (this_00->fields)._size = uVar5 + 1;
        FUN_?(pOVar4,(longlong)(int)uVar5,pOVar1);
        return (List_1_System_Enum_ *)this_00;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_System_Enum_ *)(*pcVar6)();
  return pLVar7;
}


/* GizmoPlaneSlider3DLookAndFeel GetDblSliderLookAndFeel(PlaneId) */

GizmoPlaneSlider3DLookAndFeel * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_GetDblSliderLookAndFeel(ScaleGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar1 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)(*pcVar2)();
    return pGVar3;
  }
  if (planeId < (PlaneId__Enum)pGVar1->max_length) {
    return pGVar1->vector[(int)planeId];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)(*pcVar2)();
  return pGVar3;
}


/* GizmoLineSlider3DLookAndFeel GetSglSliderLookAndFeel(Int32, AxisSign) */

GizmoLineSlider3DLookAndFeel * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_GetSglSliderLookAndFeel(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pGVar1->max_length) {
      return pGVar1->vector[axisIndex];
    }
  }
  else {
    if (pGVar1 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pGVar3 = (GizmoLineSlider3DLookAndFeel *)(*pcVar2)();
      return pGVar3;
    }
    if (axisIndex + 3U < (uint)pGVar1->max_length) {
      return pGVar1->vector[(longlong)axisIndex + 3];
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoLineSlider3DLookAndFeel *)(*pcVar2)();
  return pGVar3;
}


/* Boolean IsNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_IsNegativeSliderVisible(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (axisIndex + 3U < (uint)pBVar1->max_length) {
    return pBVar1->vector[(longlong)axisIndex + 3] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsPositiveSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_IsPositiveSliderVisible(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    return pBVar1->vector[axisIndex] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_IsSliderVisible(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar1 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pBVar1->max_length) {
      return pBVar1->vector[axisIndex] != 0;
    }
  }
  else {
    if (pBVar1 == (Boolean__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (axisIndex + 3U < (uint)pBVar1->max_length) {
      return pBVar1->vector[(longlong)axisIndex + 3] != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetAxisColor(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      fVar4 = color->r;
      fVar5 = color->g;
      fVar6 = color->b;
      fVar7 = color->a;
      (pGVar3->fields)._color.r = fVar4;
      (pGVar3->fields)._color.g = fVar5;
      (pGVar3->fields)._color.b = fVar6;
      (pGVar3->fields)._color.a = fVar7;
      pGVar1 = (this->fields)._sglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel, pGVar8 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar8->fields)._color.r = fVar4;
          (pGVar8->fields)._color.g = fVar5;
          (pGVar8->fields)._color.b = fVar6;
          (pGVar8->fields)._color.a = fVar7;
          pGVar1 = (this->fields)._sglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 3U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 3];
            if (pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar3->fields)._color.r = fVar4;
              (pGVar3->fields)._color.g = fVar5;
              (pGVar3->fields)._color.b = fVar6;
              (pGVar3->fields)._color.a = fVar7;
              pGVar1 = (this->fields)._sglSlidersLookAndFeel;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 3U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 3] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 3]->fields)._capLookAndFeel, pGVar8 != (GizmoCap3DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._color.r = fVar4;
                  (pGVar8->fields)._color.g = fVar5;
                  (pGVar8->fields)._color.b = fVar6;
                  (pGVar8->fields)._color.a = fVar7;
                  pGVar9 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
                  if (axisIndex == 0) {
                    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
                    if ((uint)pGVar10->max_length < 2) goto code_?;
                    pGVar11 = (this->fields)._scaleGuideLookAndFeel;
                    pGVar9 = pGVar10->vector[1];
                    if (pGVar11 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
                    (pGVar11->fields)._xAxisColor.r = fVar4;
                    (pGVar11->fields)._xAxisColor.g = fVar5;
                    (pGVar11->fields)._xAxisColor.b = fVar6;
                    (pGVar11->fields)._xAxisColor.a = fVar7;
                  }
                  else if (axisIndex == 1) {
                    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
                    if ((uint)pGVar10->max_length < 3) goto code_?;
                    pGVar11 = (this->fields)._scaleGuideLookAndFeel;
                    pGVar9 = pGVar10->vector[2];
                    if (pGVar11 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
                    (pGVar11->fields)._yAxisColor.r = fVar4;
                    (pGVar11->fields)._yAxisColor.g = fVar5;
                    (pGVar11->fields)._yAxisColor.b = fVar6;
                    (pGVar11->fields)._yAxisColor.a = fVar7;
                  }
                  else if (axisIndex == 2) {
                    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
                    if ((int)pGVar10->max_length == 0) goto code_?;
                    pGVar11 = (this->fields)._scaleGuideLookAndFeel;
                    pGVar9 = pGVar10->vector[0];
                    if (pGVar11 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
                    (pGVar11->fields)._zAxisColor.r = fVar4;
                    (pGVar11->fields)._zAxisColor.g = fVar5;
                    (pGVar11->fields)._zAxisColor.b = fVar6;
                    (pGVar11->fields)._zAxisColor.a = fVar7;
                  }
                  if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                    fVar7 = (pGVar9->fields)._color.a;
                    fVar12 = color->r;
                    fVar13 = color->g;
                    fVar14 = color->b;
                    fVar15 = color->a;
                    (pGVar9->fields)._color.r = fVar4;
                    (pGVar9->fields)._color.g = fVar5;
                    (pGVar9->fields)._color.b = fVar6;
                    (pGVar9->fields)._color.a = fVar7;
                    (pGVar9->fields)._borderColor.r = fVar12;
                    (pGVar9->fields)._borderColor.g = fVar13;
                    (pGVar9->fields)._borderColor.b = fVar14;
                    (pGVar9->fields)._borderColor.a = fVar15;
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetBoxSliderDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetBoxSliderDepth(ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoLineSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) break;
      if (0.0 <= depth) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxDepth = depth;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxDepth = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetBoxSliderHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetBoxSliderHeight(ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoLineSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) break;
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxHeight = height;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxHeight = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDblSliderFillAlpha(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetDblSliderFillAlpha(ScaleGizmoLookAndFeel3D *this,float alpha,MethodInfo *method)

{
  if (alpha < 0.0) {
    alpha = 0.0;
  }
  else if (1.0 < alpha) {
    alpha = 1.0;
  }
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      fVar5 = (pGVar4->fields)._color.r;
      fVar6 = (pGVar4->fields)._color.g;
      fVar7 = (pGVar4->fields)._color.b;
      uVar2 = uVar2 + 1;
      fVar8 = (pGVar4->fields)._hoveredColor.g;
      fVar9 = (pGVar4->fields)._hoveredColor.b;
      method = (MethodInfo *)&method->virtualMethodPointer;
      (pGVar4->fields)._hoveredColor.r = (pGVar4->fields)._hoveredColor.r;
      (pGVar4->fields)._hoveredColor.g = fVar8;
      (pGVar4->fields)._hoveredColor.b = fVar9;
      (pGVar4->fields)._hoveredColor.a = alpha;
      (pGVar4->fields)._color.r = fVar5;
      (pGVar4->fields)._color.g = fVar6;
      (pGVar4->fields)._color.b = fVar7;
      (pGVar4->fields)._color.a = alpha;
    }
  }
  FUN_?(0,uVar2,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetDblSliderSize(ScaleGizmoLookAndFeel3D *this,float size,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      fVar5 = size;
      if (size < 0.0) {
        fVar5 = 0.0;
      }
      (pGVar4->fields)._raTriangleXLength = fVar5;
      if (0.0 <= size) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._raTriangleYLength = size;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._raTriangleYLength = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(uVar2,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetHoveredColor(ScaleGizmoLookAndFeel3D *this,Color *hoveredColor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  uVar3 = 0;
  ppGVar4 = (GizmoPlaneSlider3DLookAndFeel **)0x0;
  pGVar5 = (GizmoLineSlider3DLookAndFeel *)this;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while ((int)ppGVar4 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar3) goto code_?;
      pGVar5 = (GizmoLineSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      uVar6._0_4_ = hoveredColor->r;
      uVar6._4_4_ = hoveredColor->g;
      pGVar7 = *(GizmoLineSlider3DLookAndFeel__Array **)&hoveredColor->b;
      pGVar8 = (GizmoPlaneSlider3DLookAndFeel__Array *)(pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._hoveredColor.r = (float)(undefined4)uVar6;
      (pGVar5->fields)._hoveredColor.g = (float)uVar6._4_4_;
      *(GizmoLineSlider3DLookAndFeel__Array **)&(pGVar5->fields)._hoveredColor.b = pGVar7;
      ppGVar4 = (GizmoPlaneSlider3DLookAndFeel **)0x0;
      if (pGVar8 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
      uVar3 = uVar3 + 1;
      *(undefined8 *)((longlong)pGVar8->vector + 0x5c) = uVar6;
      *(GizmoLineSlider3DLookAndFeel__Array **)((longlong)pGVar8->vector + 100) = pGVar7;
      method = (MethodInfo *)&method->virtualMethodPointer;
      ppGVar4 = (GizmoPlaneSlider3DLookAndFeel **)(ulonglong)uVar3;
    }
    pGVar8 = (this->fields)._dblSlidersLookAndFeel;
    pGVar5 = (GizmoLineSlider3DLookAndFeel *)0x0;
    if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar4 = pGVar8->vector;
      while ((int)pGVar5 < (int)pGVar8->max_length) {
        if ((uint)pGVar8->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar10 = *ppGVar4;
        pGVar5 = (GizmoLineSlider3DLookAndFeel *)0x0;
        if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        fVar11 = hoveredColor->r;
        fVar12 = hoveredColor->g;
        fVar13 = hoveredColor->b;
        fVar14 = hoveredColor->a;
        uVar2 = uVar2 + 1;
        fVar15 = (pGVar10->fields)._color.a;
        ppGVar4 = ppGVar4 + 1;
        (pGVar10->fields)._hoveredBorderColor.r = fVar11;
        (pGVar10->fields)._hoveredBorderColor.g = fVar12;
        (pGVar10->fields)._hoveredBorderColor.b = fVar13;
        (pGVar10->fields)._hoveredBorderColor.a = fVar14;
        (pGVar10->fields)._hoveredColor.r = fVar11;
        (pGVar10->fields)._hoveredColor.g = fVar12;
        (pGVar10->fields)._hoveredColor.b = fVar13;
        (pGVar10->fields)._hoveredColor.a = fVar15;
        pGVar5 = (GizmoLineSlider3DLookAndFeel *)(ulonglong)uVar2;
      }
      pGVar16 = (this->fields)._midCapLookAndFeel;
      if (pGVar16 != (GizmoCap3DLookAndFeel *)0x0) {
        fVar15 = hoveredColor->g;
        fVar11 = hoveredColor->b;
        fVar12 = hoveredColor->a;
        (pGVar16->fields)._hoveredColor.r = hoveredColor->r;
        (pGVar16->fields)._hoveredColor.g = fVar15;
        (pGVar16->fields)._hoveredColor.b = fVar11;
        (pGVar16->fields)._hoveredColor.a = fVar12;
        return;
      }
    }
  }
code_?:
  FUN_?(pGVar5,ppGVar4,method);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapBoxDepth(ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = 1e-05;
    if (1e-05 <= depth) {
      fVar2 = depth;
    }
    (pGVar1->fields)._boxDepth = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMidCapBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapBoxHeight(ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = 1e-05;
    if (1e-05 <= height) {
      fVar2 = height;
    }
    (pGVar1->fields)._boxHeight = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMidCapBoxWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapBoxWidth(ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = 1e-05;
    if (1e-05 <= width) {
      fVar2 = width;
    }
    (pGVar1->fields)._boxWidth = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapColor(ScaleGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._color.r = color->r;
    (pGVar1->fields)._color.g = fVar2;
    (pGVar1->fields)._color.b = fVar3;
    (pGVar1->fields)._color.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMidCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapFillMode(ScaleGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._fillMode = fillMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapShadeMode(ScaleGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._shadeMode = shadeMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapSphereRadius(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapSphereRadius(ScaleGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = 1e-05;
    if (1e-05 <= radius) {
      fVar2 = radius;
    }
    (pGVar1->fields)._sphereRadius = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMidCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetMidCapType(ScaleGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  if ((capType == GizmoCap3DType__Enum_Box) || (capType == GizmoCap3DType__Enum_Sphere)) {
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pGVar1->fields)._capType = capType;
  }
  return;
}


/* Void SetNegativeSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetNegativeSliderVisible(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (axisIndex + 3U < (uint)pBVar1->max_length) {
    pBVar1->vector[(longlong)axisIndex + 3] = isVisible;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPositiveSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetPositiveSliderVisible(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    pBVar1->vector[axisIndex] = isVisible;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetScale(ScaleGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    uVar4 = uVar2;
    while ((int)uVar4 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar4) goto code_?;
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      fVar6 = scale;
      if (scale < 0.0) {
        fVar6 = 0.0;
      }
      pGVar7 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._scale = fVar6;
      if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= scale) {
        uVar4 = uVar4 + 1;
        (pGVar7->fields)._scale = scale;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
        (pGVar7->fields)._scale = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar8 = (this->fields)._dblSlidersLookAndFeel;
    if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar9 = pGVar8->vector;
      while ((int)uVar2 < (int)pGVar8->max_length) {
        if ((uint)pGVar8->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pGVar11 = *ppGVar9;
        if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        if (0.0 <= scale) {
          uVar2 = uVar2 + 1;
          (pGVar11->fields)._scale = scale;
          ppGVar9 = ppGVar9 + 1;
        }
        else {
          uVar2 = uVar2 + 1;
          (pGVar11->fields)._scale = 0.0;
          ppGVar9 = ppGVar9 + 1;
        }
      }
      pGVar7 = (this->fields)._midCapLookAndFeel;
      if (pGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
        fVar6 = 0.0;
        if (0.0 <= scale) {
          fVar6 = scale;
        }
        (pGVar7->fields)._scale = fVar6;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetScaleGuideAxisLength(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetScaleGuideAxisLength(ScaleGizmoLookAndFeel3D *this,float length,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleGuideLookAndFeel;
  if (pGVar1 != (GizmoScaleGuideLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= length) {
      fVar2 = length;
    }
    (pGVar1->fields)._axisLength = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSliderBoxCapDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderBoxCapDepth(ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= depth) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxDepth = depth;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxDepth = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderBoxCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderBoxCapHeight(ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxHeight = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderBoxCapWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderBoxCapWidth(ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= width) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxWidth = width;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxWidth = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderCapFillMode(ScaleGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0)) break;
      uVar2 = uVar2 + 1;
      (pGVar5->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderCapShadeMode(ScaleGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0)) break;
      uVar2 = uVar2 + 1;
      (pGVar5->fields)._shadeMode = shadeMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderCapType(ScaleGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0)) break;
      uVar2 = uVar2 + 1;
      (pGVar5->fields)._capType = capType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderConeCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderConeCapBaseRadius(ScaleGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= radius) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneRadius = radius;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneRadius = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderConeCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderConeCapHeight(ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneHeight = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderFillMode(ScaleGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderLength(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderLength(ScaleGizmoLookAndFeel3D *this,float axisLength,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoLineSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) break;
      if (0.0 <= axisLength) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._length = axisLength;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._length = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSliderLineType(GizmoLine3DType) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderLineType(ScaleGizmoLookAndFeel3D *this,GizmoLine3DType__Enum lineType,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._lineType = lineType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderPyramidCapDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderPyramidCapDepth(ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= depth) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidDepth = depth;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidDepth = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderPyramidCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderPyramidCapHeight(ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidHeight = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderPyramidCapWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderPyramidCapWidth(ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= width) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidWidth = width;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidWidth = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderShadeMode(ScaleGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._shadeMode = shadeMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderSphereCapRadius(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderSphereCapRadius(ScaleGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= radius) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._sphereRadius = radius;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._sphereRadius = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderTriPrismCapDepth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderTriPrismCapDepth(ScaleGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= depth) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismDepth = depth;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismDepth = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderTriPrismCapHeight(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderTriPrismCapHeight(ScaleGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismHeight = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderTriPrismCapWidth(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderTriPrismCapWidth(ScaleGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) || (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel, (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (1e-05 <= width) {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismWidth = width;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismWidth = 1e-05;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetSliderVisible(ScaleGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar1 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pBVar1->max_length) {
      pBVar1->vector[axisIndex] = isVisible;
      return;
    }
  }
  else {
    if (pBVar1 == (Boolean__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (axisIndex + 3U < (uint)pBVar1->max_length) {
      pBVar1->vector[(longlong)axisIndex + 3] = isVisible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_SetUseZoomFactor(ScaleGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) goto code_?;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      (pGVar4->fields)._useZoomFactor = useZoomFactor;
      if (pGVar5 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      (pGVar5->fields)._useZoomFactor = useZoomFactor;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar6 = (this->fields)._dblSlidersLookAndFeel;
    uVar2 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      for (; (int)uVar2 < (int)pGVar6->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pGVar6->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        ((*ppGVar7)->fields)._useZoomFactor = useZoomFactor;
        ppGVar7 = ppGVar7 + 1;
      }
      pGVar5 = (this->fields)._midCapLookAndFeel;
      if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
        (pGVar5->fields)._useZoomFactor = useZoomFactor;
        pGVar9 = (this->fields)._scaleGuideLookAndFeel;
        if (pGVar9 != (GizmoScaleGuideLookAndFeel *)0x0) {
          (pGVar9->fields)._useZoomFactor = useZoomFactor;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ScaleGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D__ctor(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  bVar2 = iRam_? != 0;
  (pGVar1->fields)._scale = 1.0;
  (pGVar1->fields)._useZoomFactor = 1;
  (pGVar1->fields)._coneHeight = 1.65;
  (pGVar1->fields)._coneRadius = 0.5;
  (pGVar1->fields)._pyramidHeight = 1.65;
  (pGVar1->fields)._pyramidWidth = 0.8;
  (pGVar1->fields)._pyramidDepth = 0.8;
  (pGVar1->fields)._boxWidth = 0.7;
  (pGVar1->fields)._boxHeight = 0.7;
  (pGVar1->fields)._boxDepth = 0.7;
  (pGVar1->fields)._sphereRadius = 0.45;
  (pGVar1->fields)._trPrismWidth = 1.0;
  (pGVar1->fields)._trPrismHeight = 1.0;
  (pGVar1->fields)._trPrismDepth = 1.0;
  (pGVar1->fields)._sphereBorderColor.r = 1.0;
  (pGVar1->fields)._sphereBorderColor.g = 1.0;
  (pGVar1->fields)._sphereBorderColor.b = 1.0;
  (pGVar1->fields)._sphereBorderColor.a = 1.0;
  (pGVar1->fields)._numSphereBorderPoints = 100;
  (pGVar1->fields)._color.r = 0.8588236;
  (pGVar1->fields)._color.g = 0.24313727;
  (pGVar1->fields)._color.b = 0.1137255;
  (pGVar1->fields)._color.a = 1.0;
  (pGVar1->fields)._hoveredColor.r = 0.96470594;
  (pGVar1->fields)._hoveredColor.g = 0.9490197;
  (pGVar1->fields)._hoveredColor.b = 0.19607845;
  (pGVar1->fields)._hoveredColor.a = 1.0;
  (this->fields)._midCapLookAndFeel = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._midCapLookAndFeel >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderVis = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sglSliderVis >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderCapVis = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sglSliderCapVis >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pBVar7 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  bVar2 = iRam_? != 0;
  (this->fields)._dblSliderVis = pBVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._dblSliderVis >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar8 = (GizmoScaleGuideLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
  bVar2 = iRam_? != 0;
  (pGVar8->fields)._useZoomFactor = 1;
  (pGVar8->fields)._xAxisColor.r = 0.8588236;
  (pGVar8->fields)._xAxisColor.g = 0.24313727;
  (pGVar8->fields)._xAxisColor.b = 0.1137255;
  (pGVar8->fields)._xAxisColor.a = 1.0;
  (pGVar8->fields)._axisLength = 2.0;
  (pGVar8->fields)._yAxisColor.r = 0.6039216;
  (pGVar8->fields)._yAxisColor.g = 0.95294124;
  (pGVar8->fields)._yAxisColor.b = 0.28235295;
  (pGVar8->fields)._yAxisColor.a = 1.0;
  (pGVar8->fields)._zAxisColor.r = 0.227451;
  (pGVar8->fields)._zAxisColor.g = 0.4784314;
  (pGVar8->fields)._zAxisColor.b = 0.9725491;
  (pGVar8->fields)._zAxisColor.a = 1.0;
  (this->fields)._scaleGuideLookAndFeel = pGVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._scaleGuideLookAndFeel >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._isScaleGuideVisible = 1;
  pGVar9 = (GizmoLineSlider3DLookAndFeel__Array *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSlidersLookAndFeel = pGVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sglSlidersLookAndFeel >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar10 = (GizmoPlaneSlider3DLookAndFeel__Array *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  bVar2 = iRam_? != 0;
  (this->fields)._dblSlidersLookAndFeel = pGVar10;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._dblSlidersLookAndFeel >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._sglSlidersLookAndFeel;
  uVar3 = 0;
  uVar11 = 0;
  if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    lVar12 = 0x20;
    lVar13 = 0x20;
    do {
      if ((int)pGVar9->max_length <= (int)uVar11) {
        pGVar10 = (this->fields)._dblSlidersLookAndFeel;
        uVar11 = 0;
        if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
        break;
      }
      pGVar9 = (this->fields)._sglSlidersLookAndFeel;
      pGVar14 = (GizmoLineSlider3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
      GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(pGVar14,(MethodInfo *)0x0);
      if (pGVar9 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
      if ((pGVar14 != (GizmoLineSlider3DLookAndFeel *)0x0) && (lVar15 = FUN_?(pGVar14), lVar15 == 0)) {
        uVar16 = FUN_?();
        FUN_?(uVar16,0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      if ((uint)pGVar9->max_length <= uVar11) goto code_?;
      bVar2 = iRam_? != 0;
      *(GizmoLineSlider3DLookAndFeel **)((longlong)pGVar9->vector + lVar13 + -0x20) = pGVar14;
      if (bVar2) {
        uVar18 = (uint)((ulonglong)(pGVar9->vector + (int)uVar11) >> 0xc);
        uVar4 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar18 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar9 = (this->fields)._sglSlidersLookAndFeel;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0);
  }
  goto code_?;
code_?:
  if ((int)pGVar9->max_length <= (int)uVar11) goto code_?;
  if ((uint)pGVar9->max_length <= uVar11) goto code_?;
  if ((*ppGVar19 == (GizmoLineSlider3DLookAndFeel *)0x0) || (pGVar1 = ((*ppGVar19)->fields)._capLookAndFeel, pGVar1 == (GizmoCap3DLookAndFeel *)0x0)) goto code_?;
  uVar11 = uVar11 + 1;
  (pGVar1->fields)._capType = 2;
  ppGVar19 = ppGVar19 + 1;
  goto code_?;
code_?:
  pGVar9 = (this->fields)._sglSlidersLookAndFeel;
  uVar11 = 0;
  if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar19 = pGVar9->vector;
    for (; (int)uVar11 < (int)pGVar9->max_length; uVar11 = uVar11 + 1) {
      if ((uint)pGVar9->max_length <= uVar11) goto code_?;
      if (*ppGVar19 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar19)->fields)._length = 5.5;
      ppGVar19 = ppGVar19 + 1;
    }
    aCStack_20[0].r = 0.8588236;
    aCStack_20[0].g = 0.24313727;
    aCStack_20[0].b = 0.1137255;
    aCStack_20[0].a = 1.0;
    ScaleGizmoLookAndFeel3D_SetAxisColor(this,0,aCStack_20,(MethodInfo *)0x0);
    aCStack_20[0].r = 0.6039216;
    aCStack_20[0].g = 0.95294124;
    aCStack_20[0].b = 0.28235295;
    aCStack_20[0].a = 1.0;
    ScaleGizmoLookAndFeel3D_SetAxisColor(this,1,aCStack_20,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._sglSlidersLookAndFeel;
    if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
      if ((uint)pGVar9->max_length < 3) goto code_?;
      pGVar14 = pGVar9->vector[2];
      if (pGVar14 != (GizmoLineSlider3DLookAndFeel *)0x0) {
        (pGVar14->fields)._color.r = 0.227451;
        (pGVar14->fields)._color.g = 0.4784314;
        (pGVar14->fields)._color.b = 0.9725491;
        (pGVar14->fields)._color.a = 1.0;
        pGVar9 = (this->fields)._sglSlidersLookAndFeel;
        if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
          if ((uint)pGVar9->max_length < 3) goto code_?;
          if ((pGVar9->vector[2] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar1 = (pGVar9->vector[2]->fields)._capLookAndFeel, pGVar1 != (GizmoCap3DLookAndFeel *)0x0)) {
            (pGVar1->fields)._color.r = 0.227451;
            (pGVar1->fields)._color.g = 0.4784314;
            (pGVar1->fields)._color.b = 0.9725491;
            (pGVar1->fields)._color.a = 1.0;
            pGVar9 = (this->fields)._sglSlidersLookAndFeel;
            if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
              if ((uint)pGVar9->max_length < 6) goto code_?;
              pGVar14 = pGVar9->vector[5];
              if (pGVar14 != (GizmoLineSlider3DLookAndFeel *)0x0) {
                (pGVar14->fields)._color.r = 0.227451;
                (pGVar14->fields)._color.g = 0.4784314;
                (pGVar14->fields)._color.b = 0.9725491;
                (pGVar14->fields)._color.a = 1.0;
                pGVar9 = (this->fields)._sglSlidersLookAndFeel;
                if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                  if ((uint)pGVar9->max_length < 6) goto code_?;
                  if ((pGVar9->vector[5] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar1 = (pGVar9->vector[5]->fields)._capLookAndFeel, pGVar1 != (GizmoCap3DLookAndFeel *)0x0)) {
                    (pGVar1->fields)._color.r = 0.227451;
                    (pGVar1->fields)._color.g = 0.4784314;
                    (pGVar1->fields)._color.b = 0.9725491;
                    (pGVar1->fields)._color.a = 1.0;
                    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if ((int)pGVar10->max_length == 0) goto code_?;
                      pGVar21 = pGVar10->vector[0];
                      pGVar8 = (this->fields)._scaleGuideLookAndFeel;
                      if (pGVar8 != (GizmoScaleGuideLookAndFeel *)0x0) {
                        (pGVar8->fields)._zAxisColor.r = 0.227451;
                        (pGVar8->fields)._zAxisColor.g = 0.4784314;
                        (pGVar8->fields)._zAxisColor.b = 0.9725491;
                        (pGVar8->fields)._zAxisColor.a = 1.0;
                        if (pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                          fVar22 = (pGVar21->fields)._color.a;
                          (pGVar21->fields)._borderColor.r = 0.227451;
                          (pGVar21->fields)._borderColor.g = 0.4784314;
                          (pGVar21->fields)._borderColor.b = 0.9725491;
                          (pGVar21->fields)._borderColor.a = 1.0;
                          (pGVar21->fields)._color.r = 0.227451;
                          (pGVar21->fields)._color.g = 0.4784314;
                          (pGVar21->fields)._color.b = 0.9725491;
                          (pGVar21->fields)._color.a = fVar22;
                          pGVar9 = (this->fields)._sglSlidersLookAndFeel;
                          uVar11 = 0;
                          if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                            ppGVar19 = pGVar9->vector;
                            for (; (int)uVar11 < (int)pGVar9->max_length; uVar11 = uVar11 + 1) {
                              if ((uint)pGVar9->max_length <= uVar11) goto code_?;
                              pGVar14 = *ppGVar19;
                              if (pGVar14 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
                              pGVar1 = (pGVar14->fields)._capLookAndFeel;
                              (pGVar14->fields)._hoveredColor.r = 0.96470594;
                              (pGVar14->fields)._hoveredColor.g = 0.9490197;
                              (pGVar14->fields)._hoveredColor.b = 0.19607845;
                              (pGVar14->fields)._hoveredColor.a = 1.0;
                              if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                              ppGVar19 = ppGVar19 + 1;
                              (pGVar1->fields)._hoveredColor.r = 0.96470594;
                              (pGVar1->fields)._hoveredColor.g = 0.9490197;
                              (pGVar1->fields)._hoveredColor.b = 0.19607845;
                              (pGVar1->fields)._hoveredColor.a = 1.0;
                            }
                            pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                            uVar11 = 0;
                            if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                              ppGVar23 = pGVar10->vector;
                              for (; (int)uVar11 < (int)pGVar10->max_length; uVar11 = uVar11 + 1) {
                                if ((uint)pGVar10->max_length <= uVar11) goto code_?;
                                pGVar21 = *ppGVar23;
                                if (pGVar21 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                                fVar22 = (pGVar21->fields)._color.a;
                                ppGVar23 = ppGVar23 + 1;
                                (pGVar21->fields)._hoveredBorderColor.r = 0.96470594;
                                (pGVar21->fields)._hoveredBorderColor.g = 0.9490197;
                                (pGVar21->fields)._hoveredBorderColor.b = 0.19607845;
                                (pGVar21->fields)._hoveredBorderColor.a = 1.0;
                                (pGVar21->fields)._hoveredColor.r = 0.96470594;
                                (pGVar21->fields)._hoveredColor.g = 0.9490197;
                                (pGVar21->fields)._hoveredColor.b = 0.19607845;
                                (pGVar21->fields)._hoveredColor.a = fVar22;
                              }
                              pGVar1 = (this->fields)._midCapLookAndFeel;
                              if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                (pGVar1->fields)._hoveredColor.r = 0.96470594;
                                (pGVar1->fields)._hoveredColor.g = 0.9490197;
                                (pGVar1->fields)._hoveredColor.b = 0.19607845;
                                (pGVar1->fields)._hoveredColor.a = 1.0;
                                pBVar7 = (this->fields)._sglSliderVis;
                                if (pBVar7 != (Boolean__Array *)0x0) {
                                  if ((int)pBVar7->max_length == 0) {
code_?:
                                    FUN_?();
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pBVar7->vector[0] = 1;
                                  pBVar7 = (this->fields)._sglSliderCapVis;
                                  if (pBVar7 != (Boolean__Array *)0x0) {
                                    if ((int)pBVar7->max_length == 0) goto code_?;
                                    pBVar7->vector[0] = 1;
                                    pBVar7 = (this->fields)._sglSliderVis;
                                    if (pBVar7 != (Boolean__Array *)0x0) {
                                      if ((uint)pBVar7->max_length < 2) goto code_?;
                                      pBVar7->vector[1] = 1;
                                      pBVar7 = (this->fields)._sglSliderCapVis;
                                      if (pBVar7 != (Boolean__Array *)0x0) {
                                        if ((uint)pBVar7->max_length < 2) goto code_?;
                                        pBVar7->vector[1] = 1;
                                        pBVar7 = (this->fields)._sglSliderVis;
                                        if (pBVar7 != (Boolean__Array *)0x0) {
                                          if ((uint)pBVar7->max_length < 3) goto code_?;
                                          pBVar7->vector[2] = 1;
                                          pBVar7 = (this->fields)._sglSliderCapVis;
                                          if (pBVar7 != (Boolean__Array *)0x0) {
                                            if ((uint)pBVar7->max_length < 3) goto code_?;
                                            pBVar7->vector[2] = 1;
                                            pGVar1 = (this->fields)._midCapLookAndFeel;
                                            if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                              (pGVar1->fields)._color.r = 0.8000001;
                                              (pGVar1->fields)._color.g = 0.8000001;
                                              (pGVar1->fields)._color.b = 0.8000001;
                                              (pGVar1->fields)._color.a = 1.0;
                                              pGVar1 = (this->fields)._midCapLookAndFeel;
                                              if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                (pGVar1->fields)._capType = 2;
                                                pGVar1 = (this->fields)._midCapLookAndFeel;
                                                if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                  (pGVar1->fields)._boxWidth = 0.9;
                                                  pGVar1 = (this->fields)._midCapLookAndFeel;
                                                  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                    (pGVar1->fields)._boxHeight = 0.9;
                                                    pGVar1 = (this->fields)._midCapLookAndFeel;
                                                    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      (pGVar1->fields)._boxDepth = 0.9;
                                                      pGVar1 = (this->fields)._midCapLookAndFeel;
                                                      if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        (pGVar1->fields)._sphereRadius = 0.65;
                                                        pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                                                        uVar11 = 0;
                                                        if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                          ppGVar23 = pGVar10->vector;
                                                          for (; (int)uVar11 < (int)pGVar10->max_length; uVar11 = uVar11 + 1) {
                                                            if ((uint)pGVar10->max_length <= uVar11) goto code_?;
                                                            pGVar21 = *ppGVar23;
                                                            if (pGVar21 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                                                            fVar22 = (pGVar21->fields)._color.g;
                                                            fVar24 = (pGVar21->fields)._color.b;
                                                            ppGVar23 = ppGVar23 + 1;
                                                            pCVar25 = &(pGVar21->fields)._hoveredColor;
                                                            fVar26 = pCVar25->r;
                                                            fVar27 = (pGVar21->fields)._hoveredColor.g;
                                                            aCStack_20[0].r = pCVar25->r;
                                                            aCStack_20[0].g = pCVar25->g;
                                                            aCStack_20[0].b = (pGVar21->fields)._hoveredColor.b;
                                                            (pGVar21->fields)._color.r = (pGVar21->fields)._color.r;
                                                            (pGVar21->fields)._color.g = fVar22;
                                                            (pGVar21->fields)._color.b = fVar24;
                                                            (pGVar21->fields)._color.a = 0.3;
                                                            (pGVar21->fields)._hoveredColor.r = fVar26;
                                                            (pGVar21->fields)._hoveredColor.g = fVar27;
                                                            (pGVar21->fields)._hoveredColor.b = aCStack_20[0].b;
                                                            (pGVar21->fields)._hoveredColor.a = 0.3;
                                                            aCStack_20[0].a = 0.3;
                                                          }
                                                          pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                                                          if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                            ppGVar23 = pGVar10->vector;
                                                            for (; (int)uVar3 < (int)pGVar10->max_length; uVar3 = uVar3 + 1) {
                                                              if ((uint)pGVar10->max_length <= uVar3) goto code_?;
                                                              pGVar21 = *ppGVar23;
                                                              if (pGVar21 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                                                              (pGVar21->fields)._raTriangleXLength = 1.9;
                                                              (pGVar21->fields)._raTriangleYLength = 1.9;
                                                              ppGVar23 = ppGVar23 + 1;
                                                            }
                                                            pBVar7 = (this->fields)._dblSliderVis;
                                                            if (pBVar7 != (Boolean__Array *)0x0) {
                                                              if ((int)pBVar7->max_length != 0) {
                                                                pBVar7->vector[0] = 1;
                                                                pBVar7 = (this->fields)._dblSliderVis;
                                                                if (pBVar7 == (Boolean__Array *)0x0) goto code_?;
                                                                if (1 < (uint)pBVar7->max_length) {
                                                                  pBVar7->vector[1] = 1;
                                                                  pBVar7 = (this->fields)._dblSliderVis;
                                                                  if (pBVar7 == (Boolean__Array *)0x0) goto code_?;
                                                                  if (2 < (uint)pBVar7->max_length) {
                                                                    pBVar7->vector[2] = 1;
                                                                    return;
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
  goto code_?;
  while( true ) {
    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
    pGVar21 = (GizmoPlaneSlider3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar21,(MethodInfo *)0x0);
    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) && (lVar13 = FUN_?(pGVar21), lVar13 == 0)) {
      uVar16 = FUN_?();
      FUN_?(uVar16,0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    if ((uint)pGVar10->max_length <= uVar11) goto code_?;
    bVar2 = iRam_? != 0;
    *(GizmoPlaneSlider3DLookAndFeel **)((longlong)pGVar10->vector + lVar12 + -0x20) = pGVar21;
    if (bVar2) {
      uVar18 = (uint)((ulonglong)(pGVar10->vector + (int)uVar11) >> 0xc);
      uVar4 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar18 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((uint)pGVar10->max_length <= uVar11) goto code_?;
    lVar13 = *(longlong *)((longlong)pGVar10->vector + lVar12 + -0x20);
    if (lVar13 == 0) break;
    *(undefined4 *)(lVar13 + 0x10) = 1;
    uVar11 = uVar11 + 1;
    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
    lVar12 = lVar12 + 8;
    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar10->max_length <= (int)uVar11) {
      pGVar9 = (this->fields)._sglSlidersLookAndFeel;
      uVar11 = 0;
      if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar19 = pGVar9->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Single get_BoxSliderDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_BoxSliderDepth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._boxDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_BoxSliderHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_BoxSliderHeight(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._boxHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_DblSliderFillAlpha() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_DblSliderFillAlpha(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._color.a;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_DblSliderSize() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_DblSliderSize(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._raTriangleXLength;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_HoveredColor(Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._hoveredColor.g;
      fVar6 = (pGVar4->fields)._hoveredColor.b;
      fVar7 = (pGVar4->fields)._hoveredColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._hoveredColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Single get_MidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapBoxDepth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._boxDepth;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MidCapBoxHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapBoxHeight(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._boxHeight;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapBoxWidth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._boxWidth;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_MidCapColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapColor(Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._color.g;
    fVar3 = (pGVar1->fields)._color.b;
    fVar4 = (pGVar1->fields)._color.a;
    __return_storage_ptr__->r = (pGVar1->fields)._color.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* GizmoFillMode3D get_MidCapFillMode() */

GizmoFillMode3D__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapFillMode(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._fillMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_MidCapSphereRadius() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapSphereRadius(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._sphereRadius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoCap3DType get_MidCapType() */

GizmoCap3DType__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_MidCapType(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._capType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_Scale() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_Scale(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._scale;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScaleGuideAxisLength() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_ScaleGuideAxisLength(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleGuideLookAndFeel;
  if (pGVar1 != (GizmoScaleGuideLookAndFeel *)0x0) {
    return (pGVar1->fields)._axisLength;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderBoxCapDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderBoxCapDepth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._boxDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderBoxCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderBoxCapHeight(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._boxHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderBoxCapWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderBoxCapWidth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._boxWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_SliderCapFillMode() */

GizmoFillMode3D__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderCapFillMode(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoShadeMode get_SliderCapShadeMode() */

GizmoShadeMode__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderCapShadeMode(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._shadeMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCap3DType get_SliderCapType() */

GizmoCap3DType__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderCapType(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._capType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_SliderConeCapBaseRadius() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderConeCapBaseRadius(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._coneRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderConeCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderConeCapHeight(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._coneHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_SliderFillMode() */

GizmoFillMode3D__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderFillMode(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoLine3DType get_SliderLineType() */

GizmoLine3DType__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderLineType(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._lineType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_SliderPyramidCapDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderPyramidCapDepth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._pyramidDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderPyramidCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderPyramidCapHeight(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._pyramidHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderPyramidCapWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderPyramidCapWidth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._pyramidWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoShadeMode get_SliderShadeMode() */

GizmoShadeMode__Enum Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderShadeMode(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._shadeMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_SliderSphereCapRadius() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderSphereCapRadius(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._sphereRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderTriPrismCapDepth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapDepth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._trPrismDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderTriPrismCapHeight() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapHeight(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._trPrismHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderTriPrismCapWidth() */

float Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_SliderTriPrismCapWidth(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._trPrismWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean get_UseZoomFactor() */

bool Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_UseZoomFactor(ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._useZoomFactor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Color get_XColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_XColor(Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._color.g;
      fVar6 = (pGVar4->fields)._color.b;
      fVar7 = (pGVar4->fields)._color.a;
      __return_storage_ptr__->r = (pGVar4->fields)._color.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_YColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_YColor(Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._color.g;
      fVar6 = (pGVar4->fields)._color.b;
      fVar7 = (pGVar4->fields)._color.a;
      __return_storage_ptr__->r = (pGVar4->fields)._color.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_ZColor() */

Color * Assembly-CSharp.dll::RTG::ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_ZColor(Color *__return_storage_ptr__,ScaleGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[2];
    if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._color.g;
      fVar6 = (pGVar4->fields)._color.b;
      fVar7 = (pGVar4->fields)._color.a;
      __return_storage_ptr__->r = (pGVar4->fields)._color.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}

