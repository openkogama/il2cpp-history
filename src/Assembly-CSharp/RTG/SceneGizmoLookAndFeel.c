
/* Vector2 CalculateMaxPrjSwitchLabelRectSize() */

Vector2 Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::
        SceneGizmoLookAndFeel_CalculateMaxPrjSwitchLabelRectSize
                  (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  pTVar1 = SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture(this,(MethodInfo *)0x0);
  if (pTVar1 != (Texture2D *)0x0) {
    iVar2 = (*(code *)(pTVar1->klass->vtable).get_width.method)
                      (pTVar1,(pTVar1->klass->vtable).set_width.methodPtr);
    pTVar1 = SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture(this,(MethodInfo *)0x0);
    if (pTVar1 != (Texture2D *)0x0) {
      iVar3 = (*(code *)(pTVar1->klass->vtable).get_height.method)
                        (pTVar1,(pTVar1->klass->vtable).set_height.methodPtr);
      pTVar1 = SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture(this,(MethodInfo *)0x0);
      if (pTVar1 != (Texture2D *)0x0) {
        iVar4 = (*(code *)(pTVar1->klass->vtable).get_width.method)
                          (pTVar1,(pTVar1->klass->vtable).set_width.methodPtr);
        pTVar1 = SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture(this,(MethodInfo *)0x0);
        if (pTVar1 != (Texture2D *)0x0) {
          iVar5 = (*(code *)(pTVar1->klass->vtable).get_height.method)
                            (pTVar1,(pTVar1->klass->vtable).set_height.methodPtr);
          fVar6 = (float)iVar2;
          if ((float)iVar2 <= (float)iVar4) {
            fVar6 = (float)iVar4;
          }
          fVar7 = (float)iVar3;
          if ((float)iVar3 <= (float)iVar5) {
            fVar7 = (float)iVar5;
          }
          VVar8.y = fVar7;
          VVar8.x = fVar6;
          return VVar8;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  VVar8 = (Vector2)(*pcVar9)();
  return VVar8;
}


/* Void ConnectAxisCapLookAndFeel(GizmoCap3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::
     SceneGizmoLookAndFeel_ConnectAxisCapLookAndFeel
               (SceneGizmoLookAndFeel *this,GizmoCap3D *axisCap,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      pGStack_1 = (GizmoCap3DLookAndFeel *)0x0;
      ppGStack_3 = (GizmoCap3DLookAndFeel **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = pGVar2->vector[axisIndex];
  if (axisCap != (GizmoCap3D *)0x0) {
    (axisCap->fields)._sharedLookAndFeel = pGVar5;
    ppGStack_3 = &(axisCap->fields)._sharedLookAndFeel;
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


/* List`1[System.Enum] GetAllowedAxesCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_GetAllowedAxesCapTypes
          (SceneGizmoLookAndFeel *this,MethodInfo *method)

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
  uStack_1 = 0;
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


/* List`1[System.Enum] GetAllowedMidCapTypes() */

List_1_System_Enum_ *
Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_GetAllowedMidCapTypes
          (SceneGizmoLookAndFeel *this,MethodInfo *method)

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


/* Single GetAxesLabelWorldSize(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_GetAxesLabelWorldSize
                (SceneGizmoLookAndFeel *this,Camera *gizmoCam,Vector3 labelWorldPos,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  }
  fVar1 = fVar1 * _UNK_?;
  fVar2 = TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  fVar1 = CameraEx::CameraEx_ScreenToEstimatedWorldSize
                    (gizmoCam,labelWorldPos,fVar1 * fVar2,(MethodInfo *)0x0);
  return fVar1;
}


/* Color GetAxisCapColor(Int32, AxisSign) */

Color * Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_GetAxisCapColor
                  (Color *__return_storage_ptr__,SceneGizmoLookAndFeel *this,int32_t axisIndex,
                  AxisSign__Enum axisSign,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
  }
  pGVar6 = pGVar2->vector[axisIndex];
  if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar7 = (pGVar6->fields)._color.g;
    fVar8 = (pGVar6->fields)._color.b;
    fVar9 = (pGVar6->fields)._color.a;
    __return_storage_ptr__->r = (pGVar6->fields)._color.r;
    __return_storage_ptr__->g = fVar7;
    __return_storage_ptr__->b = fVar8;
    __return_storage_ptr__->a = fVar9;
    return __return_storage_ptr__;
  }
code_?:
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Boolean IsAxisCapTypeAllowed(GizmoCap3DType) */

bool Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_IsAxisCapTypeAllowed
               (SceneGizmoLookAndFeel *this,GizmoCap3DType__Enum capType,MethodInfo *method)

{
  if (capType == GizmoCap3DType__Enum_Cone) {
    return 1;
  }
  return capType == GizmoCap3DType__Enum_Pyramid;
}


/* Void OnScreenSizeChanged() */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_OnScreenSizeChanged
               (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  fVar2 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  }
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
              (pGVar1,fVar2 * _UNK_? *
                      TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._midCapLookAndFeel;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
      cRam_? = '\x01';
    }
    fVar2 = (this->fields)._screenSize;
    if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
    }
    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
                (pGVar1,fVar2 * _UNK_? *
                        TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize,
                 (MethodInfo *)0x0);
      pGVar1 = (this->fields)._midCapLookAndFeel;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
        cRam_? = '\x01';
      }
      fVar2 = (this->fields)._screenSize;
      if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
      }
      if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
        GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth
                  (pGVar1,fVar2 * _UNK_? *
                          TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize,
                   (MethodInfo *)0x0);
        pGVar1 = (this->fields)._midCapLookAndFeel;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
          cRam_? = '\x01';
        }
        fVar2 = (this->fields)._screenSize;
        if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
        }
        if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
          GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
                    (pGVar1,fVar2 * _UNK_? *
                            TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize,
                     (MethodInfo *)0x0);
          pGVar3 = (this->fields)._axesCapsLookAndFeel;
          uVar4 = 0;
          if (pGVar3 != (GizmoCap3DLookAndFeel__Array *)0x0) {
            ppGVar5 = pGVar3->vector;
            while( true ) {
              if ((int)pGVar3->max_length <= (int)uVar4) {
                return;
              }
              if (pGVar3->max_length <= uVar4) break;
              pGVar1 = *ppGVar5;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
                cRam_? = '\x01';
              }
              fVar6 = GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultPyramidHeight
                                ((MethodInfo *)0x0);
              fVar2 = (this->fields)._screenSize;
              if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeHeight
                        (pGVar1,fVar2 * fVar6 *
                                TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->
                                _invBaseScreenSize,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
                cRam_? = '\x01';
              }
              fVar6 = GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultConeRadius
                                ((MethodInfo *)0x0);
              fVar2 = (this->fields)._screenSize;
              if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
              }
              pGVar3 = (GizmoCap3DLookAndFeel__Array *)0x0;
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_ConeRadius
                        (pGVar1,fVar2 * fVar6 *
                                TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->
                                _invBaseScreenSize,(MethodInfo *)0x0);
              uVar4 = uVar4 + 1;
              ppGVar5 = ppGVar5 + 1;
            }
            func_?();
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetAxisCapColor(Color, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_SetAxisCapColor
               (SceneGizmoLookAndFeel *this,Color color,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = pGVar2->vector[axisIndex];
  if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar5->fields)._color.r = color.r;
    (pGVar5->fields)._color.g = color.g;
    (pGVar5->fields)._color.b = color.b;
    (pGVar5->fields)._color.a = color.a;
    return;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisCapShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_SetAxisCapShadeMode
               (SceneGizmoLookAndFeel *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._shadeMode = shadeMode;
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


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_SetHoveredColor
               (SceneGizmoLookAndFeel *this,Color hoveredColor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._hoveredColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredColor.a = hoveredColor.a;
    }
    pGVar4 = (this->fields)._midCapLookAndFeel;
    if (pGVar4 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar4->fields)._hoveredColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredColor.a = hoveredColor.a;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SceneGizmoLookAndFeel() */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_baseScreenSize = 90.0;
  TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize =
       fVar1 / TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_baseScreenSize;
  return;
}


/* SceneGizmoLookAndFeel() */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel__ctor
               (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._midCapLookAndFeel = pGVar1;
  func_?(&(this->fields)._midCapLookAndFeel,pGVar1);
  pGVar2 = (GizmoCap3DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel,6);
  (this->fields)._axesCapsLookAndFeel = pGVar2;
  func_?(&(this->fields)._axesCapsLookAndFeel,pGVar2);
  (this->fields)._screenCorner = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._screenOffset.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  fVar4 = _UNK_?;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  (this->fields)._screenOffset.y = fVar3;
  (this->fields)._screenSize = 90.0;
  (this->fields)._axesLabelTint.r = fVar7;
  (this->fields)._axesLabelTint.g = fVar6;
  (this->fields)._axesLabelTint.b = fVar5;
  (this->fields)._axesLabelTint.a = fVar4;
  color.g = _UNK_?;
  color.r = _UNK_?;
  color.b = _UNK_?;
  color.a = _UNK_?;
  pCVar8 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&stack0xffffffec,color,0.7,(MethodInfo *)0x0);
  fVar3 = pCVar8->r;
  fVar7 = pCVar8->g;
  fVar6 = pCVar8->b;
  fVar5 = pCVar8->a;
  (this->fields)._isCamPrjSwitchLabelVisible = 1;
  (this->fields)._camPrjSwitchLabelTint.r = fVar3;
  (this->fields)._camPrjSwitchLabelTint.g = fVar7;
  (this->fields)._camPrjSwitchLabelTint.b = fVar6;
  (this->fields)._camPrjSwitchLabelTint.a = fVar5;
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  puVar9 = (undefined1 *)0x0;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  while (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar2->max_length <= (int)puVar9) {
      pCVar8 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      pGVar1 = (this_00->fields)._midCapLookAndFeel;
      fVar3 = pCVar8->g;
      fVar7 = pCVar8->b;
      fVar6 = pCVar8->a;
      if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
        (pGVar1->fields)._color.r = pCVar8->r;
        (pGVar1->fields)._color.g = fVar3;
        (pGVar1->fields)._color.b = fVar7;
        (pGVar1->fields)._color.a = fVar6;
        pGVar1 = (this_00->fields)._midCapLookAndFeel;
        if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
          (pGVar1->fields)._capType = 2;
          pCVar8 = RTSystemValues::RTSystemValues_get_XAxisColor
                             ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
          pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
          if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            pGVar1 = pGVar2->vector[0];
            fVar3 = pCVar8->g;
            fVar7 = pCVar8->b;
            fVar6 = pCVar8->a;
            if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
              (pGVar1->fields)._color.r = pCVar8->r;
              (pGVar1->fields)._color.g = fVar3;
              (pGVar1->fields)._color.b = fVar7;
              (pGVar1->fields)._color.a = fVar6;
              pCVar8 = RTSystemValues::RTSystemValues_get_YAxisColor
                                 ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
              pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
              if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                if (pGVar2->max_length < 2) goto code_?;
                pGVar1 = pGVar2->vector[1];
                fVar3 = pCVar8->g;
                fVar7 = pCVar8->b;
                fVar6 = pCVar8->a;
                if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                  (pGVar1->fields)._color.r = pCVar8->r;
                  (pGVar1->fields)._color.g = fVar3;
                  (pGVar1->fields)._color.b = fVar7;
                  (pGVar1->fields)._color.a = fVar6;
                  pCVar8 = RTSystemValues::RTSystemValues_get_ZAxisColor
                                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                  pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
                  if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                    if (pGVar2->max_length < 3) goto code_?;
                    pGVar1 = pGVar2->vector[2];
                    fVar3 = pCVar8->g;
                    fVar7 = pCVar8->b;
                    fVar6 = pCVar8->a;
                    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                      (pGVar1->fields)._color.r = pCVar8->r;
                      (pGVar1->fields)._color.g = fVar3;
                      (pGVar1->fields)._color.b = fVar7;
                      (pGVar1->fields)._color.a = fVar6;
                      pCVar8 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                      pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
                      if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                        if (pGVar2->max_length < 4) goto code_?;
                        pGVar1 = pGVar2->vector[3];
                        fVar3 = pCVar8->g;
                        fVar7 = pCVar8->b;
                        fVar6 = pCVar8->a;
                        if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                          (pGVar1->fields)._color.r = pCVar8->r;
                          (pGVar1->fields)._color.g = fVar3;
                          (pGVar1->fields)._color.b = fVar7;
                          (pGVar1->fields)._color.a = fVar6;
                          pCVar8 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                                             ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                          pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
                          if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                            if (pGVar2->max_length < 5) goto code_?;
                            pGVar1 = pGVar2->vector[4];
                            fVar3 = pCVar8->g;
                            fVar7 = pCVar8->b;
                            fVar6 = pCVar8->a;
                            if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                              (pGVar1->fields)._color.r = pCVar8->r;
                              (pGVar1->fields)._color.g = fVar3;
                              (pGVar1->fields)._color.b = fVar7;
                              (pGVar1->fields)._color.a = fVar6;
                              pCVar8 = RTSystemValues::RTSystemValues_get_CenterAxisColor
                                                 ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                              pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
                              if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                                if (pGVar2->max_length < 6) goto code_?;
                                pGVar1 = pGVar2->vector[5];
                                fVar3 = pCVar8->g;
                                fVar7 = pCVar8->b;
                                fVar6 = pCVar8->a;
                                if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                                  (pGVar1->fields)._color.r = pCVar8->r;
                                  (pGVar1->fields)._color.g = fVar3;
                                  (pGVar1->fields)._color.b = fVar7;
                                  (pGVar1->fields)._color.a = fVar6;
                                  pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
                                  uVar10 = 0;
                                  if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                                    ppGVar11 = pGVar2->vector;
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
        }
      }
      break;
    }
    pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
    this = (SceneGizmoLookAndFeel *)&UNK_?;
    pGVar1 = (GizmoCap3DLookAndFeel *)func_?();
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoCap3DLookAndFeel__Array *)0x0) break;
    if ((pGVar1 != (GizmoCap3DLookAndFeel *)0x0) &&
       (iVar12 = func_?(), this = (SceneGizmoLookAndFeel *)pGVar1, iVar12 == 0))
    goto code_?;
    if ((SceneGizmoLookAndFeel *)pGVar2->max_length <= this) goto code_?;
    pGVar2->vector[(int)this] = pGVar1;
    func_?();
    puVar9 = (undefined1 *)((int)&this->klass + 1);
    pGVar2 = (this_00->fields)._axesCapsLookAndFeel;
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  if ((int)pGVar2->max_length <= (int)uVar10) {
    SceneGizmoLookAndFeel_OnScreenSizeChanged(this_00,(MethodInfo *)0x0);
    return;
  }
  if (pGVar2->max_length <= uVar10) goto code_?;
  if (*ppGVar11 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  uVar10 = uVar10 + 1;
  ((*ppGVar11)->fields)._capType = 0;
  ppGVar11 = ppGVar11 + 1;
  goto code_?;
code_?:
  func_?();
  goto code_?;
}


