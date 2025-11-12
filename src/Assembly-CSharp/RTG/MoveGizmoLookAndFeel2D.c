
/* Void ConnectDblSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_ConnectDblSliderLookAndFeel
               (MoveGizmoLookAndFeel2D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedLookAndFeel = (this->fields)._dblSliderLookAndFeel;
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


/* Void ConnectSliderLookAndFeel(GizmoLineSlider2D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_ConnectSliderLookAndFeel
               (MoveGizmoLookAndFeel2D *this,GizmoLineSlider2D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
    if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
    lVar2 = (longlong)axisIndex;
  }
  else {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
    lVar2 = (longlong)axisIndex + 2;
    if ((uint)pGVar1->max_length <= (uint)lVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (slider != (GizmoLineSlider2D *)0x0) {
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
    lVar2 = 0xf0;
    if ((slider->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
      lVar2 = 0xe8;
    }
    lVar2 = *(longlong *)((longlong)&slider->klass + lVar2);
    if ((lVar2 != 0) && (pGVar9 = (slider->fields)._cap2D, pGVar9 != (GizmoCap2D *)0x0)) {
      bVar4 = iRam_? != 0;
      (pGVar9->fields)._sharedLookAndFeel = *(GizmoCap2DLookAndFeel **)(lVar2 + 0x70);
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


/* List`1[System.Enum] GetAllowedDblSliderPlaneTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
MoveGizmoLookAndFeel2D_GetAllowedDblSliderPlaneTypes
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPlane2DType);
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
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoPlane2DType,&uStackX_18);
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
      pGVar6 = TypeInfo__RTG__GizmoPlane2DType;
      pOVar1 = (Object *)0x0;
      uStackX_18 = 0;
      iVar7._0_2_ = (TypeInfo__RTG__GizmoPlane2DType->_0).byval_arg.attrs;
      iVar7._2_1_ = (TypeInfo__RTG__GizmoPlane2DType->_0).byval_arg.type;
      iVar7._3_1_ = (TypeInfo__RTG__GizmoPlane2DType->_0).byval_arg.field_0xb;
      if (iVar7 < 0) {
        if (((TypeInfo__RTG__GizmoPlane2DType->_0).generic_class == (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__RTG__GizmoPlane2DType->_1).field_0x6d & 8) == 0)) {
          pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoPlane2DType);
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


/* Boolean IsNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_IsNegativeSliderVisible
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (axisIndex + 2U < (uint)pBVar1->max_length) {
    return pBVar1->vector[(longlong)axisIndex + 2] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_IsSliderVisible
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

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
    if (axisIndex + 2U < (uint)pBVar1->max_length) {
      return pBVar1->vector[(longlong)axisIndex + 2] != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetAxisBorderColor
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      uVar4 = color->r;
      uVar5 = color->g;
      uVar6 = color->b;
      uVar7 = color->a;
      (pGVar3->fields)._borderColor.r = (float)uVar4;
      (pGVar3->fields)._borderColor.g = (float)uVar5;
      (pGVar3->fields)._borderColor.b = (float)uVar6;
      (pGVar3->fields)._borderColor.a = (float)uVar7;
      pGVar1 = (this->fields)._sglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar8->fields)._borderColor.r = (float)uVar4;
          (pGVar8->fields)._borderColor.g = (float)uVar5;
          (pGVar8->fields)._borderColor.b = (float)uVar6;
          (pGVar8->fields)._borderColor.a = (float)uVar7;
          pGVar1 = (this->fields)._sglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 2];
            if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar3->fields)._borderColor.r = (float)uVar4;
              (pGVar3->fields)._borderColor.g = (float)uVar5;
              (pGVar3->fields)._borderColor.b = (float)uVar6;
              (pGVar3->fields)._borderColor.a = (float)uVar7;
              pGVar1 = (this->fields)._sglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0)
                   && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 2]->fields)._capLookAndFeel,
                      pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._borderColor.r = (float)uVar4;
                  (pGVar8->fields)._borderColor.g = (float)uVar5;
                  (pGVar8->fields)._borderColor.b = (float)uVar6;
                  (pGVar8->fields)._borderColor.a = (float)uVar7;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetAxisColor
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      uVar4 = color->r;
      uVar5 = color->g;
      uVar6 = color->b;
      uVar7 = color->a;
      (pGVar3->fields)._color.r = (float)uVar4;
      (pGVar3->fields)._color.g = (float)uVar5;
      (pGVar3->fields)._color.b = (float)uVar6;
      (pGVar3->fields)._color.a = (float)uVar7;
      pGVar1 = (this->fields)._sglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar8->fields)._color.r = (float)uVar4;
          (pGVar8->fields)._color.g = (float)uVar5;
          (pGVar8->fields)._color.b = (float)uVar6;
          (pGVar8->fields)._color.a = (float)uVar7;
          pGVar1 = (this->fields)._sglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 2];
            if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar3->fields)._color.r = (float)uVar4;
              (pGVar3->fields)._color.g = (float)uVar5;
              (pGVar3->fields)._color.b = (float)uVar6;
              (pGVar3->fields)._color.a = (float)uVar7;
              pGVar1 = (this->fields)._sglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0)
                   && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 2]->fields)._capLookAndFeel,
                      pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._color.r = (float)uVar4;
                  (pGVar8->fields)._color.g = (float)uVar5;
                  (pGVar8->fields)._color.b = (float)uVar6;
                  (pGVar8->fields)._color.a = (float)uVar7;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDblSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderBorderColor
               (MoveGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
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


/* Void SetDblSliderCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderCircleRadius
               (MoveGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= radius) {
      fVar2 = radius;
    }
    (pGVar1->fields)._circleRadius = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDblSliderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderColor
               (MoveGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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


/* Void SetDblSliderFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderFillMode
               (MoveGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar1->fields)._fillMode = fillMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDblSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderHoveredBorderColor
               (MoveGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
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


/* Void SetDblSliderHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetDblSliderHoveredColor
               (MoveGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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


/* Void SetDblSliderQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderQuadHeight
               (MoveGizmoLookAndFeel2D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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


/* Void SetDblSliderQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetDblSliderQuadWidth
               (MoveGizmoLookAndFeel2D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetScale
               (MoveGizmoLookAndFeel2D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while ((int)uVar2 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      fVar6 = scale;
      if (scale < 0.0) {
        fVar6 = 0.0;
      }
      pGVar7 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._scale = fVar6;
      if (pGVar7 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= scale) {
        uVar2 = uVar2 + 1;
        (pGVar7->fields)._scale = scale;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar7->fields)._scale = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar8 = (this->fields)._dblSliderLookAndFeel;
    if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      fVar6 = 0.0;
      if (0.0 <= scale) {
        fVar6 = scale;
      }
      (pGVar8->fields)._scale = fVar6;
      return;
    }
  }
code_?:
  FUN_?();
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
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= radius) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowBaseRadius = radius;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowBaseRadius = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
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
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowHeight = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderCapFillMode
               (MoveGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap2DLookAndFeel *)0x0))
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


/* Void SetSliderCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderCapType
               (MoveGizmoLookAndFeel2D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap2DLookAndFeel *)0x0))
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


/* Void SetSliderCircleCapRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderCircleCapRadius
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
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(ppGVar3,uVar2,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      uVar2 = uVar2 + 1;
      (((GizmoCap2DLookAndFeel *)method)->fields)._circleRadius = radius;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderFillMode
               (MoveGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
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


/* Void SetSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderHoveredBorderColor
               (MoveGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      uVar6 = color->r;
      uVar7 = color->g;
      uVar8 = color->b;
      uVar9 = color->a;
      pGVar10 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._hoveredBorderColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredBorderColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredBorderColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredBorderColor.a = (float)uVar9;
      if (pGVar10 == (GizmoCap2DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar10->fields)._hoveredBorderColor.r = (float)uVar6;
      (pGVar10->fields)._hoveredBorderColor.g = (float)uVar7;
      (pGVar10->fields)._hoveredBorderColor.b = (float)uVar8;
      (pGVar10->fields)._hoveredBorderColor.a = (float)uVar9;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderHoveredFillColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
     MoveGizmoLookAndFeel2D_SetSliderHoveredFillColor
               (MoveGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      uVar6 = color->r;
      uVar7 = color->g;
      uVar8 = color->b;
      uVar9 = color->a;
      pGVar10 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._hoveredColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredColor.a = (float)uVar9;
      if (pGVar10 == (GizmoCap2DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar10->fields)._hoveredColor.r = (float)uVar6;
      (pGVar10->fields)._hoveredColor.g = (float)uVar7;
      (pGVar10->fields)._hoveredColor.b = (float)uVar8;
      (pGVar10->fields)._hoveredColor.a = (float)uVar9;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSliderLineType(GizmoLine2DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderLineType
               (MoveGizmoLookAndFeel2D *this,GizmoLine2DType__Enum lineType,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
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
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadHeight = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
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
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= width) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadWidth = width;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadWidth = 0.0;
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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_SetSliderVisible
               (MoveGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

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
    if (axisIndex + 2U < (uint)pBVar1->max_length) {
      pBVar1->vector[(longlong)axisIndex + 2] = isVisible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MoveGizmoLookAndFeel2D() */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D__ctor
               (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoPlaneSlider2DLookAndFeel *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._dblSliderLookAndFeel = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._dblSliderLookAndFeel >> 0xc);
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
  pGVar7 = (GizmoLineSlider2DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel,4);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderLookAndFeel = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sglSliderLookAndFeel >> 0xc);
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
  (this->fields)._isDblSliderVisible = 1;
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,4);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderVis = pBVar8;
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
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderCapVis = pBVar8;
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
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar7 = (this->fields)._sglSliderLookAndFeel;
  uVar3 = 0;
  if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    lVar9 = 0x20;
    do {
      uVar10 = _UNK_?;
      uVar11 = _UNK_?;
      if ((int)pGVar7->max_length <= (int)uVar3) {
        pGVar7 = (this->fields)._sglSliderLookAndFeel;
        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
          if ((int)pGVar7->max_length == 0) goto code_?;
          pGVar12 = pGVar7->vector[0];
          if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
            uVar13 = _UNK_?;
            (pGVar12->fields)._color.r = (float)_UNK_?;
            uVar14 = _UNK_?;
            (pGVar12->fields)._color.g = (float)uVar13;
            _UNK_? = (undefined4)uVar10;
            _UNK_? = SUB84(uVar10,4);
            uVar13 = _UNK_?;
            (pGVar12->fields)._color.b = (float)_UNK_?;
            _UNK_? = uVar14;
            uVar14 = _UNK_?;
            (pGVar12->fields)._color.a = (float)uVar13;
            pGVar7 = (this->fields)._sglSliderLookAndFeel;
            if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
              if ((int)pGVar7->max_length == 0) goto code_?;
              if ((pGVar7->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                 (pGVar15 = (pGVar7->vector[0]->fields)._capLookAndFeel,
                 pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                _UNK_? = (undefined4)uVar11;
                _UNK_? = SUB84(uVar11,4);
                uVar13 = _UNK_?;
                (pGVar15->fields)._color.r = (float)_UNK_?;
                _UNK_? = uVar14;
                uVar14 = _UNK_?;
                (pGVar15->fields)._color.g = (float)uVar13;
                _UNK_? = (undefined4)uVar10;
                _UNK_? = SUB84(uVar10,4);
                uVar13 = _UNK_?;
                (pGVar15->fields)._color.b = (float)_UNK_?;
                _UNK_? = uVar14;
                uVar14 = _UNK_?;
                (pGVar15->fields)._color.a = (float)uVar13;
                pGVar7 = (this->fields)._sglSliderLookAndFeel;
                if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                  if ((uint)pGVar7->max_length < 3) goto code_?;
                  pGVar12 = pGVar7->vector[2];
                  if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                    _UNK_? = (undefined4)uVar11;
                    _UNK_? = SUB84(uVar11,4);
                    uVar13 = _UNK_?;
                    (pGVar12->fields)._color.r = (float)_UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar12->fields)._color.g = (float)uVar13;
                    _UNK_? = (undefined4)uVar10;
                    _UNK_? = SUB84(uVar10,4);
                    uVar13 = _UNK_?;
                    (pGVar12->fields)._color.b = (float)_UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar12->fields)._color.a = (float)uVar13;
                    pGVar7 = (this->fields)._sglSliderLookAndFeel;
                    if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                      if ((uint)pGVar7->max_length < 3) goto code_?;
                      if ((pGVar7->vector[2] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                         (pGVar15 = (pGVar7->vector[2]->fields)._capLookAndFeel,
                         pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                        _UNK_? = (undefined4)uVar11;
                        _UNK_? = SUB84(uVar11,4);
                        uVar13 = _UNK_?;
                        (pGVar15->fields)._color.r = (float)_UNK_?;
                        _UNK_? = uVar14;
                        uVar14 = _UNK_?;
                        (pGVar15->fields)._color.g = (float)uVar13;
                        _UNK_? = (undefined4)uVar10;
                        _UNK_? = SUB84(uVar10,4);
                        uVar13 = _UNK_?;
                        (pGVar15->fields)._color.b = (float)_UNK_?;
                        _UNK_? = uVar14;
                        uVar16 = _UNK_?;
                        uVar14 = _UNK_?;
                        (pGVar15->fields)._color.a = (float)uVar13;
                        pGVar7 = (this->fields)._sglSliderLookAndFeel;
                        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                          if ((uint)pGVar7->max_length < 2) goto code_?;
                          pGVar12 = pGVar7->vector[1];
                          if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                            uVar13 = _UNK_?;
                            (pGVar12->fields)._color.r = (float)_UNK_?;
                            uVar17 = _UNK_?;
                            (pGVar12->fields)._color.g = (float)uVar13;
                            _UNK_? = (undefined4)uVar16;
                            _UNK_? = SUB84(uVar16,4);
                            uVar13 = _UNK_?;
                            (pGVar12->fields)._color.b = (float)_UNK_?;
                            _UNK_? = uVar17;
                            uVar17 = _UNK_?;
                            (pGVar12->fields)._color.a = (float)uVar13;
                            pGVar7 = (this->fields)._sglSliderLookAndFeel;
                            if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                              if ((uint)pGVar7->max_length < 2) goto code_?;
                              if ((pGVar7->vector[1] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                 (pGVar15 = (pGVar7->vector[1]->fields)._capLookAndFeel,
                                 pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                _UNK_? = (undefined4)uVar14;
                                _UNK_? = SUB84(uVar14,4);
                                uVar13 = _UNK_?;
                                (pGVar15->fields)._color.r = (float)_UNK_?;
                                _UNK_? = uVar17;
                                uVar17 = _UNK_?;
                                (pGVar15->fields)._color.g = (float)uVar13;
                                _UNK_? = (undefined4)uVar16;
                                _UNK_? = SUB84(uVar16,4);
                                uVar13 = _UNK_?;
                                (pGVar15->fields)._color.b = (float)_UNK_?;
                                _UNK_? = uVar17;
                                uVar17 = _UNK_?;
                                (pGVar15->fields)._color.a = (float)uVar13;
                                pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                  if ((uint)pGVar7->max_length < 4) goto code_?;
                                  pGVar12 = pGVar7->vector[3];
                                  if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                                    _UNK_? = (undefined4)uVar14;
                                    _UNK_? = SUB84(uVar14,4);
                                    uVar13 = _UNK_?;
                                    (pGVar12->fields)._color.r = (float)_UNK_?;
                                    _UNK_? = uVar17;
                                    uVar17 = _UNK_?;
                                    (pGVar12->fields)._color.g = (float)uVar13;
                                    _UNK_? = (undefined4)uVar16;
                                    _UNK_? = SUB84(uVar16,4);
                                    uVar13 = _UNK_?;
                                    (pGVar12->fields)._color.b = (float)_UNK_?;
                                    _UNK_? = uVar17;
                                    uVar17 = _UNK_?;
                                    (pGVar12->fields)._color.a = (float)uVar13;
                                    pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                    if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                      if ((uint)pGVar7->max_length < 4) goto code_?;
                                      if ((pGVar7->vector[3] != (GizmoLineSlider2DLookAndFeel *)0x0
                                          ) && (pGVar15 = (pGVar7->vector[3]->fields).
                                                         _capLookAndFeel,
                                               pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                        _UNK_? = (undefined4)uVar14;
                                        _UNK_? = SUB84(uVar14,4);
                                        uVar13 = _UNK_?;
                                        (pGVar15->fields)._color.r = (float)_UNK_?;
                                        _UNK_? = uVar17;
                                        uVar17 = _UNK_?;
                                        (pGVar15->fields)._color.g = (float)uVar13;
                                        _UNK_? = (undefined4)uVar16;
                                        _UNK_? = SUB84(uVar16,4);
                                        uVar13 = _UNK_?;
                                        (pGVar15->fields)._color.b = (float)_UNK_?;
                                        _UNK_? = uVar17;
                                        uVar17 = _UNK_?;
                                        (pGVar15->fields)._color.a = (float)uVar13;
                                        pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                          if ((int)pGVar7->max_length == 0)
                                          goto code_?;
                                          pGVar12 = pGVar7->vector[0];
                                          if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                                            _UNK_? = (undefined4)uVar11;
                                            _UNK_? = SUB84(uVar11,4);
                                            uVar13 = _UNK_?;
                                            (pGVar12->fields)._borderColor.r = (float)_UNK_?
                                            ;
                                            _UNK_? = uVar17;
                                            uVar17 = _UNK_?;
                                            (pGVar12->fields)._borderColor.g = (float)uVar13;
                                            _UNK_? = (undefined4)uVar10;
                                            _UNK_? = SUB84(uVar10,4);
                                            uVar13 = _UNK_?;
                                            (pGVar12->fields)._borderColor.b = (float)_UNK_?
                                            ;
                                            _UNK_? = uVar17;
                                            uVar17 = _UNK_?;
                                            (pGVar12->fields)._borderColor.a = (float)uVar13;
                                            pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                            if (pGVar7 !=
                                                (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                              if ((int)pGVar7->max_length == 0)
                                              goto code_?;
                                              if ((pGVar7->vector[0] !=
                                                   (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                 (pGVar15 = (pGVar7->vector[0]->fields).
                                                           _capLookAndFeel,
                                                 pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                _UNK_? = (undefined4)uVar11;
                                                _UNK_? = SUB84(uVar11,4);
                                                uVar13 = _UNK_?;
                                                (pGVar15->fields)._borderColor.r =
                                                     (float)_UNK_?;
                                                _UNK_? = uVar17;
                                                uVar17 = _UNK_?;
                                                (pGVar15->fields)._borderColor.g = (float)uVar13;
                                                _UNK_? = (undefined4)uVar10;
                                                _UNK_? = SUB84(uVar10,4);
                                                uVar13 = _UNK_?;
                                                (pGVar15->fields)._borderColor.b =
                                                     (float)_UNK_?;
                                                _UNK_? = uVar17;
                                                uVar17 = _UNK_?;
                                                (pGVar15->fields)._borderColor.a = (float)uVar13;
                                                pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                                if (pGVar7 !=
                                                    (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                  if ((uint)pGVar7->max_length < 3)
                                                  goto code_?;
                                                  pGVar12 = pGVar7->vector[2];
                                                  if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0
                                                     ) {
                                                    _UNK_? = (undefined4)uVar11;
                                                    _UNK_? = SUB84(uVar11,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.r =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar17;
                                                    uVar17 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.g = (float)uVar13;
                                                    _UNK_? = (undefined4)uVar10;
                                                    _UNK_? = SUB84(uVar10,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.b =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar17;
                                                    uVar17 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.a = (float)uVar13;
                                                    pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                                    if (pGVar7 !=
                                                        (GizmoLineSlider2DLookAndFeel__Array *)0x0)
                                                    {
                                                      if ((uint)pGVar7->max_length < 3)
                                                      goto code_?;
                                                      if ((pGVar7->vector[2] !=
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                         (pGVar15 = (pGVar7->vector[2]->fields).
                                                                   _capLookAndFeel,
                                                         pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                        _UNK_? = (undefined4)uVar11;
                                                        _UNK_? = SUB84(uVar11,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.r =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar17;
                                                        uVar11 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.g =
                                                             (float)uVar13;
                                                        _UNK_? = (undefined4)uVar10;
                                                        _UNK_? = SUB84(uVar10,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.b =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar11;
                                                        uVar11 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.a =
                                                             (float)uVar13;
                                                        pGVar7 = (this->fields).
                                                                  _sglSliderLookAndFeel;
                                                        if (pGVar7 !=
                                                            (GizmoLineSlider2DLookAndFeel__Array *)
                                                            0x0) {
                                                          if ((uint)pGVar7->max_length < 2)
                                                          goto code_?;
                                                          pGVar12 = pGVar7->vector[1];
                                                          if (pGVar12 !=
                                                              (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                            _UNK_? = (undefined4)uVar14;
                                                            _UNK_? = SUB84(uVar14,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.r =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar11 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.g =
                                                                 (float)uVar13;
                                                            _UNK_? = (undefined4)uVar16;
                                                            _UNK_? = SUB84(uVar16,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.b =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar11 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.a =
                                                                 (float)uVar13;
                                                            pGVar7 = (this->fields).
                                                                      _sglSliderLookAndFeel;
                                                            if (pGVar7 !=
                                                                (GizmoLineSlider2DLookAndFeel__Array
                                                                 *)0x0) {
                                                              if ((uint)pGVar7->max_length < 2)
                                                              goto code_?;
                                                              if ((pGVar7->vector[1] !=
                                                                   (GizmoLineSlider2DLookAndFeel *)
                                                                   0x0) && (pGVar15 = (pGVar7->
                                                  vector[1]->fields)._capLookAndFeel,
                                                  pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                    _UNK_? = (undefined4)uVar14;
                                                    _UNK_? = SUB84(uVar14,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.r =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar11;
                                                    uVar11 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.g = (float)uVar13;
                                                    _UNK_? = (undefined4)uVar16;
                                                    _UNK_? = SUB84(uVar16,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.b =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar11;
                                                    uVar11 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.a = (float)uVar13;
                                                    pGVar7 = (this->fields)._sglSliderLookAndFeel;
                                                    if (pGVar7 !=
                                                        (GizmoLineSlider2DLookAndFeel__Array *)0x0)
                                                    {
                                                      if ((uint)pGVar7->max_length < 4)
                                                      goto code_?;
                                                      pGVar12 = pGVar7->vector[3];
                                                      if (pGVar12 !=
                                                          (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                        _UNK_? = (undefined4)uVar14;
                                                        _UNK_? = SUB84(uVar14,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.r =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar11;
                                                        uVar11 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.g =
                                                             (float)uVar13;
                                                        _UNK_? = (undefined4)uVar16;
                                                        _UNK_? = SUB84(uVar16,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.b =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar11;
                                                        uVar11 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.a =
                                                             (float)uVar13;
                                                        pGVar7 = (this->fields).
                                                                  _sglSliderLookAndFeel;
                                                        if (pGVar7 !=
                                                            (GizmoLineSlider2DLookAndFeel__Array *)
                                                            0x0) {
                                                          if ((uint)pGVar7->max_length < 4)
                                                          goto code_?;
                                                          if ((pGVar7->vector[3] !=
                                                               (GizmoLineSlider2DLookAndFeel *)0x0)
                                                             && (pGVar15 = (pGVar7->vector[3]->
                                                                          fields)._capLookAndFeel,
                                                                pGVar15 != (GizmoCap2DLookAndFeel *)
                                                                          0x0)) {
                                                            _UNK_? = (undefined4)uVar14;
                                                            _UNK_? = SUB84(uVar14,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.r =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar11 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.g =
                                                                 (float)uVar13;
                                                            _UNK_? = (undefined4)uVar16;
                                                            _UNK_? = SUB84(uVar16,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.b =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar10 = _UNK_?;
                                                            uVar11 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.a =
                                                                 (float)uVar13;
                                                            pGVar7 = (this->fields).
                                                                      _sglSliderLookAndFeel;
                                                            uVar3 = 0;
                                                            if (pGVar7 !=
                                                                (GizmoLineSlider2DLookAndFeel__Array
                                                                 *)0x0) {
                                                              ppGVar18 = pGVar7->vector;
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
            }
          }
        }
        break;
      }
      pGVar7 = (this->fields)._sglSliderLookAndFeel;
      pGVar12 = (GizmoLineSlider2DLookAndFeel *)
                FUN_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
      GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor(pGVar12,(MethodInfo *)0x0);
      if (pGVar7 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) break;
      if ((pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
         (lVar19 = FUN_?(pGVar12), lVar19 == 0)) {
        uVar11 = FUN_?();
        FUN_?(uVar11,0);
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      if ((uint)pGVar7->max_length <= uVar3) goto code_?;
      bVar2 = iRam_? != 0;
      *(GizmoLineSlider2DLookAndFeel **)((longlong)pGVar7->vector + lVar9 + -0x20) = pGVar12;
      if (bVar2) {
        uVar21 = (uint)((ulonglong)(pGVar7->vector + (int)uVar3) >> 0xc);
        uVar4 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar21 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar7 = (this->fields)._sglSliderLookAndFeel;
      uVar3 = uVar3 + 1;
      lVar9 = lVar9 + 8;
    } while (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0);
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  uVar14 = _UNK_?;
  if ((int)pGVar7->max_length <= (int)uVar3) goto code_?;
  if ((uint)pGVar7->max_length <= uVar3) goto code_?;
  pGVar12 = *ppGVar18;
  if (pGVar12 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
  pGVar15 = (pGVar12->fields)._capLookAndFeel;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar13 = _UNK_?;
  (pGVar12->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._hoveredColor.g = (float)uVar13;
  _UNK_? = (undefined4)uVar10;
  _UNK_? = SUB84(uVar10,4);
  uVar13 = _UNK_?;
  (pGVar12->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._hoveredColor.a = (float)uVar13;
  if (pGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  uVar3 = uVar3 + 1;
  ppGVar18 = ppGVar18 + 1;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar13 = _UNK_?;
  (pGVar15->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar15->fields)._hoveredColor.g = (float)uVar13;
  _UNK_? = (undefined4)uVar10;
  _UNK_? = SUB84(uVar10,4);
  uVar13 = _UNK_?;
  (pGVar15->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  (pGVar15->fields)._hoveredColor.a = (float)uVar13;
  goto code_?;
code_?:
  pGVar7 = (this->fields)._sglSliderLookAndFeel;
  uVar3 = 0;
  if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar18 = pGVar7->vector;
    for (; uVar14 = _UNK_?, (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar7->max_length <= uVar3) goto code_?;
      pGVar12 = *ppGVar18;
      if (pGVar12 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      pGVar15 = (pGVar12->fields)._capLookAndFeel;
      _UNK_? = (undefined4)uVar11;
      _UNK_? = SUB84(uVar11,4);
      uVar13 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.r = (float)_UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.g = (float)uVar13;
      _UNK_? = (undefined4)uVar10;
      _UNK_? = SUB84(uVar10,4);
      uVar13 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.b = (float)_UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.a = (float)uVar13;
      if (pGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ppGVar18 = ppGVar18 + 1;
      _UNK_? = (undefined4)uVar11;
      _UNK_? = SUB84(uVar11,4);
      uVar13 = _UNK_?;
      (pGVar15->fields)._hoveredBorderColor.r = (float)_UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar15->fields)._hoveredBorderColor.g = (float)uVar13;
      _UNK_? = (undefined4)uVar10;
      _UNK_? = SUB84(uVar10,4);
      uVar13 = _UNK_?;
      (pGVar15->fields)._hoveredBorderColor.b = (float)_UNK_?;
      _UNK_? = uVar14;
      (pGVar15->fields)._hoveredBorderColor.a = (float)uVar13;
    }
    pGVar7 = (this->fields)._sglSliderLookAndFeel;
    uVar3 = 0;
    if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
      ppGVar18 = pGVar7->vector;
      for (; (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pGVar7->max_length <= uVar3) goto code_?;
        if ((*ppGVar18 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
           (pGVar15 = ((*ppGVar18)->fields)._capLookAndFeel, pGVar15 == (GizmoCap2DLookAndFeel *)0x0))
        goto code_?;
        (pGVar15->fields)._capType = 2;
        ppGVar18 = ppGVar18 + 1;
      }
      pGVar7 = (this->fields)._sglSliderLookAndFeel;
      uVar3 = 0;
      if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        ppGVar18 = pGVar7->vector;
        for (; (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
          if ((uint)pGVar7->max_length <= uVar3) goto code_?;
          if ((*ppGVar18 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
             (pGVar15 = ((*ppGVar18)->fields)._capLookAndFeel, pGVar15 == (GizmoCap2DLookAndFeel *)0x0
             )) goto code_?;
          (pGVar15->fields)._fillMode = 0;
          ppGVar18 = ppGVar18 + 1;
        }
        pGVar7 = (this->fields)._sglSliderLookAndFeel;
        uVar3 = 0;
        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
          ppGVar18 = pGVar7->vector;
          for (; (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
            if ((uint)pGVar7->max_length <= uVar3) goto code_?;
            if (*ppGVar18 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
            ((*ppGVar18)->fields)._fillMode = 0;
            ppGVar18 = ppGVar18 + 1;
          }
          pBVar8 = (this->fields)._sglSliderVis;
          if (pBVar8 != (Boolean__Array *)0x0) {
            if ((int)pBVar8->max_length == 0) {
code_?:
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pBVar8->vector[0] = 1;
            pBVar8 = (this->fields)._sglSliderVis;
            if (pBVar8 != (Boolean__Array *)0x0) {
              if ((uint)pBVar8->max_length < 2) goto code_?;
              pBVar8->vector[1] = 1;
              pBVar8 = (this->fields)._sglSliderCapVis;
              if (pBVar8 != (Boolean__Array *)0x0) {
                if ((int)pBVar8->max_length == 0) goto code_?;
                pBVar8->vector[0] = 1;
                pBVar8 = (this->fields)._sglSliderCapVis;
                if (pBVar8 != (Boolean__Array *)0x0) {
                  if ((uint)pBVar8->max_length < 2) goto code_?;
                  pBVar8->vector[1] = 1;
                  uVar16 = _UNK_?;
                  uVar14 = _UNK_?;
                  pGVar1 = (this->fields)._dblSliderLookAndFeel;
                  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    (pGVar1->fields)._fillMode = 1;
                    uVar17 = _UNK_?;
                    pGVar1 = (this->fields)._dblSliderLookAndFeel;
                    if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      _UNK_? = (undefined4)uVar14;
                      _UNK_? = SUB84(uVar14,4);
                      uVar13 = _UNK_?;
                      (pGVar1->fields)._color.r = (float)_UNK_?;
                      _UNK_? = uVar17;
                      uVar14 = _UNK_?;
                      (pGVar1->fields)._color.g = (float)uVar13;
                      _UNK_? = (undefined4)uVar16;
                      _UNK_? = SUB84(uVar16,4);
                      uVar13 = _UNK_?;
                      (pGVar1->fields)._color.b = (float)_UNK_?;
                      _UNK_? = uVar14;
                      uVar14 = _UNK_?;
                      (pGVar1->fields)._color.a = (float)uVar13;
                      pGVar1 = (this->fields)._dblSliderLookAndFeel;
                      if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        uVar13 = _UNK_?;
                        (pGVar1->fields)._borderColor.r = (float)_UNK_?;
                        uVar16 = _UNK_?;
                        (pGVar1->fields)._borderColor.g = (float)uVar13;
                        _UNK_? = (undefined4)uVar14;
                        _UNK_? = SUB84(uVar14,4);
                        uVar13 = _UNK_?;
                        (pGVar1->fields)._borderColor.b = (float)_UNK_?;
                        _UNK_? = uVar16;
                        uVar14 = _UNK_?;
                        (pGVar1->fields)._borderColor.a = (float)uVar13;
                        pGVar1 = (this->fields)._dblSliderLookAndFeel;
                        if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                          uVar13 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.r = (float)_UNK_?;
                          uVar16 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.g = (float)uVar13;
                          _UNK_? = (undefined4)uVar14;
                          _UNK_? = SUB84(uVar14,4);
                          uVar13 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.b = (float)_UNK_?;
                          _UNK_? = uVar16;
                          uVar14 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.a = (float)uVar13;
                          pGVar1 = (this->fields)._dblSliderLookAndFeel;
                          if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                            _UNK_? = (undefined4)uVar11;
                            _UNK_? = SUB84(uVar11,4);
                            uVar13 = _UNK_?;
                            (pGVar1->fields)._hoveredBorderColor.r = (float)_UNK_?;
                            _UNK_? = uVar14;
                            uVar11 = _UNK_?;
                            (pGVar1->fields)._hoveredBorderColor.g = (float)uVar13;
                            _UNK_? = (undefined4)uVar10;
                            _UNK_? = SUB84(uVar10,4);
                            uVar13 = _UNK_?;
                            (pGVar1->fields)._hoveredBorderColor.b = (float)_UNK_?;
                            _UNK_? = uVar11;
                            (pGVar1->fields)._hoveredBorderColor.a = (float)uVar13;
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
  goto code_?;
}


/* Color get_DblSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_DblSliderBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
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


/* Single get_DblSliderCircleRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_DblSliderCircleRadius
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._circleRadius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_DblSliderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_DblSliderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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


/* Color get_DblSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_DblSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
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


/* Color get_DblSliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_DblSliderHoveredColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
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


/* Single get_SliderArrowCapBaseRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderArrowCapBaseRadius
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._arrowBaseRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderArrowCapHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderArrowCapHeight
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._arrowHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode2D get_SliderCapFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderCapFillMode
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCap2DType get_SliderCapType() */

GizmoCap2DType__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderCapType
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._capType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_SliderCircleCapRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderCircleCapRadius
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._circleRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode2D get_SliderFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderFillMode
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Color get_SliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_SliderHoveredBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._hoveredBorderColor.g;
      fVar6 = (pGVar4->fields)._hoveredBorderColor.b;
      fVar7 = (pGVar4->fields)._hoveredBorderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._hoveredBorderColor.r;
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


/* Color get_SliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
        MoveGizmoLookAndFeel2D_get_SliderHoveredColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
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


/* GizmoLine2DType get_SliderLineType() */

GizmoLine2DType__Enum
Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_SliderLineType
          (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._lineType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_SliderQuadCapHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderQuadCapHeight
                (MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._quadHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_SliderQuadCapWidth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::
      MoveGizmoLookAndFeel2D_get_SliderQuadCapWidth(MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._quadWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_XBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_XBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
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


/* Color get_XColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_XColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
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


/* Color get_YBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_YBorderColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
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


/* Color get_YColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_YColor
                  (Color *__return_storage_ptr__,MoveGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
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

