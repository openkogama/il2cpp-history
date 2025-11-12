
/* Void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectMvDblSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *dblSlider,
               PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((PlaneId__Enum)pGVar1->max_length <= planeId) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (dblSlider != (GizmoPlaneSlider3D *)0x0) {
      bVar3 = iRam_? != 0;
      (dblSlider->fields)._sharedLookAndFeel = pGVar1->vector[(int)planeId];
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(dblSlider->fields)._sharedLookAndFeel >> 0xc);
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


/* Void ConnectMvSliderLookAndFeel(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectMvSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void ConnectMvVertSnapCapLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectMvVertSnapCapLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoCap2D *vertSnapCap,MethodInfo *method)

{
  if (vertSnapCap == (GizmoCap2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (vertSnapCap->fields)._sharedLookAndFeel = (this->fields)._mvVertSnapCapLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(vertSnapCap->fields)._sharedLookAndFeel >> 0xc);
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


/* Void ConnectRtCamLookSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectRtCamLookSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedLookAndFeel = (this->fields)._rtCamLookSliderLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
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


/* Void ConnectRtMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectRtMidCapLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cap == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (cap->fields)._sharedLookAndFeel = (this->fields)._rtMidCapLookAndFeel;
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


/* Void ConnectRtSliderLookAndFeel(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectRtSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      bVar3 = iRam_? != 0;
      (slider->fields)._sharedLookAndFeel = pGVar1->vector[axisIndex];
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


/* Void ConnectScDblSliderLookAndFeel(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScDblSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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


/* Void ConnectScGizmoScaleGuideLookAndFeel(GizmoScaleGuide) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScGizmoScaleGuideLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoScaleGuide *scaleGuide,MethodInfo *method)

{
  if (scaleGuide == (GizmoScaleGuide *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (scaleGuide->fields)._sharedLookAndFeel = (this->fields)._scScaleGuideLookAndFeel;
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


/* Void ConnectScMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScMidCapLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cap == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (cap->fields)._sharedLookAndFeel = (this->fields)._scMidCapLookAndFeel;
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


/* Void ConnectScSliderLookAndFeel(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_ConnectScSliderLookAndFeel
               (UniversalGizmoLookAndFeel3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* List`1[System.Enum] GetAllowedMvVertSnapCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetAllowedMvVertSnapCapTypes
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap2DType);
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
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
  uStackX_18 = 1;
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoCap2DType,&uStackX_18);
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
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
      }
      pGVar6 = TypeInfo__RTG__GizmoCap2DType;
      pOVar1 = (Object *)0x0;
      uStackX_18 = 0;
      iVar7._0_2_ = (TypeInfo__RTG__GizmoCap2DType->_0).byval_arg.attrs;
      iVar7._2_1_ = (TypeInfo__RTG__GizmoCap2DType->_0).byval_arg.type;
      iVar7._3_1_ = (TypeInfo__RTG__GizmoCap2DType->_0).byval_arg.field_0xb;
      if (iVar7 < 0) {
        if (((TypeInfo__RTG__GizmoCap2DType->_0).generic_class == (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__RTG__GizmoCap2DType->_1).field_0x6d & 8) == 0)) {
          pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoCap2DType);
          FUN_?(pOVar1 + 1,&uStackX_18,(longlong)(int)(pGVar6->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
        }
      }
      else {
        pOVar1 = (Object *)((ulonglong)uStackX_1c << 0x20);
      }
      pMVar2 = MethodInfo__System__Collections__Generic__List<System::Enum>__Add_System__Enum_;
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      pOVar4 = (this_00->fields)._items;
      if (pOVar4 != (Object__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if (uVar5 < (uint)pOVar4->max_length) {
          (this_00->fields)._size = uVar5 + 1;
          FUN_?(pOVar4,(longlong)(int)uVar5,pOVar1);
          return (List_1_System_Enum_ *)this_00;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
        return (List_1_System_Enum_ *)this_00;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pLVar12 = (List_1_System_Enum_ *)(*pcVar11)();
  return pLVar12;
}


/* List`1[System.Enum] GetAllowedScMidCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetAllowedScMidCapTypes
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

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
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
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
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
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
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
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


/* GizmoPlaneSlider3DLookAndFeel GetMvDblSliderLookAndFeel(PlaneId) */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetMvDblSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* GizmoLineSlider3DLookAndFeel GetMvSglSliderLookAndFeel(Int32, AxisSign) */

GizmoLineSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetMvSglSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* GizmoPlaneSlider3DLookAndFeel GetScDblSliderLookAndFeel(PlaneId) */

GizmoPlaneSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetScDblSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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


/* GizmoLineSlider3DLookAndFeel GetScSglSliderLookAndFeel(Int32, AxisSign) */

GizmoLineSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_GetScSglSliderLookAndFeel
          (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void Inherit(MoveGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_Inherit
               (UniversalGizmoLookAndFeel3D *this,MoveGizmoLookAndFeel3D *lookAndFeel,
               MethodInfo *method)

{
  if ((lookAndFeel != (MoveGizmoLookAndFeel3D *)0x0) &&
     (pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel,
     pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0)) {
    if ((int)pGVar1->max_length == 0) goto code_?;
    pGVar2 = pGVar1->vector[0];
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      aCStack_3[0].r = (pGVar2->fields)._color.r;
      aCStack_3[0].g = (pGVar2->fields)._color.g;
      aCStack_3[0].b = (pGVar2->fields)._color.b;
      aCStack_3[0].a = (pGVar2->fields)._color.a;
      UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,0,aCStack_3,(MethodInfo *)0x0);
      pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length < 2) goto code_?;
        pGVar2 = pGVar1->vector[1];
        if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
          aCStack_3[0].r = (pGVar2->fields)._color.r;
          aCStack_3[0].g = (pGVar2->fields)._color.g;
          aCStack_3[0].b = (pGVar2->fields)._color.b;
          aCStack_3[0].a = (pGVar2->fields)._color.a;
          UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,1,aCStack_3,(MethodInfo *)0x0);
          pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length < 3) goto code_?;
            pGVar2 = pGVar1->vector[2];
            if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
              pCVar4 = &(pGVar2->fields)._color;
              fVar5 = pCVar4->r;
              fVar6 = (pGVar2->fields)._color.g;
              uVar7._0_4_ = pCVar4->r;
              uVar7._4_4_ = pCVar4->g;
              fVar8 = (pGVar2->fields)._color.b;
              fVar9 = (pGVar2->fields)._color.a;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length < 3) goto code_?;
                pGVar2 = pGVar1->vector[2];
                if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
                  (pGVar2->fields)._color.r = fVar5;
                  (pGVar2->fields)._color.g = fVar6;
                  (pGVar2->fields)._color.b = fVar8;
                  (pGVar2->fields)._color.a = fVar9;
                  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
                  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                    if ((uint)pGVar1->max_length < 3) goto code_?;
                    if ((pGVar1->vector[2] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                       (pGVar10 = (pGVar1->vector[2]->fields)._capLookAndFeel,
                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                      (pGVar10->fields)._color.r = fVar5;
                      (pGVar10->fields)._color.g = fVar6;
                      (pGVar10->fields)._color.b = fVar8;
                      (pGVar10->fields)._color.a = fVar9;
                      pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
                      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                        if ((uint)pGVar1->max_length < 6) goto code_?;
                        pGVar2 = pGVar1->vector[5];
                        if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
                          (pGVar2->fields)._color.r = fVar5;
                          (pGVar2->fields)._color.g = fVar6;
                          (pGVar2->fields)._color.b = fVar8;
                          (pGVar2->fields)._color.a = fVar9;
                          pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
                          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                            if ((uint)pGVar1->max_length < 6) goto code_?;
                            if ((pGVar1->vector[5] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                               (pGVar10 = (pGVar1->vector[5]->fields)._capLookAndFeel,
                               pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                              (pGVar10->fields)._color.r = fVar5;
                              (pGVar10->fields)._color.g = fVar6;
                              (pGVar10->fields)._color.b = fVar8;
                              (pGVar10->fields)._color.a = fVar9;
                              pGVar11 = (this->fields)._mvDblSlidersLookAndFeel;
                              if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                if ((int)pGVar11->max_length == 0) goto code_?;
                                pGVar12 = pGVar11->vector[0];
                                if (pGVar12 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  aCStack_3[0].a = (pGVar12->fields)._color.a;
                                  (pGVar12->fields)._color.r = fVar5;
                                  (pGVar12->fields)._color.g = fVar6;
                                  (pGVar12->fields)._color.b = fVar8;
                                  (pGVar12->fields)._color.a = aCStack_3[0].a;
                                  (pGVar12->fields)._borderColor.r = fVar5;
                                  (pGVar12->fields)._borderColor.g = fVar6;
                                  (pGVar12->fields)._borderColor.b = fVar8;
                                  (pGVar12->fields)._borderColor.a = fVar9;
                                  pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
                                  aCStack_3[0].b = fVar8;
                                  aCStack_3[0]._0_8_ = uVar7;
                                  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                    if ((int)pGVar1->max_length == 0) goto code_?;
                                    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
                                      pGVar13 = (this->fields)._mvSglSlidersLookAndFeel;
                                      uVar14 = 0;
                                      fVar5 = (pGVar1->vector[0]->fields)._boxDepth;
                                      uVar15 = 0;
                                      if (pGVar13 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                        ppGVar16 = pGVar13->vector;
                                        while ((int)uVar15 < (int)pGVar13->max_length) {
                                          if ((uint)pGVar13->max_length <= uVar15)
                                          goto code_?;
                                          pGVar2 = *ppGVar16;
                                          if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0)
                                          goto code_?;
                                          if (0.0 <= fVar5) {
                                            uVar15 = uVar15 + 1;
                                            (pGVar2->fields)._boxDepth = fVar5;
                                            ppGVar16 = ppGVar16 + 1;
                                          }
                                          else {
                                            uVar15 = uVar15 + 1;
                                            (pGVar2->fields)._boxDepth = 0.0;
                                            ppGVar16 = ppGVar16 + 1;
                                          }
                                        }
                                        pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
                                        if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                          if ((int)pGVar1->max_length == 0)
                                          goto code_?;
                                          if (pGVar1->vector[0] !=
                                              (GizmoLineSlider3DLookAndFeel *)0x0) {
                                            pGVar13 = (this->fields)._mvSglSlidersLookAndFeel;
                                            fVar5 = (pGVar1->vector[0]->fields)._boxHeight;
                                            uVar15 = 0;
                                            if (pGVar13 !=
                                                (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                              ppGVar16 = pGVar13->vector;
                                              while ((int)uVar15 < (int)pGVar13->max_length) {
                                                if ((uint)pGVar13->max_length <= uVar15)
                                                goto code_?;
                                                pGVar2 = *ppGVar16;
                                                if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0)
                                                goto code_?;
                                                if (0.0 <= fVar5) {
                                                  uVar15 = uVar15 + 1;
                                                  (pGVar2->fields)._boxHeight = fVar5;
                                                  ppGVar16 = ppGVar16 + 1;
                                                }
                                                else {
                                                  uVar15 = uVar15 + 1;
                                                  (pGVar2->fields)._boxHeight = 0.0;
                                                  ppGVar16 = ppGVar16 + 1;
                                                }
                                              }
                                              pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
                                              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)
                                                            0x0) {
                                                if ((int)pGVar1->max_length == 0)
                                                goto code_?;
                                                if (pGVar1->vector[0] !=
                                                    (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                  pGVar13 = (this->fields)._mvSglSlidersLookAndFeel;
                                                  fVar5 = (pGVar1->vector[0]->fields).
                                                           _cylinderRadius;
                                                  uVar15 = 0;
                                                  if (pGVar13 !=
                                                      (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar13->vector;
                                                    while ((int)uVar15 < (int)pGVar13->max_length) {
                                                      if ((uint)pGVar13->max_length <= uVar15)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar16;
                                                      if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      if (0.0 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar2->fields)._cylinderRadius = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar2->fields)._cylinderRadius = 0.0;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar11 = (lookAndFeel->fields).
                                                             _dblSlidersLookAndFeel;
                                                    if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar17 = (this->fields).
                                                                _mvDblSlidersLookAndFeel;
                                                      fVar5 = (pGVar11->vector[0]->fields).
                                                               _borderBoxDepth;
                                                      uVar15 = 0;
                                                      if (pGVar17 !=
                                                          (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                          0x0) {
                                                        ppGVar18 = pGVar17->vector;
                                                        while ((int)uVar15 <
                                                               (int)pGVar17->max_length) {
                                                          if ((uint)pGVar17->max_length <= uVar15)
                                                          goto code_?;
                                                          pGVar12 = *ppGVar18;
                                                          if (pGVar12 == (
                                                  GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                  goto code_?;
                                                  if (0.0 <= fVar5) {
                                                    uVar15 = uVar15 + 1;
                                                    (pGVar12->fields)._borderBoxDepth = fVar5;
                                                    ppGVar18 = ppGVar18 + 1;
                                                  }
                                                  else {
                                                    uVar15 = uVar15 + 1;
                                                    (pGVar12->fields)._borderBoxDepth = 0.0;
                                                    ppGVar18 = ppGVar18 + 1;
                                                  }
                                                  }
                                                  pGVar11 = (lookAndFeel->fields).
                                                           _dblSlidersLookAndFeel;
                                                  if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar17 = (this->fields).
                                                                _mvDblSlidersLookAndFeel;
                                                      fVar5 = (pGVar11->vector[0]->fields).
                                                               _borderBoxHeight;
                                                      uVar15 = 0;
                                                      if (pGVar17 !=
                                                          (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                          0x0) {
                                                        ppGVar18 = pGVar17->vector;
                                                        while ((int)uVar15 <
                                                               (int)pGVar17->max_length) {
                                                          if ((uint)pGVar17->max_length <= uVar15)
                                                          goto code_?;
                                                          pGVar12 = *ppGVar18;
                                                          if (pGVar12 == (
                                                  GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                  goto code_?;
                                                  if (0.0 <= fVar5) {
                                                    uVar15 = uVar15 + 1;
                                                    (pGVar12->fields)._borderBoxHeight = fVar5;
                                                    ppGVar18 = ppGVar18 + 1;
                                                  }
                                                  else {
                                                    uVar15 = uVar15 + 1;
                                                    (pGVar12->fields)._borderBoxHeight = 0.0;
                                                    ppGVar18 = ppGVar18 + 1;
                                                  }
                                                  }
                                                  pGVar11 = (lookAndFeel->fields).
                                                           _dblSlidersLookAndFeel;
                                                  if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar17 = (this->fields).
                                                                _mvDblSlidersLookAndFeel;
                                                      iVar19 = (pGVar11->vector[0]->fields).
                                                              _borderFillMode;
                                                      uVar15 = 0;
                                                      if (pGVar17 !=
                                                          (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                          0x0) {
                                                        ppGVar18 = pGVar17->vector;
                                                        for (; (int)uVar15 <
                                                               (int)pGVar17->max_length;
                                                            uVar15 = uVar15 + 1) {
                                                          if ((uint)pGVar17->max_length <= uVar15)
                                                          goto code_?;
                                                          if (*ppGVar18 ==
                                                              (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          ((*ppGVar18)->fields)._borderFillMode =
                                                               iVar19;
                                                          ppGVar18 = ppGVar18 + 1;
                                                        }
                                                        pGVar11 = (lookAndFeel->fields).
                                                                 _dblSlidersLookAndFeel;
                                                        if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar17 = (this->fields).
                                                                _mvDblSlidersLookAndFeel;
                                                      iVar19 = (pGVar11->vector[0]->fields).
                                                              _borderShadeMode;
                                                      uVar15 = 0;
                                                      if (pGVar17 !=
                                                          (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                          0x0) {
                                                        ppGVar18 = pGVar17->vector;
                                                        for (; (int)uVar15 <
                                                               (int)pGVar17->max_length;
                                                            uVar15 = uVar15 + 1) {
                                                          if ((uint)pGVar17->max_length <= uVar15)
                                                          goto code_?;
                                                          if (*ppGVar18 ==
                                                              (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          ((*ppGVar18)->fields)._borderShadeMode =
                                                               iVar19;
                                                          ppGVar18 = ppGVar18 + 1;
                                                        }
                                                        pGVar11 = (lookAndFeel->fields).
                                                                 _dblSlidersLookAndFeel;
                                                        if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar17 = (this->fields).
                                                                _mvDblSlidersLookAndFeel;
                                                      iVar19 = (pGVar11->vector[0]->fields).
                                                              _quadBorderType;
                                                      uVar15 = 0;
                                                      if (pGVar17 !=
                                                          (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                          0x0) {
                                                        ppGVar18 = pGVar17->vector;
                                                        for (; (int)uVar15 <
                                                               (int)pGVar17->max_length;
                                                            uVar15 = uVar15 + 1) {
                                                          if ((uint)pGVar17->max_length <= uVar15)
                                                          goto code_?;
                                                          if (*ppGVar18 ==
                                                              (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          ((*ppGVar18)->fields)._quadBorderType =
                                                               iVar19;
                                                          ppGVar18 = ppGVar18 + 1;
                                                        }
                                                        pGVar11 = (lookAndFeel->fields).
                                                                 _dblSlidersLookAndFeel;
                                                        if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                                            
                                                  UniversalGizmoLookAndFeel3D_SetMvDblSliderFillAlpha
                                                            (this,(pGVar11->vector[0]->fields)._color
                                                                  .a,(MethodInfo *)0x0);
                                                  pGVar11 = (lookAndFeel->fields).
                                                           _dblSlidersLookAndFeel;
                                                  if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      UniversalGizmoLookAndFeel3D_SetMvDblSliderSize
                                                                (this,(pGVar11->vector[0]->fields).
                                                                      _quadWidth,(MethodInfo *)0x0);
                                                      pBVar20 = (lookAndFeel->fields)._dblSliderVis;
                                                      if (pBVar20 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar20->max_length == 0) {
code_?:
                                                          FUN_?();
                                                          pcVar21 = (code *)swi(3);
                                                          (*pcVar21)();
                                                          return;
                                                        }
                                                        pBVar22 = (this->fields)._mvDblSliderVis;
                                                        if (pBVar22 != (Boolean__Array *)0x0) {
                                                          if ((int)pBVar22->max_length == 0)
                                                          goto code_?;
                                                          pBVar22->vector[0] =
                                                               pBVar20->vector[0] != 0;
                                                          pBVar20 = (lookAndFeel->fields).
                                                                    _dblSliderVis;
                                                          if (pBVar20 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar20->max_length < 2)
                                                            goto code_?;
                                                            pBVar22 = (this->fields)._mvDblSliderVis
                                                            ;
                                                            if (pBVar22 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar22->max_length < 2)
                                                              goto code_?;
                                                              pBVar22->vector[1] =
                                                                   pBVar20->vector[1] != 0;
                                                              pBVar20 = (lookAndFeel->fields).
                                                                        _dblSliderVis;
                                                              if (pBVar20 != (Boolean__Array *)0x0)
                                                              {
                                                                if ((uint)pBVar20->max_length < 3)
                                                                goto code_?;
                                                                pBVar22 = (this->fields).
                                                                          _mvDblSliderVis;
                                                                if (pBVar22 != (Boolean__Array *)0x0
                                                                   ) {
                                                                  if ((uint)pBVar22->max_length < 3)
                                                                  goto code_?;
                                                                  pBVar22->vector[2] =
                                                                       pBVar20->vector[2] != 0;
                                                                  pGVar1 = (lookAndFeel->fields).
                                                                           _sglSlidersLookAndFeel;
                                                                  if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    pGVar2 = pGVar1->vector[0];
                                                    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)
                                                                  0x0) {
                                                      aCStack_3[0].r =
                                                           (pGVar2->fields)._hoveredColor.r;
                                                      aCStack_3[0].g =
                                                           (pGVar2->fields)._hoveredColor.g;
                                                      aCStack_3[0].b =
                                                           (pGVar2->fields)._hoveredColor.b;
                                                      aCStack_3[0].a =
                                                           (pGVar2->fields)._hoveredColor.a;
                                                      UniversalGizmoLookAndFeel3D_SetMvHoveredColor
                                                                (this,aCStack_3,(MethodInfo *)0x0);
                                                      pGVar10 = (lookAndFeel->fields).
                                                               _midCapLookAndFeel;
                                                      if (pGVar10 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        pGVar1 = (this->fields).
                                                                 _mvSglSlidersLookAndFeel;
                                                        uVar15 = 0;
                                                        fVar5 = (pGVar10->fields)._scale;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar16;
                                                      if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      fVar6 = fVar5;
                                                      if (fVar5 < 0.0) {
                                                        fVar6 = 0.0;
                                                      }
                                                      pGVar10 = (pGVar2->fields)._capLookAndFeel;
                                                      (pGVar2->fields)._scale = fVar6;
                                                      if (pGVar10 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      if (0.0 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._scale = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._scale = 0.0;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar11 = (this->fields)._mvDblSlidersLookAndFeel
                                                    ;
                                                    uVar15 = 0;
                                                    if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar18 = pGVar11->vector;
                                                    while (fVar6 = _UNK_?,
                                                          (int)uVar15 < (int)pGVar11->max_length) {
                                                      if ((uint)pGVar11->max_length <= uVar15)
                                                      goto code_?;
                                                      pGVar12 = *ppGVar18;
                                                      if (pGVar12 == (GizmoPlaneSlider3DLookAndFeel *
                                                                    )0x0) goto code_?;
                                                      if (0.0 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar12->fields)._scale = fVar5;
                                                        ppGVar18 = ppGVar18 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar12->fields)._scale = 0.0;
                                                        ppGVar18 = ppGVar18 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._boxDepth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._boxDepth = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._boxDepth = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._boxHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._boxHeight = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._boxHeight = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._boxWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._boxWidth = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._boxWidth = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      iVar19 = (pGVar10->fields)._fillMode;
                                                      uVar15 = 0;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    for (; (int)uVar15 < (int)pGVar1->max_length;
                                                        uVar15 = uVar15 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar10->fields)._fillMode = iVar19;
                                                      ppGVar16 = ppGVar16 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      iVar19 = (pGVar10->fields)._shadeMode;
                                                      uVar15 = 0;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    for (; (int)uVar15 < (int)pGVar1->max_length;
                                                        uVar15 = uVar15 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar10->fields)._shadeMode = iVar19;
                                                      ppGVar16 = ppGVar16 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      iVar19 = (pGVar10->fields)._capType;
                                                      uVar15 = 0;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    for (; (int)uVar15 < (int)pGVar1->max_length;
                                                        uVar15 = uVar15 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar10->fields)._capType = iVar19;
                                                      ppGVar16 = ppGVar16 + 1;
                                                    }
                                                    pBVar20 = (lookAndFeel->fields)._sglSliderCapVis
                                                    ;
                                                    if (pBVar20 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar20->max_length == 0)
                                                      goto code_?;
                                                      pBVar22 = (this->fields)._mvSglSliderCapVis;
                                                      if (pBVar22 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar22->max_length == 0)
                                                        goto code_?;
                                                        pBVar22->vector[0] = pBVar20->vector[0] != 0
                                                        ;
                                                        pBVar20 = (lookAndFeel->fields).
                                                                  _sglSliderCapVis;
                                                        if (pBVar20 != (Boolean__Array *)0x0) {
                                                          if ((uint)pBVar20->max_length < 2)
                                                          goto code_?;
                                                          pBVar22 = (this->fields).
                                                                    _mvSglSliderCapVis;
                                                          if (pBVar22 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar22->max_length < 2)
                                                            goto code_?;
                                                            pBVar22->vector[1] =
                                                                 pBVar20->vector[1] != 0;
                                                            pBVar20 = (lookAndFeel->fields).
                                                                      _sglSliderCapVis;
                                                            if (pBVar20 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar20->max_length < 3)
                                                              goto code_?;
                                                              pBVar22 = (this->fields).
                                                                        _mvSglSliderCapVis;
                                                              if (pBVar22 != (Boolean__Array *)0x0)
                                                              {
                                                                if ((uint)pBVar22->max_length < 3)
                                                                goto code_?;
                                                                pBVar22->vector[2] =
                                                                     pBVar20->vector[2] != 0;
                                                                pBVar20 = (lookAndFeel->fields).
                                                                          _sglSliderCapVis;
                                                                if (pBVar20 != (Boolean__Array *)0x0
                                                                   ) {
                                                                  if ((uint)pBVar20->max_length < 4)
                                                                  goto code_?;
                                                                  pBVar22 = (this->fields).
                                                                            _mvSglSliderCapVis;
                                                                  if (pBVar22 !=
                                                                      (Boolean__Array *)0x0) {
                                                                    if ((uint)pBVar22->max_length <
                                                                        4) goto code_?
                                                                           ;
                                                                    pBVar22->vector[3] =
                                                                         pBVar20->vector[3] != 0;
                                                                    pBVar20 = (lookAndFeel->fields).
                                                                              _sglSliderCapVis;
                                                                    if (pBVar20 !=
                                                                        (Boolean__Array *)0x0) {
                                                                      if ((uint)pBVar20->max_length
                                                                          < 5) goto 
                                                  code_?;
                                                  pBVar22 = (this->fields)._mvSglSliderCapVis;
                                                  if (pBVar22 != (Boolean__Array *)0x0) {
                                                    if ((uint)pBVar22->max_length < 5)
                                                    goto code_?;
                                                    pBVar22->vector[4] = pBVar20->vector[4] != 0;
                                                    pBVar20 = (lookAndFeel->fields)._sglSliderCapVis
                                                    ;
                                                    if (pBVar20 != (Boolean__Array *)0x0) {
                                                      if ((uint)pBVar20->max_length < 6)
                                                      goto code_?;
                                                      pBVar22 = (this->fields)._mvSglSliderCapVis;
                                                      if (pBVar22 != (Boolean__Array *)0x0) {
                                                        if ((uint)pBVar22->max_length < 6)
                                                        goto code_?;
                                                        pBVar22->vector[5] = pBVar20->vector[5] != 0
                                                        ;
                                                        pGVar1 = (lookAndFeel->fields).
                                                                 _sglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._coneHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._coneHeight = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._coneHeight = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._coneRadius;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._coneRadius = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._coneRadius = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      pGVar13 = (this->fields).
                                                                _mvSglSlidersLookAndFeel;
                                                      iVar19 = (pGVar1->vector[0]->fields)._fillMode;
                                                      uVar15 = 0;
                                                      if (pGVar13 !=
                                                          (GizmoLineSlider3DLookAndFeel__Array *)0x0
                                                         ) {
                                                        ppGVar16 = pGVar13->vector;
                                                        for (; (int)uVar15 <
                                                               (int)pGVar13->max_length;
                                                            uVar15 = uVar15 + 1) {
                                                          if ((uint)pGVar13->max_length <= uVar15)
                                                          goto code_?;
                                                          if (*ppGVar16 ==
                                                              (GizmoLineSlider3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          ((*ppGVar16)->fields)._fillMode = iVar19;
                                                          ppGVar16 = ppGVar16 + 1;
                                                        }
                                                        pGVar1 = (lookAndFeel->fields).
                                                                 _sglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      UniversalGizmoLookAndFeel3D_SetMvSliderLength
                                                                (this,(pGVar1->vector[0]->fields).
                                                                      _length,(MethodInfo *)0x0);
                                                      pGVar1 = (lookAndFeel->fields).
                                                               _sglSlidersLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      pGVar13 = (this->fields).
                                                                _mvSglSlidersLookAndFeel;
                                                      iVar19 = (pGVar1->vector[0]->fields)._lineType;
                                                      uVar15 = 0;
                                                      if (pGVar13 !=
                                                          (GizmoLineSlider3DLookAndFeel__Array *)0x0
                                                         ) {
                                                        ppGVar16 = pGVar13->vector;
                                                        for (; (int)uVar15 <
                                                               (int)pGVar13->max_length;
                                                            uVar15 = uVar15 + 1) {
                                                          if ((uint)pGVar13->max_length <= uVar15)
                                                          goto code_?;
                                                          if (*ppGVar16 ==
                                                              (GizmoLineSlider3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          ((*ppGVar16)->fields)._lineType = iVar19;
                                                          ppGVar16 = ppGVar16 + 1;
                                                        }
                                                        pGVar1 = (lookAndFeel->fields).
                                                                 _sglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._pyramidDepth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._pyramidDepth = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._pyramidDepth = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._pyramidHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._pyramidHeight = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._pyramidHeight = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._pyramidWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._pyramidWidth = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._pyramidWidth = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      pGVar13 = (this->fields).
                                                                _mvSglSlidersLookAndFeel;
                                                      iVar19 = (pGVar1->vector[0]->fields)._shadeMode
                                                      ;
                                                      uVar15 = 0;
                                                      if (pGVar13 !=
                                                          (GizmoLineSlider3DLookAndFeel__Array *)0x0
                                                         ) {
                                                        ppGVar16 = pGVar13->vector;
                                                        for (; (int)uVar15 <
                                                               (int)pGVar13->max_length;
                                                            uVar15 = uVar15 + 1) {
                                                          if ((uint)pGVar13->max_length <= uVar15)
                                                          goto code_?;
                                                          if (*ppGVar16 ==
                                                              (GizmoLineSlider3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          ((*ppGVar16)->fields)._shadeMode = iVar19;
                                                          ppGVar16 = ppGVar16 + 1;
                                                        }
                                                        pGVar1 = (lookAndFeel->fields).
                                                                 _sglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._sphereRadius;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._sphereRadius = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._sphereRadius = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._trPrismDepth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._trPrismDepth = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._trPrismDepth = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._trPrismHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._trPrismHeight = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._trPrismHeight = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar10 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar10 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSlidersLookAndFeel;
                                                      uVar15 = 0;
                                                      fVar5 = (pGVar10->fields)._trPrismWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    while ((int)uVar15 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      if ((*ppGVar16 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar10 = ((*ppGVar16)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar10 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar5) {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._trPrismWidth = fVar5;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                      else {
                                                        uVar15 = uVar15 + 1;
                                                        (pGVar10->fields)._trPrismWidth = fVar6;
                                                        ppGVar16 = ppGVar16 + 1;
                                                      }
                                                    }
                                                    pBVar20 = (lookAndFeel->fields)._sglSliderVis;
                                                    if (pBVar20 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar20->max_length == 0)
                                                      goto code_?;
                                                      pBVar22 = (this->fields)._mvSglSliderVis;
                                                      if (pBVar22 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar22->max_length == 0)
                                                        goto code_?;
                                                        pBVar22->vector[0] = pBVar20->vector[0] != 0
                                                        ;
                                                        pBVar20 = (lookAndFeel->fields).
                                                                  _sglSliderVis;
                                                        if (pBVar20 != (Boolean__Array *)0x0) {
                                                          if ((uint)pBVar20->max_length < 2)
                                                          goto code_?;
                                                          pBVar22 = (this->fields)._mvSglSliderVis;
                                                          if (pBVar22 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar22->max_length < 2)
                                                            goto code_?;
                                                            pBVar22->vector[1] =
                                                                 pBVar20->vector[1] != 0;
                                                            pBVar20 = (lookAndFeel->fields).
                                                                      _sglSliderVis;
                                                            if (pBVar20 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar20->max_length < 3)
                                                              goto code_?;
                                                              pBVar22 = (this->fields).
                                                                        _mvSglSliderVis;
                                                              if (pBVar22 != (Boolean__Array *)0x0)
                                                              {
                                                                if ((uint)pBVar22->max_length < 3)
                                                                goto code_?;
                                                                pBVar22->vector[2] =
                                                                     pBVar20->vector[2] != 0;
                                                                pBVar20 = (lookAndFeel->fields).
                                                                          _sglSliderVis;
                                                                if (pBVar20 != (Boolean__Array *)0x0
                                                                   ) {
                                                                  if ((uint)pBVar20->max_length < 4)
                                                                  goto code_?;
                                                                  pBVar22 = (this->fields).
                                                                            _mvSglSliderVis;
                                                                  if (pBVar22 !=
                                                                      (Boolean__Array *)0x0) {
                                                                    if ((uint)pBVar22->max_length <
                                                                        4) goto code_?
                                                                           ;
                                                                    pBVar22->vector[3] =
                                                                         pBVar20->vector[3] != 0;
                                                                    pBVar20 = (lookAndFeel->fields).
                                                                              _sglSliderVis;
                                                                    if (pBVar20 !=
                                                                        (Boolean__Array *)0x0) {
                                                                      if ((uint)pBVar20->max_length
                                                                          < 5) goto 
                                                  code_?;
                                                  pBVar22 = (this->fields)._mvSglSliderVis;
                                                  if (pBVar22 != (Boolean__Array *)0x0) {
                                                    if ((uint)pBVar22->max_length < 5)
                                                    goto code_?;
                                                    pBVar22->vector[4] = pBVar20->vector[4] != 0;
                                                    pBVar20 = (lookAndFeel->fields)._sglSliderVis;
                                                    if (pBVar20 != (Boolean__Array *)0x0) {
                                                      if ((uint)pBVar20->max_length < 6)
                                                      goto code_?;
                                                      pBVar22 = (this->fields)._mvSglSliderVis;
                                                      if (pBVar22 != (Boolean__Array *)0x0) {
                                                        if ((uint)pBVar22->max_length < 6)
                                                        goto code_?;
                                                        pBVar22->vector[5] = pBVar20->vector[5] != 0
                                                        ;
                                                        pGVar10 = (lookAndFeel->fields).
                                                                 _midCapLookAndFeel;
                                                        if (pGVar10 != (GizmoCap3DLookAndFeel *)0x0)
                                                        {
                                                          pGVar1 = (this->fields).
                                                                   _mvSglSlidersLookAndFeel;
                                                          bVar23 = (pGVar10->fields)._useZoomFactor;
                                                          uVar15 = 0;
                                                          if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar16 = pGVar1->vector;
                                                    for (; (int)uVar15 < (int)pGVar1->max_length;
                                                        uVar15 = uVar15 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar15)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar16;
                                                      if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      pGVar10 = (pGVar2->fields)._capLookAndFeel;
                                                      (pGVar2->fields)._useZoomFactor = bVar23;
                                                      if (pGVar10 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      (pGVar10->fields)._useZoomFactor = bVar23;
                                                      ppGVar16 = ppGVar16 + 1;
                                                    }
                                                    pGVar11 = (this->fields)._mvDblSlidersLookAndFeel
                                                    ;
                                                    if (pGVar11 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar18 = pGVar11->vector;
                                                    for (; (int)uVar14 < (int)pGVar11->max_length;
                                                        uVar14 = uVar14 + 1) {
                                                      if ((uint)pGVar11->max_length <= uVar14)
                                                      goto code_?;
                                                      if (*ppGVar18 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar18)->fields)._useZoomFactor = bVar23;
                                                      ppGVar18 = ppGVar18 + 1;
                                                    }
                                                    pGVar24 = (lookAndFeel->fields).
                                                              _vertSnapCapLookAndFeel;
                                                    if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0) &&
                                                       (pGVar25 = (this->fields).
                                                                  _mvVertSnapCapLookAndFeel,
                                                       pGVar25 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      fVar5 = (pGVar24->fields)._borderColor.g;
                                                      fVar6 = (pGVar24->fields)._borderColor.b;
                                                      fVar8 = (pGVar24->fields)._borderColor.a;
                                                      (pGVar25->fields)._borderColor.r =
                                                           (pGVar24->fields)._borderColor.r;
                                                      (pGVar25->fields)._borderColor.g = fVar5;
                                                      (pGVar25->fields)._borderColor.b = fVar6;
                                                      (pGVar25->fields)._borderColor.a = fVar8;
                                                      pGVar24 = (lookAndFeel->fields).
                                                                _vertSnapCapLookAndFeel;
                                                      if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0)
                                                         && (pGVar25 = (this->fields).
                                                                       _mvVertSnapCapLookAndFeel,
                                                            pGVar25 != (GizmoCap2DLookAndFeel *)0x0)
                                                         ) {
                                                        (pGVar25->fields)._circleRadius =
                                                             (pGVar24->fields)._circleRadius;
                                                        pGVar24 = (lookAndFeel->fields).
                                                                  _vertSnapCapLookAndFeel;
                                                        if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0
                                                            ) && (pGVar25 = (this->fields).
                                                                                                                                                        
                                                  _mvVertSnapCapLookAndFeel,
                                                  pGVar25 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                    fVar5 = (pGVar24->fields)._color.g;
                                                    fVar6 = (pGVar24->fields)._color.b;
                                                    fVar8 = (pGVar24->fields)._color.a;
                                                    (pGVar25->fields)._color.r =
                                                         (pGVar24->fields)._color.r;
                                                    (pGVar25->fields)._color.g = fVar5;
                                                    (pGVar25->fields)._color.b = fVar6;
                                                    (pGVar25->fields)._color.a = fVar8;
                                                    pGVar24 = (lookAndFeel->fields).
                                                              _vertSnapCapLookAndFeel;
                                                    if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0) &&
                                                       (pGVar25 = (this->fields).
                                                                  _mvVertSnapCapLookAndFeel,
                                                       pGVar25 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      (pGVar25->fields)._fillMode =
                                                           (pGVar24->fields)._fillMode;
                                                      pGVar24 = (lookAndFeel->fields).
                                                                _vertSnapCapLookAndFeel;
                                                      if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0)
                                                         && (pGVar25 = (this->fields).
                                                                       _mvVertSnapCapLookAndFeel,
                                                            pGVar25 != (GizmoCap2DLookAndFeel *)0x0)
                                                         ) {
                                                        fVar5 = (pGVar24->fields).
                                                                 _hoveredBorderColor.g;
                                                        fVar6 = (pGVar24->fields).
                                                                 _hoveredBorderColor.b;
                                                        fVar8 = (pGVar24->fields).
                                                                 _hoveredBorderColor.a;
                                                        (pGVar25->fields)._hoveredBorderColor.r =
                                                             (pGVar24->fields)._hoveredBorderColor.r
                                                        ;
                                                        (pGVar25->fields)._hoveredBorderColor.g =
                                                             fVar5;
                                                        (pGVar25->fields)._hoveredBorderColor.b =
                                                             fVar6;
                                                        (pGVar25->fields)._hoveredBorderColor.a =
                                                             fVar8;
                                                        pGVar24 = (lookAndFeel->fields).
                                                                  _vertSnapCapLookAndFeel;
                                                        if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0
                                                            ) && (pGVar25 = (this->fields).
                                                                                                                                                        
                                                  _mvVertSnapCapLookAndFeel,
                                                  pGVar25 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                    fVar5 = (pGVar24->fields)._hoveredColor.g;
                                                    fVar6 = (pGVar24->fields)._hoveredColor.b;
                                                    fVar8 = (pGVar24->fields)._hoveredColor.a;
                                                    (pGVar25->fields)._hoveredColor.r =
                                                         (pGVar24->fields)._hoveredColor.r;
                                                    (pGVar25->fields)._hoveredColor.g = fVar5;
                                                    (pGVar25->fields)._hoveredColor.b = fVar6;
                                                    (pGVar25->fields)._hoveredColor.a = fVar8;
                                                    pGVar24 = (lookAndFeel->fields).
                                                              _vertSnapCapLookAndFeel;
                                                    if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0) &&
                                                       (pGVar25 = (this->fields).
                                                                  _mvVertSnapCapLookAndFeel,
                                                       pGVar25 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      fVar5 = (pGVar24->fields)._quadHeight;
                                                      if (fVar5 < 0.0) {
                                                        fVar5 = 0.0;
                                                      }
                                                      (pGVar25->fields)._quadHeight = fVar5;
                                                      if ((pGVar24 != (GizmoCap2DLookAndFeel *)0x0)
                                                         && (pGVar25 = (this->fields).
                                                                       _mvVertSnapCapLookAndFeel,
                                                            pGVar25 != (GizmoCap2DLookAndFeel *)0x0)
                                                         ) {
                                                        fVar5 = (pGVar24->fields)._quadWidth;
                                                        fVar6 = 0.0;
                                                        if (0.0 <= fVar5) {
                                                          fVar6 = fVar5;
                                                        }
                                                        (pGVar25->fields)._quadWidth = fVar6;
                                                        if (pGVar24 != (GizmoCap2DLookAndFeel *)0x0)
                                                        {
                                                          iVar26 = (pGVar24->fields)._capType;
                                                          if ((iVar26 == 1) || (iVar26 == 0)) {
                                                            pGVar24 = (this->fields).
                                                                      _mvVertSnapCapLookAndFeel;
                                                            if (pGVar24 ==
                                                                (GizmoCap2DLookAndFeel *)0x0)
                                                            goto code_?;
                                                            (pGVar24->fields)._capType = iVar26;
                                                          }
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
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void Inherit(RotationGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_Inherit_1
               (UniversalGizmoLookAndFeel3D *this,RotationGizmoLookAndFeel3D *lookAndFeel,
               MethodInfo *method)

{
  if ((lookAndFeel != (RotationGizmoLookAndFeel3D *)0x0) &&
     (pGVar1 = (lookAndFeel->fields)._axesLookAndFeel,
     pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
    if ((int)pGVar1->max_length == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[0];
    if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar1 = (this->fields)._rtAxesLookAndFeel,
       pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
      if ((int)pGVar1->max_length == 0) goto code_?;
      pGVar4 = pGVar1->vector[0];
      if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        fVar5 = (pGVar3->fields)._borderColor.g;
        fVar6 = (pGVar3->fields)._borderColor.b;
        fVar7 = (pGVar3->fields)._borderColor.a;
        (pGVar4->fields)._borderColor.r = (pGVar3->fields)._borderColor.r;
        (pGVar4->fields)._borderColor.g = fVar5;
        (pGVar4->fields)._borderColor.b = fVar6;
        (pGVar4->fields)._borderColor.a = fVar7;
        pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
        if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
          if ((uint)pGVar1->max_length < 2) goto code_?;
          pGVar3 = pGVar1->vector[1];
          if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
             (pGVar1 = (this->fields)._rtAxesLookAndFeel,
             pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
            if ((uint)pGVar1->max_length < 2) goto code_?;
            pGVar4 = pGVar1->vector[1];
            if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              fVar5 = (pGVar3->fields)._borderColor.g;
              fVar6 = (pGVar3->fields)._borderColor.b;
              fVar7 = (pGVar3->fields)._borderColor.a;
              (pGVar4->fields)._borderColor.r = (pGVar3->fields)._borderColor.r;
              (pGVar4->fields)._borderColor.g = fVar5;
              (pGVar4->fields)._borderColor.b = fVar6;
              (pGVar4->fields)._borderColor.a = fVar7;
              pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
              if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length < 3) goto code_?;
                pGVar3 = pGVar1->vector[2];
                if ((pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                   (pGVar1 = (this->fields)._rtAxesLookAndFeel,
                   pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)) {
                  if ((uint)pGVar1->max_length < 3) goto code_?;
                  pGVar4 = pGVar1->vector[2];
                  if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                    fVar5 = (pGVar3->fields)._borderColor.g;
                    fVar6 = (pGVar3->fields)._borderColor.b;
                    fVar7 = (pGVar3->fields)._borderColor.a;
                    (pGVar4->fields)._borderColor.r = (pGVar3->fields)._borderColor.r;
                    (pGVar4->fields)._borderColor.g = fVar5;
                    (pGVar4->fields)._borderColor.b = fVar6;
                    fVar5 = _UNK_?;
                    (pGVar4->fields)._borderColor.a = fVar7;
                    pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
                    if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                      if ((int)pGVar1->max_length == 0) goto code_?;
                      if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        pGVar8 = (this->fields)._rtAxesLookAndFeel;
                        uVar9 = 0;
                        fVar6 = (pGVar1->vector[0]->fields)._borderCircleCullAlphaScale;
                        uVar10 = 0;
                        if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                          ppGVar11 = pGVar8->vector;
                          for (; (int)uVar10 < (int)pGVar8->max_length; uVar10 = uVar10 + 1) {
                            if ((uint)pGVar8->max_length <= uVar10) goto code_?;
                            if (*ppGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                            goto code_?;
                            if (fVar6 < 0.0) {
                              fVar7 = 0.0;
                            }
                            else {
                              fVar7 = fVar6;
                              if (fVar5 < fVar6) {
                                fVar7 = fVar5;
                              }
                            }
                            ((*ppGVar11)->fields)._borderCircleCullAlphaScale = fVar7;
                            ppGVar11 = ppGVar11 + 1;
                          }
                          pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
                          if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                            if ((int)pGVar1->max_length == 0) goto code_?;
                            if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              pGVar8 = (this->fields)._rtAxesLookAndFeel;
                              iVar12 = (pGVar1->vector[0]->fields)._borderFillMode;
                              uVar10 = 0;
                              if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                ppGVar11 = pGVar8->vector;
                                for (; (int)uVar10 < (int)pGVar8->max_length; uVar10 = uVar10 + 1) {
                                  if ((uint)pGVar8->max_length <= uVar10) goto code_?;
                                  if (*ppGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                  goto code_?;
                                  ((*ppGVar11)->fields)._borderFillMode = iVar12;
                                  ppGVar11 = ppGVar11 + 1;
                                }
                                pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
                                if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                  if ((int)pGVar1->max_length == 0) goto code_?;
                                  if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                    pGVar8 = (this->fields)._rtAxesLookAndFeel;
                                    iVar12 = (pGVar1->vector[0]->fields)._circleBorderType;
                                    uVar10 = 0;
                                    if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                      ppGVar11 = pGVar8->vector;
                                      for (; (int)uVar10 < (int)pGVar8->max_length;
                                          uVar10 = uVar10 + 1) {
                                        if ((uint)pGVar8->max_length <= uVar10)
                                        goto code_?;
                                        if (*ppGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                        goto code_?;
                                        ((*ppGVar11)->fields)._circleBorderType = iVar12;
                                        ppGVar11 = ppGVar11 + 1;
                                      }
                                      pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
                                      if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                        if ((int)pGVar1->max_length == 0) goto code_?;
                                        if (pGVar1->vector[0] !=
                                            (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          pGVar8 = (this->fields)._rtAxesLookAndFeel;
                                          fVar5 = (pGVar1->vector[0]->fields)._borderCylTorusHeight
                                          ;
                                          uVar10 = 0;
                                          if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                                          {
                                            ppGVar11 = pGVar8->vector;
                                            while ((int)uVar10 < (int)pGVar8->max_length) {
                                              if ((uint)pGVar8->max_length <= uVar10)
                                              goto code_?;
                                              pGVar3 = *ppGVar11;
                                              if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                              goto code_?;
                                              if (0.0 <= fVar5) {
                                                uVar10 = uVar10 + 1;
                                                (pGVar3->fields)._borderCylTorusHeight = fVar5;
                                                ppGVar11 = ppGVar11 + 1;
                                              }
                                              else {
                                                uVar10 = uVar10 + 1;
                                                (pGVar3->fields)._borderCylTorusHeight = 0.0;
                                                ppGVar11 = ppGVar11 + 1;
                                              }
                                            }
                                            pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
                                            if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                          0x0) {
                                              if ((int)pGVar1->max_length == 0)
                                              goto code_?;
                                              if (pGVar1->vector[0] !=
                                                  (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                pGVar8 = (this->fields)._rtAxesLookAndFeel;
                                                fVar5 = (pGVar1->vector[0]->fields).
                                                         _borderCylTorusWidth;
                                                uVar10 = 0;
                                                if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array
                                                               *)0x0) {
                                                  ppGVar11 = pGVar8->vector;
                                                  while ((int)uVar10 < (int)pGVar8->max_length) {
                                                    if ((uint)pGVar8->max_length <= uVar10)
                                                    goto code_?;
                                                    pGVar3 = *ppGVar11;
                                                    if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)
                                                                  0x0) goto code_?;
                                                    if (0.0 <= fVar5) {
                                                      uVar10 = uVar10 + 1;
                                                      (pGVar3->fields)._borderCylTorusWidth = fVar5
                                                      ;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                    else {
                                                      uVar10 = uVar10 + 1;
                                                      (pGVar3->fields)._borderCylTorusWidth = 0.0;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                  }
                                                  pGVar1 = (lookAndFeel->fields)._axesLookAndFeel;
                                                  if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar8 = (this->fields)._rtAxesLookAndFeel;
                                                      fVar5 = (pGVar1->vector[0]->fields).
                                                               _borderTorusThickness;
                                                      uVar10 = 0;
                                                      if (pGVar8 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar8->vector;
                                                    while ((int)uVar10 < (int)pGVar8->max_length) {
                                                      if ((uint)pGVar8->max_length <= uVar10)
                                                      goto code_?;
                                                      pGVar3 = *ppGVar11;
                                                      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *
                                                                    )0x0) goto code_?;
                                                      if (0.0 <= fVar5) {
                                                        uVar10 = uVar10 + 1;
                                                        (pGVar3->fields)._borderTorusThickness =
                                                             fVar5;
                                                        ppGVar11 = ppGVar11 + 1;
                                                      }
                                                      else {
                                                        uVar10 = uVar10 + 1;
                                                        (pGVar3->fields)._borderTorusThickness = 0.0
                                                        ;
                                                        ppGVar11 = ppGVar11 + 1;
                                                      }
                                                    }
                                                    pBVar13 = (lookAndFeel->fields)._axesVis;
                                                    if (pBVar13 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar13->max_length == 0)
                                                      goto code_?;
                                                      pBVar14 = (this->fields)._rtAxesVis;
                                                      if (pBVar14 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar14->max_length == 0)
                                                        goto code_?;
                                                        pBVar14->vector[0] = pBVar13->vector[0] != 0;
                                                        pBVar13 = (lookAndFeel->fields)._axesVis;
                                                        if (pBVar13 != (Boolean__Array *)0x0) {
                                                          if ((uint)pBVar13->max_length < 2)
                                                          goto code_?;
                                                          pBVar14 = (this->fields)._rtAxesVis;
                                                          if (pBVar14 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar14->max_length < 2)
                                                            goto code_?;
                                                            pBVar14->vector[1] =
                                                                 pBVar13->vector[1] != 0;
                                                            pBVar13 = (lookAndFeel->fields)._axesVis;
                                                            if (pBVar13 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar13->max_length < 3)
                                                              goto code_?;
                                                              pBVar14 = (this->fields)._rtAxesVis;
                                                              if (pBVar14 != (Boolean__Array *)0x0) {
                                                                if ((uint)pBVar14->max_length < 3)
                                                                goto code_?;
                                                                pBVar14->vector[2] =
                                                                     pBVar13->vector[2] != 0;
                                                                pGVar15 = (lookAndFeel->fields).
                                                                          _camLookSliderLookAndFeel;
                                                                if ((pGVar15 !=
                                                                     (GizmoPlaneSlider2DLookAndFeel
                                                                      *)0x0) &&
                                                                   (pGVar16 = (this->fields).
                                                                                                                                                            
                                                  _rtCamLookSliderLookAndFeel,
                                                  pGVar16 != (GizmoPlaneSlider2DLookAndFeel *)0x0))
                                                  {
                                                    fVar5 = (pGVar15->fields)._borderColor.g;
                                                    fVar6 = (pGVar15->fields)._borderColor.b;
                                                    fVar7 = (pGVar15->fields)._borderColor.a;
                                                    (pGVar16->fields)._borderColor.r =
                                                         (pGVar15->fields)._borderColor.r;
                                                    (pGVar16->fields)._borderColor.g = fVar5;
                                                    (pGVar16->fields)._borderColor.b = fVar6;
                                                    (pGVar16->fields)._borderColor.a = fVar7;
                                                    pGVar15 = (lookAndFeel->fields).
                                                              _camLookSliderLookAndFeel;
                                                    if ((pGVar15 !=
                                                         (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar16 = (this->fields).
                                                                  _rtCamLookSliderLookAndFeel,
                                                       pGVar16 !=
                                                       (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                                      fVar5 = (pGVar15->fields)._hoveredBorderColor
                                                               .g;
                                                      fVar6 = (pGVar15->fields)._hoveredBorderColor
                                                               .b;
                                                      fVar7 = (pGVar15->fields)._hoveredBorderColor
                                                               .a;
                                                      (pGVar16->fields)._hoveredBorderColor.r =
                                                           (pGVar15->fields)._hoveredBorderColor.r;
                                                      (pGVar16->fields)._hoveredBorderColor.g =
                                                           fVar5;
                                                      (pGVar16->fields)._hoveredBorderColor.b =
                                                           fVar6;
                                                      (pGVar16->fields)._hoveredBorderColor.a =
                                                           fVar7;
                                                      pGVar15 = (lookAndFeel->fields).
                                                                _camLookSliderLookAndFeel;
                                                      if ((pGVar15 !=
                                                           (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                                         (pGVar16 = (this->fields).
                                                                    _rtCamLookSliderLookAndFeel,
                                                         pGVar16 !=
                                                         (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                                        fVar5 = (pGVar15->fields).
                                                                 _borderPolyThickness;
                                                        if (fVar5 < 0.0) {
                                                          fVar5 = 0.0;
                                                        }
                                                        (pGVar16->fields)._borderPolyThickness =
                                                             fVar5;
                                                        pGVar15 = (lookAndFeel->fields).
                                                                  _camLookSliderLookAndFeel;
                                                        if ((pGVar15 !=
                                                             (GizmoPlaneSlider2DLookAndFeel *)0x0)
                                                           && (pGVar16 = (this->fields).
                                                                         _rtCamLookSliderLookAndFeel
                                                              , pGVar16 !=
                                                                (GizmoPlaneSlider2DLookAndFeel *)0x0
                                                              )) {
                                                          (pGVar16->fields)._polygonBorderType =
                                                               (pGVar15->fields)._polygonBorderType;
                                                          fVar5 = (lookAndFeel->fields).
                                                                   _camLookSliderRadiusOffset;
                                                          if (fVar5 < 0.0) {
                                                            fVar5 = 0.0;
                                                          }
                                                          (this->fields).
                                                          _rtCamLookSliderRadiusOffset = fVar5;
                                                          (this->fields)._isRtCamLookSliderVisible =
                                                               (lookAndFeel->fields).
                                                               _isCamLookSliderVisible;
                                                          pGVar1 = (lookAndFeel->fields).
                                                                   _axesLookAndFeel;
                                                          if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    pGVar3 = pGVar1->vector[0];
                                                    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)
                                                                  0x0) {
                                                      uVar17 = (pGVar3->fields)._hoveredColor.r;
                                                      uVar18 = (pGVar3->fields)._hoveredColor.g;
                                                      uVar19 = (pGVar3->fields)._hoveredColor.b;
                                                      uVar20 = (pGVar3->fields)._hoveredColor.a;
                                                      pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                      uVar10 = 0;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    for (; (int)uVar10 < (int)pGVar1->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar10)
                                                      goto code_?;
                                                      pGVar3 = *ppGVar11;
                                                      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *
                                                                    )0x0) goto code_?;
                                                      (pGVar3->fields)._hoveredColor.r =
                                                           (float)uVar17;
                                                      (pGVar3->fields)._hoveredColor.g =
                                                           (float)uVar18;
                                                      (pGVar3->fields)._hoveredColor.b =
                                                           (float)uVar19;
                                                      (pGVar3->fields)._hoveredColor.a =
                                                           (float)uVar20;
                                                      ppGVar11 = ppGVar11 + 1;
                                                      (pGVar3->fields)._hoveredBorderColor.r =
                                                           (float)uVar17;
                                                      (pGVar3->fields)._hoveredBorderColor.g =
                                                           (float)uVar18;
                                                      (pGVar3->fields)._hoveredBorderColor.b =
                                                           (float)uVar19;
                                                      (pGVar3->fields)._hoveredBorderColor.a =
                                                           (float)uVar20;
                                                    }
                                                    pGVar21 = (lookAndFeel->fields).
                                                              _midCapLookAndFeel;
                                                    if ((pGVar21 != (GizmoCap3DLookAndFeel *)0x0) &&
                                                       (pGVar22 = (this->fields).
                                                                  _rtMidCapLookAndFeel,
                                                       pGVar22 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      fVar5 = (pGVar21->fields)._hoveredColor.g;
                                                      fVar6 = (pGVar21->fields)._hoveredColor.b;
                                                      fVar7 = (pGVar21->fields)._hoveredColor.a;
                                                      (pGVar22->fields)._hoveredColor.r =
                                                           (pGVar21->fields)._hoveredColor.r;
                                                      (pGVar22->fields)._hoveredColor.g = fVar5;
                                                      (pGVar22->fields)._hoveredColor.b = fVar6;
                                                      (pGVar22->fields)._hoveredColor.a = fVar7;
                                                      pGVar21 = (lookAndFeel->fields).
                                                                _midCapLookAndFeel;
                                                      if ((pGVar21 != (GizmoCap3DLookAndFeel *)0x0)
                                                         && (pGVar22 = (this->fields).
                                                                       _rtMidCapLookAndFeel,
                                                            pGVar22 != (GizmoCap3DLookAndFeel *)0x0)
                                                         ) {
                                                        fVar5 = (pGVar21->fields).
                                                                 _sphereBorderColor.g;
                                                        fVar6 = (pGVar21->fields).
                                                                 _sphereBorderColor.b;
                                                        fVar7 = (pGVar21->fields).
                                                                 _sphereBorderColor.a;
                                                        (pGVar22->fields)._sphereBorderColor.r =
                                                             (pGVar21->fields)._sphereBorderColor.r;
                                                        (pGVar22->fields)._sphereBorderColor.g =
                                                             fVar5;
                                                        (pGVar22->fields)._sphereBorderColor.b =
                                                             fVar6;
                                                        (pGVar22->fields)._sphereBorderColor.a =
                                                             fVar7;
                                                        pGVar21 = (lookAndFeel->fields).
                                                                  _midCapLookAndFeel;
                                                        if ((pGVar21 != (GizmoCap3DLookAndFeel *)0x0
                                                            ) && (pGVar22 = (this->fields).
                                                                            _rtMidCapLookAndFeel,
                                                                 pGVar22 !=
                                                                 (GizmoCap3DLookAndFeel *)0x0)) {
                                                          (pGVar22->fields)._isSphereBorderVisible =
                                                               (pGVar21->fields).
                                                               _isSphereBorderVisible;
                                                          pGVar21 = (lookAndFeel->fields).
                                                                    _midCapLookAndFeel;
                                                          if ((pGVar21 !=
                                                               (GizmoCap3DLookAndFeel *)0x0) &&
                                                             (pGVar22 = (this->fields).
                                                                        _rtMidCapLookAndFeel,
                                                             pGVar22 != (GizmoCap3DLookAndFeel *)0x0
                                                             )) {
                                                            fVar5 = (pGVar21->fields)._color.g;
                                                            fVar6 = (pGVar21->fields)._color.b;
                                                            fVar7 = (pGVar21->fields)._color.a;
                                                            (pGVar22->fields)._color.r =
                                                                 (pGVar21->fields)._color.r;
                                                            (pGVar22->fields)._color.g = fVar5;
                                                            (pGVar22->fields)._color.b = fVar6;
                                                            (pGVar22->fields)._color.a = fVar7;
                                                            (this->fields)._isRtMidCapVisible =
                                                                 (lookAndFeel->fields).
                                                                 _isMidCapVisible;
                                                            pGVar1 = (lookAndFeel->fields).
                                                                     _axesLookAndFeel;
                                                            if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar8 = (this->fields)._rtAxesLookAndFeel;
                                                      iVar23 = (pGVar1->vector[0]->fields).
                                                              _numBorderTorusWireAxialSlices;
                                                      uVar10 = 0;
                                                      if (pGVar8 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar8->vector;
                                                    for (; (int)uVar10 < (int)pGVar8->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar8->max_length <= uVar10)
                                                      goto code_?;
                                                      if (*ppGVar11 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      iVar24 = iVar23;
                                                      if (iVar23 < 2) {
                                                        iVar24 = 2;
                                                      }
                                                      ((*ppGVar11)->fields).
                                                      _numBorderTorusWireAxialSlices = iVar24;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                    pGVar21 = (lookAndFeel->fields).
                                                              _midCapLookAndFeel;
                                                    if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      UniversalGizmoLookAndFeel3D_SetRtRadius
                                                                (this,(pGVar21->fields).
                                                                      _sphereRadius,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (lookAndFeel->fields).
                                                               _axesLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar25 = (pGVar1->vector[0]->fields).
                                                                  _rotationArcLookAndFeel,
                                                       pGVar25 !=
                                                       (GizmoRotationArc3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                      uVar10 = 0;
                                                      uVar26 = (pGVar25->fields)._borderColor.r;
                                                      uVar27 = (pGVar25->fields)._borderColor.g;
                                                      uVar28 = (pGVar25->fields)._borderColor.b;
                                                      uVar29 = (pGVar25->fields)._borderColor.a;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    for (; (int)uVar10 < (int)pGVar1->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar10)
                                                      goto code_?;
                                                      if ((*ppGVar11 ==
                                                           (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar25 = ((*ppGVar11)->fields).
                                                                    _rotationArcLookAndFeel,
                                                         pGVar25 ==
                                                         (GizmoRotationArc3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      ppGVar11 = ppGVar11 + 1;
                                                      (pGVar25->fields)._borderColor.r =
                                                           (float)uVar26;
                                                      (pGVar25->fields)._borderColor.g =
                                                           (float)uVar27;
                                                      (pGVar25->fields)._borderColor.b =
                                                           (float)uVar28;
                                                      (pGVar25->fields)._borderColor.a =
                                                           (float)uVar29;
                                                    }
                                                    pGVar15 = (this->fields).
                                                              _rtCamLookSliderLookAndFeel;
                                                    if ((pGVar15 !=
                                                         (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar30 = (pGVar15->fields).
                                                                  _rotationArcLookAndFeel,
                                                       pGVar30 !=
                                                       (GizmoRotationArc2DLookAndFeel *)0x0)) {
                                                      (pGVar30->fields)._borderColor.r =
                                                           (float)uVar26;
                                                      (pGVar30->fields)._borderColor.g =
                                                           (float)uVar27;
                                                      (pGVar30->fields)._borderColor.b =
                                                           (float)uVar28;
                                                      (pGVar30->fields)._borderColor.a =
                                                           (float)uVar29;
                                                      pGVar1 = (lookAndFeel->fields).
                                                               _axesLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar25 = (pGVar1->vector[0]->fields).
                                                                  _rotationArcLookAndFeel,
                                                       pGVar25 !=
                                                       (GizmoRotationArc3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                      uVar10 = 0;
                                                      uVar31 = (pGVar25->fields)._color.r;
                                                      uVar32 = (pGVar25->fields)._color.g;
                                                      uVar33 = (pGVar25->fields)._color.b;
                                                      uVar34 = (pGVar25->fields)._color.a;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    for (; (int)uVar10 < (int)pGVar1->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar10)
                                                      goto code_?;
                                                      if ((*ppGVar11 ==
                                                           (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar25 = ((*ppGVar11)->fields).
                                                                    _rotationArcLookAndFeel,
                                                         pGVar25 ==
                                                         (GizmoRotationArc3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      ppGVar11 = ppGVar11 + 1;
                                                      (pGVar25->fields)._color.r = (float)uVar31;
                                                      (pGVar25->fields)._color.g = (float)uVar32;
                                                      (pGVar25->fields)._color.b = (float)uVar33;
                                                      (pGVar25->fields)._color.a = (float)uVar34;
                                                    }
                                                    pGVar15 = (this->fields).
                                                              _rtCamLookSliderLookAndFeel;
                                                    if ((pGVar15 !=
                                                         (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar30 = (pGVar15->fields).
                                                                  _rotationArcLookAndFeel,
                                                       pGVar30 !=
                                                       (GizmoRotationArc2DLookAndFeel *)0x0)) {
                                                      (pGVar30->fields)._color.r = (float)uVar31;
                                                      (pGVar30->fields)._color.g = (float)uVar32;
                                                      (pGVar30->fields)._color.b = (float)uVar33;
                                                      (pGVar30->fields)._color.a = (float)uVar34;
                                                      pGVar1 = (lookAndFeel->fields).
                                                               _axesLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      pGVar8 = (this->fields)._rtAxesLookAndFeel;
                                                      bVar35 = (pGVar1->vector[0]->fields).
                                                              _isRotationArcVisible;
                                                      uVar10 = 0;
                                                      if (pGVar8 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar8->vector;
                                                    for (; (int)uVar10 < (int)pGVar8->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar8->max_length <= uVar10)
                                                      goto code_?;
                                                      if (*ppGVar11 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar11)->fields)._isRotationArcVisible =
                                                           bVar35;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                    pGVar15 = (this->fields).
                                                              _rtCamLookSliderLookAndFeel;
                                                    if (pGVar15 !=
                                                        (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                                      (pGVar15->fields)._isRotationArcVisible =
                                                           bVar35;
                                                      pGVar21 = (lookAndFeel->fields).
                                                                _midCapLookAndFeel;
                                                      if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                        uVar10 = 0;
                                                        fVar5 = (pGVar21->fields)._scale;
                                                        if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    while ((int)uVar10 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar10)
                                                      goto code_?;
                                                      pGVar3 = *ppGVar11;
                                                      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *
                                                                    )0x0) goto code_?;
                                                      if (0.0 <= fVar5) {
                                                        uVar10 = uVar10 + 1;
                                                        (pGVar3->fields)._scale = fVar5;
                                                        ppGVar11 = ppGVar11 + 1;
                                                      }
                                                      else {
                                                        uVar10 = uVar10 + 1;
                                                        (pGVar3->fields)._scale = 0.0;
                                                        ppGVar11 = ppGVar11 + 1;
                                                      }
                                                    }
                                                    pGVar21 = (this->fields)._rtMidCapLookAndFeel;
                                                    if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      fVar6 = 0.0;
                                                      if (0.0 <= fVar5) {
                                                        fVar6 = fVar5;
                                                      }
                                                      (pGVar21->fields)._scale = fVar6;
                                                      pGVar21 = (lookAndFeel->fields).
                                                                _midCapLookAndFeel;
                                                      if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                        iVar12 = (pGVar21->fields)._shadeMode;
                                                        uVar10 = 0;
                                                        if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    for (; (int)uVar10 < (int)pGVar1->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar10)
                                                      goto code_?;
                                                      pGVar3 = *ppGVar11;
                                                      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *
                                                                    )0x0) goto code_?;
                                                      (pGVar3->fields)._shadeMode = iVar12;
                                                      (pGVar3->fields)._borderShadeMode = iVar12;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                    pGVar21 = (this->fields)._rtMidCapLookAndFeel;
                                                    if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      (pGVar21->fields)._shadeMode = iVar12;
                                                      pGVar1 = (lookAndFeel->fields).
                                                               _axesLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar25 = (pGVar1->vector[0]->fields).
                                                                  _rotationArcLookAndFeel,
                                                       pGVar25 !=
                                                       (GizmoRotationArc3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                      uVar10 = 0;
                                                      bVar35 = (pGVar25->fields)._useShortestRotation
                                                      ;
                                                      if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    for (; (int)uVar10 < (int)pGVar1->max_length;
                                                        uVar10 = uVar10 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar10)
                                                      goto code_?;
                                                      if ((*ppGVar11 ==
                                                           (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar25 = ((*ppGVar11)->fields).
                                                                    _rotationArcLookAndFeel,
                                                         pGVar25 ==
                                                         (GizmoRotationArc3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar25->fields)._useShortestRotation = bVar35
                                                      ;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                    pGVar15 = (this->fields).
                                                              _rtCamLookSliderLookAndFeel;
                                                    if ((pGVar15 !=
                                                         (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar30 = (pGVar15->fields).
                                                                  _rotationArcLookAndFeel,
                                                       pGVar30 !=
                                                       (GizmoRotationArc2DLookAndFeel *)0x0)) {
                                                      (pGVar30->fields)._useShortestRotation = bVar35
                                                      ;
                                                      pGVar21 = (lookAndFeel->fields).
                                                                _midCapLookAndFeel;
                                                      if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        pGVar1 = (this->fields)._rtAxesLookAndFeel;
                                                        bVar35 = (pGVar21->fields)._useZoomFactor;
                                                        if (pGVar1 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar11 = pGVar1->vector;
                                                    for (; (int)uVar9 < (int)pGVar1->max_length;
                                                        uVar9 = uVar9 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar9)
                                                      goto code_?;
                                                      if (*ppGVar11 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar11)->fields)._useZoomFactor = bVar35;
                                                      ppGVar11 = ppGVar11 + 1;
                                                    }
                                                    pGVar21 = (this->fields)._rtMidCapLookAndFeel;
                                                    if (pGVar21 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      (pGVar21->fields)._useZoomFactor = bVar35;
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if ((int)pGVar1->max_length == 0) goto code_?;
    pGVar2 = pGVar1->vector[0];
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      aCStack_3[0].r = (pGVar2->fields)._color.r;
      aCStack_3[0].g = (pGVar2->fields)._color.g;
      aCStack_3[0].b = (pGVar2->fields)._color.b;
      aCStack_3[0].a = (pGVar2->fields)._color.a;
      UniversalGizmoLookAndFeel3D_SetScAxisColor(this,0,aCStack_3,(MethodInfo *)0x0);
      pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length < 2) goto code_?;
        pGVar2 = pGVar1->vector[1];
        if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
          aCStack_3[0].r = (pGVar2->fields)._color.r;
          aCStack_3[0].g = (pGVar2->fields)._color.g;
          aCStack_3[0].b = (pGVar2->fields)._color.b;
          aCStack_3[0].a = (pGVar2->fields)._color.a;
          UniversalGizmoLookAndFeel3D_SetScAxisColor(this,1,aCStack_3,(MethodInfo *)0x0);
          pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length < 3) goto code_?;
            pGVar2 = pGVar1->vector[2];
            if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              aCStack_3[0].r = (pGVar2->fields)._color.r;
              aCStack_3[0].g = (pGVar2->fields)._color.g;
              aCStack_3[0].b = (pGVar2->fields)._color.b;
              aCStack_3[0].a = (pGVar2->fields)._color.a;
              UniversalGizmoLookAndFeel3D_SetScAxisColor(this,2,aCStack_3,(MethodInfo *)0x0);
              pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((int)pGVar1->max_length == 0) goto code_?;
                if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
                  pGVar4 = (this->fields)._scSglSlidersLookAndFeel;
                  uVar5 = 0;
                  fVar6 = (pGVar1->vector[0]->fields)._boxDepth;
                  uVar7 = 0;
                  if (pGVar4 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                    ppGVar8 = pGVar4->vector;
                    while ((int)uVar7 < (int)pGVar4->max_length) {
                      if ((uint)pGVar4->max_length <= uVar7) goto code_?;
                      pGVar2 = *ppGVar8;
                      if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
                      if (0.0 <= fVar6) {
                        uVar7 = uVar7 + 1;
                        (pGVar2->fields)._boxDepth = fVar6;
                        ppGVar8 = ppGVar8 + 1;
                      }
                      else {
                        uVar7 = uVar7 + 1;
                        (pGVar2->fields)._boxDepth = 0.0;
                        ppGVar8 = ppGVar8 + 1;
                      }
                    }
                    pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
                    if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                      if ((int)pGVar1->max_length == 0) goto code_?;
                      if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
                        pGVar4 = (this->fields)._scSglSlidersLookAndFeel;
                        fVar6 = (pGVar1->vector[0]->fields)._boxHeight;
                        uVar7 = 0;
                        if (pGVar4 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                          ppGVar8 = pGVar4->vector;
                          while ((int)uVar7 < (int)pGVar4->max_length) {
                            if ((uint)pGVar4->max_length <= uVar7) goto code_?;
                            pGVar2 = *ppGVar8;
                            if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0)
                            goto code_?;
                            if (0.0 <= fVar6) {
                              uVar7 = uVar7 + 1;
                              (pGVar2->fields)._boxHeight = fVar6;
                              ppGVar8 = ppGVar8 + 1;
                            }
                            else {
                              uVar7 = uVar7 + 1;
                              (pGVar2->fields)._boxHeight = 0.0;
                              ppGVar8 = ppGVar8 + 1;
                            }
                          }
                          pGVar1 = (lookAndFeel->fields)._sglSlidersLookAndFeel;
                          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                            if ((int)pGVar1->max_length == 0) goto code_?;
                            if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
                              pGVar4 = (this->fields)._scSglSlidersLookAndFeel;
                              fVar6 = (pGVar1->vector[0]->fields)._cylinderRadius;
                              uVar7 = 0;
                              if (pGVar4 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                ppGVar8 = pGVar4->vector;
                                while ((int)uVar7 < (int)pGVar4->max_length) {
                                  if ((uint)pGVar4->max_length <= uVar7) goto code_?;
                                  pGVar2 = *ppGVar8;
                                  if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)0x0)
                                  goto code_?;
                                  if (0.0 <= fVar6) {
                                    uVar7 = uVar7 + 1;
                                    (pGVar2->fields)._cylinderRadius = fVar6;
                                    ppGVar8 = ppGVar8 + 1;
                                  }
                                  else {
                                    uVar7 = uVar7 + 1;
                                    (pGVar2->fields)._cylinderRadius = 0.0;
                                    ppGVar8 = ppGVar8 + 1;
                                  }
                                }
                                pGVar9 = (lookAndFeel->fields)._dblSlidersLookAndFeel;
                                if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                  if ((int)pGVar9->max_length == 0) goto code_?;
                                  if (pGVar9->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                    UniversalGizmoLookAndFeel3D_SetScDblSliderFillAlpha
                                              (this,(pGVar9->vector[0]->fields)._color.a,
                                               (MethodInfo *)0x0);
                                    pGVar9 = (lookAndFeel->fields)._dblSlidersLookAndFeel;
                                    if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                      if ((int)pGVar9->max_length == 0) goto code_?;
                                      if (pGVar9->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                      {
                                        UniversalGizmoLookAndFeel3D_SetScDblSliderSize
                                                  (this,(pGVar9->vector[0]->fields).
                                                        _raTriangleXLength,(MethodInfo *)0x0);
                                        pBVar10 = (lookAndFeel->fields)._dblSliderVis;
                                        if (pBVar10 != (Boolean__Array *)0x0) {
                                          if ((int)pBVar10->max_length == 0) {
code_?:
                                            FUN_?();
                                            pcVar11 = (code *)swi(3);
                                            (*pcVar11)();
                                            return;
                                          }
                                          pBVar12 = (this->fields)._scDblSliderVis;
                                          if (pBVar12 != (Boolean__Array *)0x0) {
                                            if ((int)pBVar12->max_length == 0)
                                            goto code_?;
                                            pBVar12->vector[0] = pBVar10->vector[0] != 0;
                                            pBVar10 = (lookAndFeel->fields)._dblSliderVis;
                                            if (pBVar10 != (Boolean__Array *)0x0) {
                                              if ((uint)pBVar10->max_length < 2)
                                              goto code_?;
                                              pBVar12 = (this->fields)._scDblSliderVis;
                                              if (pBVar12 != (Boolean__Array *)0x0) {
                                                if ((uint)pBVar12->max_length < 2)
                                                goto code_?;
                                                pBVar12->vector[1] = pBVar10->vector[1] != 0;
                                                pBVar10 = (lookAndFeel->fields)._dblSliderVis;
                                                if (pBVar10 != (Boolean__Array *)0x0) {
                                                  if ((uint)pBVar10->max_length < 3)
                                                  goto code_?;
                                                  pBVar12 = (this->fields)._scDblSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if ((uint)pBVar12->max_length < 3)
                                                    goto code_?;
                                                    pBVar12->vector[2] = pBVar10->vector[2] != 0;
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    pGVar2 = pGVar1->vector[0];
                                                    if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)
                                                                  0x0) {
                                                      aCStack_3[0].r =
                                                           (pGVar2->fields)._hoveredColor.r;
                                                      aCStack_3[0].g =
                                                           (pGVar2->fields)._hoveredColor.g;
                                                      aCStack_3[0].b =
                                                           (pGVar2->fields)._hoveredColor.b;
                                                      aCStack_3[0].a =
                                                           (pGVar2->fields)._hoveredColor.a;
                                                      UniversalGizmoLookAndFeel3D_SetScHoveredColor
                                                                (this,aCStack_3,(MethodInfo *)0x0);
                                                      fVar6 = _UNK_?;
                                                      pGVar13 = (lookAndFeel->fields).
                                                                _midCapLookAndFeel;
                                                      if ((pGVar13 != (GizmoCap3DLookAndFeel *)0x0)
                                                         && (pGVar14 = (this->fields).
                                                                       _scMidCapLookAndFeel,
                                                            pGVar14 != (GizmoCap3DLookAndFeel *)0x0)
                                                         ) {
                                                        fVar15 = (pGVar13->fields)._boxDepth;
                                                        if (fVar15 < _UNK_?) {
                                                          fVar15 = _UNK_?;
                                                        }
                                                        (pGVar14->fields)._boxDepth = fVar15;
                                                        if ((pGVar13 != (GizmoCap3DLookAndFeel *)0x0
                                                            ) && (pGVar14 = (this->fields).
                                                                            _scMidCapLookAndFeel,
                                                                 pGVar14 !=
                                                                 (GizmoCap3DLookAndFeel *)0x0)) {
                                                          fVar15 = (pGVar13->fields)._boxHeight;
                                                          if (fVar15 < fVar6) {
                                                            fVar15 = fVar6;
                                                          }
                                                          (pGVar14->fields)._boxHeight = fVar15;
                                                          if ((pGVar13 !=
                                                               (GizmoCap3DLookAndFeel *)0x0) &&
                                                             (pGVar14 = (this->fields).
                                                                        _scMidCapLookAndFeel,
                                                             pGVar14 != (GizmoCap3DLookAndFeel *)0x0
                                                             )) {
                                                            fVar15 = (pGVar13->fields)._boxWidth;
                                                            if (fVar15 < fVar6) {
                                                              fVar15 = fVar6;
                                                            }
                                                            (pGVar14->fields)._boxWidth = fVar15;
                                                            if ((pGVar13 !=
                                                                 (GizmoCap3DLookAndFeel *)0x0) &&
                                                               (pGVar14 = (this->fields).
                                                                          _scMidCapLookAndFeel,
                                                               pGVar14 !=
                                                               (GizmoCap3DLookAndFeel *)0x0)) {
                                                              fVar15 = (pGVar13->fields)._color.g;
                                                              fVar16 = (pGVar13->fields)._color.b;
                                                              fVar17 = (pGVar13->fields)._color.a;
                                                              (pGVar14->fields)._color.r =
                                                                   (pGVar13->fields)._color.r;
                                                              (pGVar14->fields)._color.g = fVar15;
                                                              (pGVar14->fields)._color.b = fVar16;
                                                              (pGVar14->fields)._color.a = fVar17;
                                                              pGVar13 = (lookAndFeel->fields).
                                                                        _midCapLookAndFeel;
                                                              if ((pGVar13 !=
                                                                   (GizmoCap3DLookAndFeel *)0x0) &&
                                                                 (pGVar14 = (this->fields).
                                                                            _scMidCapLookAndFeel,
                                                                 pGVar14 !=
                                                                 (GizmoCap3DLookAndFeel *)0x0)) {
                                                                (pGVar14->fields)._fillMode =
                                                                     (pGVar13->fields)._fillMode;
                                                                pGVar13 = (lookAndFeel->fields).
                                                                          _midCapLookAndFeel;
                                                                if ((pGVar13 !=
                                                                     (GizmoCap3DLookAndFeel *)0x0)
                                                                   && (pGVar14 = (this->fields).
                                                                                                                                                                  
                                                  _scMidCapLookAndFeel,
                                                  pGVar14 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                    (pGVar14->fields)._shadeMode =
                                                         (pGVar13->fields)._shadeMode;
                                                    pGVar13 = (lookAndFeel->fields).
                                                              _midCapLookAndFeel;
                                                    if ((pGVar13 != (GizmoCap3DLookAndFeel *)0x0) &&
                                                       (pGVar14 = (this->fields).
                                                                  _scMidCapLookAndFeel,
                                                       pGVar14 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      fVar15 = (pGVar13->fields)._sphereRadius;
                                                      if (fVar15 < fVar6) {
                                                        fVar15 = fVar6;
                                                      }
                                                      (pGVar14->fields)._sphereRadius = fVar15;
                                                      if (pGVar13 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        iVar18 = (pGVar13->fields)._capType;
                                                        if ((iVar18 == 2) || (iVar18 == 3)) {
                                                          pGVar13 = (this->fields).
                                                                    _scMidCapLookAndFeel;
                                                          if (pGVar13 ==
                                                              (GizmoCap3DLookAndFeel *)0x0)
                                                          goto code_?;
                                                          (pGVar13->fields)._capType = iVar18;
                                                        }
                                                        pGVar13 = (lookAndFeel->fields).
                                                                  _midCapLookAndFeel;
                                                        if (pGVar13 != (GizmoCap3DLookAndFeel *)0x0)
                                                        {
                                                          pGVar1 = (this->fields).
                                                                   _scSglSlidersLookAndFeel;
                                                          uVar7 = 0;
                                                          fVar15 = (pGVar13->fields)._scale;
                                                          if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar8;
                                                      if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      fVar16 = fVar15;
                                                      if (fVar15 < 0.0) {
                                                        fVar16 = 0.0;
                                                      }
                                                      pGVar13 = (pGVar2->fields)._capLookAndFeel;
                                                      (pGVar2->fields)._scale = fVar16;
                                                      if (pGVar13 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      if (0.0 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._scale = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._scale = 0.0;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar9 = (this->fields)._scDblSlidersLookAndFeel
                                                    ;
                                                    uVar7 = 0;
                                                    if (pGVar9 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar19 = pGVar9->vector;
                                                    while ((int)uVar7 < (int)pGVar9->max_length) {
                                                      if ((uint)pGVar9->max_length <= uVar7)
                                                      goto code_?;
                                                      pGVar20 = *ppGVar19;
                                                      if (pGVar20 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      if (0.0 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar20->fields)._scale = fVar15;
                                                        ppGVar19 = ppGVar19 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar20->fields)._scale = 0.0;
                                                        ppGVar19 = ppGVar19 + 1;
                                                      }
                                                    }
                                                    pGVar13 = (this->fields)._scMidCapLookAndFeel;
                                                    if (pGVar13 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      if (fVar15 < 0.0) {
                                                        fVar15 = 0.0;
                                                      }
                                                      pGVar21 = (lookAndFeel->fields).
                                                                _scaleGuideLookAndFeel;
                                                      (pGVar13->fields)._scale = fVar15;
                                                      if ((pGVar21 !=
                                                           (GizmoScaleGuideLookAndFeel *)0x0) &&
                                                         (pGVar22 = (this->fields).
                                                                    _scScaleGuideLookAndFeel,
                                                         pGVar22 !=
                                                         (GizmoScaleGuideLookAndFeel *)0x0)) {
                                                        fVar15 = (pGVar21->fields)._axisLength;
                                                        fVar16 = 0.0;
                                                        if (0.0 <= fVar15) {
                                                          fVar16 = fVar15;
                                                        }
                                                        (pGVar22->fields)._axisLength = fVar16;
                                                        pGVar1 = (lookAndFeel->fields).
                                                                 _sglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._boxDepth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._boxDepth = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._boxDepth = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._boxHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._boxHeight = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._boxHeight = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._boxWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._boxWidth = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._boxWidth = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      iVar23 = (pGVar13->fields)._fillMode;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    for (; (int)uVar7 < (int)pGVar1->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar13->fields)._fillMode = iVar23;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      iVar23 = (pGVar13->fields)._shadeMode;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    for (; (int)uVar7 < (int)pGVar1->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar13->fields)._shadeMode = iVar23;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      iVar23 = (pGVar13->fields)._capType;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    for (; (int)uVar7 < (int)pGVar1->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar13->fields)._capType = iVar23;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pBVar10 = (lookAndFeel->fields)._sglSliderCapVis;
                                                    if (pBVar10 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar10->max_length == 0)
                                                      goto code_?;
                                                      pBVar12 = (this->fields)._scSglSliderCapVis;
                                                      if (pBVar12 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar12->max_length == 0)
                                                        goto code_?;
                                                        pBVar12->vector[0] = pBVar10->vector[0] != 0;
                                                        pBVar10 = (lookAndFeel->fields).
                                                                 _sglSliderCapVis;
                                                        if (pBVar10 != (Boolean__Array *)0x0) {
                                                          if ((uint)pBVar10->max_length < 2)
                                                          goto code_?;
                                                          pBVar12 = (this->fields).
                                                                    _scSglSliderCapVis;
                                                          if (pBVar12 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar12->max_length < 2)
                                                            goto code_?;
                                                            pBVar12->vector[1] =
                                                                 pBVar10->vector[1] != 0;
                                                            pBVar10 = (lookAndFeel->fields).
                                                                     _sglSliderCapVis;
                                                            if (pBVar10 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar10->max_length < 3)
                                                              goto code_?;
                                                              pBVar12 = (this->fields).
                                                                        _scSglSliderCapVis;
                                                              if (pBVar12 != (Boolean__Array *)0x0)
                                                              {
                                                                if ((uint)pBVar12->max_length < 3)
                                                                goto code_?;
                                                                pBVar12->vector[2] =
                                                                     pBVar10->vector[2] != 0;
                                                                pBVar10 = (lookAndFeel->fields).
                                                                         _sglSliderCapVis;
                                                                if (pBVar10 != (Boolean__Array *)0x0)
                                                                {
                                                                  if ((uint)pBVar10->max_length < 4)
                                                                  goto code_?;
                                                                  pBVar12 = (this->fields).
                                                                            _scSglSliderCapVis;
                                                                  if (pBVar12 !=
                                                                      (Boolean__Array *)0x0) {
                                                                    if ((uint)pBVar12->max_length <
                                                                        4) goto code_?
                                                                           ;
                                                                    pBVar12->vector[3] =
                                                                         pBVar10->vector[3] != 0;
                                                                    pBVar10 = (lookAndFeel->fields).
                                                                             _sglSliderCapVis;
                                                                    if (pBVar10 != (Boolean__Array *)
                                                                                  0x0) {
                                                                      if ((uint)pBVar10->max_length <
                                                                          5) goto 
                                                  code_?;
                                                  pBVar12 = (this->fields)._scSglSliderCapVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if ((uint)pBVar12->max_length < 5)
                                                    goto code_?;
                                                    pBVar12->vector[4] = pBVar10->vector[4] != 0;
                                                    pBVar10 = (lookAndFeel->fields)._sglSliderCapVis;
                                                    if (pBVar10 != (Boolean__Array *)0x0) {
                                                      if ((uint)pBVar10->max_length < 6)
                                                      goto code_?;
                                                      pBVar12 = (this->fields)._scSglSliderCapVis;
                                                      if (pBVar12 != (Boolean__Array *)0x0) {
                                                        if ((uint)pBVar12->max_length < 6)
                                                        goto code_?;
                                                        pBVar12->vector[5] = pBVar10->vector[5] != 0;
                                                        pGVar1 = (lookAndFeel->fields).
                                                                 _sglSlidersLookAndFeel;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._coneHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._coneHeight = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._coneHeight = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._coneRadius;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._coneRadius = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._coneRadius = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      pGVar4 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      iVar23 = (pGVar1->vector[0]->fields)._fillMode;
                                                      uVar7 = 0;
                                                      if (pGVar4 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar4->vector;
                                                    for (; (int)uVar7 < (int)pGVar4->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar4->max_length <= uVar7)
                                                      goto code_?;
                                                      if (*ppGVar8 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar8)->fields)._fillMode = iVar23;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      UniversalGizmoLookAndFeel3D_SetScSliderLength
                                                                (this,(pGVar1->vector[0]->fields).
                                                                      _length,(MethodInfo *)0x0);
                                                      pGVar1 = (lookAndFeel->fields).
                                                               _sglSlidersLookAndFeel;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      pGVar4 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      iVar23 = (pGVar1->vector[0]->fields)._lineType;
                                                      uVar7 = 0;
                                                      if (pGVar4 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar4->vector;
                                                    for (; (int)uVar7 < (int)pGVar4->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar4->max_length <= uVar7)
                                                      goto code_?;
                                                      if (*ppGVar8 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar8)->fields)._lineType = iVar23;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._pyramidDepth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._pyramidDepth = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._pyramidDepth = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._pyramidHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._pyramidHeight = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._pyramidHeight = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._pyramidWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._pyramidWidth = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._pyramidWidth = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider3DLookAndFeel *)0x0) {
                                                      pGVar4 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      iVar23 = (pGVar1->vector[0]->fields)._shadeMode
                                                      ;
                                                      uVar7 = 0;
                                                      if (pGVar4 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar4->vector;
                                                    for (; (int)uVar7 < (int)pGVar4->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar4->max_length <= uVar7)
                                                      goto code_?;
                                                      if (*ppGVar8 ==
                                                          (GizmoLineSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar8)->fields)._shadeMode = iVar23;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._sphereRadius;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._sphereRadius = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._sphereRadius = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._trPrismDepth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._trPrismDepth = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._trPrismDepth = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._trPrismHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._trPrismHeight = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._trPrismHeight = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSlidersLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                  _capLookAndFeel,
                                                       pGVar13 != (GizmoCap3DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _scSglSlidersLookAndFeel;
                                                      uVar7 = 0;
                                                      fVar15 = (pGVar13->fields)._trPrismWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    while ((int)uVar7 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      if ((*ppGVar8 ==
                                                           (GizmoLineSlider3DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar8)->fields).
                                                                    _capLookAndFeel,
                                                         pGVar13 == (GizmoCap3DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (fVar6 <= fVar15) {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._trPrismWidth = fVar15;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                      else {
                                                        uVar7 = uVar7 + 1;
                                                        (pGVar13->fields)._trPrismWidth = fVar6;
                                                        ppGVar8 = ppGVar8 + 1;
                                                      }
                                                    }
                                                    pBVar10 = (lookAndFeel->fields)._sglSliderVis;
                                                    if (pBVar10 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar10->max_length == 0)
                                                      goto code_?;
                                                      pBVar12 = (this->fields)._scSglSliderVis;
                                                      if (pBVar12 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar12->max_length == 0)
                                                        goto code_?;
                                                        pBVar12->vector[0] = pBVar10->vector[0] != 0;
                                                        pBVar10 = (lookAndFeel->fields)._sglSliderVis
                                                        ;
                                                        if (pBVar10 != (Boolean__Array *)0x0) {
                                                          if ((uint)pBVar10->max_length < 2)
                                                          goto code_?;
                                                          pBVar12 = (this->fields)._scSglSliderVis;
                                                          if (pBVar12 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar12->max_length < 2)
                                                            goto code_?;
                                                            pBVar12->vector[1] =
                                                                 pBVar10->vector[1] != 0;
                                                            pBVar10 = (lookAndFeel->fields).
                                                                     _sglSliderVis;
                                                            if (pBVar10 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar10->max_length < 3)
                                                              goto code_?;
                                                              pBVar12 = (this->fields).
                                                                        _scSglSliderVis;
                                                              if (pBVar12 != (Boolean__Array *)0x0)
                                                              {
                                                                if ((uint)pBVar12->max_length < 3)
                                                                goto code_?;
                                                                pBVar12->vector[2] =
                                                                     pBVar10->vector[2] != 0;
                                                                pBVar10 = (lookAndFeel->fields).
                                                                         _sglSliderVis;
                                                                if (pBVar10 != (Boolean__Array *)0x0)
                                                                {
                                                                  if ((uint)pBVar10->max_length < 4)
                                                                  goto code_?;
                                                                  pBVar12 = (this->fields).
                                                                            _scSglSliderVis;
                                                                  if (pBVar12 !=
                                                                      (Boolean__Array *)0x0) {
                                                                    if ((uint)pBVar12->max_length <
                                                                        4) goto code_?
                                                                           ;
                                                                    pBVar12->vector[3] =
                                                                         pBVar10->vector[3] != 0;
                                                                    pBVar10 = (lookAndFeel->fields).
                                                                             _sglSliderVis;
                                                                    if (pBVar10 != (Boolean__Array *)
                                                                                  0x0) {
                                                                      if ((uint)pBVar10->max_length <
                                                                          5) goto 
                                                  code_?;
                                                  pBVar12 = (this->fields)._scSglSliderVis;
                                                  if (pBVar12 != (Boolean__Array *)0x0) {
                                                    if ((uint)pBVar12->max_length < 5)
                                                    goto code_?;
                                                    pBVar12->vector[4] = pBVar10->vector[4] != 0;
                                                    pBVar10 = (lookAndFeel->fields)._sglSliderVis;
                                                    if (pBVar10 != (Boolean__Array *)0x0) {
                                                      if ((uint)pBVar10->max_length < 6)
                                                      goto code_?;
                                                      pBVar12 = (this->fields)._scSglSliderVis;
                                                      if (pBVar12 != (Boolean__Array *)0x0) {
                                                        if ((uint)pBVar12->max_length < 6)
                                                        goto code_?;
                                                        pBVar12->vector[5] = pBVar10->vector[5] != 0;
                                                        pGVar13 = (lookAndFeel->fields).
                                                                  _midCapLookAndFeel;
                                                        if (pGVar13 != (GizmoCap3DLookAndFeel *)0x0)
                                                        {
                                                          pGVar1 = (this->fields).
                                                                   _scSglSlidersLookAndFeel;
                                                          bVar24 = (pGVar13->fields)._useZoomFactor;
                                                          uVar7 = 0;
                                                          if (pGVar1 != (
                                                  GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar8 = pGVar1->vector;
                                                    for (; (int)uVar7 < (int)pGVar1->max_length;
                                                        uVar7 = uVar7 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar7)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar8;
                                                      if (pGVar2 == (GizmoLineSlider3DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      pGVar13 = (pGVar2->fields)._capLookAndFeel;
                                                      (pGVar2->fields)._useZoomFactor = bVar24;
                                                      if (pGVar13 == (GizmoCap3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      (pGVar13->fields)._useZoomFactor = bVar24;
                                                      ppGVar8 = ppGVar8 + 1;
                                                    }
                                                    pGVar9 = (this->fields)._scDblSlidersLookAndFeel
                                                    ;
                                                    if (pGVar9 != (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar19 = pGVar9->vector;
                                                    for (; (int)uVar5 < (int)pGVar9->max_length;
                                                        uVar5 = uVar5 + 1) {
                                                      if ((uint)pGVar9->max_length <= uVar5)
                                                      goto code_?;
                                                      if (*ppGVar19 ==
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar19)->fields)._useZoomFactor = bVar24;
                                                      ppGVar19 = ppGVar19 + 1;
                                                    }
                                                    pGVar13 = (this->fields)._scMidCapLookAndFeel;
                                                    if (pGVar13 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      (pGVar13->fields)._useZoomFactor = bVar24;
                                                      pGVar21 = (this->fields).
                                                                _scScaleGuideLookAndFeel;
                                                      if (pGVar21 !=
                                                          (GizmoScaleGuideLookAndFeel *)0x0) {
                                                        (pGVar21->fields)._useZoomFactor = bVar24;
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsMvDblSliderVisible(PlaneId) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvDblSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (planeId < (PlaneId__Enum)pBVar1->max_length) {
    return pBVar1->vector[(int)planeId] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsMvNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
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


/* Boolean IsMvNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
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


/* Boolean IsMvPositiveSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
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


/* Boolean IsMvPositiveSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
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


/* Boolean IsMvSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
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


/* Boolean IsMvSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsMvSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
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
  pBVar1 = (this->fields)._rtAxesVis;
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


/* Boolean IsScDblSliderVisible(PlaneId) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pBVar1 = (this->fields)._scDblSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (planeId < (PlaneId__Enum)pBVar1->max_length) {
    return pBVar1->vector[(int)planeId] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
  pBVar1 = (this->fields)._scSglSliderCapVis;
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


/* Boolean IsScNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderVis;
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


/* Boolean IsScPositiveSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderCapVis;
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


/* Boolean IsScPositiveSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderVis;
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


/* Boolean IsScSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderCapVis;
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


/* Boolean IsScSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_IsScSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderVis;
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


/* Void SetMvAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvAxisColor
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
      pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar8 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar8->fields)._color.r = fVar4;
          (pGVar8->fields)._color.g = fVar5;
          (pGVar8->fields)._color.b = fVar6;
          (pGVar8->fields)._color.a = fVar7;
          pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 3U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 3];
            if (pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar3->fields)._color.r = fVar4;
              (pGVar3->fields)._color.g = fVar5;
              (pGVar3->fields)._color.b = fVar6;
              (pGVar3->fields)._color.a = fVar7;
              pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 3U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 3] != (GizmoLineSlider3DLookAndFeel *)0x0)
                   && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 3]->fields)._capLookAndFeel,
                      pGVar8 != (GizmoCap3DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._color.r = fVar4;
                  (pGVar8->fields)._color.g = fVar5;
                  (pGVar8->fields)._color.b = fVar6;
                  (pGVar8->fields)._color.a = fVar7;
                  pGVar9 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
                  if (axisIndex == 0) {
                    pGVar10 = (this->fields)._mvDblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                    goto code_?;
                    if ((uint)pGVar10->max_length < 2) goto code_?;
                    pGVar9 = pGVar10->vector[1];
                  }
                  else if (axisIndex == 1) {
                    pGVar10 = (this->fields)._mvDblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                    goto code_?;
                    if ((uint)pGVar10->max_length < 3) goto code_?;
                    pGVar9 = pGVar10->vector[2];
                  }
                  else if (axisIndex == 2) {
                    pGVar10 = (this->fields)._mvDblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                    goto code_?;
                    if ((int)pGVar10->max_length == 0) goto code_?;
                    pGVar9 = pGVar10->vector[0];
                  }
                  if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                    fVar7 = (pGVar9->fields)._color.a;
                    fVar11 = color->r;
                    fVar12 = color->g;
                    fVar13 = color->b;
                    fVar14 = color->a;
                    (pGVar9->fields)._color.r = fVar4;
                    (pGVar9->fields)._color.g = fVar5;
                    (pGVar9->fields)._color.b = fVar6;
                    (pGVar9->fields)._color.a = fVar7;
                    (pGVar9->fields)._borderColor.r = fVar11;
                    (pGVar9->fields)._borderColor.g = fVar12;
                    (pGVar9->fields)._borderColor.b = fVar13;
                    (pGVar9->fields)._borderColor.a = fVar14;
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


/* Void SetMvBoxSliderDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvBoxSliderDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void SetMvBoxSliderHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvBoxSliderHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void SetMvCylinderSliderRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvCylinderSliderRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
      if (0.0 <= radius) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._cylinderRadius = radius;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._cylinderRadius = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      if (0.0 <= depth) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderBoxDepth = depth;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderBoxDepth = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderBoxHeight = height;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderBoxHeight = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvDblSliderBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._borderFillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvDblSliderBorderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderBorderShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._borderShadeMode = shadeMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
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
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._quadBorderType = borderType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
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
    alpha = 0.0;
  }
  else if (_UNK_? < alpha) {
    alpha = _UNK_?;
  }
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Void SetMvDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderSize
               (UniversalGizmoLookAndFeel3D *this,float size,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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
      (pGVar4->fields)._quadWidth = fVar5;
      if (0.0 <= size) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._quadHeight = size;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._quadHeight = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(uVar2,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvDblSliderVisible(PlaneId, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvDblSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (planeId < (PlaneId__Enum)pBVar1->max_length) {
    pBVar1->vector[(int)planeId] = isVisible;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color *hoveredColor,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar2 = 0;
  uVar3 = 0;
  pUVar4 = this;
  pCVar5 = hoveredColor;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar1->max_length <= uVar3) goto code_?;
      pUVar4 = (UniversalGizmoLookAndFeel3D *)method->methodPointer;
      if (pUVar4 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      pGVar6 = *(GizmoLineSlider3DLookAndFeel__Array **)hoveredColor;
      pGVar7 = *(GizmoPlaneSlider3DLookAndFeel__Array **)&hoveredColor->b;
      pCVar5 = *(Color **)&(pUVar4->fields)._isRtMidCapVisible;
      (pUVar4->fields)._mvSglSlidersLookAndFeel = pGVar6;
      (pUVar4->fields)._mvDblSlidersLookAndFeel = pGVar7;
      if (pCVar5 == (Color *)0x0) goto code_?;
      method = (MethodInfo *)&method->virtualMethodPointer;
      *(GizmoLineSlider3DLookAndFeel__Array **)&pCVar5[7].a = pGVar6;
      *(GizmoPlaneSlider3DLookAndFeel__Array **)&pCVar5[8].g = pGVar7;
    }
    pGVar7 = (this->fields)._mvDblSlidersLookAndFeel;
    pUVar4 = (UniversalGizmoLookAndFeel3D *)0x0;
    if (pGVar7 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      pCVar5 = (Color *)pGVar7->vector;
      do {
        if ((int)pGVar7->max_length <= (int)pUVar4) {
          return;
        }
        if ((uint)pGVar7->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pGVar9 = *(GizmoPlaneSlider3DLookAndFeel **)&pCVar5->r;
        pUVar4 = (UniversalGizmoLookAndFeel3D *)0x0;
        if (pGVar9 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
        fVar10 = hoveredColor->r;
        fVar11 = hoveredColor->g;
        fVar12 = hoveredColor->b;
        fVar13 = hoveredColor->a;
        uVar2 = uVar2 + 1;
        fVar14 = (pGVar9->fields)._color.a;
        pCVar5 = (Color *)&pCVar5->b;
        (pGVar9->fields)._hoveredBorderColor.r = fVar10;
        (pGVar9->fields)._hoveredBorderColor.g = fVar11;
        (pGVar9->fields)._hoveredBorderColor.b = fVar12;
        (pGVar9->fields)._hoveredBorderColor.a = fVar13;
        (pGVar9->fields)._hoveredColor.r = fVar10;
        (pGVar9->fields)._hoveredColor.g = fVar11;
        (pGVar9->fields)._hoveredColor.b = fVar12;
        (pGVar9->fields)._hoveredColor.a = fVar14;
        pUVar4 = (UniversalGizmoLookAndFeel3D *)(ulonglong)uVar2;
      } while( true );
    }
  }
code_?:
  FUN_?(pUVar4,pCVar5,method);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetMvNegativeSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
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


/* Void SetMvNegativeSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
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


/* Void SetMvPositiveSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
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


/* Void SetMvPositiveSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
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


/* Void SetMvScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_SetMvScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
    pGVar8 = (this->fields)._mvDblSlidersLookAndFeel;
    if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar9 = pGVar8->vector;
      do {
        if ((int)pGVar8->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pGVar8->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pGVar11 = *ppGVar9;
        if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
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
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetMvSliderBoxCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderBoxCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= depth) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxDepth = depth;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxDepth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderBoxCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderBoxCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderBoxCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderBoxCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= width) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxWidth = width;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxWidth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
      break;
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


/* Void SetMvSliderCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
      break;
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


/* Void SetMvSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
      break;
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


/* Void SetMvSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
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


/* Void SetMvSliderConeCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderConeCapBaseRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= radius) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneRadius = radius;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneRadius = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderConeCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderConeCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void SetMvSliderLength(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderLength
               (UniversalGizmoLookAndFeel3D *this,float axisLength,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void SetMvSliderLineType(GizmoLine3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderLineType
               (UniversalGizmoLookAndFeel3D *this,GizmoLine3DType__Enum lineType,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void SetMvSliderPyramidCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderPyramidCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= depth) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidDepth = depth;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidDepth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderPyramidCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderPyramidCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderPyramidCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderPyramidCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= width) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidWidth = width;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidWidth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Void SetMvSliderSphereCapRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderSphereCapRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= radius) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._sphereRadius = radius;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._sphereRadius = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderTriPrismCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderTriPrismCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= depth) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismDepth = depth;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismDepth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderTriPrismCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderTriPrismCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderTriPrismCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderTriPrismCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= width) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismWidth = width;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismWidth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
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


/* Void SetMvUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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
    pGVar6 = (this->fields)._mvDblSlidersLookAndFeel;
    uVar2 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      do {
        if ((int)pGVar6->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pGVar6->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*ppGVar7 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
        uVar2 = uVar2 + 1;
        ((*ppGVar7)->fields)._useZoomFactor = useZoomFactor;
        ppGVar7 = ppGVar7 + 1;
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetMvVertSnapCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._borderColor.r = color->r;
    (pGVar1->fields)._borderColor.g = fVar2;
    (pGVar1->fields)._borderColor.b = fVar3;
    (pGVar1->fields)._borderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvVertSnapCapCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapCircleRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar1->fields)._circleRadius = radius;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvVertSnapCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Void SetMvVertSnapCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar1->fields)._fillMode = fillMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvVertSnapCapHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapHoveredBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredBorderColor.r = color->r;
    (pGVar1->fields)._hoveredBorderColor.g = fVar2;
    (pGVar1->fields)._hoveredBorderColor.b = fVar3;
    (pGVar1->fields)._hoveredBorderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvVertSnapCapHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredColor.r = color->r;
    (pGVar1->fields)._hoveredColor.g = fVar2;
    (pGVar1->fields)._hoveredColor.b = fVar3;
    (pGVar1->fields)._hoveredColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvVertSnapCapQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapQuadHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= height) {
      fVar2 = height;
    }
    (pGVar1->fields)._quadHeight = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvVertSnapCapQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapQuadWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= width) {
      fVar2 = width;
    }
    (pGVar1->fields)._quadWidth = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvVertSnapCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetMvVertSnapCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  if ((capType == GizmoCap2DType__Enum_Circle) || (capType == GizmoCap2DType__Enum_Quad)) {
    pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
    if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pGVar1->fields)._capType = capType;
  }
  return;
}


/* Void SetRtAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderColor
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar4 = color->g;
      fVar5 = color->b;
      fVar6 = color->a;
      (pGVar3->fields)._borderColor.r = color->r;
      (pGVar3->fields)._borderColor.g = fVar4;
      (pGVar3->fields)._borderColor.b = fVar5;
      (pGVar3->fields)._borderColor.a = fVar6;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRtAxisBorderCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderCullAlphaScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((GizmoPlaneSlider3DLookAndFeel *)method->methodPointer ==
          (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      if (scale < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = scale;
        if (fVar1 < scale) {
          fVar5 = fVar1;
        }
      }
      uVar3 = uVar3 + 1;
      (((GizmoPlaneSlider3DLookAndFeel *)method->methodPointer)->fields)._borderCircleCullAlphaScale
           = fVar5;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
  }
  FUN_?(0,pGVar2,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtAxisBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisBorderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._borderFillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
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
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._circleBorderType = borderType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
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
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusHeight = height;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusHeight = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      if (0.0 <= width) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusWidth = width;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusWidth = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      if (0.0 <= thickness) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderTorusThickness = thickness;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderTorusThickness = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetRtAxisVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtAxisVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._rtAxesVis;
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


/* Void SetRtCamLookSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._borderColor.r = color->r;
    (pGVar1->fields)._borderColor.g = fVar2;
    (pGVar1->fields)._borderColor.b = fVar3;
    (pGVar1->fields)._borderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtCamLookSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderHoveredBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredBorderColor.r = color->r;
    (pGVar1->fields)._hoveredBorderColor.g = fVar2;
    (pGVar1->fields)._hoveredBorderColor.b = fVar3;
    (pGVar1->fields)._hoveredBorderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtCamLookSliderPolyBorderThickness(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderPolyBorderThickness
               (UniversalGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= thickness) {
      fVar2 = thickness;
    }
    (pGVar1->fields)._borderPolyThickness = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetRtCamLookSliderPolyBorderType(GizmoPolygon2DBorderType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtCamLookSliderPolyBorderType
               (UniversalGizmoLookAndFeel3D *this,GizmoPolygon2DBorderType__Enum polyBorderType,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar1->fields)._polygonBorderType = polyBorderType;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
               (UniversalGizmoLookAndFeel3D *this,Color *hoveredColor,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar6 = hoveredColor->r;
      uVar7 = hoveredColor->g;
      uVar8 = hoveredColor->b;
      uVar9 = hoveredColor->a;
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredColor.a = (float)uVar9;
      (pGVar5->fields)._hoveredBorderColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredBorderColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredBorderColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredBorderColor.a = (float)uVar9;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtHoveredMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtHoveredMidCapColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredColor.r = color->r;
    (pGVar1->fields)._hoveredColor.g = fVar2;
    (pGVar1->fields)._hoveredColor.b = fVar3;
    (pGVar1->fields)._hoveredColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtMidCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtMidCapBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._sphereBorderColor.r = color->r;
    (pGVar1->fields)._sphereBorderColor.g = fVar2;
    (pGVar1->fields)._sphereBorderColor.b = fVar3;
    (pGVar1->fields)._sphereBorderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtMidCapBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtMidCapBorderVisible
               (UniversalGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._isSphereBorderVisible = isVisible;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRtMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtMidCapColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
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


/* Void SetRtNumAxisTorusWireAxialSlices(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtNumAxisTorusWireAxialSlices
               (UniversalGizmoLookAndFeel3D *this,int32_t numSlices,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      iVar5 = 2;
      if (1 < numSlices) {
        iVar5 = numSlices;
      }
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._numBorderTorusWireAxialSlices = iVar5;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
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
    while ((int)uVar2 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= radius) {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._circleRadius = radius;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._circleRadius = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar6 = (this->fields)._rtMidCapLookAndFeel;
    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
      fVar7 = _UNK_?;
      if (_UNK_? <= radius) {
        fVar7 = radius;
      }
      (pGVar6->fields)._sphereRadius = fVar7;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtRotationArcBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtRotationArcBorderColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar5 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._borderColor.r = color->r;
      (pGVar5->fields)._borderColor.g = fVar6;
      (pGVar5->fields)._borderColor.b = fVar7;
      (pGVar5->fields)._borderColor.a = fVar8;
    }
    pGVar9 = (this->fields)._rtCamLookSliderLookAndFeel;
    if ((pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar10 = (pGVar9->fields)._rotationArcLookAndFeel,
       pGVar10 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      (pGVar10->fields)._borderColor.r = color->r;
      (pGVar10->fields)._borderColor.g = fVar6;
      (pGVar10->fields)._borderColor.b = fVar7;
      (pGVar10->fields)._borderColor.a = fVar8;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtRotationArcColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtRotationArcColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar5 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._color.r = color->r;
      (pGVar5->fields)._color.g = fVar6;
      (pGVar5->fields)._color.b = fVar7;
      (pGVar5->fields)._color.a = fVar8;
    }
    pGVar9 = (this->fields)._rtCamLookSliderLookAndFeel;
    if ((pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar10 = (pGVar9->fields)._rotationArcLookAndFeel,
       pGVar10 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      (pGVar10->fields)._color.r = color->r;
      (pGVar10->fields)._color.g = fVar6;
      (pGVar10->fields)._color.b = fVar7;
      (pGVar10->fields)._color.a = fVar8;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtRotationArcVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtRotationArcVisible
               (UniversalGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  pUVar3 = this;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = (UniversalGizmoLookAndFeel3D *)method->methodPointer;
      if (pUVar3 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      *(bool *)((longlong)&(pUVar3->fields)._scSglSliderCapVis + 4) = isVisible;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar5 = (this->fields)._rtCamLookSliderLookAndFeel;
    if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      (pGVar5->fields)._isRotationArcVisible = isVisible;
      return;
    }
  }
code_?:
  FUN_?(pUVar3,isVisible,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    while ((int)uVar2 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= scale) {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._scale = scale;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._scale = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar6 = (this->fields)._rtMidCapLookAndFeel;
    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
      fVar7 = 0.0;
      if (0.0 <= scale) {
        fVar7 = scale;
      }
      (pGVar6->fields)._scale = fVar7;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  pUVar3 = this;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = (UniversalGizmoLookAndFeel3D *)method->methodPointer;
      if (pUVar3 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      *(GizmoShadeMode__Enum *)&(pUVar3->fields)._mvDblSliderVis = shadeMode;
      method = (MethodInfo *)&method->virtualMethodPointer;
      *(GizmoShadeMode__Enum *)&(pUVar3->fields)._scMidCapLookAndFeel = shadeMode;
    }
    pGVar5 = (this->fields)._rtMidCapLookAndFeel;
    if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar5->fields)._shadeMode = shadeMode;
      return;
    }
  }
code_?:
  FUN_?(pUVar3,shadeMode,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRtUseShortestRotationArc(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtUseShortestRotationArc
               (UniversalGizmoLookAndFeel3D *this,bool useShortest,MethodInfo *method)

{
  pBVar1 = (Boolean__Array *)CONCAT71(in_register_00000011,useShortest);
  pGVar2 = (this->fields)._rtAxesLookAndFeel;
  uVar3 = 0;
  pUVar4 = this;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar2->vector;
    for (; (int)uVar3 < (int)pGVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = (UniversalGizmoLookAndFeel3D *)method->methodPointer;
      if ((pUVar4 == (UniversalGizmoLookAndFeel3D *)0x0) ||
         (pBVar1 = (pUVar4->fields)._scDblSliderVis, pBVar1 == (Boolean__Array *)0x0))
      goto code_?;
      *(bool *)&pBVar1->bounds = useShortest;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar6 = (this->fields)._rtCamLookSliderLookAndFeel;
    if ((pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar7 = (pGVar6->fields)._rotationArcLookAndFeel,
       pGVar7 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar7->fields)._useShortestRotation = useShortest;
      return;
    }
  }
code_?:
  FUN_?(pUVar4,pBVar1,method);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetRtUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  uVar2 = 0;
  pUVar3 = this;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = (UniversalGizmoLookAndFeel3D *)method->methodPointer;
      if (pUVar3 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      *(bool *)&(pUVar3->fields)._._foldoutLabel = useZoomFactor;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar5 = (this->fields)._rtMidCapLookAndFeel;
    if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar5->fields)._useZoomFactor = useZoomFactor;
      return;
    }
  }
code_?:
  FUN_?(pUVar3,useZoomFactor,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetScAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScAxisColor
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
      pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
      if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar8 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar8->fields)._color.r = fVar4;
          (pGVar8->fields)._color.g = fVar5;
          (pGVar8->fields)._color.b = fVar6;
          (pGVar8->fields)._color.a = fVar7;
          pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
          if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 3U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 3];
            if (pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar3->fields)._color.r = fVar4;
              (pGVar3->fields)._color.g = fVar5;
              (pGVar3->fields)._color.b = fVar6;
              (pGVar3->fields)._color.a = fVar7;
              pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
              if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 3U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 3] != (GizmoLineSlider3DLookAndFeel *)0x0)
                   && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 3]->fields)._capLookAndFeel,
                      pGVar8 != (GizmoCap3DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._color.r = fVar4;
                  (pGVar8->fields)._color.g = fVar5;
                  (pGVar8->fields)._color.b = fVar6;
                  (pGVar8->fields)._color.a = fVar7;
                  pGVar9 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
                  if (axisIndex == 0) {
                    pGVar10 = (this->fields)._scDblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                    goto code_?;
                    if ((uint)pGVar10->max_length < 2) goto code_?;
                    pGVar11 = (this->fields)._scScaleGuideLookAndFeel;
                    pGVar9 = pGVar10->vector[1];
                    if (pGVar11 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
                    (pGVar11->fields)._xAxisColor.r = fVar4;
                    (pGVar11->fields)._xAxisColor.g = fVar5;
                    (pGVar11->fields)._xAxisColor.b = fVar6;
                    (pGVar11->fields)._xAxisColor.a = fVar7;
                  }
                  else if (axisIndex == 1) {
                    pGVar10 = (this->fields)._scDblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                    goto code_?;
                    if ((uint)pGVar10->max_length < 3) goto code_?;
                    pGVar11 = (this->fields)._scScaleGuideLookAndFeel;
                    pGVar9 = pGVar10->vector[2];
                    if (pGVar11 == (GizmoScaleGuideLookAndFeel *)0x0) goto code_?;
                    (pGVar11->fields)._yAxisColor.r = fVar4;
                    (pGVar11->fields)._yAxisColor.g = fVar5;
                    (pGVar11->fields)._yAxisColor.b = fVar6;
                    (pGVar11->fields)._yAxisColor.a = fVar7;
                  }
                  else if (axisIndex == 2) {
                    pGVar10 = (this->fields)._scDblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                    goto code_?;
                    if ((int)pGVar10->max_length == 0) goto code_?;
                    pGVar11 = (this->fields)._scScaleGuideLookAndFeel;
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


/* Void SetScBoxSliderDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScBoxSliderDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void SetScBoxSliderHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScBoxSliderHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void SetScCylinderSliderRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScCylinderSliderRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
      if (0.0 <= radius) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._cylinderRadius = radius;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._cylinderRadius = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetScDblSliderFillAlpha(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScDblSliderFillAlpha
               (UniversalGizmoLookAndFeel3D *this,float alpha,MethodInfo *method)

{
  if (alpha < 0.0) {
    alpha = 0.0;
  }
  else if (_UNK_? < alpha) {
    alpha = _UNK_?;
  }
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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


/* Void SetScDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScDblSliderSize
               (UniversalGizmoLookAndFeel3D *this,float size,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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


/* Void SetScDblSliderVisible(PlaneId, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScDblSliderVisible
               (UniversalGizmoLookAndFeel3D *this,PlaneId__Enum planeId,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scDblSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (planeId < (PlaneId__Enum)pBVar1->max_length) {
    pBVar1->vector[(int)planeId] = isVisible;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScHoveredColor
               (UniversalGizmoLookAndFeel3D *this,Color *hoveredColor,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  uVar2 = 0;
  uVar3 = 0;
  ppGVar4 = (GizmoPlaneSlider3DLookAndFeel **)0x0;
  pUVar5 = this;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while ((int)ppGVar4 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar3) goto code_?;
      pUVar5 = (UniversalGizmoLookAndFeel3D *)method->methodPointer;
      if (pUVar5 == (UniversalGizmoLookAndFeel3D *)0x0) goto code_?;
      pGVar6 = *(GizmoLineSlider3DLookAndFeel__Array **)hoveredColor;
      pGVar7 = *(GizmoPlaneSlider3DLookAndFeel__Array **)&hoveredColor->b;
      lVar8 = *(longlong *)&(pUVar5->fields)._isRtMidCapVisible;
      (pUVar5->fields)._mvSglSlidersLookAndFeel = pGVar6;
      (pUVar5->fields)._mvDblSlidersLookAndFeel = pGVar7;
      ppGVar4 = (GizmoPlaneSlider3DLookAndFeel **)0x0;
      if (lVar8 == 0) goto code_?;
      uVar3 = uVar3 + 1;
      *(GizmoLineSlider3DLookAndFeel__Array **)(lVar8 + 0x7c) = pGVar6;
      *(GizmoPlaneSlider3DLookAndFeel__Array **)(lVar8 + 0x84) = pGVar7;
      method = (MethodInfo *)&method->virtualMethodPointer;
      ppGVar4 = (GizmoPlaneSlider3DLookAndFeel **)(ulonglong)uVar3;
    }
    pGVar7 = (this->fields)._scDblSlidersLookAndFeel;
    pUVar5 = (UniversalGizmoLookAndFeel3D *)0x0;
    if (pGVar7 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      ppGVar4 = pGVar7->vector;
      while ((int)pUVar5 < (int)pGVar7->max_length) {
        if ((uint)pGVar7->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar10 = *ppGVar4;
        pUVar5 = (UniversalGizmoLookAndFeel3D *)0x0;
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
        pUVar5 = (UniversalGizmoLookAndFeel3D *)(ulonglong)uVar2;
      }
      pGVar16 = (this->fields)._scMidCapLookAndFeel;
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
  FUN_?(pUVar5,ppGVar4,method);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetScMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapBoxDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = _UNK_?;
    if (_UNK_? <= depth) {
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


/* Void SetScMidCapBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapBoxHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = _UNK_?;
    if (_UNK_? <= height) {
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


/* Void SetScMidCapBoxWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapBoxWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = _UNK_?;
    if (_UNK_? <= width) {
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


/* Void SetScMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapColor
               (UniversalGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScMidCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._fillMode = fillMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScMidCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._shadeMode = shadeMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScMidCapSphereRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapSphereRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = _UNK_?;
    if (_UNK_? <= radius) {
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


/* Void SetScMidCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScMidCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  if ((capType == GizmoCap3DType__Enum_Box) || (capType == GizmoCap3DType__Enum_Sphere)) {
    pGVar1 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScNegativeSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderCapVis;
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


/* Void SetScNegativeSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScNegativeSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderVis;
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


/* Void SetScPositiveSliderCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderCapVis;
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


/* Void SetScPositiveSliderVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScPositiveSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderVis;
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


/* Void SetScScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_SetScScale
               (UniversalGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
    pGVar8 = (this->fields)._scDblSlidersLookAndFeel;
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
      pGVar7 = (this->fields)._scMidCapLookAndFeel;
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


/* Void SetScScaleGuideAxisLength(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScScaleGuideAxisLength
               (UniversalGizmoLookAndFeel3D *this,float length,MethodInfo *method)

{
  pGVar1 = (this->fields)._scScaleGuideLookAndFeel;
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


/* Void SetScSliderBoxCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderBoxCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= depth) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxDepth = depth;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxDepth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderBoxCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderBoxCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderBoxCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderBoxCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= width) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxWidth = width;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._boxWidth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderCapFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
      break;
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


/* Void SetScSliderCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
      break;
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


/* Void SetScSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapType
               (UniversalGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
      if ((*ppGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap3DLookAndFeel *)0x0))
      break;
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


/* Void SetScSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderCapVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderCapVis;
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


/* Void SetScSliderConeCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderConeCapBaseRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= radius) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneRadius = radius;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneRadius = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderConeCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderConeCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._coneHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderFillMode
               (UniversalGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void SetScSliderLength(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderLength
               (UniversalGizmoLookAndFeel3D *this,float axisLength,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void SetScSliderLineType(GizmoLine3DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderLineType
               (UniversalGizmoLookAndFeel3D *this,GizmoLine3DType__Enum lineType,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void SetScSliderPyramidCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderPyramidCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= depth) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidDepth = depth;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidDepth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderPyramidCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderPyramidCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderPyramidCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderPyramidCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= width) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidWidth = width;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._pyramidWidth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderShadeMode
               (UniversalGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Void SetScSliderSphereCapRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderSphereCapRadius
               (UniversalGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= radius) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._sphereRadius = radius;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._sphereRadius = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderTriPrismCapDepth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderTriPrismCapDepth
               (UniversalGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= depth) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismDepth = depth;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismDepth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderTriPrismCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderTriPrismCapHeight
               (UniversalGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= height) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismHeight = height;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismHeight = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderTriPrismCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderTriPrismCapWidth
               (UniversalGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSlidersLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?(uVar3,pGVar2,method);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*ppGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar4)->fields)._capLookAndFeel,
         (GizmoCap3DLookAndFeel *)method == (GizmoCap3DLookAndFeel *)0x0)) break;
      if (fVar1 <= width) {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismWidth = width;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (((GizmoCap3DLookAndFeel *)method)->fields)._trPrismWidth = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScSliderVisible
               (UniversalGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._scSglSliderVis;
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


/* Void SetScUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_SetScUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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
    pGVar6 = (this->fields)._scDblSlidersLookAndFeel;
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
      pGVar5 = (this->fields)._scMidCapLookAndFeel;
      if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
        (pGVar5->fields)._useZoomFactor = useZoomFactor;
        pGVar9 = (this->fields)._scScaleGuideLookAndFeel;
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


/* UniversalGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D__ctor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
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
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
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
  pGVar1 = (GizmoCap2DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (pGVar1->fields)._fillMode = 2;
  (pGVar1->fields)._scale = 1.0;
  (pGVar1->fields)._circleRadius = 12.0;
  (pGVar1->fields)._quadWidth = 25.0;
  (pGVar1->fields)._quadHeight = 25.0;
  (pGVar1->fields)._arrowBaseRadius = 5.0;
  (pGVar1->fields)._arrowHeight = 20.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar7 = _UNK_?;
  (pGVar1->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._color.g = (float)uVar7;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar7 = _UNK_?;
  (pGVar1->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._color.a = (float)uVar7;
  _UNK_? = (float)uVar5;
  _UNK_? = SUB84(uVar5,4);
  fVar8 = _UNK_?;
  (pGVar1->fields)._hoveredColor.r = _UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._hoveredColor.g = fVar8;
  _UNK_? = (float)uVar4;
  _UNK_? = SUB84(uVar4,4);
  fVar8 = _UNK_?;
  (pGVar1->fields)._hoveredColor.b = _UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._hoveredColor.a = fVar8;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar7 = _UNK_?;
  (pGVar1->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._borderColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar7 = _UNK_?;
  (pGVar1->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._borderColor.a = (float)uVar7;
  _UNK_? = (float)uVar5;
  _UNK_? = SUB84(uVar5,4);
  fVar8 = _UNK_?;
  (pGVar1->fields)._hoveredBorderColor.r = _UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (pGVar1->fields)._hoveredBorderColor.g = fVar8;
  _UNK_? = (float)uVar4;
  _UNK_? = SUB84(uVar4,4);
  fVar8 = _UNK_?;
  (pGVar1->fields)._hoveredBorderColor.b = _UNK_?;
  _UNK_? = uVar6;
  (pGVar1->fields)._hoveredBorderColor.a = fVar8;
  (this->fields)._mvVertSnapCapLookAndFeel = pGVar1;
  func_?(&(this->fields)._mvVertSnapCapLookAndFeel);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  (this->fields)._mvSglSliderVis = pBVar9;
  func_?(&(this->fields)._mvSglSliderVis);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  (this->fields)._mvSglSliderCapVis = pBVar9;
  func_?(&(this->fields)._mvSglSliderCapVis);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  (this->fields)._mvDblSliderVis = pBVar9;
  func_?(&(this->fields)._mvDblSliderVis);
  pGVar10 = (GizmoLineSlider3DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._mvSglSlidersLookAndFeel = pGVar10;
  func_?(&(this->fields)._mvSglSlidersLookAndFeel);
  pGVar11 = (GizmoPlaneSlider3DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel,3);
  (this->fields)._mvDblSlidersLookAndFeel = pGVar11;
  func_?(&(this->fields)._mvDblSlidersLookAndFeel);
  (this->fields)._isRtMidCapVisible = 1;
  pGVar12 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  uVar13 = _UNK_?;
  uVar6 = _UNK_?;
  (pGVar12->fields)._scale = 1.0;
  (pGVar12->fields)._useZoomFactor = 1;
  (pGVar12->fields)._coneHeight = 1.65;
  (pGVar12->fields)._coneRadius = 0.5;
  (pGVar12->fields)._pyramidHeight = 1.65;
  (pGVar12->fields)._pyramidWidth = 0.8;
  (pGVar12->fields)._pyramidDepth = 0.8;
  (pGVar12->fields)._boxWidth = 0.7;
  (pGVar12->fields)._boxHeight = 0.7;
  (pGVar12->fields)._boxDepth = 0.7;
  (pGVar12->fields)._sphereRadius = 0.45;
  (pGVar12->fields)._trPrismWidth = 1.0;
  (pGVar12->fields)._trPrismHeight = 1.0;
  (pGVar12->fields)._trPrismDepth = 1.0;
  uVar14 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar7 = _UNK_?;
  (pGVar12->fields)._sphereBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._sphereBorderColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar7 = _UNK_?;
  (pGVar12->fields)._sphereBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  (pGVar12->fields)._sphereBorderColor.a = (float)uVar7;
  (pGVar12->fields)._numSphereBorderPoints = 100;
  uVar14 = _UNK_?;
  _UNK_? = (float)uVar6;
  _UNK_? = SUB84(uVar6,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._color.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._color.g = fVar8;
  _UNK_? = (float)uVar13;
  _UNK_? = SUB84(uVar13,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._color.b = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._color.a = fVar8;
  _UNK_? = (float)uVar5;
  _UNK_? = SUB84(uVar5,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._hoveredColor.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._hoveredColor.g = fVar8;
  _UNK_? = (float)uVar4;
  _UNK_? = SUB84(uVar4,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._hoveredColor.b = _UNK_?;
  _UNK_? = uVar14;
  (pGVar12->fields)._hoveredColor.a = fVar8;
  (this->fields)._rtMidCapLookAndFeel = pGVar12;
  func_?(&(this->fields)._rtMidCapLookAndFeel);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  (this->fields)._rtAxesVis = pBVar9;
  func_?(&(this->fields)._rtAxesVis);
  pGVar11 = (GizmoPlaneSlider3DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  (this->fields)._rtAxesLookAndFeel = pGVar11;
  func_?(&(this->fields)._rtAxesLookAndFeel);
  (this->fields)._isRtCamLookSliderVisible = 1;
  (this->fields)._rtCamLookSliderRadiusOffset = 0.65;
  pGVar15 = (GizmoPlaneSlider2DLookAndFeel *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar15,(MethodInfo *)0x0);
  (this->fields)._rtCamLookSliderLookAndFeel = pGVar15;
  func_?(&(this->fields)._rtCamLookSliderLookAndFeel);
  pGVar12 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  (pGVar12->fields)._scale = 1.0;
  (pGVar12->fields)._useZoomFactor = 1;
  (pGVar12->fields)._coneHeight = 1.65;
  (pGVar12->fields)._coneRadius = 0.5;
  (pGVar12->fields)._pyramidHeight = 1.65;
  (pGVar12->fields)._pyramidWidth = 0.8;
  (pGVar12->fields)._pyramidDepth = 0.8;
  (pGVar12->fields)._boxWidth = 0.7;
  (pGVar12->fields)._boxHeight = 0.7;
  (pGVar12->fields)._boxDepth = 0.7;
  (pGVar12->fields)._sphereRadius = 0.45;
  (pGVar12->fields)._trPrismWidth = 1.0;
  (pGVar12->fields)._trPrismHeight = 1.0;
  (pGVar12->fields)._trPrismDepth = 1.0;
  uVar14 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar7 = _UNK_?;
  (pGVar12->fields)._sphereBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._sphereBorderColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar7 = _UNK_?;
  (pGVar12->fields)._sphereBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  (pGVar12->fields)._sphereBorderColor.a = (float)uVar7;
  (pGVar12->fields)._numSphereBorderPoints = 100;
  uVar14 = _UNK_?;
  _UNK_? = (float)uVar6;
  _UNK_? = SUB84(uVar6,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._color.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._color.g = fVar8;
  _UNK_? = (float)uVar13;
  _UNK_? = SUB84(uVar13,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._color.b = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._color.a = fVar8;
  _UNK_? = (float)uVar5;
  _UNK_? = SUB84(uVar5,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._hoveredColor.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._hoveredColor.g = fVar8;
  _UNK_? = (float)uVar4;
  _UNK_? = SUB84(uVar4,4);
  fVar8 = _UNK_?;
  (pGVar12->fields)._hoveredColor.b = _UNK_?;
  _UNK_? = uVar14;
  (pGVar12->fields)._hoveredColor.a = fVar8;
  (this->fields)._scMidCapLookAndFeel = pGVar12;
  func_?(&(this->fields)._scMidCapLookAndFeel);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  (this->fields)._scSglSliderVis = pBVar9;
  func_?(&(this->fields)._scSglSliderVis);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  (this->fields)._scSglSliderCapVis = pBVar9;
  func_?(&(this->fields)._scSglSliderCapVis);
  pBVar9 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  (this->fields)._scDblSliderVis = pBVar9;
  func_?(&(this->fields)._scDblSliderVis);
  (this->fields)._isScMidCapVisible = 1;
  pGVar16 = (GizmoScaleGuideLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoScaleGuideLookAndFeel);
  uVar17 = _UNK_?;
  uVar18 = _UNK_?;
  uVar19 = _UNK_?;
  uVar20 = _UNK_?;
  (pGVar16->fields)._useZoomFactor = 1;
  uVar14 = _UNK_?;
  _UNK_? = (float)uVar6;
  _UNK_? = SUB84(uVar6,4);
  fVar8 = _UNK_?;
  (pGVar16->fields)._xAxisColor.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar16->fields)._xAxisColor.g = fVar8;
  _UNK_? = (float)uVar13;
  _UNK_? = SUB84(uVar13,4);
  fVar8 = _UNK_?;
  (pGVar16->fields)._xAxisColor.b = _UNK_?;
  _UNK_? = uVar14;
  (pGVar16->fields)._xAxisColor.a = fVar8;
  (pGVar16->fields)._axisLength = 2.0;
  uVar14 = _UNK_?;
  _UNK_? = (float)uVar20;
  _UNK_? = SUB84(uVar20,4);
  fVar8 = _UNK_?;
  (pGVar16->fields)._yAxisColor.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar16->fields)._yAxisColor.g = fVar8;
  _UNK_? = (float)uVar19;
  _UNK_? = SUB84(uVar19,4);
  fVar8 = _UNK_?;
  (pGVar16->fields)._yAxisColor.b = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar16->fields)._yAxisColor.a = fVar8;
  _UNK_? = (float)uVar18;
  _UNK_? = SUB84(uVar18,4);
  fVar8 = _UNK_?;
  (pGVar16->fields)._zAxisColor.r = _UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar16->fields)._zAxisColor.g = fVar8;
  _UNK_? = (float)uVar17;
  _UNK_? = SUB84(uVar17,4);
  fVar8 = _UNK_?;
  (pGVar16->fields)._zAxisColor.b = _UNK_?;
  _UNK_? = uVar14;
  (pGVar16->fields)._zAxisColor.a = fVar8;
  (this->fields)._scScaleGuideLookAndFeel = pGVar16;
  func_?(&(this->fields)._scScaleGuideLookAndFeel);
  (this->fields)._isScScaleGuideVisible = 1;
  pGVar10 = (GizmoLineSlider3DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._scSglSlidersLookAndFeel = pGVar10;
  func_?(&(this->fields)._scSglSlidersLookAndFeel);
  pGVar11 = (GizmoPlaneSlider3DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  (this->fields)._scDblSlidersLookAndFeel = pGVar11;
  func_?(&(this->fields)._scDblSlidersLookAndFeel);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
  uVar21 = 0;
  uVar22 = 0;
  if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    lVar23 = 0x20;
    lVar24 = 0x20;
    do {
      if ((int)pGVar10->max_length <= (int)uVar22) {
        pGVar11 = (this->fields)._mvDblSlidersLookAndFeel;
        uVar22 = 0;
        if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
          lVar24 = 0x20;
          goto code_?;
        }
        break;
      }
      pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
      pGVar25 = (GizmoLineSlider3DLookAndFeel *)
                FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
      GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(pGVar25,(MethodInfo *)0x0);
      if (pGVar10 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
      if ((pGVar25 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
         (lVar26 = FUN_?(pGVar25), lVar26 == 0)) {
        uVar6 = FUN_?();
        FUN_?(uVar6,0);
        pcVar27 = (code *)swi(3);
        (*pcVar27)();
        return;
      }
      if ((uint)pGVar10->max_length <= uVar22) goto code_?;
      *(GizmoLineSlider3DLookAndFeel **)((longlong)pGVar10->vector + lVar24 + -0x20) = pGVar25;
      func_?(pGVar10->vector + (int)uVar22);
      pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 8;
    } while (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0);
  }
  goto code_?;
  while( true ) {
    pGVar11 = (this->fields)._mvDblSlidersLookAndFeel;
    pGVar28 = (GizmoPlaneSlider3DLookAndFeel *)
              FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar28,(MethodInfo *)0x0);
    if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar28 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (lVar26 = FUN_?(pGVar28), lVar26 == 0)) {
      uVar6 = FUN_?();
      FUN_?(uVar6,0);
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
    if ((uint)pGVar11->max_length <= uVar22) goto code_?;
    bVar29 = iRam_? != 0;
    *(GizmoPlaneSlider3DLookAndFeel **)((longlong)pGVar11->vector + lVar24 + -0x20) = pGVar28;
    if (bVar29) {
      uVar30 = (uint)((ulonglong)(pGVar11->vector + (int)uVar22) >> 0xc);
      uVar31 = (ulonglong)((uVar30 & 0x1fffff) >> 6);
      do {
        uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
        puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
        LOCK();
        bVar29 = uVar32 == *puVar33;
        if (bVar29) {
          *puVar33 = uVar32 | 1L << (uVar30 & 0x3f);
        }
        UNLOCK();
      } while (!bVar29);
    }
    pGVar11 = (this->fields)._mvDblSlidersLookAndFeel;
    uVar22 = uVar22 + 1;
    lVar24 = lVar24 + 8;
    if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar11->max_length <= (int)uVar22) {
      pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
      uVar22 = 0;
      if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar34 = pGVar10->vector;
        goto code_?;
      }
      break;
    }
  }
  goto code_?;
code_?:
  uVar20 = _UNK_?;
  uVar14 = _UNK_?;
  if ((int)pGVar10->max_length <= (int)uVar22) goto code_?;
  if ((uint)pGVar10->max_length <= uVar22) goto code_?;
  if (*ppGVar34 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
  uVar22 = uVar22 + 1;
  ((*ppGVar34)->fields)._length = 5.5;
  ppGVar34 = ppGVar34 + 1;
  goto code_?;
code_?:
  _UNK_? = (float)uVar6;
  _UNK_? = SUB84(uVar6,4);
  aCStack_35[0].r = _UNK_?;
  aCStack_35[0].g = _UNK_?;
  _UNK_? = (float)uVar13;
  _UNK_? = SUB84(uVar13,4);
  aCStack_35[0].b = _UNK_?;
  aCStack_35[0].a = _UNK_?;
  _UNK_? = uVar14;
  _UNK_? = uVar20;
  UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,0,aCStack_35,(MethodInfo *)0x0);
  aCStack_35[0].r = _UNK_?;
  aCStack_35[0].g = _UNK_?;
  aCStack_35[0].b = _UNK_?;
  aCStack_35[0].a = _UNK_?;
  UniversalGizmoLookAndFeel3D_SetMvAxisColor(this,1,aCStack_35,(MethodInfo *)0x0);
  uVar14 = _UNK_?;
  pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar10->max_length < 3) goto code_?;
    pGVar25 = pGVar10->vector[2];
    if (pGVar25 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      _UNK_? = (float)uVar18;
      _UNK_? = SUB84(uVar18,4);
      fVar8 = _UNK_?;
      (pGVar25->fields)._color.r = _UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar25->fields)._color.g = fVar8;
      _UNK_? = (float)uVar17;
      _UNK_? = SUB84(uVar17,4);
      fVar8 = _UNK_?;
      (pGVar25->fields)._color.b = _UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar25->fields)._color.a = fVar8;
      pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
      if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar10->max_length < 3) goto code_?;
        if ((pGVar10->vector[2] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar12 = (pGVar10->vector[2]->fields)._capLookAndFeel,
           pGVar12 != (GizmoCap3DLookAndFeel *)0x0)) {
          _UNK_? = (float)uVar18;
          _UNK_? = SUB84(uVar18,4);
          fVar8 = _UNK_?;
          (pGVar12->fields)._color.r = _UNK_?;
          _UNK_? = uVar14;
          uVar14 = _UNK_?;
          (pGVar12->fields)._color.g = fVar8;
          _UNK_? = (float)uVar17;
          _UNK_? = SUB84(uVar17,4);
          fVar8 = _UNK_?;
          (pGVar12->fields)._color.b = _UNK_?;
          _UNK_? = uVar14;
          uVar14 = _UNK_?;
          (pGVar12->fields)._color.a = fVar8;
          pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
          if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar10->max_length < 6) goto code_?;
            pGVar25 = pGVar10->vector[5];
            if (pGVar25 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              _UNK_? = (float)uVar18;
              _UNK_? = SUB84(uVar18,4);
              fVar8 = _UNK_?;
              (pGVar25->fields)._color.r = _UNK_?;
              _UNK_? = uVar14;
              uVar14 = _UNK_?;
              (pGVar25->fields)._color.g = fVar8;
              _UNK_? = (float)uVar17;
              _UNK_? = SUB84(uVar17,4);
              fVar8 = _UNK_?;
              (pGVar25->fields)._color.b = _UNK_?;
              _UNK_? = uVar14;
              uVar14 = _UNK_?;
              (pGVar25->fields)._color.a = fVar8;
              pGVar10 = (this->fields)._mvSglSlidersLookAndFeel;
              if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar10->max_length < 6) goto code_?;
                if ((pGVar10->vector[5] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                   (pGVar12 = (pGVar10->vector[5]->fields)._capLookAndFeel,
                   pGVar12 != (GizmoCap3DLookAndFeel *)0x0)) {
                  _UNK_? = (float)uVar18;
                  _UNK_? = SUB84(uVar18,4);
                  fVar8 = _UNK_?;
                  (pGVar12->fields)._color.r = _UNK_?;
                  _UNK_? = uVar14;
                  uVar14 = _UNK_?;
                  (pGVar12->fields)._color.g = fVar8;
                  _UNK_? = (float)uVar17;
                  _UNK_? = SUB84(uVar17,4);
                  fVar8 = _UNK_?;
                  (pGVar12->fields)._color.b = _UNK_?;
                  _UNK_? = uVar14;
                  uVar14 = _UNK_?;
                  (pGVar12->fields)._color.a = fVar8;
                  pGVar11 = (this->fields)._mvDblSlidersLookAndFeel;
                  if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                    if ((int)pGVar11->max_length == 0) goto code_?;
                    pGVar28 = pGVar11->vector[0];
                    if (pGVar28 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      fVar8 = (pGVar28->fields)._color.a;
                      _UNK_? = (float)uVar18;
                      _UNK_? = SUB84(uVar18,4);
                      fVar36 = _UNK_?;
                      (pGVar28->fields)._borderColor.r = _UNK_?;
                      _UNK_? = uVar14;
                      uVar14 = _UNK_?;
                      (pGVar28->fields)._borderColor.g = fVar36;
                      _UNK_? = (float)uVar17;
                      _UNK_? = SUB84(uVar17,4);
                      fVar36 = _UNK_?;
                      (pGVar28->fields)._borderColor.b = _UNK_?;
                      _UNK_? = uVar14;
                      uVar20 = _UNK_?;
                      uVar14 = _UNK_?;
                      (pGVar28->fields)._borderColor.a = fVar36;
                      _UNK_? = (float)uVar5;
                      _UNK_? = SUB84(uVar5,4);
                      aCStack_35[0].r = _UNK_?;
                      aCStack_35[0].g = _UNK_?;
                      _UNK_? = (float)uVar4;
                      _UNK_? = SUB84(uVar4,4);
                      aCStack_35[0].b = _UNK_?;
                      aCStack_35[0].a = _UNK_?;
                      _UNK_? = uVar14;
                      _UNK_? = uVar20;
                      (pGVar28->fields)._color.r = 0.227451;
                      (pGVar28->fields)._color.g = 0.4784314;
                      (pGVar28->fields)._color.b = 0.9725491;
                      (pGVar28->fields)._color.a = fVar8;
                      UniversalGizmoLookAndFeel3D_SetMvHoveredColor
                                (this,aCStack_35,(MethodInfo *)0x0);
                      UniversalGizmoLookAndFeel3D_SetMvDblSliderFillAlpha
                                (this,_UNK_?,(MethodInfo *)0x0);
                      UniversalGizmoLookAndFeel3D_SetMvDblSliderSize
                                (this,_UNK_?,(MethodInfo *)0x0);
                      pBVar9 = (this->fields)._mvDblSliderVis;
                      if (pBVar9 != (Boolean__Array *)0x0) {
                        if ((int)pBVar9->max_length == 0) goto code_?;
                        pBVar9->vector[0] = 1;
                        pBVar9 = (this->fields)._mvDblSliderVis;
                        if (pBVar9 != (Boolean__Array *)0x0) {
                          if ((uint)pBVar9->max_length < 2) goto code_?;
                          pBVar9->vector[1] = 1;
                          pBVar9 = (this->fields)._mvDblSliderVis;
                          if (pBVar9 != (Boolean__Array *)0x0) {
                            if ((uint)pBVar9->max_length < 3) goto code_?;
                            pBVar9->vector[2] = 1;
                            pBVar9 = (this->fields)._mvSglSliderVis;
                            if (pBVar9 != (Boolean__Array *)0x0) {
                              if ((int)pBVar9->max_length == 0) goto code_?;
                              pBVar9->vector[0] = 1;
                              pBVar9 = (this->fields)._mvSglSliderCapVis;
                              if (pBVar9 != (Boolean__Array *)0x0) {
                                if ((int)pBVar9->max_length == 0) goto code_?;
                                pBVar9->vector[0] = 1;
                                pBVar9 = (this->fields)._mvSglSliderVis;
                                if (pBVar9 != (Boolean__Array *)0x0) {
                                  if ((uint)pBVar9->max_length < 2) goto code_?;
                                  pBVar9->vector[1] = 1;
                                  pBVar9 = (this->fields)._mvSglSliderCapVis;
                                  if (pBVar9 != (Boolean__Array *)0x0) {
                                    if ((uint)pBVar9->max_length < 2) goto code_?;
                                    pBVar9->vector[1] = 1;
                                    pBVar9 = (this->fields)._mvSglSliderVis;
                                    if (pBVar9 != (Boolean__Array *)0x0) {
                                      if ((uint)pBVar9->max_length < 3) goto code_?;
                                      pBVar9->vector[2] = 1;
                                      pBVar9 = (this->fields)._mvSglSliderCapVis;
                                      if (pBVar9 != (Boolean__Array *)0x0) {
                                        if ((uint)pBVar9->max_length < 3)
                                        goto code_?;
                                        pBVar9->vector[2] = 1;
                                        uVar20 = _UNK_?;
                                        uVar14 = _UNK_?;
                                        pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
                                        if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                                          (pGVar1->fields)._fillMode = 1;
                                          uVar19 = _UNK_?;
                                          pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
                                          if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                                            _UNK_? = (undefined4)uVar14;
                                            _UNK_? = SUB84(uVar14,4);
                                            uVar7 = _UNK_?;
                                            (pGVar1->fields)._color.r = (float)_UNK_?;
                                            _UNK_? = uVar19;
                                            uVar14 = _UNK_?;
                                            (pGVar1->fields)._color.g = (float)uVar7;
                                            _UNK_? = (undefined4)uVar20;
                                            _UNK_? = SUB84(uVar20,4);
                                            uVar7 = _UNK_?;
                                            (pGVar1->fields)._color.b = (float)_UNK_?;
                                            _UNK_? = uVar14;
                                            uVar19 = _UNK_?;
                                            uVar20 = _UNK_?;
                                            uVar14 = _UNK_?;
                                            (pGVar1->fields)._color.a = (float)uVar7;
                                            pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
                                            if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                                              _UNK_? = (undefined4)uVar3;
                                              _UNK_? = SUB84(uVar3,4);
                                              uVar7 = _UNK_?;
                                              (pGVar1->fields)._borderColor.r =
                                                   (float)_UNK_?;
                                              _UNK_? = uVar19;
                                              uVar19 = _UNK_?;
                                              (pGVar1->fields)._borderColor.g = (float)uVar7;
                                              _UNK_? = (undefined4)uVar2;
                                              _UNK_? = SUB84(uVar2,4);
                                              uVar7 = _UNK_?;
                                              (pGVar1->fields)._borderColor.b =
                                                   (float)_UNK_?;
                                              _UNK_? = uVar19;
                                              uVar19 = _UNK_?;
                                              (pGVar1->fields)._borderColor.a = (float)uVar7;
                                              pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
                                              if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                                                _UNK_? = (undefined4)uVar14;
                                                _UNK_? = SUB84(uVar14,4);
                                                uVar7 = _UNK_?;
                                                (pGVar1->fields)._hoveredColor.r =
                                                     (float)_UNK_?;
                                                _UNK_? = uVar19;
                                                uVar14 = _UNK_?;
                                                (pGVar1->fields)._hoveredColor.g = (float)uVar7;
                                                _UNK_? = (undefined4)uVar20;
                                                _UNK_? = SUB84(uVar20,4);
                                                uVar7 = _UNK_?;
                                                (pGVar1->fields)._hoveredColor.b =
                                                     (float)_UNK_?;
                                                _UNK_? = uVar14;
                                                uVar14 = _UNK_?;
                                                (pGVar1->fields)._hoveredColor.a = (float)uVar7;
                                                pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
                                                if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
                                                  _UNK_? = (float)uVar5;
                                                  _UNK_? = SUB84(uVar5,4);
                                                  fVar8 = _UNK_?;
                                                  (pGVar1->fields)._hoveredBorderColor.r =
                                                       _UNK_?;
                                                  _UNK_? = uVar14;
                                                  uVar14 = _UNK_?;
                                                  (pGVar1->fields)._hoveredBorderColor.g = fVar8;
                                                  _UNK_? = (float)uVar4;
                                                  _UNK_? = SUB84(uVar4,4);
                                                  fVar8 = _UNK_?;
                                                  (pGVar1->fields)._hoveredBorderColor.b =
                                                       _UNK_?;
                                                  _UNK_? = uVar14;
                                                  (pGVar1->fields)._hoveredBorderColor.a = fVar8;
                                                  pGVar11 = (this->fields)._rtAxesLookAndFeel;
                                                  uVar22 = 0;
                                                  if (pGVar11 !=
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    lVar24 = 0x20;
                                                    do {
                                                      if ((int)pGVar11->max_length <= (int)uVar22) {
                                                        pBVar9 = (this->fields)._rtAxesVis;
                                                        if (pBVar9 != (Boolean__Array *)0x0) {
                                                          if ((int)pBVar9->max_length == 0)
                                                          goto code_?;
                                                          pBVar9->vector[0] = 1;
                                                          pBVar9 = (this->fields)._rtAxesVis;
                                                          if (pBVar9 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar9->max_length < 2)
                                                            goto code_?;
                                                            pBVar9->vector[1] = 1;
                                                            pBVar9 = (this->fields)._rtAxesVis;
                                                            if (pBVar9 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar9->max_length < 3)
                                                              goto code_?;
                                                              pBVar9->vector[2] = 1;
                                                              pGVar12 = (this->fields).
                                                                        _rtMidCapLookAndFeel;
                                                              if (pGVar12 !=
                                                                  (GizmoCap3DLookAndFeel *)0x0) {
                                                                (pGVar12->fields)._capType = 3;
                                                                uVar20 = _UNK_?;
                                                                uVar14 = _UNK_?;
                                                                pGVar15 = (this->fields).
                                                                                                                                                    
                                                  _rtCamLookSliderLookAndFeel;
                                                  if (pGVar15 !=
                                                      (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                                                    (pGVar15->fields)._planeType = 2;
                                                    uVar19 = _UNK_?;
                                                    pGVar12 = (this->fields)._rtMidCapLookAndFeel;
                                                    if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                                                      _UNK_? = (undefined4)uVar14;
                                                      _UNK_? = SUB84(uVar14,4);
                                                      uVar7 = _UNK_?;
                                                      (pGVar12->fields)._color.r =
                                                           (float)_UNK_?;
                                                      _UNK_? = uVar19;
                                                      uVar19 = _UNK_?;
                                                      (pGVar12->fields)._color.g = (float)uVar7;
                                                      _UNK_? = (undefined4)uVar20;
                                                      _UNK_? = SUB84(uVar20,4);
                                                      uVar7 = _UNK_?;
                                                      (pGVar12->fields)._color.b =
                                                           (float)_UNK_?;
                                                      _UNK_? = uVar19;
                                                      uVar19 = _UNK_?;
                                                      (pGVar12->fields)._color.a = (float)uVar7;
                                                      pGVar12 = (this->fields)._rtMidCapLookAndFeel;
                                                      if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                                                        _UNK_? = (undefined4)uVar14;
                                                        _UNK_? = SUB84(uVar14,4);
                                                        uVar7 = _UNK_?;
                                                        (pGVar12->fields)._hoveredColor.r =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar19;
                                                        uVar14 = _UNK_?;
                                                        (pGVar12->fields)._hoveredColor.g =
                                                             (float)uVar7;
                                                        _UNK_? = (undefined4)uVar20;
                                                        _UNK_? = SUB84(uVar20,4);
                                                        uVar7 = _UNK_?;
                                                        (pGVar12->fields)._hoveredColor.b =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar14;
                                                        (pGVar12->fields)._hoveredColor.a =
                                                             (float)uVar7;
                                                        pGVar12 = (this->fields).
                                                                  _rtMidCapLookAndFeel;
                                                        if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0)
                                                        {
                                                          (pGVar12->fields)._isSphereBorderVisible =
                                                               1;
                                                          uVar14 = _UNK_?;
                                                          pGVar12 = (this->fields).
                                                                    _rtMidCapLookAndFeel;
                                                          if (pGVar12 !=
                                                              (GizmoCap3DLookAndFeel *)0x0) {
                                                            _UNK_? = (undefined4)uVar3;
                                                            _UNK_? = SUB84(uVar3,4);
                                                            uVar7 = _UNK_?;
                                                            (pGVar12->fields)._sphereBorderColor.r =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar14;
                                                            uVar14 = _UNK_?;
                                                            (pGVar12->fields)._sphereBorderColor.g =
                                                                 (float)uVar7;
                                                            _UNK_? = (undefined4)uVar2;
                                                            _UNK_? = SUB84(uVar2,4);
                                                            uVar7 = _UNK_?;
                                                            (pGVar12->fields)._sphereBorderColor.b =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar14;
                                                            (pGVar12->fields)._sphereBorderColor.a =
                                                                 (float)uVar7;
                                                            pGVar11 = (this->fields).
                                                                      _rtAxesLookAndFeel;
                                                            uVar22 = 0;
                                                            if (pGVar11 !=
                                                                (
                                                  GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                    ppGVar37 = pGVar11->vector;
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
                                                  pGVar11 = (this->fields)._rtAxesLookAndFeel;
                                                  pGVar28 = (GizmoPlaneSlider3DLookAndFeel *)
                                                            FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
                                                  GizmoPlaneSlider3DLookAndFeel::
                                                  GizmoPlaneSlider3DLookAndFeel__ctor
                                                            (pGVar28,(MethodInfo *)0x0);
                                                  if (pGVar11 ==
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                                                  break;
                                                  if ((pGVar28 !=
                                                       (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                                                     (lVar26 = FUN_?(pGVar28), lVar26 == 0))
                                                  {
                                                    uVar6 = FUN_?();
                                                    FUN_?(uVar6,0);
                                                    pcVar27 = (code *)swi(3);
                                                    (*pcVar27)();
                                                    return;
                                                  }
                                                  if ((uint)pGVar11->max_length <= uVar22)
                                                  goto code_?;
                                                  bVar29 = iRam_? != 0;
                                                  *(GizmoPlaneSlider3DLookAndFeel **)
                                                   ((longlong)pGVar11->vector + lVar24 + -0x20) =
                                                       pGVar28;
                                                  if (bVar29) {
                                                    uVar30 = (uint)((ulonglong)
                                                                    (pGVar11->vector + (int)uVar22)
                                                                   >> 0xc);
                                                    uVar31 = (ulonglong)((uVar30 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar32 = *(ulonglong *)
                                                               (uVar31 * 8 + 0xADDR);
                                                      puVar33 = (ulonglong *)
                                                               (uVar31 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar29 = uVar32 == *puVar33;
                                                      if (bVar29) {
                                                        *puVar33 = uVar32 | 1L << (uVar30 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar29);
                                                  }
                                                  pGVar11 = (this->fields)._rtAxesLookAndFeel;
                                                  if (pGVar11 ==
                                                      (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                                                  break;
                                                  if ((uint)pGVar11->max_length <= uVar22)
                                                  goto code_?;
                                                  lVar26 = *(longlong *)
                                                            ((longlong)pGVar11->vector +
                                                            lVar24 + -0x20);
                                                  if (lVar26 == 0) break;
                                                  *(undefined4 *)(lVar26 + 0x10) = 2;
                                                  uVar22 = uVar22 + 1;
                                                  pGVar11 = (this->fields)._rtAxesLookAndFeel;
                                                  lVar24 = lVar24 + 8;
                                                  } while (pGVar11 !=
                                                           (GizmoPlaneSlider3DLookAndFeel__Array *)
                                                           0x0);
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
code_?:
  if ((int)pGVar11->max_length <= (int)uVar22) goto code_?;
  if ((uint)pGVar11->max_length <= uVar22) goto code_?;
  if (*ppGVar37 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
  uVar22 = uVar22 + 1;
  ((*ppGVar37)->fields)._circleRadius = 6.5;
  ppGVar37 = ppGVar37 + 1;
  goto code_?;
code_?:
  pGVar12 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar12->fields)._sphereRadius = 6.5;
    uVar14 = _UNK_?;
    pGVar11 = (this->fields)._rtAxesLookAndFeel;
    if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      if ((int)pGVar11->max_length == 0) goto code_?;
      pGVar28 = pGVar11->vector[0];
      if (pGVar28 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        _UNK_? = (float)uVar6;
        _UNK_? = SUB84(uVar6,4);
        fVar8 = _UNK_?;
        (pGVar28->fields)._borderColor.r = _UNK_?;
        _UNK_? = uVar14;
        uVar14 = _UNK_?;
        (pGVar28->fields)._borderColor.g = fVar8;
        _UNK_? = (float)uVar13;
        _UNK_? = SUB84(uVar13,4);
        fVar8 = _UNK_?;
        (pGVar28->fields)._borderColor.b = _UNK_?;
        _UNK_? = uVar14;
        uVar14 = _UNK_?;
        (pGVar28->fields)._borderColor.a = fVar8;
        pGVar11 = (this->fields)._rtAxesLookAndFeel;
        if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
          if ((uint)pGVar11->max_length < 2) goto code_?;
          pGVar28 = pGVar11->vector[1];
          if (pGVar28 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            fVar8 = _UNK_?;
            (pGVar28->fields)._borderColor.r = _UNK_?;
            uVar20 = _UNK_?;
            (pGVar28->fields)._borderColor.g = fVar8;
            _UNK_? = (float)uVar14;
            _UNK_? = SUB84(uVar14,4);
            fVar8 = _UNK_?;
            (pGVar28->fields)._borderColor.b = _UNK_?;
            _UNK_? = uVar20;
            uVar14 = _UNK_?;
            (pGVar28->fields)._borderColor.a = fVar8;
            pGVar11 = (this->fields)._rtAxesLookAndFeel;
            if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
              if ((uint)pGVar11->max_length < 3) goto code_?;
              pGVar28 = pGVar11->vector[2];
              if (pGVar28 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                _UNK_? = (float)uVar18;
                _UNK_? = SUB84(uVar18,4);
                fVar8 = _UNK_?;
                (pGVar28->fields)._borderColor.r = _UNK_?;
                _UNK_? = uVar14;
                uVar14 = _UNK_?;
                (pGVar28->fields)._borderColor.g = fVar8;
                _UNK_? = (float)uVar17;
                _UNK_? = SUB84(uVar17,4);
                fVar8 = _UNK_?;
                (pGVar28->fields)._borderColor.b = _UNK_?;
                _UNK_? = uVar14;
                (pGVar28->fields)._borderColor.a = fVar8;
                pGVar11 = (this->fields)._rtAxesLookAndFeel;
                uVar22 = 0;
                if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                  ppGVar37 = pGVar11->vector;
                  for (; uVar14 = _UNK_?, (int)uVar22 < (int)pGVar11->max_length;
                      uVar22 = uVar22 + 1) {
                    if ((uint)pGVar11->max_length <= uVar22) goto code_?;
                    pGVar28 = *ppGVar37;
                    if (pGVar28 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    _UNK_? = (float)uVar5;
                    _UNK_? = SUB84(uVar5,4);
                    fVar8 = _UNK_?;
                    (pGVar28->fields)._hoveredColor.r = _UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar28->fields)._hoveredColor.g = fVar8;
                    _UNK_? = (float)uVar4;
                    _UNK_? = SUB84(uVar4,4);
                    fVar8 = _UNK_?;
                    (pGVar28->fields)._hoveredColor.b = _UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar28->fields)._hoveredColor.a = fVar8;
                    ppGVar37 = ppGVar37 + 1;
                    _UNK_? = (float)uVar5;
                    _UNK_? = SUB84(uVar5,4);
                    fVar8 = _UNK_?;
                    (pGVar28->fields)._hoveredBorderColor.r = _UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar28->fields)._hoveredBorderColor.g = fVar8;
                    _UNK_? = (float)uVar4;
                    _UNK_? = SUB84(uVar4,4);
                    fVar8 = _UNK_?;
                    (pGVar28->fields)._hoveredBorderColor.b = _UNK_?;
                    _UNK_? = uVar14;
                    (pGVar28->fields)._hoveredBorderColor.a = fVar8;
                  }
                  pGVar15 = (this->fields)._rtCamLookSliderLookAndFeel;
                  if (pGVar15 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    (pGVar15->fields)._borderPolyThickness = 4.0;
                    uVar14 = _UNK_?;
                    pGVar15 = (this->fields)._rtCamLookSliderLookAndFeel;
                    if (pGVar15 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      _UNK_? = (undefined4)uVar3;
                      _UNK_? = SUB84(uVar3,4);
                      uVar7 = _UNK_?;
                      (pGVar15->fields)._borderColor.r = (float)_UNK_?;
                      _UNK_? = uVar14;
                      uVar14 = _UNK_?;
                      (pGVar15->fields)._borderColor.g = (float)uVar7;
                      _UNK_? = (undefined4)uVar2;
                      _UNK_? = SUB84(uVar2,4);
                      uVar7 = _UNK_?;
                      (pGVar15->fields)._borderColor.b = (float)_UNK_?;
                      _UNK_? = uVar14;
                      uVar14 = _UNK_?;
                      (pGVar15->fields)._borderColor.a = (float)uVar7;
                      pGVar15 = (this->fields)._rtCamLookSliderLookAndFeel;
                      if (pGVar15 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        _UNK_? = (float)uVar5;
                        _UNK_? = SUB84(uVar5,4);
                        fVar8 = _UNK_?;
                        (pGVar15->fields)._hoveredBorderColor.r = _UNK_?;
                        _UNK_? = uVar14;
                        uVar14 = _UNK_?;
                        (pGVar15->fields)._hoveredBorderColor.g = fVar8;
                        _UNK_? = (float)uVar4;
                        _UNK_? = SUB84(uVar4,4);
                        fVar8 = _UNK_?;
                        (pGVar15->fields)._hoveredBorderColor.b = _UNK_?;
                        _UNK_? = uVar14;
                        (pGVar15->fields)._hoveredBorderColor.a = fVar8;
                        pGVar11 = (this->fields)._rtAxesLookAndFeel;
                        uVar22 = 0;
                        if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                          ppGVar37 = pGVar11->vector;
                          for (; (int)uVar22 < (int)pGVar11->max_length; uVar22 = uVar22 + 1) {
                            if ((uint)pGVar11->max_length <= uVar22) goto code_?;
                            if (*ppGVar37 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                            goto code_?;
                            ((*ppGVar37)->fields)._numBorderTorusWireAxialSlices = 2;
                            ppGVar37 = ppGVar37 + 1;
                          }
                          pGVar10 = (this->fields)._scSglSlidersLookAndFeel;
                          uVar22 = 0;
                          if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                            lVar24 = 0x20;
                            do {
                              if ((int)pGVar10->max_length <= (int)uVar22) {
                                pGVar11 = (this->fields)._scDblSlidersLookAndFeel;
                                uVar22 = 0;
                                if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0)
                                goto code_?;
                                break;
                              }
                              pGVar10 = (this->fields)._scSglSlidersLookAndFeel;
                              pGVar25 = (GizmoLineSlider3DLookAndFeel *)
                                        FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
                              GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor
                                        (pGVar25,(MethodInfo *)0x0);
                              if (pGVar10 == (GizmoLineSlider3DLookAndFeel__Array *)0x0) break;
                              if ((pGVar25 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
                                 (lVar26 = FUN_?(pGVar25), lVar26 == 0)) {
                                uVar6 = FUN_?();
                                FUN_?(uVar6,0);
                                pcVar27 = (code *)swi(3);
                                (*pcVar27)();
                                return;
                              }
                              if ((uint)pGVar10->max_length <= uVar22) goto code_?;
                              bVar29 = iRam_? != 0;
                              *(GizmoLineSlider3DLookAndFeel **)
                               ((longlong)pGVar10->vector + lVar24 + -0x20) = pGVar25;
                              if (bVar29) {
                                uVar30 = (uint)((ulonglong)(pGVar10->vector + (int)uVar22) >> 0xc);
                                uVar31 = (ulonglong)((uVar30 & 0x1fffff) >> 6);
                                do {
                                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                                  LOCK();
                                  bVar29 = uVar32 == *puVar33;
                                  if (bVar29) {
                                    *puVar33 = uVar32 | 1L << (uVar30 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar29);
                              }
                              pGVar10 = (this->fields)._scSglSlidersLookAndFeel;
                              uVar22 = uVar22 + 1;
                              lVar24 = lVar24 + 8;
                            } while (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0);
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
code_?:
  if ((int)pGVar10->max_length <= (int)uVar22) goto code_?;
  if ((uint)pGVar10->max_length <= uVar22) goto code_?;
  if ((*ppGVar34 == (GizmoLineSlider3DLookAndFeel *)0x0) ||
     (pGVar12 = ((*ppGVar34)->fields)._capLookAndFeel, pGVar12 == (GizmoCap3DLookAndFeel *)0x0))
  goto code_?;
  uVar22 = uVar22 + 1;
  (pGVar12->fields)._capType = 2;
  ppGVar34 = ppGVar34 + 1;
  goto code_?;
code_?:
  pGVar10 = (this->fields)._scSglSlidersLookAndFeel;
  uVar22 = 0;
  if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    ppGVar34 = pGVar10->vector;
    for (; uVar20 = _UNK_?, uVar14 = _UNK_?, (int)uVar22 < (int)pGVar10->max_length;
        uVar22 = uVar22 + 1) {
      if ((uint)pGVar10->max_length <= uVar22) goto code_?;
      if (*ppGVar34 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar34)->fields)._length = 5.5;
      ppGVar34 = ppGVar34 + 1;
    }
    _UNK_? = (float)uVar6;
    _UNK_? = SUB84(uVar6,4);
    aCStack_35[0].r = _UNK_?;
    aCStack_35[0].g = _UNK_?;
    _UNK_? = (float)uVar13;
    _UNK_? = SUB84(uVar13,4);
    aCStack_35[0].b = _UNK_?;
    aCStack_35[0].a = _UNK_?;
    _UNK_? = uVar14;
    _UNK_? = uVar20;
    UniversalGizmoLookAndFeel3D_SetScAxisColor(this,0,aCStack_35,(MethodInfo *)0x0);
    aCStack_35[0].r = _UNK_?;
    aCStack_35[0].g = _UNK_?;
    aCStack_35[0].b = _UNK_?;
    aCStack_35[0].a = _UNK_?;
    UniversalGizmoLookAndFeel3D_SetScAxisColor(this,1,aCStack_35,(MethodInfo *)0x0);
    uVar14 = _UNK_?;
    uVar6 = _UNK_?;
    _UNK_? = (float)uVar18;
    _UNK_? = SUB84(uVar18,4);
    aCStack_35[0].r = _UNK_?;
    aCStack_35[0].g = _UNK_?;
    _UNK_? = (float)uVar17;
    _UNK_? = SUB84(uVar17,4);
    aCStack_35[0].b = _UNK_?;
    aCStack_35[0].a = _UNK_?;
    _UNK_? = uVar6;
    _UNK_? = uVar14;
    UniversalGizmoLookAndFeel3D_SetScAxisColor(this,2,aCStack_35,(MethodInfo *)0x0);
    uVar14 = _UNK_?;
    uVar6 = _UNK_?;
    _UNK_? = (float)uVar5;
    _UNK_? = SUB84(uVar5,4);
    aCStack_35[0].r = _UNK_?;
    aCStack_35[0].g = _UNK_?;
    _UNK_? = (float)uVar4;
    _UNK_? = SUB84(uVar4,4);
    aCStack_35[0].b = _UNK_?;
    aCStack_35[0].a = _UNK_?;
    _UNK_? = uVar6;
    _UNK_? = uVar14;
    UniversalGizmoLookAndFeel3D_SetScHoveredColor(this,aCStack_35,(MethodInfo *)0x0);
    pBVar9 = (this->fields)._scSglSliderVis;
    if (pBVar9 != (Boolean__Array *)0x0) {
      if ((int)pBVar9->max_length == 0) {
code_?:
        FUN_?();
        pcVar27 = (code *)swi(3);
        (*pcVar27)();
        return;
      }
      pBVar9->vector[0] = 1;
      pBVar9 = (this->fields)._scSglSliderCapVis;
      if (pBVar9 != (Boolean__Array *)0x0) {
        if ((int)pBVar9->max_length == 0) goto code_?;
        pBVar9->vector[0] = 1;
        pBVar9 = (this->fields)._scSglSliderVis;
        if (pBVar9 != (Boolean__Array *)0x0) {
          if ((uint)pBVar9->max_length < 2) goto code_?;
          pBVar9->vector[1] = 1;
          pBVar9 = (this->fields)._scSglSliderCapVis;
          if (pBVar9 != (Boolean__Array *)0x0) {
            if ((uint)pBVar9->max_length < 2) goto code_?;
            pBVar9->vector[1] = 1;
            pBVar9 = (this->fields)._scSglSliderVis;
            if (pBVar9 != (Boolean__Array *)0x0) {
              if ((uint)pBVar9->max_length < 3) goto code_?;
              pBVar9->vector[2] = 1;
              uVar14 = _UNK_?;
              uVar6 = _UNK_?;
              pBVar9 = (this->fields)._scSglSliderCapVis;
              if (pBVar9 != (Boolean__Array *)0x0) {
                if ((uint)pBVar9->max_length < 3) goto code_?;
                pBVar9->vector[2] = 1;
                uVar13 = _UNK_?;
                pGVar12 = (this->fields)._scMidCapLookAndFeel;
                if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                  _UNK_? = (undefined4)uVar6;
                  _UNK_? = SUB84(uVar6,4);
                  uVar7 = _UNK_?;
                  (pGVar12->fields)._color.r = (float)_UNK_?;
                  _UNK_? = uVar13;
                  uVar6 = _UNK_?;
                  (pGVar12->fields)._color.g = (float)uVar7;
                  _UNK_? = (undefined4)uVar14;
                  _UNK_? = SUB84(uVar14,4);
                  uVar7 = _UNK_?;
                  (pGVar12->fields)._color.b = (float)_UNK_?;
                  _UNK_? = uVar6;
                  (pGVar12->fields)._color.a = (float)uVar7;
                  pGVar12 = (this->fields)._scMidCapLookAndFeel;
                  if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                    (pGVar12->fields)._capType = 2;
                    pGVar12 = (this->fields)._scMidCapLookAndFeel;
                    if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                      (pGVar12->fields)._boxWidth = 0.9;
                      pGVar12 = (this->fields)._scMidCapLookAndFeel;
                      if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                        (pGVar12->fields)._boxHeight = 0.9;
                        pGVar12 = (this->fields)._scMidCapLookAndFeel;
                        if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                          (pGVar12->fields)._boxDepth = 0.9;
                          fVar8 = _UNK_?;
                          pGVar12 = (this->fields)._scMidCapLookAndFeel;
                          if (pGVar12 != (GizmoCap3DLookAndFeel *)0x0) {
                            (pGVar12->fields)._sphereRadius = 0.65;
                            UniversalGizmoLookAndFeel3D_SetScDblSliderFillAlpha
                                      (this,fVar8,(MethodInfo *)0x0);
                            pGVar11 = (this->fields)._scDblSlidersLookAndFeel;
                            if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                              ppGVar37 = pGVar11->vector;
                              for (; (int)uVar21 < (int)pGVar11->max_length; uVar21 = uVar21 + 1) {
                                if ((uint)pGVar11->max_length <= uVar21) goto code_?;
                                pGVar28 = *ppGVar37;
                                if (pGVar28 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                goto code_?;
                                (pGVar28->fields)._raTriangleXLength = 1.9;
                                (pGVar28->fields)._raTriangleYLength = 1.9;
                                ppGVar37 = ppGVar37 + 1;
                              }
                              pBVar9 = (this->fields)._scDblSliderVis;
                              if (pBVar9 != (Boolean__Array *)0x0) {
                                if ((int)pBVar9->max_length != 0) {
                                  pBVar9->vector[0] = 1;
                                  pBVar9 = (this->fields)._scDblSliderVis;
                                  if (pBVar9 == (Boolean__Array *)0x0) goto code_?;
                                  if (1 < (uint)pBVar9->max_length) {
                                    pBVar9->vector[1] = 1;
                                    pBVar9 = (this->fields)._scDblSliderVis;
                                    if (pBVar9 == (Boolean__Array *)0x0) goto code_?;
                                    if (2 < (uint)pBVar9->max_length) {
                                      pBVar9->vector[2] = 1;
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
  goto code_?;
  while( true ) {
    pGVar11 = (this->fields)._scDblSlidersLookAndFeel;
    pGVar28 = (GizmoPlaneSlider3DLookAndFeel *)
              FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar28,(MethodInfo *)0x0);
    if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((pGVar28 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (lVar24 = FUN_?(pGVar28), lVar24 == 0)) {
      uVar6 = FUN_?();
      FUN_?(uVar6,0);
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
    if ((uint)pGVar11->max_length <= uVar22) goto code_?;
    bVar29 = iRam_? != 0;
    *(GizmoPlaneSlider3DLookAndFeel **)((longlong)pGVar11->vector + lVar23 + -0x20) = pGVar28;
    if (bVar29) {
      uVar30 = (uint)((ulonglong)(pGVar11->vector + (int)uVar22) >> 0xc);
      uVar31 = (ulonglong)((uVar30 & 0x1fffff) >> 6);
      do {
        uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
        puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
        LOCK();
        bVar29 = uVar32 == *puVar33;
        if (bVar29) {
          *puVar33 = uVar32 | 1L << (uVar30 & 0x3f);
        }
        UNLOCK();
      } while (!bVar29);
    }
    pGVar11 = (this->fields)._scDblSlidersLookAndFeel;
    if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
    if ((uint)pGVar11->max_length <= uVar22) goto code_?;
    lVar24 = *(longlong *)((longlong)pGVar11->vector + lVar23 + -0x20);
    if (lVar24 == 0) break;
    *(undefined4 *)(lVar24 + 0x10) = 1;
    uVar22 = uVar22 + 1;
    pGVar11 = (this->fields)._scDblSlidersLookAndFeel;
    lVar23 = lVar23 + 8;
    if (pGVar11 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar11->max_length <= (int)uVar22) {
      pGVar10 = (this->fields)._scSglSlidersLookAndFeel;
      uVar22 = 0;
      if (pGVar10 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        ppGVar34 = pGVar10->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Boolean get_IsRtMidCapBorderVisible() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_IsRtMidCapBorderVisible
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._isSphereBorderVisible;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsRtRotationArcVisible() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_IsRtRotationArcVisible
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._isRotationArcVisible;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Single get_MvBoxSliderDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvBoxSliderDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Single get_MvBoxSliderHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvBoxSliderHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Single get_MvDblSliderBorderBoxDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderBoxDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderBoxDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvDblSliderBorderBoxHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderBoxHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderBoxHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_MvDblSliderBorderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderFillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoShadeMode get_MvDblSliderBorderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderShadeMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoQuad3DBorderType get_MvDblSliderBorderType() */

GizmoQuad3DBorderType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvDblSliderBorderType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._quadBorderType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_MvDblSliderFillAlpha() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderFillAlpha
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
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


/* Single get_MvDblSliderSize() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvDblSliderSize
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSlidersLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._quadWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_MvHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Color get_MvNXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvNXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 4) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[3];
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


/* Color get_MvNYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvNYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 5) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[4];
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


/* Color get_MvNZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvNZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 6) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[5];
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


/* Color get_MvPXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvPXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Color get_MvPYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvPYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Color get_MvPZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvPZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Single get_MvSliderBoxCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderBoxCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._boxDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderBoxCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderBoxCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._boxHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderBoxCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderBoxCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._boxWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_MvSliderCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoShadeMode get_MvSliderCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderCapShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._shadeMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCap3DType get_MvSliderCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._capType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_MvSliderConeCapBaseRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderConeCapBaseRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._coneRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderConeCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderConeCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._coneHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_MvSliderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Single get_MvSliderLength() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderLength
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._length;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoLine3DType get_MvSliderLineType() */

GizmoLine3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderLineType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Single get_MvSliderPyramidCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderPyramidCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._pyramidDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderPyramidCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderPyramidCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._pyramidHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderPyramidCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderPyramidCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._pyramidWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoShadeMode get_MvSliderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvSliderShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
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


/* Single get_MvSliderSphereCapRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderSphereCapRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._sphereRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderTriPrismCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderTriPrismCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._trPrismDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderTriPrismCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderTriPrismCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._trPrismHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderTriPrismCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvSliderTriPrismCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._trPrismWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean get_MvUseZoomFactor() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_MvUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._useZoomFactor;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Color get_MvVertSnapCapBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._borderColor.g;
    fVar3 = (pGVar1->fields)._borderColor.b;
    fVar4 = (pGVar1->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._borderColor.r;
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


/* Color get_MvVertSnapCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* GizmoFillMode2D get_MvVertSnapCapFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvVertSnapCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._fillMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Color get_MvVertSnapCapHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredBorderColor.g;
    fVar3 = (pGVar1->fields)._hoveredBorderColor.b;
    fVar4 = (pGVar1->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredBorderColor.r;
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


/* Color get_MvVertSnapCapHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_MvVertSnapCapHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredColor.g;
    fVar3 = (pGVar1->fields)._hoveredColor.b;
    fVar4 = (pGVar1->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredColor.r;
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


/* Single get_MvVertSnapCapQuadHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_MvVertSnapCapQuadHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._quadHeight;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoCap2DType get_MvVertSnapCapType() */

GizmoCap2DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_MvVertSnapCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._capType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoFillMode3D get_RtAxisBorderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_RtAxisBorderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderFillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCircle3DBorderType get_RtAxisBorderType() */

GizmoCircle3DBorderType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_RtAxisBorderType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._circleBorderType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_RtAxisCullAlphaScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisCullAlphaScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderCircleCullAlphaScale;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RtAxisCylTorusHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisCylTorusHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderCylTorusHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RtAxisCylTorusWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisCylTorusWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderCylTorusWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RtAxisTorusThickness() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtAxisTorusThickness
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderTorusThickness;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_RtCamLookSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtCamLookSliderBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._borderColor.g;
    fVar3 = (pGVar1->fields)._borderColor.b;
    fVar4 = (pGVar1->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._borderColor.r;
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


/* Color get_RtCamLookSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtCamLookSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredBorderColor.g;
    fVar3 = (pGVar1->fields)._hoveredBorderColor.b;
    fVar4 = (pGVar1->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredBorderColor.r;
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


/* Single get_RtCamLookSliderPolyBorderThickness() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtCamLookSliderPolyBorderThickness
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._borderPolyThickness;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoPolygon2DBorderType get_RtCamLookSliderPolyBorderType() */

GizmoPolygon2DBorderType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_RtCamLookSliderPolyBorderType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._polygonBorderType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_RtCamLookSliderRadiusOffset() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtCamLookSliderRadiusOffset
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  return (this->fields)._rtCamLookSliderRadiusOffset;
}


/* Color get_RtHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
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


/* Color get_RtHoveredMidCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtHoveredMidCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredColor.g;
    fVar3 = (pGVar1->fields)._hoveredColor.b;
    fVar4 = (pGVar1->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredColor.r;
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


/* Color get_RtMidCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtMidCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
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


/* Int32 get_RtNumAxisTorusWireAxialSlices() */

int32_t Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtNumAxisTorusWireAxialSlices
                  (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._numBorderTorusWireAxialSlices;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Single get_RtRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_RtRadius(UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._sphereRadius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_RtRotationArcBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtRotationArcBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    if ((pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar4 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
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


/* Color get_RtRotationArcColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtRotationArcColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    if ((pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar4 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
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


/* Single get_RtScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_RtScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._scale;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoShadeMode get_RtShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_RtShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._shadeMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Boolean get_RtUseShortestRotationArc() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_RtUseShortestRotationArc
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar4 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._useShortestRotation;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_RtUseZoomFactor() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_RtUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._useZoomFactor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Color get_RtXBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtXBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
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


/* Color get_RtYBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtYBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
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


/* Color get_RtZBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_RtZBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._rtAxesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[2];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
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


/* Single get_ScBoxSliderDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScBoxSliderDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScBoxSliderHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScBoxSliderHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScCylinderSliderRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScCylinderSliderRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._cylinderRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScDblSliderFillAlpha() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScDblSliderFillAlpha
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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


/* Single get_ScDblSliderSize() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScDblSliderSize
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSlidersLookAndFeel;
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


/* Color get_ScHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScMidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapBoxDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._boxDepth;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScMidCapBoxHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapBoxHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._boxHeight;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScMidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapBoxWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._boxWidth;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_ScMidCapColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScMidCapColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
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


/* GizmoFillMode3D get_ScMidCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScMidCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._fillMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoShadeMode get_ScMidCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScMidCapShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._shadeMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_ScMidCapSphereRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScMidCapSphereRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._sphereRadius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoCap3DType get_ScMidCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_ScMidCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._capType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Color get_ScNXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScNXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 4) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[3];
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


/* Color get_ScNYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScNYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 5) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[4];
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


/* Color get_ScNZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScNZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 6) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[5];
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


/* Color get_ScPXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScPXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Color get_ScPYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScPYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Color get_ScPZColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
        UniversalGizmoLookAndFeel3D_get_ScPZColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel3D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScScale() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D_get_ScScale
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._scale;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScScaleGuideAxisLength() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScScaleGuideAxisLength
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scScaleGuideLookAndFeel;
  if (pGVar1 != (GizmoScaleGuideLookAndFeel *)0x0) {
    return (pGVar1->fields)._axisLength;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderBoxCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderBoxCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._boxDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderBoxCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderBoxCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._boxHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderBoxCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderBoxCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._boxWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_ScSliderCapFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderCapFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoShadeMode get_ScSliderCapShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderCapShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._shadeMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCap3DType get_ScSliderCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderCapType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._capType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_ScSliderConeCapBaseRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderConeCapBaseRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._coneRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderConeCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderConeCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._coneHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_ScSliderFillMode() */

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderFillMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScSliderLength() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderLength
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._length;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoLine3DType get_ScSliderLineType() */

GizmoLine3DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderLineType
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScSliderPyramidCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderPyramidCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._pyramidDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderPyramidCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderPyramidCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._pyramidHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderPyramidCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderPyramidCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._pyramidWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoShadeMode get_ScSliderShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
UniversalGizmoLookAndFeel3D_get_ScSliderShadeMode
          (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
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


/* Single get_ScSliderSphereCapRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderSphereCapRadius
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._sphereRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderTriPrismCapDepth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderTriPrismCapDepth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._trPrismDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderTriPrismCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderTriPrismCapHeight
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._trPrismHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ScSliderTriPrismCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
      UniversalGizmoLookAndFeel3D_get_ScSliderTriPrismCapWidth
                (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSlidersLookAndFeel;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap3DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._trPrismWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean get_ScUseZoomFactor() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel3D::
     UniversalGizmoLookAndFeel3D_get_ScUseZoomFactor
               (UniversalGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._useZoomFactor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

