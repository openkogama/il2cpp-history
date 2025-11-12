
/* Void ConnectVertSnapCapLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_ConnectVertSnapCapLookAndFeel(MoveGizmoLookAndFeel3D *this,GizmoCap2D *vertSnapCap,MethodInfo *method)

{
  if (vertSnapCap == (GizmoCap2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (vertSnapCap->fields)._sharedLookAndFeel = (this->fields)._vertSnapCapLookAndFeel;
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


/* List`1[System.Enum] GetAllowedMidCapTypes() */

List_1_System_Enum_ * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_GetAllowedMidCapTypes(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* List`1[System.Enum] GetAllowedVertSnapCapTypes() */

List_1_System_Enum_ * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_GetAllowedVertSnapCapTypes(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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
  this_00 = (List_1_System_Object_ *)FUN_?(TypeInfo__System__Collections__Generic__List<System::Enum>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<System::Enum>__List__);
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
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
      }
      pGVar6 = TypeInfo__RTG__GizmoCap2DType;
      pOVar1 = (Object *)0x0;
      uStackX_18 = 0;
      iVar7._0_2_ = (TypeInfo__RTG__GizmoCap2DType->_0).byval_arg.attrs;
      iVar7._2_1_ = (TypeInfo__RTG__GizmoCap2DType->_0).byval_arg.type;
      iVar7._3_1_ = (TypeInfo__RTG__GizmoCap2DType->_0).byval_arg.field_0xb;
      if (iVar7 < 0) {
        if (((TypeInfo__RTG__GizmoCap2DType->_0).generic_class == (Il2CppGenericClass *)0x0) || (((TypeInfo__RTG__GizmoCap2DType->_1).field_0x6d & 8) == 0)) {
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
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize(this_00,pOVar1,pMVar2->klass->rgctx_data[0xe].method);
        return (List_1_System_Enum_ *)this_00;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pLVar12 = (List_1_System_Enum_ *)(*pcVar11)();
  return pLVar12;
}


/* Boolean IsNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_IsNegativeSliderCapVisible(MoveGizmoLookAndFeel3D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderCapVis;
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


/* Boolean IsSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_IsSliderCapVisible(MoveGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderCapVis;
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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetAxisColor(MoveGizmoLookAndFeel3D *this,int32_t axisIndex,Color *color,MethodInfo *method)

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
                    pGVar9 = pGVar10->vector[1];
                  }
                  else if (axisIndex == 1) {
                    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
                    if ((uint)pGVar10->max_length < 3) goto code_?;
                    pGVar9 = pGVar10->vector[2];
                  }
                  else if (axisIndex == 2) {
                    pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
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


/* Void SetDblSliderBorderBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderBorderBoxDepth(MoveGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

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


/* Void SetDblSliderBorderBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderBorderBoxHeight(MoveGizmoLookAndFeel3D *this,float height,MethodInfo *method)

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


/* Void SetDblSliderBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderBorderFillMode(MoveGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* Void SetDblSliderBorderShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderBorderShadeMode(MoveGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* Void SetDblSliderBorderType(GizmoQuad3DBorderType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderBorderType(MoveGizmoLookAndFeel3D *this,GizmoQuad3DBorderType__Enum borderType,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* Void SetDblSliderSize(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderSize(MoveGizmoLookAndFeel3D *this,float size,MethodInfo *method)

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


/* Void SetDblSliderVisible(PlaneId, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetDblSliderVisible(MoveGizmoLookAndFeel3D *this,PlaneId__Enum planeId,bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._dblSliderVis;
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


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetHoveredColor(MoveGizmoLookAndFeel3D *this,Color *hoveredColor,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSlidersLookAndFeel;
  uVar2 = 0;
  uVar3 = 0;
  pGVar4 = (GizmoLineSlider3DLookAndFeel *)this;
  pGVar5 = (GizmoPlaneSlider3DLookAndFeel__Array *)hoveredColor;
  if (pGVar1 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar1->max_length <= uVar3) goto code_?;
      pGVar4 = (GizmoLineSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
      pBVar6 = *(Boolean__Array **)hoveredColor;
      pGVar7 = *(GizmoLineSlider3DLookAndFeel__Array **)&hoveredColor->b;
      pGVar5 = (GizmoPlaneSlider3DLookAndFeel__Array *)(pGVar4->fields)._capLookAndFeel;
      *(Boolean__Array **)&(pGVar4->fields)._hoveredColor = pBVar6;
      *(GizmoLineSlider3DLookAndFeel__Array **)&(pGVar4->fields)._hoveredColor.b = pGVar7;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) goto code_?;
      method = (MethodInfo *)&method->virtualMethodPointer;
      *(Boolean__Array **)((longlong)pGVar5->vector + 0x5c) = pBVar6;
      *(GizmoLineSlider3DLookAndFeel__Array **)((longlong)pGVar5->vector + 100) = pGVar7;
    }
    pGVar8 = (this->fields)._dblSlidersLookAndFeel;
    pGVar4 = (GizmoLineSlider3DLookAndFeel *)0x0;
    if (pGVar8 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      pGVar5 = (GizmoPlaneSlider3DLookAndFeel__Array *)pGVar8->vector;
      do {
        if ((int)pGVar8->max_length <= (int)pGVar4) {
          return;
        }
        if ((uint)pGVar8->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar10 = pGVar5->klass;
        pGVar4 = (GizmoLineSlider3DLookAndFeel *)0x0;
        if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array__Class *)0x0) break;
        fVar11 = hoveredColor->r;
        fVar12 = hoveredColor->g;
        fVar13 = hoveredColor->b;
        fVar14 = hoveredColor->a;
        uVar2 = uVar2 + 1;
        uVar15 = *(undefined4 *)&(pGVar10->_0).parent;
        pGVar5 = (GizmoPlaneSlider3DLookAndFeel__Array *)&pGVar5->monitor;
        *(float *)((longlong)&(pGVar10->_0).klass + 4) = fVar11;
        *(float *)&(pGVar10->_0).fields = fVar12;
        *(float *)((longlong)&(pGVar10->_0).fields + 4) = fVar13;
        *(float *)&(pGVar10->_0).events = fVar14;
        *(float *)((longlong)&(pGVar10->_0).parent + 4) = fVar11;
        *(float *)&(pGVar10->_0).generic_class = fVar12;
        *(float *)((longlong)&(pGVar10->_0).generic_class + 4) = fVar13;
        *(undefined4 *)&(pGVar10->_0).typeMetadataHandle = uVar15;
        pGVar4 = (GizmoLineSlider3DLookAndFeel *)(ulonglong)uVar2;
      } while( true );
    }
  }
code_?:
  FUN_?(pGVar4,pGVar5,method);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapBoxDepth(MoveGizmoLookAndFeel3D *this,float depth,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapBoxHeight(MoveGizmoLookAndFeel3D *this,float height,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapBoxWidth(MoveGizmoLookAndFeel3D *this,float width,MethodInfo *method)

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


/* Void SetMidCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapShadeMode(MoveGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapSphereRadius(MoveGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetMidCapType(MoveGizmoLookAndFeel3D *this,GizmoCap3DType__Enum capType,MethodInfo *method)

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


/* Void SetNegativeCapVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetNegativeCapVisible(MoveGizmoLookAndFeel3D *this,int32_t axisIndex,bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderCapVis;
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


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetScale(MoveGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

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


/* Void SetSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetSliderCapVisible(MoveGizmoLookAndFeel3D *this,int32_t axisIndex,AxisSign__Enum axisSign,bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._sglSliderCapVis;
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

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetUseZoomFactor(MoveGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

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
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetVertSnapCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapBorderColor(MoveGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Void SetVertSnapCapCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapCircleRadius(MoveGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar1->fields)._circleRadius = radius;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVertSnapCapColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapColor(MoveGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Void SetVertSnapCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapFillMode(MoveGizmoLookAndFeel3D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar1->fields)._fillMode = fillMode;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVertSnapCapHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapHoveredBorderColor(MoveGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Void SetVertSnapCapHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapHoveredColor(MoveGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Void SetVertSnapCapQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapQuadHeight(MoveGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Void SetVertSnapCapQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapQuadWidth(MoveGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Void SetVertSnapCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_SetVertSnapCapType(MoveGizmoLookAndFeel3D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  if ((capType == GizmoCap2DType__Enum_Circle) || (capType == GizmoCap2DType__Enum_Quad)) {
    pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* MoveGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D__ctor(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
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
  pGVar7 = (GizmoCap2DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  bVar2 = iRam_? != 0;
  (pGVar7->fields)._fillMode = 2;
  (pGVar7->fields)._scale = 1.0;
  (pGVar7->fields)._circleRadius = 12.0;
  (pGVar7->fields)._quadWidth = 25.0;
  (pGVar7->fields)._quadHeight = 25.0;
  (pGVar7->fields)._arrowBaseRadius = 5.0;
  (pGVar7->fields)._arrowHeight = 20.0;
  (pGVar7->fields)._color.r = 1.0;
  (pGVar7->fields)._color.g = 1.0;
  (pGVar7->fields)._color.b = 1.0;
  (pGVar7->fields)._color.a = 1.0;
  (pGVar7->fields)._hoveredColor.r = 0.96470594;
  (pGVar7->fields)._hoveredColor.g = 0.9490197;
  (pGVar7->fields)._hoveredColor.b = 0.19607845;
  (pGVar7->fields)._hoveredColor.a = 1.0;
  (pGVar7->fields)._borderColor.r = 1.0;
  (pGVar7->fields)._borderColor.g = 1.0;
  (pGVar7->fields)._borderColor.b = 1.0;
  (pGVar7->fields)._borderColor.a = 1.0;
  (pGVar7->fields)._hoveredBorderColor.r = 0.96470594;
  (pGVar7->fields)._hoveredBorderColor.g = 0.9490197;
  (pGVar7->fields)._hoveredBorderColor.b = 0.19607845;
  (pGVar7->fields)._hoveredBorderColor.a = 1.0;
  (this->fields)._vertSnapCapLookAndFeel = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._vertSnapCapLookAndFeel >> 0xc);
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
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderVis = pBVar8;
  func_?(&(this->fields)._sglSliderVis);
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,6);
  (this->fields)._sglSliderCapVis = pBVar8;
  func_?(&(this->fields)._sglSliderCapVis);
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  (this->fields)._dblSliderVis = pBVar8;
  func_?(&(this->fields)._dblSliderVis);
  pGVar9 = (GizmoLineSlider3DLookAndFeel__Array *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel,6);
  (this->fields)._sglSlidersLookAndFeel = pGVar9;
  func_?(&(this->fields)._sglSlidersLookAndFeel);
  pGVar10 = (GizmoPlaneSlider3DLookAndFeel__Array *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  (this->fields)._dblSlidersLookAndFeel = pGVar10;
  func_?(&(this->fields)._dblSlidersLookAndFeel);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._sglSlidersLookAndFeel;
  uVar11 = 0;
  uVar3 = 0;
  if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    lVar12 = 0x20;
    lVar13 = 0x20;
    do {
      if ((int)pGVar9->max_length <= (int)uVar3) {
        pGVar10 = (this->fields)._dblSlidersLookAndFeel;
        uVar3 = 0;
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
      if ((uint)pGVar9->max_length <= uVar3) goto code_?;
      bVar2 = iRam_? != 0;
      *(GizmoLineSlider3DLookAndFeel **)((longlong)pGVar9->vector + lVar13 + -0x20) = pGVar14;
      if (bVar2) {
        uVar18 = (uint)((ulonglong)(pGVar9->vector + (int)uVar3) >> 0xc);
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
      uVar3 = uVar3 + 1;
      lVar13 = lVar13 + 8;
    } while (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0);
  }
  goto code_?;
code_?:
  if ((int)pGVar9->max_length <= (int)uVar3) goto code_?;
  if ((uint)pGVar9->max_length <= uVar3) goto code_?;
  if (*ppGVar19 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
  uVar3 = uVar3 + 1;
  ((*ppGVar19)->fields)._length = 5.5;
  ppGVar19 = ppGVar19 + 1;
  goto code_?;
code_?:
  aCStack_20[0].r = 0.8588236;
  aCStack_20[0].g = 0.24313727;
  aCStack_20[0].b = 0.1137255;
  aCStack_20[0].a = 1.0;
  MoveGizmoLookAndFeel3D_SetAxisColor(this,0,aCStack_20,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._sglSlidersLookAndFeel;
  if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar9->max_length < 2) goto code_?;
    pGVar14 = pGVar9->vector[1];
    if (pGVar14 != (GizmoLineSlider3DLookAndFeel *)0x0) {
      (pGVar14->fields)._color.r = 0.6039216;
      (pGVar14->fields)._color.g = 0.95294124;
      (pGVar14->fields)._color.b = 0.28235295;
      (pGVar14->fields)._color.a = 1.0;
      pGVar9 = (this->fields)._sglSlidersLookAndFeel;
      if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar9->max_length < 2) goto code_?;
        if ((pGVar9->vector[1] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar1 = (pGVar9->vector[1]->fields)._capLookAndFeel, pGVar1 != (GizmoCap3DLookAndFeel *)0x0)) {
          (pGVar1->fields)._color.r = 0.6039216;
          (pGVar1->fields)._color.g = 0.95294124;
          (pGVar1->fields)._color.b = 0.28235295;
          (pGVar1->fields)._color.a = 1.0;
          pGVar9 = (this->fields)._sglSlidersLookAndFeel;
          if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar9->max_length < 5) goto code_?;
            pGVar14 = pGVar9->vector[4];
            if (pGVar14 != (GizmoLineSlider3DLookAndFeel *)0x0) {
              (pGVar14->fields)._color.r = 0.6039216;
              (pGVar14->fields)._color.g = 0.95294124;
              (pGVar14->fields)._color.b = 0.28235295;
              (pGVar14->fields)._color.a = 1.0;
              pGVar9 = (this->fields)._sglSlidersLookAndFeel;
              if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar9->max_length < 5) goto code_?;
                if ((pGVar9->vector[4] != (GizmoLineSlider3DLookAndFeel *)0x0) && (pGVar1 = (pGVar9->vector[4]->fields)._capLookAndFeel, pGVar1 != (GizmoCap3DLookAndFeel *)0x0)) {
                  (pGVar1->fields)._color.r = 0.6039216;
                  (pGVar1->fields)._color.g = 0.95294124;
                  (pGVar1->fields)._color.b = 0.28235295;
                  (pGVar1->fields)._color.a = 1.0;
                  pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                  if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                    if ((uint)pGVar10->max_length < 3) goto code_?;
                    pGVar21 = pGVar10->vector[2];
                    if (pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      fVar22 = (pGVar21->fields)._color.a;
                      (pGVar21->fields)._borderColor.r = 0.6039216;
                      (pGVar21->fields)._borderColor.g = 0.95294124;
                      (pGVar21->fields)._borderColor.b = 0.28235295;
                      (pGVar21->fields)._borderColor.a = 1.0;
                      (pGVar21->fields)._color.r = 0.6039216;
                      (pGVar21->fields)._color.g = 0.95294124;
                      (pGVar21->fields)._color.b = 0.28235295;
                      (pGVar21->fields)._color.a = fVar22;
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
                                        if (pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          fVar22 = (pGVar21->fields)._color.a;
                                          uVar3 = 0;
                                          (pGVar21->fields)._borderColor.r = 0.227451;
                                          (pGVar21->fields)._borderColor.g = 0.4784314;
                                          (pGVar21->fields)._borderColor.b = 0.9725491;
                                          (pGVar21->fields)._borderColor.a = 1.0;
                                          (pGVar21->fields)._color.r = 0.227451;
                                          (pGVar21->fields)._color.g = 0.4784314;
                                          (pGVar21->fields)._color.b = 0.9725491;
                                          (pGVar21->fields)._color.a = fVar22;
                                          pGVar9 = (this->fields)._sglSlidersLookAndFeel;
                                          if (pGVar9 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                            ppGVar19 = pGVar9->vector;
                                            for (; (int)uVar3 < (int)pGVar9->max_length; uVar3 = uVar3 + 1) {
                                              if ((uint)pGVar9->max_length <= uVar3) goto code_?;
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
                                            uVar3 = 0;
                                            if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                              ppGVar23 = pGVar10->vector;
                                              for (; (int)uVar3 < (int)pGVar10->max_length; uVar3 = uVar3 + 1) {
                                                if ((uint)pGVar10->max_length <= uVar3) goto code_?;
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
                                              pGVar10 = (this->fields)._dblSlidersLookAndFeel;
                                              uVar3 = 0;
                                              if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                                ppGVar23 = pGVar10->vector;
                                                for (; (int)uVar3 < (int)pGVar10->max_length; uVar3 = uVar3 + 1) {
                                                  if ((uint)pGVar10->max_length <= uVar3) goto code_?;
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
                                                  for (; (int)uVar11 < (int)pGVar10->max_length; uVar11 = uVar11 + 1) {
                                                    if ((uint)pGVar10->max_length <= uVar11) goto code_?;
                                                    pGVar21 = *ppGVar23;
                                                    if (pGVar21 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                                                    (pGVar21->fields)._quadWidth = 1.5;
                                                    (pGVar21->fields)._quadHeight = 1.5;
                                                    ppGVar23 = ppGVar23 + 1;
                                                  }
                                                  pBVar8 = (this->fields)._dblSliderVis;
                                                  if (pBVar8 != (Boolean__Array *)0x0) {
                                                    if ((int)pBVar8->max_length == 0) {
code_?:
                                                      FUN_?();
                                                      pcVar17 = (code *)swi(3);
                                                      (*pcVar17)();
                                                      return;
                                                    }
                                                    pBVar8->vector[0] = 1;
                                                    pBVar8 = (this->fields)._dblSliderVis;
                                                    if (pBVar8 != (Boolean__Array *)0x0) {
                                                      if ((uint)pBVar8->max_length < 2) goto code_?;
                                                      pBVar8->vector[1] = 1;
                                                      pBVar8 = (this->fields)._dblSliderVis;
                                                      if (pBVar8 != (Boolean__Array *)0x0) {
                                                        if ((uint)pBVar8->max_length < 3) goto code_?;
                                                        pBVar8->vector[2] = 1;
                                                        pBVar8 = (this->fields)._sglSliderVis;
                                                        if (pBVar8 != (Boolean__Array *)0x0) {
                                                          if ((int)pBVar8->max_length == 0) goto code_?;
                                                          pBVar8->vector[0] = 1;
                                                          pBVar8 = (this->fields)._sglSliderCapVis;
                                                          if (pBVar8 != (Boolean__Array *)0x0) {
                                                            if ((int)pBVar8->max_length == 0) goto code_?;
                                                            pBVar8->vector[0] = 1;
                                                            pBVar8 = (this->fields)._sglSliderVis;
                                                            if (pBVar8 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar8->max_length < 2) goto code_?;
                                                              pBVar8->vector[1] = 1;
                                                              pBVar8 = (this->fields)._sglSliderCapVis;
                                                              if (pBVar8 != (Boolean__Array *)0x0) {
                                                                if ((uint)pBVar8->max_length < 2) goto code_?;
                                                                pBVar8->vector[1] = 1;
                                                                pBVar8 = (this->fields)._sglSliderVis;
                                                                if (pBVar8 != (Boolean__Array *)0x0) {
                                                                  if ((uint)pBVar8->max_length < 3) goto code_?;
                                                                  pBVar8->vector[2] = 1;
                                                                  pBVar8 = (this->fields)._sglSliderCapVis;
                                                                  if (pBVar8 != (Boolean__Array *)0x0) {
                                                                    if ((uint)pBVar8->max_length < 3) goto code_?;
                                                                    pBVar8->vector[2] = 1;
                                                                    pGVar1 = (this->fields)._midCapLookAndFeel;
                                                                    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                                      (pGVar1->fields)._capType = 2;
                                                                      pGVar1 = (this->fields)._midCapLookAndFeel;
                                                                      if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                                        (pGVar1->fields)._sphereRadius = 0.67;
                                                                        pGVar1 = (this->fields)._midCapLookAndFeel;
                                                                        if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                                                          (pGVar1->fields)._color.r = 0.8000001;
                                                                          (pGVar1->fields)._color.g = 0.8000001;
                                                                          (pGVar1->fields)._color.b = 0.8000001;
                                                                          (pGVar1->fields)._color.a = 1.0;
                                                                          pGVar7 = (this->fields)._vertSnapCapLookAndFeel;
                                                                          if (pGVar7 != (GizmoCap2DLookAndFeel *)0x0) {
                                                                            (pGVar7->fields)._fillMode = 1;
                                                                            pGVar7 = (this->fields)._vertSnapCapLookAndFeel;
                                                                            if (pGVar7 != (GizmoCap2DLookAndFeel *)0x0) {
                                                                              (pGVar7->fields)._color.r = 1.0;
                                                                              (pGVar7->fields)._color.g = 1.0;
                                                                              (pGVar7->fields)._color.b = 1.0;
                                                                              (pGVar7->fields)._color.a = 0.3;
                                                                              pGVar7 = (this->fields)._vertSnapCapLookAndFeel;
                                                                              if (pGVar7 != (GizmoCap2DLookAndFeel *)0x0) {
                                                                                (pGVar7->fields)._borderColor.r = 1.0;
                                                                                (pGVar7->fields)._borderColor.g = 1.0;
                                                                                (pGVar7->fields)._borderColor.b = 1.0;
                                                                                (pGVar7->fields)._borderColor.a = 1.0;
                                                                                pGVar7 = (this->fields)._vertSnapCapLookAndFeel;
                                                                                if (pGVar7 != (GizmoCap2DLookAndFeel *)0x0) {
                                                                                  (pGVar7->fields)._hoveredColor.r = 0.96470594;
                                                                                  (pGVar7->fields)._hoveredColor.g = 0.9490197;
                                                                                  (pGVar7->fields)._hoveredColor.b = 0.19607845;
                                                                                  (pGVar7->fields)._hoveredColor.a = 0.3;
                                                                                  pGVar7 = (this->fields)._vertSnapCapLookAndFeel;
                                                                                  if (pGVar7 != (GizmoCap2DLookAndFeel *)0x0) {
                                                                                    (pGVar7->fields)._hoveredBorderColor.r = 0.96470594;
                                                                                    (pGVar7->fields)._hoveredBorderColor.g = 0.9490197;
                                                                                    (pGVar7->fields)._hoveredBorderColor.b = 0.19607845;
                                                                                    (pGVar7->fields)._hoveredBorderColor.a = 1.0;
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
    if ((uint)pGVar10->max_length <= uVar3) goto code_?;
    bVar2 = iRam_? != 0;
    *(GizmoPlaneSlider3DLookAndFeel **)((longlong)pGVar10->vector + lVar12 + -0x20) = pGVar21;
    if (bVar2) {
      uVar18 = (uint)((ulonglong)(pGVar10->vector + (int)uVar3) >> 0xc);
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
    uVar3 = uVar3 + 1;
    lVar12 = lVar12 + 8;
    if (pGVar10 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
code_?:
    if ((int)pGVar10->max_length <= (int)uVar3) {
      pGVar9 = (this->fields)._sglSlidersLookAndFeel;
      uVar3 = 0;
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


/* Single get_DblSliderBorderBoxDepth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderBoxDepth(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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
      return (pGVar1->vector[0]->fields)._borderBoxDepth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_DblSliderBorderBoxHeight() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderBoxHeight(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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
      return (pGVar1->vector[0]->fields)._borderBoxHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode3D get_DblSliderBorderFillMode() */

GizmoFillMode3D__Enum Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderFillMode(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* GizmoShadeMode get_DblSliderBorderShadeMode() */

GizmoShadeMode__Enum Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderShadeMode(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* GizmoQuad3DBorderType get_DblSliderBorderType() */

GizmoQuad3DBorderType__Enum Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderBorderType(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSlidersLookAndFeel;
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


/* Single get_DblSliderSize() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_DblSliderSize(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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
      return (pGVar1->vector[0]->fields)._quadWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_MidCapBoxDepth(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Single get_MidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_MidCapBoxWidth(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Color get_VertSnapCapBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapBorderColor(Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Single get_VertSnapCapCircleRadius() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapCircleRadius(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._circleRadius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_VertSnapCapColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapColor(Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* GizmoFillMode2D get_VertSnapCapFillMode() */

GizmoFillMode2D__Enum Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapFillMode(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._fillMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Color get_VertSnapCapHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapHoveredBorderColor(Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Color get_VertSnapCapHoveredColor() */

Color * Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapHoveredColor(Color *__return_storage_ptr__,MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
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


/* Single get_VertSnapCapQuadWidth() */

float Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapQuadWidth(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._quadWidth;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoCap2DType get_VertSnapCapType() */

GizmoCap2DType__Enum Assembly-CSharp.dll::RTG::MoveGizmoLookAndFeel3D::MoveGizmoLookAndFeel3D_get_VertSnapCapType(MoveGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._vertSnapCapLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._capType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}