/* Color get_AxesLabelTint() */

Color * Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxesLabelTint
                  (Color *__return_storage_ptr__,SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  fVar1 = (this->fields)._axesLabelTint.g;
  fVar2 = (this->fields)._axesLabelTint.b;
  fVar3 = (this->fields)._axesLabelTint.a;
  __return_storage_ptr__->r = (this->fields)._axesLabelTint.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Single get_AxisCamAlignFadeOutDuration() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::
      SceneGizmoLookAndFeel_get_AxisCamAlignFadeOutDuration
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_AxisCamAlignFadeOutThreshold() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::
      SceneGizmoLookAndFeel_get_AxisCamAlignFadeOutThreshold
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_AxisConeHeight() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxisConeHeight
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  pSStack_1 = (SceneGizmoLookAndFeel__Class *)
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultPyramidHeight
                        ((MethodInfo *)0x0);
  fVar2 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    pSStack_1 = TypeInfo__RTG__SceneGizmoLookAndFeel;
    func_?();
  }
  return fVar2 * (float)pSStack_1 *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Single get_AxisConeRadius() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxisConeRadius
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  pSStack_1 = (SceneGizmoLookAndFeel__Class *)
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultConeRadius((MethodInfo *)0x0);
  fVar2 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    pSStack_1 = TypeInfo__RTG__SceneGizmoLookAndFeel;
    func_?();
  }
  return fVar2 * (float)pSStack_1 *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Single get_AxisLabelScreenSize() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxisLabelScreenSize
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  }
  return fVar1 * _UNK_? *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Single get_AxisPyramidDepth() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxisPyramidDepth
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  pSStack_1 = (SceneGizmoLookAndFeel__Class *)
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultPyramidDepth
                        ((MethodInfo *)0x0);
  fVar2 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    pSStack_1 = TypeInfo__RTG__SceneGizmoLookAndFeel;
    func_?();
  }
  return fVar2 * (float)pSStack_1 *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Single get_AxisPyramidHeight() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxisPyramidHeight
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  pSStack_1 = (SceneGizmoLookAndFeel__Class *)
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultPyramidHeight
                        ((MethodInfo *)0x0);
  fVar2 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    pSStack_1 = TypeInfo__RTG__SceneGizmoLookAndFeel;
    func_?();
  }
  return fVar2 * (float)pSStack_1 *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Single get_AxisPyramidWidth() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_AxisPyramidWidth
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  pSStack_1 = (SceneGizmoLookAndFeel__Class *)
              GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_get_DefaultPyramidDepth
                        ((MethodInfo *)0x0);
  fVar2 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    pSStack_1 = TypeInfo__RTG__SceneGizmoLookAndFeel;
    func_?();
  }
  return fVar2 * (float)pSStack_1 *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Texture2D get_CamOrthoModeLabelTexture() */

