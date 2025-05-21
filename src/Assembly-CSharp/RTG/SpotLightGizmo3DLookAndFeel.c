
/* List`1[System.Enum] GetAllowedTickTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
SpotLightGizmo3DLookAndFeel_GetAllowedTickTypes
          (SpotLightGizmo3DLookAndFeel *this,MethodInfo *method)

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


/* Void SetDirSnapTickType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
     SpotLightGizmo3DLookAndFeel_SetDirSnapTickType
               (SpotLightGizmo3DLookAndFeel *this,GizmoCap2DType__Enum tickType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._capType = tickType;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SpotLightGizmo3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::SpotLightGizmo3DLookAndFeel__ctor
               (SpotLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    cRam_? = '\x01';
  }
  pCVar1 = ColorEx::ColorEx_FromByteValues
                      ((Color *)&stack0xffffffec,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (this->fields)._wireColor.r = pCVar1->r;
  (this->fields)._wireColor.g = fVar2;
  (this->fields)._wireColor.b = fVar3;
  (this->fields)._wireColor.a = fVar4;
  pGVar5 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._tickLookAndFeel = pGVar5;
  func_?(&(this->fields)._tickLookAndFeel,pGVar5);
  pGVar5 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._dirSnapTickLookAndFeel = pGVar5;
  func_?(&(this->fields)._dirSnapTickLookAndFeel,pGVar5);
  fVar4 = _UNK_?;
  fVar3 = _UNK_?;
  fVar2 = _UNK_?;
  (this->fields)._dirSnapSegmentColor.r = _UNK_?;
  (this->fields)._dirSnapSegmentColor.g = fVar2;
  (this->fields)._dirSnapSegmentColor.b = fVar3;
  (this->fields)._dirSnapSegmentColor.a = fVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_6);
  pCVar1 = ColorEx::ColorEx_FromByteValues
                      ((Color *)&stack0xffffffec,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar5->fields)._color.r = pCVar1->r;
    (pGVar5->fields)._color.g = fVar2;
    (pGVar5->fields)._color.b = fVar3;
    (pGVar5->fields)._color.a = fVar4;
    pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar7 = _UNK_?;
    uVar8 = _UNK_?;
    uVar9 = _UNK_?;
    uVar10 = _UNK_?;
    pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
    fVar2 = pCVar1->g;
    fVar3 = pCVar1->b;
    fVar4 = pCVar1->a;
    if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
      (pGVar5->fields)._hoveredColor.r = pCVar1->r;
      (pGVar5->fields)._hoveredColor.g = fVar2;
      (pGVar5->fields)._hoveredColor.b = fVar3;
      (pGVar5->fields)._hoveredColor.a = fVar4;
      color.g = (float)uVar9;
      color.r = (float)uVar10;
      color.b = (float)uVar8;
      color.a = fVar7;
      pCVar1 = ColorEx::ColorEx_KeepAllButAlpha
                          ((Color *)&stack0xffffffec,color,0.0,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
      fVar2 = pCVar1->g;
      fVar3 = pCVar1->b;
      fVar4 = pCVar1->a;
      if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
        (pGVar5->fields)._borderColor.r = pCVar1->r;
        (pGVar5->fields)._borderColor.g = fVar2;
        (pGVar5->fields)._borderColor.b = fVar3;
        (pGVar5->fields)._borderColor.a = fVar4;
        color_00.g = (float)_UNK_?;
        color_00.r = (float)_UNK_?;
        color_00.b = (float)_UNK_?;
        color_00.a = _UNK_?;
        pCVar1 = ColorEx::ColorEx_KeepAllButAlpha
                            ((Color *)&stack0xffffffec,color_00,0.0,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
        fVar2 = pCVar1->g;
        fVar3 = pCVar1->b;
        fVar4 = pCVar1->a;
        if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar5->fields)._hoveredBorderColor.r = pCVar1->r;
          (pGVar5->fields)._hoveredBorderColor.g = fVar2;
          (pGVar5->fields)._hoveredBorderColor.b = fVar3;
          (pGVar5->fields)._hoveredBorderColor.a = fVar4;
          pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
          if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
            CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                      ((CameraMoveSettings *)pGVar5,6.0,(MethodInfo *)0x0);
            pGVar11 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._dirSnapTickLookAndFeel;
            if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                        (pGVar11,6.0,(MethodInfo *)0x0);
              pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
              if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                (pGVar5->fields)._circleRadius = 3.0;
                pGVar5 = (this->fields)._dirSnapTickLookAndFeel;
                if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                  (pGVar5->fields)._capType = 0;
                  pCVar1 = ColorEx::ColorEx_FromByteValues
                                      ((Color *)&stack0xffffffec,0xd2,0xd2,0x8a,0xff,
                                       (MethodInfo *)0x0);
                  pGVar5 = (this->fields)._tickLookAndFeel;
                  fVar2 = pCVar1->g;
                  fVar3 = pCVar1->b;
                  fVar4 = pCVar1->a;
                  if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                    (pGVar5->fields)._color.r = pCVar1->r;
                    (pGVar5->fields)._color.g = fVar2;
                    (pGVar5->fields)._color.b = fVar3;
                    (pGVar5->fields)._color.a = fVar4;
                    pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                    pGVar5 = (this->fields)._tickLookAndFeel;
                    fVar2 = pCVar1->g;
                    fVar3 = pCVar1->b;
                    fVar4 = pCVar1->a;
                    if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                      (pGVar5->fields)._hoveredColor.r = pCVar1->r;
                      (pGVar5->fields)._hoveredColor.g = fVar2;
                      (pGVar5->fields)._hoveredColor.b = fVar3;
                      (pGVar5->fields)._hoveredColor.a = fVar4;
                      color_01.g = (float)_UNK_?;
                      color_01.r = (float)_UNK_?;
                      color_01.b = (float)_UNK_?;
                      color_01.a = _UNK_?;
                      pCVar1 = ColorEx::ColorEx_KeepAllButAlpha
                                          ((Color *)&stack0xffffffec,color_01,0.0,(MethodInfo *)0x0)
                      ;
                      pGVar5 = (this->fields)._tickLookAndFeel;
                      fVar2 = pCVar1->g;
                      fVar3 = pCVar1->b;
                      fVar4 = pCVar1->a;
                      if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                        (pGVar5->fields)._borderColor.r = pCVar1->r;
                        (pGVar5->fields)._borderColor.g = fVar2;
                        (pGVar5->fields)._borderColor.b = fVar3;
                        (pGVar5->fields)._borderColor.a = fVar4;
                        color_02.g = (float)_UNK_?;
                        color_02.r = (float)_UNK_?;
                        color_02.b = (float)_UNK_?;
                        color_02.a = _UNK_?;
                        pCVar1 = ColorEx::ColorEx_KeepAllButAlpha
                                            ((Color *)&stack0xffffffec,color_02,0.0,
                                             (MethodInfo *)0x0);
                        pGVar5 = (this->fields)._tickLookAndFeel;
                        fVar2 = pCVar1->g;
                        fVar3 = pCVar1->b;
                        fVar4 = pCVar1->a;
                        if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                          (pGVar5->fields)._hoveredBorderColor.r = pCVar1->r;
                          (pGVar5->fields)._hoveredBorderColor.g = fVar2;
                          (pGVar5->fields)._hoveredBorderColor.b = fVar3;
                          (pGVar5->fields)._hoveredBorderColor.a = fVar4;
                          pGVar5 = (this->fields)._tickLookAndFeel;
                          if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                            CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                                      ((CameraMoveSettings *)pGVar5,6.0,(MethodInfo *)0x0);
                            pGVar11 = (GizmoPlaneSlider3DLookAndFeel *)
                                     (this->fields)._tickLookAndFeel;
                            if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              GizmoPlaneSlider3DLookAndFeel::
                              GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                                        (pGVar11,6.0,(MethodInfo *)0x0);
                              pGVar5 = (this->fields)._tickLookAndFeel;
                              if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                                (pGVar5->fields)._circleRadius = 3.0;
                                pGVar5 = (this->fields)._tickLookAndFeel;
                                if (pGVar5 != (GizmoCap2DLookAndFeel *)0x0) {
                                  (pGVar5->fields)._capType = 0;
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
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Color get_DefaultDirSnapSegmentColor() */

Color * Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
        SpotLightGizmo3DLookAndFeel_get_DefaultDirSnapSegmentColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  __return_storage_ptr__->r = _UNK_?;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar1;
  return __return_storage_ptr__;
}


/* Single get_DefaultDirSnapTickCircleRadius() */

float Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
      SpotLightGizmo3DLookAndFeel_get_DefaultDirSnapTickCircleRadius(MethodInfo *method)

{
  return _UNK_?;
}


/* Color get_DefaultDirSnapTickColor() */

Color * Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
        SpotLightGizmo3DLookAndFeel_get_DefaultDirSnapTickColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_DefaultDirSnapTickHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
        SpotLightGizmo3DLookAndFeel_get_DefaultDirSnapTickHoveredBorderColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  pCVar1 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_2,color,0.0,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_DefaultDirSnapTickHoveredColor() */

Color * Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
        SpotLightGizmo3DLookAndFeel_get_DefaultDirSnapTickHoveredColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Single get_DefaultDirSnapTickQuadHeight() */

float Assembly-CSharp.dll::RTG::SpotLightGizmo3DLookAndFeel::
      SpotLightGizmo3DLookAndFeel_get_DefaultDirSnapTickQuadHeight(MethodInfo *method)

{
  return _UNK_?;
}

