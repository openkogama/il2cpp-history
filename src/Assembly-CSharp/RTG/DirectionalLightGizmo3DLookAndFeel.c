
/* Void ConnectDirSnapTickLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_ConnectDirSnapTickLookAndFeel
               (DirectionalLightGizmo3DLookAndFeel *this,GizmoCap2D *tick,MethodInfo *method)

{
  pGStack_1 = (GizmoCap2DLookAndFeel *)&stack0xfffffffc;
  if (tick != (GizmoCap2D *)0x0) {
    ppGStack_2 = &(tick->fields)._sharedLookAndFeel;
    pGStack_1 = (this->fields)._dirSnapTickLookAndFeel;
    *ppGStack_2 = pGStack_1;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* List`1[System.Enum] GetAllowedTickTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
DirectionalLightGizmo3DLookAndFeel_GetAllowedTickTypes
          (DirectionalLightGizmo3DLookAndFeel *this,MethodInfo *method)

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


/* Void SetDirSnapTickBorderColor(Color) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickBorderColor
               (DirectionalLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._borderColor.r = color.r;
    (pGVar2->fields)._borderColor.g = color.g;
    (pGVar2->fields)._borderColor.b = color.b;
    (pGVar2->fields)._borderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDirSnapTickCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickCircleRadius
               (DirectionalLightGizmo3DLookAndFeel *this,float radius,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._circleRadius = radius;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDirSnapTickColor(Color) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickColor
               (DirectionalLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._color.r = color.r;
    (pGVar2->fields)._color.g = color.g;
    (pGVar2->fields)._color.b = color.b;
    (pGVar2->fields)._color.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDirSnapTickHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickHoveredBorderColor
               (DirectionalLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredBorderColor.r = color.r;
    (pGVar2->fields)._hoveredBorderColor.g = color.g;
    (pGVar2->fields)._hoveredBorderColor.b = color.b;
    (pGVar2->fields)._hoveredBorderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDirSnapTickHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickHoveredColor
               (DirectionalLightGizmo3DLookAndFeel *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredColor.r = color.r;
    (pGVar2->fields)._hoveredColor.g = color.g;
    (pGVar2->fields)._hoveredColor.b = color.b;
    (pGVar2->fields)._hoveredColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetDirSnapTickQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickQuadHeight
               (DirectionalLightGizmo3DLookAndFeel *this,float height,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._dirSnapTickLookAndFeel;
  if (this_00 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
              (this_00,height,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDirSnapTickQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickQuadWidth
               (DirectionalLightGizmo3DLookAndFeel *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._dirSnapTickLookAndFeel;
  if (this_00 != (GizmoCap2DLookAndFeel *)0x0) {
    CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
              ((CameraMoveSettings *)this_00,width,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDirSnapTickType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetDirSnapTickType
               (DirectionalLightGizmo3DLookAndFeel *this,GizmoCap2DType__Enum tickType,
               MethodInfo *method)

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


/* Void SetLightRayLength(Single) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetLightRayLength
               (DirectionalLightGizmo3DLookAndFeel *this,float length,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= length) {
    fVar1 = length;
  }
  (this->fields)._lightRayLength = fVar1;
  return;
}


/* Void SetNumLightRays(Int32) */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel_SetNumLightRays
               (DirectionalLightGizmo3DLookAndFeel *this,int32_t numLightRays,MethodInfo *method)

{
  iVar1 = 3;
  if (2 < numLightRays) {
    iVar1 = numLightRays;
  }
  (this->fields)._numLightRays = iVar1;
  return;
}


