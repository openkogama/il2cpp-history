
/* Void ConnectTickLookAndFeel(GizmoCap2D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
               (PointLightGizmo3DLookAndFeel *this,GizmoCap2D *tick,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGStack_1 = (GizmoCap2DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoCap2DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoCap2DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      pGStack_1 = (GizmoCap2DLookAndFeel *)0x0;
      ppGStack_3 = (GizmoCap2DLookAndFeel **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = pGVar2->vector[axisIndex];
  if (tick != (GizmoCap2D *)0x0) {
    (tick->fields)._sharedLookAndFeel = pGVar5;
    ppGStack_3 = &(tick->fields)._sharedLookAndFeel;
    pGStack_1 = pGVar5;
    func_?();
    return;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[System.Enum] GetAllowedTickTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
PointLightGizmo3DLookAndFeel_GetAllowedTickTypes
          (PointLightGizmo3DLookAndFeel *this,MethodInfo *method)

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


/* Void SetAllTicksColor(Color) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetAllTicksColor
               (PointLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = pGVar2->vector[0];
    if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
      (pGVar5->fields)._color.r = color.r;
      (pGVar5->fields)._color.g = color.g;
      (pGVar5->fields)._color.b = color.b;
      (pGVar5->fields)._color.a = color.a;
      pGVar2 = (this->fields)._tickLookAndFeel;
      if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        if (pGVar2->max_length < 4) goto code_?;
        pGVar5 = pGVar2->vector[3];
        if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar5->fields)._color.r = color.r;
          (pGVar5->fields)._color.g = color.g;
          (pGVar5->fields)._color.b = color.b;
          (pGVar5->fields)._color.a = color.a;
          pGVar2 = (this->fields)._tickLookAndFeel;
          if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            pGVar5 = pGVar2->vector[1];
            if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
              (pGVar5->fields)._color.r = color.r;
              (pGVar5->fields)._color.g = color.g;
              (pGVar5->fields)._color.b = color.b;
              (pGVar5->fields)._color.a = color.a;
              pGVar2 = (this->fields)._tickLookAndFeel;
              if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                if (pGVar2->max_length < 5) goto code_?;
                pGVar5 = pGVar2->vector[4];
                if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                  (pGVar5->fields)._color.r = color.r;
                  (pGVar5->fields)._color.g = color.g;
                  (pGVar5->fields)._color.b = color.b;
                  (pGVar5->fields)._color.a = color.a;
                  pGVar2 = (this->fields)._tickLookAndFeel;
                  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                    if (pGVar2->max_length < 3) goto code_?;
                    pGVar5 = pGVar2->vector[2];
                    if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar5->fields)._color.r = color.r;
                      (pGVar5->fields)._color.g = color.g;
                      (pGVar5->fields)._color.b = color.b;
                      (pGVar5->fields)._color.a = color.a;
                      pGVar2 = (this->fields)._tickLookAndFeel;
                      if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                        if (pGVar2->max_length < 6) goto code_?;
                        pGVar5 = pGVar2->vector[5];
                        if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                          (pGVar5->fields)._color.r = color.r;
                          (pGVar5->fields)._color.g = color.g;
                          (pGVar5->fields)._color.b = color.b;
                          (pGVar5->fields)._color.a = color.a;
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
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxialCircleCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetAxialCircleCullAlphaScale
               (PointLightGizmo3DLookAndFeel *this,float scale,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0.0 <= scale) && (fVar1 = _UNK_?, scale <= _UNK_?)) {
    (this->fields)._axialCircleCullAlphaScale = scale;
    return;
  }
  (this->fields)._axialCircleCullAlphaScale = fVar1;
  return;
}


/* Void SetTickBorderColor(Color) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickBorderColor
               (PointLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._borderColor.r = color.r;
      (pGVar4->fields)._borderColor.g = color.g;
      (pGVar4->fields)._borderColor.b = color.b;
      (pGVar4->fields)._borderColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTickCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickCircleRadius
               (PointLightGizmo3DLookAndFeel *this,float radius,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._circleRadius = radius;
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


/* Void SetTickColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickColor
               (PointLightGizmo3DLookAndFeel *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = pGVar2->vector[axisIndex];
    if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
      (pGVar5->fields)._color.r = color.r;
      (pGVar5->fields)._color.g = color.g;
      (pGVar5->fields)._color.b = color.b;
      (pGVar5->fields)._color.a = color.a;
      pGVar2 = (this->fields)._tickLookAndFeel;
      if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        if (pGVar2->max_length <= axisIndex + 3U) goto code_?;
        pGVar5 = pGVar2->vector[axisIndex + 3];
        if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar5->fields)._color.r = color.r;
          (pGVar5->fields)._color.g = color.g;
          (pGVar5->fields)._color.b = color.b;
          (pGVar5->fields)._color.a = color.a;
          return;
        }
      }
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetTickCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickCullAlphaScale
               (PointLightGizmo3DLookAndFeel *this,float alphaScale,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0.0 <= alphaScale) && (fVar1 = _UNK_?, alphaScale <= _UNK_?)) {
    (this->fields)._tickCullAlphaScale = alphaScale;
    return;
  }
  (this->fields)._tickCullAlphaScale = fVar1;
  return;
}


/* Void SetTickHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickHoveredBorderColor
               (PointLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._hoveredBorderColor.r = color.r;
      (pGVar4->fields)._hoveredBorderColor.g = color.g;
      (pGVar4->fields)._hoveredBorderColor.b = color.b;
      (pGVar4->fields)._hoveredBorderColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTickHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickHoveredColor
               (PointLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._hoveredColor.r = color.r;
      (pGVar4->fields)._hoveredColor.g = color.g;
      (pGVar4->fields)._hoveredColor.b = color.b;
      (pGVar4->fields)._hoveredColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTickQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickQuadHeight
               (PointLightGizmo3DLookAndFeel *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._tickLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
      goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
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


/* Void SetTickType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
     PointLightGizmo3DLookAndFeel_SetTickType
               (PointLightGizmo3DLookAndFeel *this,GizmoCap2DType__Enum tickType,MethodInfo *method)

{
  if ((tickType == GizmoCap2DType__Enum_Circle) || (tickType == GizmoCap2DType__Enum_Quad)) {
    uVar1 = 0;
    pGVar2 = (this->fields)._tickLookAndFeel;
    if (pGVar2 == (GizmoCap2DLookAndFeel__Array *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppGVar4 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) {
        func_?();
        goto code_?;
      }
      if (*ppGVar4 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar4)->fields)._capType = tickType;
      ppGVar4 = ppGVar4 + 1;
    }
  }
  return;
}


/* PointLightGizmo3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel__ctor
               (PointLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    cRam_? = '\x01';
  }
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._sphereBorderColor.r = pCVar1->r;
  (this->fields)._sphereBorderColor.g = fVar3;
  (this->fields)._sphereBorderColor.b = fVar4;
  (this->fields)._sphereBorderColor.a = fVar5;
  pGVar6 = (GizmoCap2DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel,6);
  (this->fields)._tickLookAndFeel = pGVar6;
  func_?(&(this->fields)._tickLookAndFeel,pGVar6);
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._wireColor.r = pCVar1->r;
  (this->fields)._wireColor.g = fVar3;
  (this->fields)._wireColor.b = fVar4;
  (this->fields)._wireColor.a = fVar5;
  (this->fields)._axialCircleCullAlphaScale = 0.3;
  (this->fields)._tickCullAlphaScale = 0.3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_7);
  uVar8 = 0;
  pGVar6 = (this->fields)._tickLookAndFeel;
  while (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar6->max_length <= (int)uVar8) {
      pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
      fVar3 = pCVar1->g;
      fVar4 = pCVar1->b;
      fVar5 = pCVar1->a;
      (((GizmoCap2DLookAndFeel *)this)->fields)._fillMode = (int32_t)pCVar1->r;
      (((GizmoCap2DLookAndFeel *)this)->fields)._capType = (int32_t)fVar3;
      (((GizmoCap2DLookAndFeel *)this)->fields)._scale = fVar4;
      (((GizmoCap2DLookAndFeel *)this)->fields)._circleRadius = fVar5;
      pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
      fVar3 = pCVar1->g;
      fVar4 = pCVar1->b;
      fVar5 = pCVar1->a;
      (((GizmoCap2DLookAndFeel *)this)->fields)._quadHeight = pCVar1->r;
      (((GizmoCap2DLookAndFeel *)this)->fields)._arrowBaseRadius = fVar3;
      (((GizmoCap2DLookAndFeel *)this)->fields)._arrowHeight = fVar4;
      (((GizmoCap2DLookAndFeel *)this)->fields)._color.r = fVar5;
      pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
      fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
      fVar4 = pCVar1->r;
      fVar5 = pCVar1->g;
      fVar9 = pCVar1->b;
      fVar10 = pCVar1->a;
      if (fVar3 != 0.0) {
        if (*(int *)((int)fVar3 + 0xc) == 0) goto code_?;
        iVar11 = *(int *)((int)fVar3 + 0x10);
        fVar3 = pCVar1->g;
        fVar12 = pCVar1->b;
        fVar13 = pCVar1->a;
        if (iVar11 != 0) {
          *(float *)(iVar11 + 0x28) = pCVar1->r;
          *(float *)(iVar11 + 0x2c) = fVar3;
          *(float *)(iVar11 + 0x30) = fVar12;
          *(float *)(iVar11 + 0x34) = fVar13;
          fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
          if (fVar3 != 0.0) {
            if (*(uint *)((int)fVar3 + 0xc) < 4) goto code_?;
            iVar11 = *(int *)((int)fVar3 + 0x1c);
            if (iVar11 != 0) {
              *(float *)(iVar11 + 0x28) = fVar4;
              *(float *)(iVar11 + 0x2c) = fVar5;
              *(float *)(iVar11 + 0x30) = fVar9;
              *(float *)(iVar11 + 0x34) = fVar10;
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                 (&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
              fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
              fVar4 = pCVar1->r;
              fVar5 = pCVar1->g;
              fVar9 = pCVar1->b;
              fVar10 = pCVar1->a;
              if (fVar3 != 0.0) {
                if (*(uint *)((int)fVar3 + 0xc) < 2) goto code_?;
                iVar11 = *(int *)((int)fVar3 + 0x14);
                fVar3 = pCVar1->g;
                fVar12 = pCVar1->b;
                fVar13 = pCVar1->a;
                if (iVar11 != 0) {
                  *(float *)(iVar11 + 0x28) = pCVar1->r;
                  *(float *)(iVar11 + 0x2c) = fVar3;
                  *(float *)(iVar11 + 0x30) = fVar12;
                  *(float *)(iVar11 + 0x34) = fVar13;
                  fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
                  if (fVar3 != 0.0) {
                    if (*(uint *)((int)fVar3 + 0xc) < 5) goto code_?;
                    iVar11 = *(int *)((int)fVar3 + 0x20);
                    if (iVar11 != 0) {
                      *(float *)(iVar11 + 0x28) = fVar4;
                      *(float *)(iVar11 + 0x2c) = fVar5;
                      *(float *)(iVar11 + 0x30) = fVar9;
                      *(float *)(iVar11 + 0x34) = fVar10;
                      pCVar1 = ColorEx::ColorEx_FromByteValues
                                         (&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
                      fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
                      fVar4 = pCVar1->r;
                      fVar5 = pCVar1->g;
                      fVar9 = pCVar1->b;
                      fVar10 = pCVar1->a;
                      if (fVar3 != 0.0) {
                        if (*(uint *)((int)fVar3 + 0xc) < 3) goto code_?;
                        iVar11 = *(int *)((int)fVar3 + 0x18);
                        fVar3 = pCVar1->g;
                        fVar12 = pCVar1->b;
                        fVar13 = pCVar1->a;
                        if (iVar11 != 0) {
                          *(float *)(iVar11 + 0x28) = pCVar1->r;
                          *(float *)(iVar11 + 0x2c) = fVar3;
                          *(float *)(iVar11 + 0x30) = fVar12;
                          *(float *)(iVar11 + 0x34) = fVar13;
                          fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
                          if (fVar3 != 0.0) {
                            if (*(uint *)((int)fVar3 + 0xc) < 6) goto code_?;
                            iVar11 = *(int *)((int)fVar3 + 0x24);
                            if (iVar11 != 0) {
                              *(float *)(iVar11 + 0x28) = fVar4;
                              *(float *)(iVar11 + 0x2c) = fVar5;
                              *(float *)(iVar11 + 0x30) = fVar9;
                              *(float *)(iVar11 + 0x34) = fVar10;
                              pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                 (&CStack_2,(MethodInfo *)0x0);
                              fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
                              uVar8 = 0;
                              fVar4 = pCVar1->r;
                              fVar5 = pCVar1->g;
                              fVar9 = pCVar1->b;
                              fVar10 = pCVar1->a;
                              if (fVar3 != 0.0) {
                                piVar14 = (int *)((int)fVar3 + 0x10);
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
      break;
    }
    fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
    this = (PointLightGizmo3DLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor
              ((GizmoCap2DLookAndFeel *)this,(MethodInfo *)0x0);
    if (fVar3 == 0.0) break;
    if (((GizmoCap2DLookAndFeel *)this != (GizmoCap2DLookAndFeel *)0x0) &&
       (iVar11 = func_?(), iVar11 == 0)) goto code_?;
    if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
    *(PointLightGizmo3DLookAndFeel **)((int)fVar3 + 0x10 + uVar8 * 4) = this;
    func_?();
    uVar8 = uVar8 + 1;
    pGVar6 = (GizmoCap2DLookAndFeel__Array *)(((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
code_?:
  if (*(int *)((int)fVar3 + 0xc) <= (int)uVar8) goto code_?;
  if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
  iVar11 = *piVar14;
  if (iVar11 == 0) goto code_?;
  uVar8 = uVar8 + 1;
  piVar14 = piVar14 + 1;
  *(float *)(iVar11 + 0x38) = fVar4;
  *(float *)(iVar11 + 0x3c) = fVar5;
  *(float *)(iVar11 + 0x40) = fVar9;
  *(float *)(iVar11 + 0x44) = fVar10;
  goto code_?;
code_?:
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  pCVar1 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_2,color,0.0,(MethodInfo *)0x0);
  fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
  uVar8 = 0;
  fVar4 = pCVar1->r;
  fVar5 = pCVar1->g;
  fVar9 = pCVar1->b;
  fVar10 = pCVar1->a;
  if (fVar3 != 0.0) {
    piVar14 = (int *)((int)fVar3 + 0x10);
    for (; (int)uVar8 < *(int *)((int)fVar3 + 0xc); uVar8 = uVar8 + 1) {
      if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
      iVar11 = *piVar14;
      if (iVar11 == 0) goto code_?;
      piVar14 = piVar14 + 1;
      *(float *)(iVar11 + 0x48) = fVar4;
      *(float *)(iVar11 + 0x4c) = fVar5;
      *(float *)(iVar11 + 0x50) = fVar9;
      *(float *)(iVar11 + 0x54) = fVar10;
    }
    color_00.g = (float)_UNK_?;
    color_00.r = (float)_UNK_?;
    color_00.b = (float)_UNK_?;
    color_00.a = _UNK_?;
    pCVar1 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_2,color_00,0.0,(MethodInfo *)0x0);
    fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
    uVar8 = 0;
    fVar4 = pCVar1->r;
    fVar5 = pCVar1->g;
    fVar9 = pCVar1->b;
    fVar10 = pCVar1->a;
    if (fVar3 != 0.0) {
      piVar14 = (int *)((int)fVar3 + 0x10);
      for (; (int)uVar8 < *(int *)((int)fVar3 + 0xc); uVar8 = uVar8 + 1) {
        if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
        iVar11 = *piVar14;
        if (iVar11 == 0) goto code_?;
        piVar14 = piVar14 + 1;
        *(float *)(iVar11 + 0x58) = fVar4;
        *(float *)(iVar11 + 0x5c) = fVar5;
        *(float *)(iVar11 + 0x60) = fVar9;
        *(float *)(iVar11 + 100) = fVar10;
      }
      fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
      uVar8 = 0;
      if (fVar3 != 0.0) {
        puVar16 = (undefined4 *)((int)fVar3 + 0x10);
        for (; (int)uVar8 < *(int *)((int)fVar3 + 0xc); uVar8 = uVar8 + 1) {
          if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
          if ((CameraMoveSettings *)*puVar16 == (CameraMoveSettings *)0x0) goto code_?;
          CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                    ((CameraMoveSettings *)*puVar16,6.0,(MethodInfo *)0x0);
          puVar16 = puVar16 + 1;
        }
        fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
        uVar8 = 0;
        if (fVar3 != 0.0) {
          puVar16 = (undefined4 *)((int)fVar3 + 0x10);
          for (; (int)uVar8 < *(int *)((int)fVar3 + 0xc); uVar8 = uVar8 + 1) {
            if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
            if ((GizmoPlaneSlider3DLookAndFeel *)*puVar16 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
            goto code_?;
            GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                      ((GizmoPlaneSlider3DLookAndFeel *)*puVar16,6.0,(MethodInfo *)0x0);
            puVar16 = puVar16 + 1;
          }
          fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
          uVar8 = 0;
          if (fVar3 != 0.0) {
            piVar14 = (int *)((int)fVar3 + 0x10);
            for (; (int)uVar8 < *(int *)((int)fVar3 + 0xc); uVar8 = uVar8 + 1) {
              if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
              if (*piVar14 == 0) goto code_?;
              *(undefined4 *)(*piVar14 + 0x14) = 0x40400000;
              piVar14 = piVar14 + 1;
            }
            fVar3 = (((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
            uVar8 = 0;
            if (fVar3 != 0.0) {
              piVar14 = (int *)((int)fVar3 + 0x10);
              while( true ) {
                if (*(int *)((int)fVar3 + 0xc) <= (int)uVar8) {
                  return;
                }
                if (*(uint *)((int)fVar3 + 0xc) <= uVar8) break;
                if (*piVar14 == 0) goto code_?;
                uVar8 = uVar8 + 1;
                *(undefined4 *)(*piVar14 + 0xc) = 0;
                piVar14 = piVar14 + 1;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  goto code_?;
}


/* Color get_TickBorderColor() */

