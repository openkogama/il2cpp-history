
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
  pBVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    cRam_? = '\x01';
  }
  pCVar2 = ColorEx::ColorEx_FromByteValues
                      ((Color *)&puStack_3,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
  fVar4 = pCVar2->g;
  fVar5 = pCVar2->b;
  fVar6 = pCVar2->a;
  (this->fields)._wireColor.r = pCVar2->r;
  (this->fields)._wireColor.g = fVar4;
  (this->fields)._wireColor.b = fVar5;
  (this->fields)._wireColor.a = fVar6;
  pGVar7 = (GizmoCap2DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel,6);
  (this->fields)._tickLookAndFeel = pGVar7;
  func_?(&(this->fields)._tickLookAndFeel,pGVar7);
  pGVar8 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar8,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._midCapLookAndFeel;
  (this->fields)._midCapLookAndFeel = pGVar8;
  func_?(method_00,pGVar8);
  (this->fields)._isMidCapVisible = 1;
  (this->fields)._tickCullAlphaScale = 0.3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  puVar9 = (undefined1 *)0x0;
  pGVar7 = (this->fields)._tickLookAndFeel;
  this = (BoxColliderGizmo3DLookAndFeel *)TypeInfo__RTG__GizmoCap2DLookAndFeel;
  while (TypeInfo__RTG__GizmoCap2DLookAndFeel = (GizmoCap2DLookAndFeel__Class *)this,
        pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar7->max_length <= (int)puVar9) {
      pCVar2 = ColorEx::ColorEx_FromByteValues
                          ((Color *)&puStack_3,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
      pGVar7 = (pBVar1->fields)._tickLookAndFeel;
      fVar4 = pCVar2->r;
      fVar5 = pCVar2->g;
      fVar6 = pCVar2->b;
      fVar10 = pCVar2->a;
      if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        if (pGVar7->max_length == 0) goto code_?;
        pGVar11 = pGVar7->vector[0];
        fVar12 = pCVar2->g;
        fVar13 = pCVar2->b;
        fVar14 = pCVar2->a;
        if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar11->fields)._color.r = pCVar2->r;
          (pGVar11->fields)._color.g = fVar12;
          (pGVar11->fields)._color.b = fVar13;
          (pGVar11->fields)._color.a = fVar14;
          pGVar7 = (pBVar1->fields)._tickLookAndFeel;
          if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            if (pGVar7->max_length < 4) goto code_?;
            pGVar11 = pGVar7->vector[3];
            if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
              (pGVar11->fields)._color.r = fVar4;
              (pGVar11->fields)._color.g = fVar5;
              (pGVar11->fields)._color.b = fVar6;
              (pGVar11->fields)._color.a = fVar10;
              pCVar2 = ColorEx::ColorEx_FromByteValues
                                  ((Color *)&puStack_3,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              pGVar7 = (pBVar1->fields)._tickLookAndFeel;
              fVar4 = pCVar2->r;
              fVar5 = pCVar2->g;
              fVar6 = pCVar2->b;
              fVar10 = pCVar2->a;
              if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                if (pGVar7->max_length < 2) goto code_?;
                pGVar11 = pGVar7->vector[1];
                fVar12 = pCVar2->g;
                fVar13 = pCVar2->b;
                fVar14 = pCVar2->a;
                if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                  (pGVar11->fields)._color.r = pCVar2->r;
                  (pGVar11->fields)._color.g = fVar12;
                  (pGVar11->fields)._color.b = fVar13;
                  (pGVar11->fields)._color.a = fVar14;
                  pGVar7 = (pBVar1->fields)._tickLookAndFeel;
                  if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                    if (pGVar7->max_length < 5) goto code_?;
                    pGVar11 = pGVar7->vector[4];
                    if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar11->fields)._color.r = fVar4;
                      (pGVar11->fields)._color.g = fVar5;
                      (pGVar11->fields)._color.b = fVar6;
                      (pGVar11->fields)._color.a = fVar10;
                      pCVar2 = ColorEx::ColorEx_FromByteValues
                                          ((Color *)&puStack_3,0x99,0xe8,0x90,0xff,
                                           (MethodInfo *)0x0);
                      pGVar7 = (pBVar1->fields)._tickLookAndFeel;
                      fVar4 = pCVar2->r;
                      fVar5 = pCVar2->g;
                      fVar6 = pCVar2->b;
                      fVar10 = pCVar2->a;
                      if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                        if (pGVar7->max_length < 3) goto code_?;
                        pGVar11 = pGVar7->vector[2];
                        fVar12 = pCVar2->g;
                        fVar13 = pCVar2->b;
                        fVar14 = pCVar2->a;
                        if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                          (pGVar11->fields)._color.r = pCVar2->r;
                          (pGVar11->fields)._color.g = fVar12;
                          (pGVar11->fields)._color.b = fVar13;
                          (pGVar11->fields)._color.a = fVar14;
                          pGVar7 = (pBVar1->fields)._tickLookAndFeel;
                          if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                            if (pGVar7->max_length < 6) goto code_?;
                            pGVar11 = pGVar7->vector[5];
                            if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                              (pGVar11->fields)._color.r = fVar4;
                              (pGVar11->fields)._color.g = fVar5;
                              (pGVar11->fields)._color.b = fVar6;
                              (pGVar11->fields)._color.a = fVar10;
                              pCVar2 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                  ((Color *)&puStack_3,(MethodInfo *)0x0);
                              pGVar7 = (pBVar1->fields)._tickLookAndFeel;
                              uVar15 = 0;
                              fVar4 = pCVar2->r;
                              fVar5 = pCVar2->g;
                              fVar6 = pCVar2->b;
                              fVar10 = pCVar2->a;
                              if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                                ppGVar16 = pGVar7->vector;
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
    pGVar7 = (pBVar1->fields)._tickLookAndFeel;
    pGVar11 = (GizmoCap2DLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar11,(MethodInfo *)0x0);
    if (pGVar7 == (GizmoCap2DLookAndFeel__Array *)0x0) break;
    if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
      this = (BoxColliderGizmo3DLookAndFeel *)(pGVar7->klass->_0).element_class;
      iVar17 = func_?();
      if (iVar17 == 0) goto code_?;
    }
    if ((BoxColliderGizmo3DLookAndFeel *)pGVar7->max_length <= this) goto code_?;
    pGVar7->vector[(int)this] = pGVar11;
    func_?();
    puVar9 = (undefined1 *)((int)&this->klass + 1);
    this = (BoxColliderGizmo3DLookAndFeel *)TypeInfo__RTG__GizmoCap2DLookAndFeel;
    pGVar7 = (pBVar1->fields)._tickLookAndFeel;
  }
  goto code_?;