/* DirectionalLightGizmo3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
     DirectionalLightGizmo3DLookAndFeel__ctor
               (DirectionalLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  pDVar2 = &this->fields;
  pDVar2->_dirSnapTickLookAndFeel = pGVar1;
  func_?(pDVar2,pGVar1);
  pCVar3 = ColorEx::ColorEx_FromByteValues(&CStack_4,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  fVar5 = pCVar3->g;
  fVar6 = pCVar3->b;
  fVar7 = pCVar3->a;
  (this->fields)._lightRaysColor.r = pCVar3->r;
  (this->fields)._lightRaysColor.g = fVar5;
  (this->fields)._lightRaysColor.b = fVar6;
  (this->fields)._lightRaysColor.a = fVar7;
  pCVar3 = ColorEx::ColorEx_FromByteValues(&CStack_4,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  fVar5 = pCVar3->r;
  fVar6 = pCVar3->g;
  fVar7 = pCVar3->b;
  fVar8 = pCVar3->a;
  (this->fields)._sourceCircleRadius = 2.0;
  (this->fields)._numLightRays = 8;
  (this->fields)._sourceCircleBorderColor.r = fVar5;
  (this->fields)._sourceCircleBorderColor.g = fVar6;
  (this->fields)._sourceCircleBorderColor.b = fVar7;
  (this->fields)._sourceCircleBorderColor.a = fVar8;
  (this->fields)._lightRayLength = 10.0;
  fVar7 = _UNK_?;
  fVar6 = _UNK_?;
  fVar5 = _UNK_?;
  (this->fields)._dirSnapSegmentColor.r = _UNK_?;
  (this->fields)._dirSnapSegmentColor.g = fVar5;
  (this->fields)._dirSnapSegmentColor.b = fVar6;
  (this->fields)._dirSnapSegmentColor.a = fVar7;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_9);
  pCVar3 = ColorEx::ColorEx_FromByteValues(&CStack_4,0xd2,0xd2,0x8a,0xff,(MethodInfo *)0x0);
  pGVar1 = pDVar2->_dirSnapTickLookAndFeel;
  fVar5 = pCVar3->g;
  fVar6 = pCVar3->b;
  fVar7 = pCVar3->a;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar1->fields)._color.r = pCVar3->r;
    (pGVar1->fields)._color.g = fVar5;
    (pGVar1->fields)._color.b = fVar6;
    (pGVar1->fields)._color.a = fVar7;
    pCVar3 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_4,(MethodInfo *)0x0);
    fVar8 = _UNK_?;
    uVar10 = _UNK_?;
    uVar11 = _UNK_?;
    uVar12 = _UNK_?;
    pGVar1 = pDVar2->_dirSnapTickLookAndFeel;
    fVar5 = pCVar3->g;
    fVar6 = pCVar3->b;
    fVar7 = pCVar3->a;
    if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
      (pGVar1->fields)._hoveredColor.r = pCVar3->r;
      (pGVar1->fields)._hoveredColor.g = fVar5;
      (pGVar1->fields)._hoveredColor.b = fVar6;
      (pGVar1->fields)._hoveredColor.a = fVar7;
      color.g = (float)uVar11;
      color.r = (float)uVar12;
      color.b = (float)uVar10;
      color.a = fVar8;
      pCVar3 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_4,color,0.0,(MethodInfo *)0x0);
      pGVar1 = pDVar2->_dirSnapTickLookAndFeel;
      fVar5 = pCVar3->g;
      fVar6 = pCVar3->b;
      fVar7 = pCVar3->a;
      if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
        (pGVar1->fields)._borderColor.r = pCVar3->r;
        (pGVar1->fields)._borderColor.g = fVar5;
        (pGVar1->fields)._borderColor.b = fVar6;
        (pGVar1->fields)._borderColor.a = fVar7;
        color_00.g = (float)_UNK_?;
        color_00.r = (float)_UNK_?;
        color_00.b = (float)_UNK_?;
        color_00.a = _UNK_?;
        pCVar3 = ColorEx::ColorEx_KeepAllButAlpha(&CStack_4,color_00,0.0,(MethodInfo *)0x0);
        pGVar1 = pDVar2->_dirSnapTickLookAndFeel;
        fVar5 = pCVar3->g;
        fVar6 = pCVar3->b;
        fVar7 = pCVar3->a;
        if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
          (pGVar1->fields)._hoveredBorderColor.r = pCVar3->r;
          (pGVar1->fields)._hoveredBorderColor.g = fVar5;
          (pGVar1->fields)._hoveredBorderColor.b = fVar6;
          (pGVar1->fields)._hoveredBorderColor.a = fVar7;
          if (pDVar2->_dirSnapTickLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
            CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                      ((CameraMoveSettings *)pDVar2->_dirSnapTickLookAndFeel,6.0,(MethodInfo *)0x0);
            if ((GizmoPlaneSlider3DLookAndFeel *)pDVar2->_dirSnapTickLookAndFeel !=
                (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                        ((GizmoPlaneSlider3DLookAndFeel *)pDVar2->_dirSnapTickLookAndFeel,6.0,
                         (MethodInfo *)0x0);
              if (pDVar2->_dirSnapTickLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
                (pDVar2->_dirSnapTickLookAndFeel->fields)._circleRadius = 3.0;
                if (pDVar2->_dirSnapTickLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
                  (pDVar2->_dirSnapTickLookAndFeel->fields)._capType = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Single get_DefaultLightRayLength() */

float Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
      DirectionalLightGizmo3DLookAndFeel_get_DefaultLightRayLength(MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_DefaultSourceCircleRadius() */

float Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
      DirectionalLightGizmo3DLookAndFeel_get_DefaultSourceCircleRadius(MethodInfo *method)

{
  return _UNK_?;
}


/* Color get_DirSnapTickBorderColor() */

Color * Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
        DirectionalLightGizmo3DLookAndFeel_get_DirSnapTickBorderColor
                  (Color *__return_storage_ptr__,DirectionalLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._borderColor.g;
    fVar4 = (pGVar2->fields)._borderColor.b;
    fVar5 = (pGVar2->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._borderColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_DirSnapTickCircleRadius() */

float Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
      DirectionalLightGizmo3DLookAndFeel_get_DirSnapTickCircleRadius
                (DirectionalLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._circleRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_DirSnapTickHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
        DirectionalLightGizmo3DLookAndFeel_get_DirSnapTickHoveredBorderColor
                  (Color *__return_storage_ptr__,DirectionalLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredBorderColor.g;
    fVar4 = (pGVar2->fields)._hoveredBorderColor.b;
    fVar5 = (pGVar2->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredBorderColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Color get_DirSnapTickHoveredColor() */

Color * Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
        DirectionalLightGizmo3DLookAndFeel_get_DirSnapTickHoveredColor
                  (Color *__return_storage_ptr__,DirectionalLightGizmo3DLookAndFeel *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredColor.g;
    fVar4 = (pGVar2->fields)._hoveredColor.b;
    fVar5 = (pGVar2->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_DirSnapTickQuadHeight() */

float Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
      DirectionalLightGizmo3DLookAndFeel_get_DirSnapTickQuadHeight
                (DirectionalLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._quadHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_DirSnapTickQuadWidth() */

float Assembly-CSharp.dll::RTG::DirectionalLightGizmo3DLookAndFeel::
      DirectionalLightGizmo3DLookAndFeel_get_DirSnapTickQuadWidth
                (DirectionalLightGizmo3DLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dirSnapTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._quadWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}

