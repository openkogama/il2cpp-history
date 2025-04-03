
/* List`1[System.Enum] GetAllowedTickTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3DLookAndFeel::
CapsuleColliderGizmo3DLookAndFeel_GetAllowedTickTypes
          (CapsuleColliderGizmo3DLookAndFeel *this,MethodInfo *method)

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


/* CapsuleColliderGizmo3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3DLookAndFeel::
     CapsuleColliderGizmo3DLookAndFeel__ctor
               (CapsuleColliderGizmo3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
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
  ppGVar6 = &(this->fields)._tickLookAndFeel;
  *ppGVar6 = pGVar5;
  method_00 = (MethodInfo *)ppGVar6;
  func_?(ppGVar6,pGVar5);
  (this->fields)._tickCullAlphaScale = 0.3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  uVar7 = 0;
  pGVar5 = *ppGVar6;
  while (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar5->max_length <= (int)uVar7) {
      pCVar1 = ColorEx::ColorEx_FromByteValues
                          ((Color *)&stack0xffffffec,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
      pGVar5 = *ppGVar6;
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
          pGVar5 = *ppGVar6;
          if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
            if (pGVar5->max_length < 4) goto code_?;
            pGVar9 = pGVar5->vector[3];
            if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
              (pGVar9->fields)._color.r = fVar2;
              (pGVar9->fields)._color.g = fVar3;
              (pGVar9->fields)._color.b = fVar4;
              (pGVar9->fields)._color.a = fVar8;
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                  ((Color *)&stack0xffffffec,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
              pGVar5 = *ppGVar6;
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
                  pGVar5 = *ppGVar6;
                  if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                    if (pGVar5->max_length < 5) goto code_?;
                    pGVar9 = pGVar5->vector[4];
                    if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar9->fields)._color.r = fVar2;
                      (pGVar9->fields)._color.g = fVar3;
                      (pGVar9->fields)._color.b = fVar4;
                      (pGVar9->fields)._color.a = fVar8;
                      pCVar1 = ColorEx::ColorEx_FromByteValues
                                          ((Color *)&stack0xffffffec,0x99,0xe8,0x90,0xff,
                                           (MethodInfo *)0x0);
                      pGVar5 = *ppGVar6;
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
                          pGVar5 = *ppGVar6;
                          if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
                            if (pGVar5->max_length < 6) goto code_?;
                            pGVar9 = pGVar5->vector[5];
                            if (pGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                              (pGVar9->fields)._color.r = fVar2;
                              (pGVar9->fields)._color.g = fVar3;
                              (pGVar9->fields)._color.b = fVar4;
                              (pGVar9->fields)._color.a = fVar8;
                              pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                                  ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                              pGVar5 = *ppGVar6;
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
    pGVar5 = *ppGVar6;
    pGVar9 = (GizmoCap2DLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar9,(MethodInfo *)0x0);
    if (pGVar5 == (GizmoCap2DLookAndFeel__Array *)0x0) break;
    if ((pGVar9 != (GizmoCap2DLookAndFeel *)0x0) && (iVar14 = func_?(), iVar14 == 0))
    goto code_?;
    if (pGVar5->max_length <= uVar7) goto code_?;
    pGVar5->vector[uVar7] = pGVar9;
    func_?();
    uVar7 = uVar7 + 1;
    pGVar5 = *ppGVar6;
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
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  pCVar1 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&stack0xffffffec,color,0.0,(MethodInfo *)0x0);
  pGVar5 = *ppGVar6;
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
                        ((Color *)&stack0xffffffec,color_00,0.0,(MethodInfo *)0x0);
    pGVar5 = *ppGVar6;
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
      pGVar5 = *ppGVar6;
      uVar7 = 0;
      if (pGVar5 != (GizmoCap2DLookAndFeel__Array *)0x0) {
        ppGVar13 = pGVar5->vector;
        for (; iVar14 = iRam_?, (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
          if (pGVar5->max_length <= uVar7) goto code_?;
          if (*ppGVar13 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
          CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                    ((CameraMoveSettings *)*ppGVar13,6.0,(MethodInfo *)0x0);
          ppGVar13 = ppGVar13 + 1;
        }
        uVar7 = 0;
        if (iRam_? != 0) {
          puVar16 = (undefined4 *)(iRam_? + 0x10);
          for (; iVar17 = iRam_?, (int)uVar7 < *(int *)(iVar14 + 0xc); uVar7 = uVar7 + 1) {
            if (*(uint *)(iVar14 + 0xc) <= uVar7) goto code_?;
            if ((GizmoPlaneSlider3DLookAndFeel *)*puVar16 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
            goto code_?;
            GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                      ((GizmoPlaneSlider3DLookAndFeel *)*puVar16,6.0,(MethodInfo *)0x0);
            puVar16 = puVar16 + 1;
          }
          uVar7 = 0;
          if (iRam_? != 0) {
            piVar18 = (int *)(iRam_? + 0x10);
            for (; iVar14 = iRam_?, (int)uVar7 < *(int *)(iVar17 + 0xc); uVar7 = uVar7 + 1)
            {
              if (*(uint *)(iVar17 + 0xc) <= uVar7) goto code_?;
              if (*piVar18 == 0) goto code_?;
              *(undefined4 *)(*piVar18 + 0x14) = 0x40400000;
              piVar18 = piVar18 + 1;
            }
            uVar7 = 0;
            if (iRam_? != 0) {
              piVar18 = (int *)(iRam_? + 0x10);
              while( true ) {
                if ((int)*(uint *)(iVar14 + 0xc) <= (int)uVar7) {
                  return;
                }
                if (*(uint *)(iVar14 + 0xc) <= uVar7) break;
                if (*piVar18 == 0) goto code_?;
                uVar7 = uVar7 + 1;
                *(undefined4 *)(*piVar18 + 0xc) = 0;
                piVar18 = piVar18 + 1;
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