Color * Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
        PointLightGizmo3DLookAndFeel_get_TickBorderColor
                  (Color *__return_storage_ptr__,PointLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Color get_TickHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
        PointLightGizmo3DLookAndFeel_get_TickHoveredBorderColor
                  (Color *__return_storage_ptr__,PointLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Color get_TickHoveredColor() */

Color * Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
        PointLightGizmo3DLookAndFeel_get_TickHoveredColor
                  (Color *__return_storage_ptr__,PointLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Single get_TickQuadHeight() */

float Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
      PointLightGizmo3DLookAndFeel_get_TickQuadHeight
                (PointLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoCap2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._quadHeight;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_XTickColor() */

Color * Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
        PointLightGizmo3DLookAndFeel_get_XTickColor
                  (Color *__return_storage_ptr__,PointLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Color get_YTickColor() */

Color * Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
        PointLightGizmo3DLookAndFeel_get_YTickColor
                  (Color *__return_storage_ptr__,PointLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoCap2DLookAndFeel *)0x0) {
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


/* Color get_ZTickColor() */

Color * Assembly-CSharp.dll::RTG::PointLightGizmo3DLookAndFeel::
        PointLightGizmo3DLookAndFeel_get_ZTickColor
                  (Color *__return_storage_ptr__,PointLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._tickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[2];
    if (pGVar6 != (GizmoCap2DLookAndFeel *)0x0) {
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