code_?:
  if ((int)pGVar7->max_length <= (int)uVar15) goto code_?;
  if (pGVar7->max_length <= uVar15) goto code_?;
  pGVar11 = *ppGVar16;
  if (pGVar11 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  uVar15 = uVar15 + 1;
  ppGVar16 = ppGVar16 + 1;
  (pGVar11->fields)._hoveredColor.r = fVar4;
  (pGVar11->fields)._hoveredColor.g = fVar5;
  (pGVar11->fields)._hoveredColor.b = fVar6;
  (pGVar11->fields)._hoveredColor.a = fVar10;
  goto code_?;
code_?:
  func_?();
  goto code_?;
code_?:
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  pCVar2 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&puStack_3,color,0.0,(MethodInfo *)0x0);
  pGVar7 = (pBVar1->fields)._tickLookAndFeel;
  uVar15 = 0;
  fVar4 = pCVar2->r;
  fVar5 = pCVar2->g;
  fVar6 = pCVar2->b;
  fVar10 = pCVar2->a;
  if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar16 = pGVar7->vector;
    for (; (int)uVar15 < (int)pGVar7->max_length; uVar15 = uVar15 + 1) {
      if (pGVar7->max_length <= uVar15) goto code_?;
      pGVar11 = *ppGVar16;
      if (pGVar11 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ppGVar16 = ppGVar16 + 1;
      (pGVar11->fields)._borderColor.r = fVar4;
      (pGVar11->fields)._borderColor.g = fVar5;
      (pGVar11->fields)._borderColor.b = fVar6;
      (pGVar11->fields)._borderColor.a = fVar10;
    }
    color_00.g = (float)_UNK_?;
    color_00.r = (float)_UNK_?;
    color_00.b = (float)_UNK_?;
    color_00.a = _UNK_?;
    pCVar2 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&puStack_3,color_00,0.0,(MethodInfo *)0x0);
    pGVar7 = (pBVar1->fields)._tickLookAndFeel;
    uVar15 = 0;
    fVar4 = pCVar2->r;
    fVar5 = pCVar2->g;
    fVar6 = pCVar2->b;
    fVar10 = pCVar2->a;
    if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
      ppGVar16 = pGVar7->vector;
      for (; (int)uVar15 < (int)pGVar7->max_length; uVar15 = uVar15 + 1) {
        if (pGVar7->max_length <= uVar15) goto code_?;
        pGVar11 = *ppGVar16;
        if (pGVar11 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        ppGVar16 = ppGVar16 + 1;
        (pGVar11->fields)._hoveredBorderColor.r = fVar4;
        (pGVar11->fields)._hoveredBorderColor.g = fVar5;
        (pGVar11->fields)._hoveredBorderColor.b = fVar6;
        (pGVar11->fields)._hoveredBorderColor.a = fVar10;
      }
      this = (BoxColliderGizmo3DLookAndFeel *)(pBVar1->fields)._tickLookAndFeel;
      uVar15 = 0;
      if ((GizmoCap2DLookAndFeel__Array *)this != (GizmoCap2DLookAndFeel__Array *)0x0) {
        ppGVar16 = ((GizmoCap2DLookAndFeel__Array *)this)->vector;
        for (; (int)uVar15 < (int)((GizmoCap2DLookAndFeel__Array *)this)->max_length;
            uVar15 = uVar15 + 1) {
          if (((GizmoCap2DLookAndFeel__Array *)this)->max_length <= uVar15) goto code_?;
          if (*ppGVar16 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
          this = (BoxColliderGizmo3DLookAndFeel *)0x0;
          CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                    ((CameraMoveSettings *)*ppGVar16,6.0,(MethodInfo *)0x0);
          ppGVar16 = ppGVar16 + 1;
        }
        this = (BoxColliderGizmo3DLookAndFeel *)(pBVar1->fields)._tickLookAndFeel;
        uVar15 = 0;
        if ((GizmoCap2DLookAndFeel__Array *)this != (GizmoCap2DLookAndFeel__Array *)0x0) {
          ppGVar16 = ((GizmoCap2DLookAndFeel__Array *)this)->vector;
          for (; (int)uVar15 < (int)((GizmoCap2DLookAndFeel__Array *)this)->max_length;
              uVar15 = uVar15 + 1) {
            if (((GizmoCap2DLookAndFeel__Array *)this)->max_length <= uVar15) goto code_?;
            if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar16 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
            goto code_?;
            this = (BoxColliderGizmo3DLookAndFeel *)0x0;
            GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                      ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar16,6.0,(MethodInfo *)0x0);
            ppGVar16 = ppGVar16 + 1;
          }
          pGVar7 = (pBVar1->fields)._tickLookAndFeel;
          uVar15 = 0;
          if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            ppGVar16 = pGVar7->vector;
            for (; (int)uVar15 < (int)pGVar7->max_length; uVar15 = uVar15 + 1) {
              if (pGVar7->max_length <= uVar15) goto code_?;
              if (*ppGVar16 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              ((*ppGVar16)->fields)._circleRadius = 3.0;
              ppGVar16 = ppGVar16 + 1;
            }
            pGVar7 = (pBVar1->fields)._tickLookAndFeel;
            uVar15 = 0;
            if (pGVar7 != (GizmoCap2DLookAndFeel__Array *)0x0) {
              ppGVar16 = pGVar7->vector;
              for (; (int)uVar15 < (int)pGVar7->max_length; uVar15 = uVar15 + 1) {
                if (pGVar7->max_length <= uVar15) goto code_?;
                if (*ppGVar16 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
                ((*ppGVar16)->fields)._capType = 0;
                ppGVar16 = ppGVar16 + 1;
              }
              pCVar2 = ColorEx::ColorEx_FromByteValues
                                  ((Color *)&puStack_3,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
              fVar4 = pCVar2->g;
              fVar5 = pCVar2->b;
              fVar6 = pCVar2->a;
              if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                (pGVar8->fields)._color.r = pCVar2->r;
                (pGVar8->fields)._color.g = fVar4;
                (pGVar8->fields)._color.b = fVar5;
                (pGVar8->fields)._color.a = fVar6;
                pCVar2 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                    ((Color *)&puStack_3,(MethodInfo *)0x0);
                pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
                fVar4 = pCVar2->g;
                fVar5 = pCVar2->b;
                fVar6 = pCVar2->a;
                if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                  (pGVar8->fields)._hoveredColor.r = pCVar2->r;
                  (pGVar8->fields)._hoveredColor.g = fVar4;
                  (pGVar8->fields)._hoveredColor.b = fVar5;
                  (pGVar8->fields)._hoveredColor.a = fVar6;
                  pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
                  if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                    (pGVar8->fields)._fillMode = 0;
                    pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
                    if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                      (pGVar8->fields)._capType = 2;
                      pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
                      (pBVar1->fields)._isMidCapVisible = 1;
                      if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                        GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
                                  (pGVar8,0.7,(MethodInfo *)0x0);
                        pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
                        if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                          GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
                                    (pGVar8,0.7,(MethodInfo *)0x0);
                          pGVar8 = (pBVar1->fields)._midCapLookAndFeel;
                          if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                            GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth
                                      (pGVar8,0.7,(MethodInfo *)0x0);
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

