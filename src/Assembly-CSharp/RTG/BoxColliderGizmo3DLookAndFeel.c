
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    cRam_? = '\x01';
  }
  pCVar1 = ColorEx::ColorEx_FromByteValues
                     ((Color *)&puStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._wireColor.r = pCVar1->r;
  (this->fields)._wireColor.g = fVar3;
  (this->fields)._wireColor.b = fVar4;
  (this->fields)._wireColor.a = fVar5;
  pGVar6 = (GizmoCap2DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel,6);
  ppGVar7 = &(this->fields)._tickLookAndFeel;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7,pGVar6);
  pGVar8 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar8,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._midCapLookAndFeel;
  *(GizmoCap3DLookAndFeel **)method_00 = pGVar8;
  func_?(method_00,pGVar8);
  (this->fields)._isMidCapVisible = 1;
  (this->fields)._tickCullAlphaScale = 0.3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  uVar9 = 0;
  pGVar6 = *ppGVar7;
  while (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar6->max_length <= (int)uVar9) {
      pCVar1 = ColorEx::ColorEx_FromByteValues
                         ((Color *)&puStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
      pGVar6 = *ppGVar7;
      fVar3 = pCVar1->r;
      fVar4 = pCVar1->g;
      fVar5 = pCVar1->b;
      fVar10 = pCVar1->a;
      if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        if (pGVar6->max_length == 0) goto code_?;
        pGVar11 = pGVar6->vector[0];
        fVar12 = pCVar1->g;
        fVar13 = pCVar1->b;
        fVar14 = pCVar1->a;
        if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar11->fields)._color.r = pCVar1->r;
          (pGVar11->fields)._color.g = fVar12;
          (pGVar11->fields)._color.b = fVar13;
          (pGVar11->fields)._color.a = fVar14;
          pGVar6 = *ppGVar7;
          if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            if (pGVar6->max_length < 4) goto code_?;
            pGVar11 = pGVar6->vector[3];
            if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
              (pGVar11->fields)._color.r = fVar3;
              (pGVar11->fields)._color.g = fVar4;
              (pGVar11->fields)._color.b = fVar5;
              (pGVar11->fields)._color.a = fVar10;
              this = (BoxColliderGizmo3DLookAndFeel *)&UNK_?;
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                 ((Color *)&puStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              pGVar6 = *ppGVar7;
              fVar3 = pCVar1->r;
              fVar4 = pCVar1->g;
              fVar5 = pCVar1->b;
              fVar10 = pCVar1->a;
              if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                if (pGVar6->max_length < 2) goto code_?;
                pGVar11 = pGVar6->vector[1];
                fVar12 = pCVar1->g;
                fVar13 = pCVar1->b;
                fVar14 = pCVar1->a;
                if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                  (pGVar11->fields)._color.r = pCVar1->r;
                  (pGVar11->fields)._color.g = fVar12;
                  (pGVar11->fields)._color.b = fVar13;
                  (pGVar11->fields)._color.a = fVar14;
                  pGVar6 = *ppGVar7;
                  if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                    if (pGVar6->max_length < 5) goto code_?;
                    pGVar11 = pGVar6->vector[4];
                    if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar11->fields)._color.r = fVar3;
                      (pGVar11->fields)._color.g = fVar4;
                      (pGVar11->fields)._color.b = fVar5;
                      (pGVar11->fields)._color.a = fVar10;
                      pCVar1 = ColorEx::ColorEx_FromByteValues
                                         ((Color *)&puStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0
                                         );
                      pGVar6 = *ppGVar7;
                      fVar3 = pCVar1->r;
                      fVar4 = pCVar1->g;
                      fVar5 = pCVar1->b;
                      fVar10 = pCVar1->a;
                      if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                        if (pGVar6->max_length < 3) goto code_?;
                        pGVar11 = pGVar6->vector[2];
                        fVar12 = pCVar1->g;
                        fVar13 = pCVar1->b;
                        fVar14 = pCVar1->a;
                        if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                          (pGVar11->fields)._color.r = pCVar1->r;
                          (pGVar11->fields)._color.g = fVar12;
                          (pGVar11->fields)._color.b = fVar13;
                          (pGVar11->fields)._color.a = fVar14;
                          pGVar6 = *ppGVar7;
                          if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                            if (pGVar6->max_length < 6) goto code_?;
                            pGVar11 = pGVar6->vector[5];
                            if (pGVar11 != (GizmoCap2DLookAndFeel *)0x0) {
                              (pGVar11->fields)._color.r = fVar3;
                              (pGVar11->fields)._color.g = fVar4;
                              (pGVar11->fields)._color.b = fVar5;
                              (pGVar11->fields)._color.a = fVar10;
                              pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                 ((Color *)&puStack_2,(MethodInfo *)0x0);
                              pGVar6 = *ppGVar7;
                              uVar9 = 0;
                              fVar3 = pCVar1->r;
                              fVar4 = pCVar1->g;
                              fVar5 = pCVar1->b;
                              fVar10 = pCVar1->a;
                              if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                                ppGVar15 = pGVar6->vector;
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
    pGVar6 = *ppGVar7;
    pGVar11 = (GizmoCap2DLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar11,(MethodInfo *)0x0);
    if (pGVar6 == (GizmoCap2DLookAndFeel__Array *)0x0) break;
    if ((pGVar11 != (GizmoCap2DLookAndFeel *)0x0) && (iVar16 = func_?(), iVar16 == 0))
    goto code_?;
    if (pGVar6->max_length <= uVar9) goto code_?;
    pGVar6->vector[uVar9] = pGVar11;
    func_?();
    uVar9 = uVar9 + 1;
    ppGVar7 = (GizmoCap2DLookAndFeel__Array **)&(pGVar11->fields)._quadWidth;
    pGVar6 = *ppGVar7;
  }
  goto code_?;
code_?:
  if ((int)pGVar6->max_length <= (int)uVar9) goto code_?;
  if (pGVar6->max_length <= uVar9) goto code_?;
  pGVar11 = *ppGVar15;
  if (pGVar11 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  uVar9 = uVar9 + 1;
  ppGVar15 = ppGVar15 + 1;
  (pGVar11->fields)._hoveredColor.r = fVar3;
  (pGVar11->fields)._hoveredColor.g = fVar4;
  (pGVar11->fields)._hoveredColor.b = fVar5;
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
  pCVar1 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&puStack_2,color,0.0,(MethodInfo *)0x0);
  pGVar6 = *ppGVar7;
  uVar9 = 0;
  fVar3 = pCVar1->r;
  fVar4 = pCVar1->g;
  fVar5 = pCVar1->b;
  fVar10 = pCVar1->a;
  if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    ppGVar15 = pGVar6->vector;
    for (; (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
      if (pGVar6->max_length <= uVar9) goto code_?;
      pGVar11 = *ppGVar15;
      if (pGVar11 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ppGVar15 = ppGVar15 + 1;
      (pGVar11->fields)._borderColor.r = fVar3;
      (pGVar11->fields)._borderColor.g = fVar4;
      (pGVar11->fields)._borderColor.b = fVar5;
      (pGVar11->fields)._borderColor.a = fVar10;
    }
    color_00.g = (float)_UNK_?;
    color_00.r = (float)_UNK_?;
    color_00.b = (float)_UNK_?;
    color_00.a = _UNK_?;
    pCVar1 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&puStack_2,color_00,0.0,(MethodInfo *)0x0);
    pGVar6 = *ppGVar7;
    uVar9 = 0;
    fVar3 = pCVar1->r;
    fVar4 = pCVar1->g;
    fVar5 = pCVar1->b;
    fVar10 = pCVar1->a;
    if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
      ppGVar15 = pGVar6->vector;
      for (; (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
        if (pGVar6->max_length <= uVar9) goto code_?;
        pGVar11 = *ppGVar15;
        if (pGVar11 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        ppGVar15 = ppGVar15 + 1;
        (pGVar11->fields)._hoveredBorderColor.r = fVar3;
        (pGVar11->fields)._hoveredBorderColor.g = fVar4;
        (pGVar11->fields)._hoveredBorderColor.b = fVar5;
        (pGVar11->fields)._hoveredBorderColor.a = fVar10;
      }
      pGVar6 = *ppGVar7;
      uVar9 = 0;
      if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        ppGVar15 = pGVar6->vector;
        for (; (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
          if (pGVar6->max_length <= uVar9) goto code_?;
          if (*ppGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
          this = (BoxColliderGizmo3DLookAndFeel *)0x0;
          CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                    ((CameraMoveSettings *)*ppGVar15,6.0,(MethodInfo *)0x0);
          ppGVar15 = ppGVar15 + 1;
        }
        uVar9 = 0;
        pGVar6 = (this->fields)._tickLookAndFeel;
        if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
          ppGVar15 = pGVar6->vector;
          for (; (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
            if (pGVar6->max_length <= uVar9) goto code_?;
            if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar15 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
            goto code_?;
            this = (BoxColliderGizmo3DLookAndFeel *)0x0;
            GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                      ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar15,6.0,(MethodInfo *)0x0);
            ppGVar15 = ppGVar15 + 1;
          }
          uVar9 = 0;
          pGVar6 = (this->fields)._tickLookAndFeel;
          if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            ppGVar15 = pGVar6->vector;
            for (; (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
              if (pGVar6->max_length <= uVar9) goto code_?;
              if (*ppGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              ((*ppGVar15)->fields)._circleRadius = 3.0;
              ppGVar15 = ppGVar15 + 1;
            }
            pGVar6 = (this->fields)._tickLookAndFeel;
            uVar9 = 0;
            if (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
              ppGVar15 = pGVar6->vector;
              for (; (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
                if (pGVar6->max_length <= uVar9) goto code_?;
                if (*ppGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
                ((*ppGVar15)->fields)._capType = 0;
                ppGVar15 = ppGVar15 + 1;
              }
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                 ((Color *)&puStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              fVar3 = pCVar1->g;
              fVar4 = pCVar1->b;
              fVar5 = pCVar1->a;
              pGVar8 = (this->fields)._midCapLookAndFeel;
              if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                (pGVar8->fields)._color.r = pCVar1->r;
                (pGVar8->fields)._color.g = fVar3;
                (pGVar8->fields)._color.b = fVar4;
                (pGVar8->fields)._color.a = fVar5;
                pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                   ((Color *)&puStack_2,(MethodInfo *)0x0);
                pGVar8 = (this->fields)._midCapLookAndFeel;
                fVar3 = pCVar1->g;
                fVar4 = pCVar1->b;
                fVar5 = pCVar1->a;
                if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                  (pGVar8->fields)._hoveredColor.r = pCVar1->r;
                  (pGVar8->fields)._hoveredColor.g = fVar3;
                  (pGVar8->fields)._hoveredColor.b = fVar4;
                  (pGVar8->fields)._hoveredColor.a = fVar5;
                  pGVar8 = (this->fields)._midCapLookAndFeel;
                  if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                    (pGVar8->fields)._fillMode = 0;
                    pGVar8 = (this->fields)._midCapLookAndFeel;
                    if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                      (pGVar8->fields)._capType = 2;
                      pGVar8 = (this->fields)._midCapLookAndFeel;
                      (this->fields)._isMidCapVisible = 1;
                      if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                        GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
                                  (pGVar8,0.7,(MethodInfo *)0x0);
                        pGVar8 = (this->fields)._midCapLookAndFeel;
                        if (pGVar8 != (GizmoCap3DLookAndFeel *)0x0) {
                          GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
                                    (pGVar8,0.7,(MethodInfo *)0x0);
                          pGVar8 = (this->fields)._midCapLookAndFeel;
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

