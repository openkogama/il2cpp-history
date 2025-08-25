
/* List`1[System.Enum] GetAllowedMidCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::
BoxColliderGizmo3DLookAndFeel_GetAllowedMidCapTypes
          (BoxColliderGizmo3DLookAndFeel *this,MethodInfo *method)

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


/* List`1[System.Enum] GetAllowedTickTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::
BoxColliderGizmo3DLookAndFeel_GetAllowedTickTypes
          (BoxColliderGizmo3DLookAndFeel *this,MethodInfo *method)

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


/* Void SetMidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::
     BoxColliderGizmo3DLookAndFeel_SetMidCapBoxDepth
               (BoxColliderGizmo3DLookAndFeel *this,float depth,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar3 = _UNK_?;
    if (_UNK_? <= depth) {
      fVar3 = depth;
    }
    (pGVar2->fields)._boxDepth = fVar3;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMidCapBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::
     BoxColliderGizmo3DLookAndFeel_SetMidCapBoxHeight
               (BoxColliderGizmo3DLookAndFeel *this,float height,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar3 = _UNK_?;
    if (_UNK_? <= height) {
      fVar3 = height;
    }
    (pGVar2->fields)._boxHeight = fVar3;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMidCapBoxWidth(Single) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::
     BoxColliderGizmo3DLookAndFeel_SetMidCapBoxWidth
               (BoxColliderGizmo3DLookAndFeel *this,float width,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar3 = _UNK_?;
    if (_UNK_? <= width) {
      fVar3 = width;
    }
    (pGVar2->fields)._boxWidth = fVar3;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTickCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::
     BoxColliderGizmo3DLookAndFeel_SetTickCullAlphaScale
               (BoxColliderGizmo3DLookAndFeel *this,float alphaScale,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0.0 <= alphaScale) && (fVar1 = _UNK_?, alphaScale <= _UNK_?)) {
    (this->fields)._tickCullAlphaScale = alphaScale;
    return;
  }
  (this->fields)._tickCullAlphaScale = fVar1;
  return;
}


/* BoxColliderGizmo3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DLookAndFeel::BoxColliderGizmo3DLookAndFeel__ctor
               (BoxColliderGizmo3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    cRam_? = '\x01';
  }
  pCVar1 = ColorEx::ColorEx_FromByteValues
                     ((Color *)&stack0xffffffec,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (this->fields)._wireColor.r = pCVar1->r;
  (this->fields)._wireColor.g = fVar2;
  (this->fields)._wireColor.b = fVar3;
  (this->fields)._wireColor.a = fVar4;
  pGVar5 = (GizmoCap2DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel,6);
  (this->fields)._tickLookAndFeel = pGVar5;
  func_?(&(this->fields)._tickLookAndFeel,pGVar5);
  pGVar6 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar6,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._midCapLookAndFeel;
  (this->fields)._midCapLookAndFeel = pGVar6;
  func_?(method_00,pGVar6);
  (this->fields)._isMidCapVisible = 1;
  (this->fields)._tickCullAlphaScale = 0.3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  uVar7 = 0;
  pGVar5 = (this->fields)._tickLookAndFeel;
  while (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar5->max_length <= (int)uVar7) {
      pCVar1 = ColorEx::ColorEx_FromByteValues
                         ((Color *)&stack0xffffffdc,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._tickLookAndFeel;
      fVar2 = pCVar1->r;
      fVar3 = pCVar1->g;
      fVar4 = pCVar1->b;
      fVar8 = pCVar1->a;
      if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        if (pGVar5->max_length == 0) goto code_?;
        pGVar9 = pGVar5->vector[0];
        fVar10 = pCVar1->g;
        fVar11 = pCVar1->b;
        fVar12 = pCVar1->a;
        if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar9->fields)._color.r = pCVar1->r;
          (pGVar9->fields)._color.g = fVar10;
          (pGVar9->fields)._color.b = fVar11;
          (pGVar9->fields)._color.a = fVar12;
          pGVar5 = (this->fields)._tickLookAndFeel;
          if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            if (pGVar5->max_length < 4) goto code_?;
            pGVar9 = pGVar5->vector[3];
            if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
              (pGVar9->fields)._color.r = fVar2;
              (pGVar9->fields)._color.g = fVar3;
              (pGVar9->fields)._color.b = fVar4;
              (pGVar9->fields)._color.a = fVar8;
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                 ((Color *)&stack0xffffffdc,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              pGVar5 = (this->fields)._tickLookAndFeel;
              fVar2 = pCVar1->r;
              fVar3 = pCVar1->g;
              fVar4 = pCVar1->b;
              fVar8 = pCVar1->a;
              if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                if (pGVar5->max_length < 2) goto code_?;
                pGVar9 = pGVar5->vector[1];
                fVar10 = pCVar1->g;
                fVar11 = pCVar1->b;
                fVar12 = pCVar1->a;
                if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                  (pGVar9->fields)._color.r = pCVar1->r;
                  (pGVar9->fields)._color.g = fVar10;
                  (pGVar9->fields)._color.b = fVar11;
                  (pGVar9->fields)._color.a = fVar12;
                  pGVar5 = (this->fields)._tickLookAndFeel;
                  if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                    if (pGVar5->max_length < 5) goto code_?;
                    pGVar9 = pGVar5->vector[4];
                    if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar9->fields)._color.r = fVar2;
                      (pGVar9->fields)._color.g = fVar3;
                      (pGVar9->fields)._color.b = fVar4;
                      (pGVar9->fields)._color.a = fVar8;
                      pCVar1 = ColorEx::ColorEx_FromByteValues
                                         ((Color *)&stack0xffffffdc,0x99,0xe8,0x90,0xff,
                                          (MethodInfo *)0x0);
                      pGVar5 = (this->fields)._tickLookAndFeel;
                      fVar2 = pCVar1->r;
                      fVar3 = pCVar1->g;
                      fVar4 = pCVar1->b;
                      fVar8 = pCVar1->a;
                      if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                        if (pGVar5->max_length < 3) goto code_?;
                        pGVar9 = pGVar5->vector[2];
                        fVar10 = pCVar1->g;
                        fVar11 = pCVar1->b;
                        fVar12 = pCVar1->a;
                        if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                          (pGVar9->fields)._color.r = pCVar1->r;
                          (pGVar9->fields)._color.g = fVar10;
                          (pGVar9->fields)._color.b = fVar11;
                          (pGVar9->fields)._color.a = fVar12;
                          pGVar5 = (this->fields)._tickLookAndFeel;
                          if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                            if (pGVar5->max_length < 6) goto code_?;
                            pGVar9 = pGVar5->vector[5];
                            if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                              (pGVar9->fields)._color.r = fVar2;
                              (pGVar9->fields)._color.g = fVar3;
                              (pGVar9->fields)._color.b = fVar4;
                              (pGVar9->fields)._color.a = fVar8;
                              pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                 ((Color *)&stack0xffffffdc,(MethodInfo *)0x0);
                              pGVar5 = (this->fields)._tickLookAndFeel;
                              uVar7 = 0;
                              fVar2 = pCVar1->r;
                              fVar3 = pCVar1->g;
                              fVar4 = pCVar1->b;
                              fVar8 = pCVar1->a;
                              if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                                ppGVar13 = pGVar5->vector;
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
    pGVar5 = (this->fields)._tickLookAndFeel;
    pGVar9 = (GizmoCap2DLookAndFeel *)func_?();
    (pGVar9->fields)._fillMode = 2;
    (pGVar9->fields)._scale = 1.0;
    (pGVar9->fields)._circleRadius = 12.0;
    (pGVar9->fields)._quadWidth = 25.0;
    (pGVar9->fields)._quadHeight = 25.0;
    (pGVar9->fields)._arrowBaseRadius = 5.0;
    (pGVar9->fields)._arrowHeight = 20.0;
    fVar4 = _UNK_?;
    fVar3 = _UNK_?;
    fVar2 = _UNK_?;
    (pGVar9->fields)._color.r = _UNK_?;
    (pGVar9->fields)._color.g = fVar2;
    (pGVar9->fields)._color.b = fVar3;
    (pGVar9->fields)._color.a = fVar4;
    pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                       ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar2 = pCVar1->g;
    fVar3 = pCVar1->b;
    fVar4 = pCVar1->a;
    (pGVar9->fields)._hoveredColor.r = pCVar1->r;
    (pGVar9->fields)._hoveredColor.g = fVar2;
    (pGVar9->fields)._hoveredColor.b = fVar3;
    (pGVar9->fields)._hoveredColor.a = fVar4;
    fVar4 = _UNK_?;
    fVar3 = _UNK_?;
    fVar2 = _UNK_?;
    (pGVar9->fields)._borderColor.r = _UNK_?;
    (pGVar9->fields)._borderColor.g = fVar2;
    (pGVar9->fields)._borderColor.b = fVar3;
    (pGVar9->fields)._borderColor.a = fVar4;
    pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                       ((Color *)&stack0xffffffdc,(MethodInfo *)0x0);
    fVar2 = pCVar1->g;
    fVar3 = pCVar1->b;
    fVar4 = pCVar1->a;
    (pGVar9->fields)._hoveredBorderColor.r = pCVar1->r;
    (pGVar9->fields)._hoveredBorderColor.g = fVar2;
    (pGVar9->fields)._hoveredBorderColor.b = fVar3;
    (pGVar9->fields)._hoveredBorderColor.a = fVar4;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar9,ExceptionArgument__Enum_obj,in_stack_14);
    if (pGVar5 == (GizmoCap2DLookAndFeel__Array *)0x0) break;
    iVar15 = func_?();
    if (iVar15 == 0) goto code_?;
    if (pGVar5->max_length <= uVar7) goto code_?;
    pGVar5->vector[uVar7] = pGVar9;
    func_?();
    uVar7 = uVar7 + 1;
    pGVar5 = (this->fields)._tickLookAndFeel;
  }
  goto code_?;
code_?:
  if ((int)pGVar5->max_length <= (int)uVar7) goto code_?;
  if (pGVar5->max_length <= uVar7) goto code_?;
  pGVar9 = *ppGVar13;
  if (pGVar9 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  uVar7 = uVar7 + 1;
  ppGVar13 = ppGVar13 + 1;
  (pGVar9->fields)._hoveredColor.r = fVar2;
  (pGVar9->fields)._hoveredColor.g = fVar3;
  (pGVar9->fields)._hoveredColor.b = fVar4;
  (pGVar9->fields)._hoveredColor.a = fVar8;
  goto code_?;
code_?:
  func_?();
  goto code_?;
code_?:
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  pCVar1 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&stack0xffffffdc,color,0.0,(MethodInfo *)0x0);
  pGVar5 = (this->fields)._tickLookAndFeel;
  uVar7 = 0;
  fVar2 = pCVar1->r;
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar8 = pCVar1->a;
  if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar13 = pGVar5->vector;
    for (; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
      if (pGVar5->max_length <= uVar7) goto code_?;
      pGVar9 = *ppGVar13;
      if (pGVar9 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ppGVar13 = ppGVar13 + 1;
      (pGVar9->fields)._borderColor.r = fVar2;
      (pGVar9->fields)._borderColor.g = fVar3;
      (pGVar9->fields)._borderColor.b = fVar4;
      (pGVar9->fields)._borderColor.a = fVar8;
    }
    color_00.g = (float)_UNK_?;
    color_00.r = (float)_UNK_?;
    color_00.b = (float)_UNK_?;
    color_00.a = _UNK_?;
    pCVar1 = ColorEx::ColorEx_KeepAllButAlpha
                       ((Color *)&stack0xffffffdc,color_00,0.0,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._tickLookAndFeel;
    uVar7 = 0;
    fVar2 = pCVar1->r;
    fVar3 = pCVar1->g;
    fVar4 = pCVar1->b;
    fVar8 = pCVar1->a;
    if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
      ppGVar13 = pGVar5->vector;
      for (; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
        if (pGVar5->max_length <= uVar7) goto code_?;
        pGVar9 = *ppGVar13;
        if (pGVar9 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        ppGVar13 = ppGVar13 + 1;
        (pGVar9->fields)._hoveredBorderColor.r = fVar2;
        (pGVar9->fields)._hoveredBorderColor.g = fVar3;
        (pGVar9->fields)._hoveredBorderColor.b = fVar4;
        (pGVar9->fields)._hoveredBorderColor.a = fVar8;
      }
      pGVar5 = (this->fields)._tickLookAndFeel;
      uVar7 = 0;
      if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        ppGVar13 = pGVar5->vector;
        for (; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
          if (pGVar5->max_length <= uVar7) goto code_?;
          if (*ppGVar13 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
          ((*ppGVar13)->fields)._quadWidth = 6.0;
          ppGVar13 = ppGVar13 + 1;
        }
        pGVar5 = (this->fields)._tickLookAndFeel;
        uVar7 = 0;
        if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
          ppGVar13 = pGVar5->vector;
          for (; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
            if (pGVar5->max_length <= uVar7) goto code_?;
            if (*ppGVar13 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
            ((*ppGVar13)->fields)._quadHeight = 6.0;
            ppGVar13 = ppGVar13 + 1;
          }
          pGVar5 = (this->fields)._tickLookAndFeel;
          uVar7 = 0;
          if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            ppGVar13 = pGVar5->vector;
            for (; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
              if (pGVar5->max_length <= uVar7) goto code_?;
              if (*ppGVar13 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              ((*ppGVar13)->fields)._circleRadius = 3.0;
              ppGVar13 = ppGVar13 + 1;
            }
            pGVar5 = (this->fields)._tickLookAndFeel;
            uVar7 = 0;
            if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
              ppGVar13 = pGVar5->vector;
              for (; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
                if (pGVar5->max_length <= uVar7) goto code_?;
                if (*ppGVar13 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
                ((*ppGVar13)->fields)._capType = 0;
                ppGVar13 = ppGVar13 + 1;
              }
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                 ((Color *)&stack0xffffffdc,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              pGVar6 = (this->fields)._midCapLookAndFeel;
              fVar2 = pCVar1->g;
              fVar3 = pCVar1->b;
              fVar4 = pCVar1->a;
              if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                (pGVar6->fields)._color.r = pCVar1->r;
                (pGVar6->fields)._color.g = fVar2;
                (pGVar6->fields)._color.b = fVar3;
                (pGVar6->fields)._color.a = fVar4;
                pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                   ((Color *)&stack0xffffffdc,(MethodInfo *)0x0);
                pGVar6 = (this->fields)._midCapLookAndFeel;
                fVar2 = pCVar1->g;
                fVar3 = pCVar1->b;
                fVar4 = pCVar1->a;
                if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                  (pGVar6->fields)._hoveredColor.r = pCVar1->r;
                  (pGVar6->fields)._hoveredColor.g = fVar2;
                  (pGVar6->fields)._hoveredColor.b = fVar3;
                  (pGVar6->fields)._hoveredColor.a = fVar4;
                  pGVar6 = (this->fields)._midCapLookAndFeel;
                  if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                    (pGVar6->fields)._fillMode = 0;
                    pGVar6 = (this->fields)._midCapLookAndFeel;
                    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                      (pGVar6->fields)._capType = 2;
                      pGVar6 = (this->fields)._midCapLookAndFeel;
                      (this->fields)._isMidCapVisible = 1;
                      if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                        (pGVar6->fields)._boxWidth = 0.7;
                        pGVar6 = (this->fields)._midCapLookAndFeel;
                        if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                          (pGVar6->fields)._boxHeight = 0.7;
                          pGVar6 = (this->fields)._midCapLookAndFeel;
                          if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                            (pGVar6->fields)._boxDepth = 0.7;
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
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

