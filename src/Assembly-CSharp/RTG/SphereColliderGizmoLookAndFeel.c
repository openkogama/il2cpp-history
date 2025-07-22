
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
  (this->fields)._tickLookAndFeel = pGVar6;
  func_?(&(this->fields)._tickLookAndFeel,pGVar6);
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
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_7);
  uVar8 = 0;
  pGVar6 = (this->fields)._tickLookAndFeel;
  while (pGVar6 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar6->max_length <= (int)uVar8) {
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
                                 (&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
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
                                         (&CStack_2,0x99,0xe8,0x90,0xff,(MethodInfo *)0x0);
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
    this = (SphereColliderGizmoLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor
              ((GizmoCap2DLookAndFeel *)this,(MethodInfo *)0x0);
    if (fVar3 == 0.0) break;
    if (((GizmoCap2DLookAndFeel *)this != (GizmoCap2DLookAndFeel *)0x0) &&
       (iVar11 = func_?(), iVar11 == 0)) goto code_?;
    if (*(uint *)((int)fVar3 + 0xc) <= uVar8) goto code_?;
    *(SphereColliderGizmoLookAndFeel **)((int)fVar3 + 0x10 + uVar8 * 4) = this;
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

