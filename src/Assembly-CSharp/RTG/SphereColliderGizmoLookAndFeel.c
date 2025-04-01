
/* List`1[System.Enum] GetAllowedTickTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::SphereColliderGizmoLookAndFeel::
SphereColliderGizmoLookAndFeel_GetAllowedTickTypes
          (SphereColliderGizmoLookAndFeel *this,MethodInfo *method)

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


/* SphereColliderGizmoLookAndFeel() */

void Assembly-CSharp.dll::RTG::SphereColliderGizmoLookAndFeel::SphereColliderGizmoLookAndFeel__ctor
               (SphereColliderGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    cRam_? = '\x01';
  }
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._sphereBorderColor.r = pCVar1->r;
  (this->fields)._sphereBorderColor.g = fVar3;
  (this->fields)._sphereBorderColor.b = fVar4;
  (this->fields)._sphereBorderColor.a = fVar5;
  pGVar6 = (GizmoCap2DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel,6);
  ppGVar7 = &(this->fields)._tickLookAndFeel;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7,pGVar6);
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
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
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_8);
  uVar9 = 0;
  pGVar6 = *ppGVar7;
  while (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar6->max_length <= (int)uVar9) {
      pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
      fVar3 = pCVar1->g;
      fVar4 = pCVar1->b;
      fVar5 = pCVar1->a;
      (((GizmoCap2DLookAndFeel *)this)->fields)._fillMode = (int32_t)pCVar1->r;
      (((GizmoCap2DLookAndFeel *)this)->fields)._capType = (int32_t)fVar3;
      (((GizmoCap2DLookAndFeel *)this)->fields)._scale = fVar4;
      (((GizmoCap2DLookAndFeel *)this)->fields)._circleRadius = fVar5;
      pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
      fVar3 = pCVar1->g;
      fVar4 = pCVar1->b;
      fVar5 = pCVar1->a;
      (((GizmoCap2DLookAndFeel *)this)->fields)._quadHeight = pCVar1->r;
      (((GizmoCap2DLookAndFeel *)this)->fields)._arrowBaseRadius = fVar3;
      (((GizmoCap2DLookAndFeel *)this)->fields)._arrowHeight = fVar4;
      (((GizmoCap2DLookAndFeel *)this)->fields)._color.r = fVar5;
      pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
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
              pCVar1 = ColorEx::ColorEx_FromByteValues
                                  (&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
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
                                          (&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
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
                                                  (&CStack_2,(MethodInfo *)0x0);
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
    this = (SphereColliderGizmoLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor
              ((GizmoCap2DLookAndFeel *)this,(MethodInfo *)0x0);
    if (pGVar6 == (GizmoCap2DLookAndFeel__Array *)0x0) break;
    if (((GizmoCap2DLookAndFeel *)this != (GizmoCap2DLookAndFeel *)0x0) &&
       (iVar16 = func_?(), iVar16 == 0)) goto code_?;
    if (pGVar6->max_length <= uVar9) goto code_?;
    pGVar6->vector[uVar9] = (GizmoCap2DLookAndFeel *)this;
    func_?();
    uVar9 = uVar9 + 1;
    ppGVar7 = (GizmoCap2DLookAndFeel__Array **)&(((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth
    ;
    pGVar6 = (GizmoCap2DLookAndFeel__Array *)(((GizmoCap2DLookAndFeel *)this)->fields)._quadWidth;
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
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
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  pCVar1 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_2,color,0.0,(MethodInfo *)0x0);
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
    pCVar1 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_2,color_00,0.0,(MethodInfo *)0x0);
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
        for (; iVar16 = iRam_?, (int)uVar9 < (int)pGVar6->max_length; uVar9 = uVar9 + 1) {
          if (pGVar6->max_length <= uVar9) goto code_?;
          if (*ppGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
          CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                    ((CameraMoveSettings *)*ppGVar15,6.0,(MethodInfo *)0x0);
          ppGVar15 = ppGVar15 + 1;
        }
        uVar9 = 0;
        if (iRam_? != 0) {
          puVar18 = (undefined4 *)(iRam_? + 0x10);
          for (; iVar19 = iRam_?, (int)uVar9 < *(int *)(iVar16 + 0xc); uVar9 = uVar9 + 1) {
            if (*(uint *)(iVar16 + 0xc) <= uVar9) goto code_?;
            if ((GizmoPlaneSlider3DLookAndFeel *)*puVar18 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
            goto code_?;
            GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                      ((GizmoPlaneSlider3DLookAndFeel *)*puVar18,6.0,(MethodInfo *)0x0);
            puVar18 = puVar18 + 1;
          }
          uVar9 = 0;
          if (iRam_? != 0) {
            piVar20 = (int *)(iRam_? + 0x10);
            for (; iVar16 = iRam_?, (int)uVar9 < *(int *)(iVar19 + 0xc); uVar9 = uVar9 + 1)
            {
              if (*(uint *)(iVar19 + 0xc) <= uVar9) goto code_?;
              if (*piVar20 == 0) goto code_?;
              *(undefined4 *)(*piVar20 + 0x14) = 0x40400000;
              piVar20 = piVar20 + 1;
            }
            uVar9 = 0;
            if (iRam_? != 0) {
              piVar20 = (int *)(iRam_? + 0x10);
              while( true ) {
                if ((int)*(uint *)(iVar16 + 0xc) <= (int)uVar9) {
                  return;
                }
                if (*(uint *)(iVar16 + 0xc) <= uVar9) break;
                if (*piVar20 == 0) goto code_?;
                uVar9 = uVar9 + 1;
                *(undefined4 *)(*piVar20 + 0xc) = 0;
                piVar20 = piVar20 + 1;
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


/* Color get_DefaultTickColor() */

Color * Assembly-CSharp.dll::RTG::SphereColliderGizmoLookAndFeel::
        SphereColliderGizmoLookAndFeel_get_DefaultTickColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}