Texture2D *
Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamOrthoModeLabelTexture
          (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppSStack_1 = &TypeInfo__RTG__Singleton<RTG::TexturePool>;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (TexturePool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
  if (this_00 != (TexturePool *)0x0) {
    pTVar2 = TexturePool::TexturePool_get_CamOrthoMode(this_00,(MethodInfo *)0x0);
    return pTVar2;
  }
  uVar3 = func_?(&ppSStack_1);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pTVar2 = (Texture2D *)(*pcVar4)();
  return pTVar2;
}


/* Texture2D get_CamPerspModeLabelTexture() */

Texture2D *
Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_CamPerspModeLabelTexture
          (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppSStack_1 = &TypeInfo__RTG__Singleton<RTG::TexturePool>;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (TexturePool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
  if (this_00 != (TexturePool *)0x0) {
    pTVar2 = TexturePool::TexturePool_get_CamPerspMode(this_00,(MethodInfo *)0x0);
    return pTVar2;
  }
  uVar3 = func_?(&ppSStack_1);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pTVar2 = (Texture2D *)(*pcVar4)();
  return pTVar2;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_HoveredColor
                  (Color *__return_storage_ptr__,SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesCapsLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
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


/* Single get_MidCapBoxSize() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_MidCapBoxSize
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  }
  return fVar1 * _UNK_? *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Single get_MidCapSphereRadius() */

float Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_get_MidCapSphereRadius
                (SceneGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._screenSize;
  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
  }
  return fVar1 * _UNK_? *
         TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
}


/* Void set_AxesLabelTint(Color) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_set_AxesLabelTint
               (SceneGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._axesLabelTint.r = value.r;
  (this->fields)._axesLabelTint.g = value.g;
  (this->fields)._axesLabelTint.b = value.b;
  (this->fields)._axesLabelTint.a = value.a;
  return;
}


/* Void set_CamPrjSwitchLabelTint(Color) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::
     SceneGizmoLookAndFeel_set_CamPrjSwitchLabelTint
               (SceneGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._camPrjSwitchLabelTint.r = value.r;
  (this->fields)._camPrjSwitchLabelTint.g = value.g;
  (this->fields)._camPrjSwitchLabelTint.b = value.b;
  (this->fields)._camPrjSwitchLabelTint.a = value.a;
  return;
}


/* Void set_ScreenSize(Single) */

void Assembly-CSharp.dll::RTG::SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_set_ScreenSize
               (SceneGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._screenSize = fVar1;
  SceneGizmoLookAndFeel_OnScreenSizeChanged(this,(MethodInfo *)0x0);
  return;
}

