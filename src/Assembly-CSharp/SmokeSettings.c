
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SmokeSettings::SmokeSettings_Initialize
               (SmokeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  id = woID;
  pSVar1 = this;
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Smoke,(MethodInfo *)0x0);
  if (id == -1) {
    this_04 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Single);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pCVar2,__field_6FB784F76A1ECD7AC5C37C2137ADEDDD4F8099DA_Field,
               (MethodInfo *)0x0);
    if (this_04 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_04,StringLiteral_color,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this = (SmokeSettings *)0x41200000;
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Single,&this);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_04,StringLiteral_length,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_03 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,id,(MethodInfo *)0x0);
    if (this_03 == (PrefabPool *)0x0) goto code_?;
    this_04 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
  }
  if (this_04 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_04,StringLiteral_color,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 == 0) {
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Single,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pCVar2,__field_74501839227B264CB4BF46A3B9FB614F0CF013FC_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_04,StringLiteral_color,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_04,StringLiteral_length,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 == 0) {
    root = (GameObject *)0x40c00000;
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Single,&root);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_04,StringLiteral_length,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_04,StringLiteral_wind,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 == 0) {
    root = (GameObject *)0x0;
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Single,&root);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_04,StringLiteral_wind,pCVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_04,(Type *)StringLiteral_color,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  root = (GameObject *)TypeInfo__System__Single;
  if (pPVar4 == (Pool *)0x0) {
    pSVar5 = (Single__Array *)0x0;
code_?:
    pSVar6 = (pSVar1->fields).colorR;
    (pSVar1->fields).color = pSVar5;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_colorR,pSVar5->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar5 = (pSVar1->fields).color;
    pSVar6 = (pSVar1->fields).colorG;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 2) goto code_?;
    if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_colorG,pSVar5->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar5 = (pSVar1->fields).color;
    pSVar6 = (pSVar1->fields).colorB;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 3) goto code_?;
    if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
    root = (GameObject *)0x0;
    woID = 0x3f800000;
    this = (SmokeSettings *)0x0;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_colorB,pSVar5->vector[2],0.0,1.0,(MethodInfo *)0x0);
    pSVar5 = (pSVar1->fields).color;
    this_01 = (MethodInfo *)(pSVar1->fields).alpha;
    if (pSVar5 == (Single__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 4) goto code_?;
    if (this_01 == (MethodInfo *)0x0) goto code_?;
    root = (GameObject *)&UNK_?;
    method = this_01;
    SettingsSlider::SettingsSlider_Initialize
              ((SettingsSlider *)this_01,StringLiteral_alpha,pSVar5->vector[3],0.1,1.0,
               (MethodInfo *)0x0);
    pSVar6 = (pSVar1->fields).range;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_04,(Type *)StringLiteral_length,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar7 = CONCAT44(TypeInfo__System__Single,pPVar4);
    if ((pSVar6 == (SettingsSlider *)0x0) || (pPVar4 == (Pool *)0x0)) goto code_?;
    if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?();
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_length,*pfVar8,1.0,12.0,(MethodInfo *)0x0);
      pSVar6 = (pSVar1->fields).wind;
      pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_04,(Type *)StringLiteral_wind,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar7 = CONCAT44(TypeInfo__System__Single,pPVar4);
      if ((pSVar6 == (SettingsSlider *)0x0) || (pPVar4 == (Pool *)0x0)) goto code_?;
      if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar8 = (float *)func_?(pPVar4);
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_wind,*pfVar8,0.0,0.6,(MethodInfo *)0x0);
      pSVar5 = (pSVar1->fields).color;
      pIVar9 = (pSVar1->fields).preview;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      uVar10 = pSVar5->max_length;
      if (uVar10 == 0) goto code_?;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      if (uVar10 < 2) goto code_?;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      if (uVar10 < 3) goto code_?;
      if (pSVar5 == (Single__Array *)0x0) goto code_?;
      uVar11 = 0;
      if (3 < uVar10) {
        uVar12 = 0;
        uVar11 = 0;
        uVar13 = 0;
        uVar14 = 0;
        func_?(&stack0xffffffec,pSVar5->vector[0],pSVar5->vector[1],pSVar5->vector[2],
                        pSVar5->vector[3]);
        if (pIVar9 != (Image *)0x0) {
          (*(code *)(pIVar9->klass->vtable).set_color.method)
                    (pIVar9,uVar12,uVar11,uVar13,uVar14,
                     (pIVar9->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pSVar5 = (Single__Array *)func_?(pPVar4,TypeInfo__System__Single);
    if (pSVar5 != (Single__Array *)0x0) goto code_?;
    func_?(pPVar4,root);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar11 = 0;
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,uVar11);
    uVar7 = func_?(uVar12);
  }
code_?:
  func_?(uVar7);
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SmokeSettings::SmokeSettings_OnSettingChanged
               (SmokeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_alpha,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pSVar2 = (this->fields).settingsBase;
          if (pSVar2 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key,value,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Setting_changed_,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pSVar3 = (this->fields).color;
          if (pSVar3 != (Single__Array *)0x0) {
            pfVar4 = (float *)func_?();
            if (pSVar3->max_length < 4) {
              uVar5 = func_?(0,0);
              func_?(uVar5);
            }
            else {
              pSVar3->vector[3] = *pfVar4;
              pSVar2 = (this->fields).settingsBase;
              if (pSVar2 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (pSVar2,StringLiteral_color,(Object *)(this->fields).color,
                           (MethodInfo *)0x0);
                pIVar6 = (this->fields).preview;
                if ((this->fields).color != (Single__Array *)0x0) {
                  fVar7 = (float10)func_?();
                  fVar8 = (float)fVar7;
                  if ((this->fields).color != (Single__Array *)0x0) {
                    fVar7 = (float10)func_?();
                    fVar9 = (float)fVar7;
                    if ((this->fields).color != (Single__Array *)0x0) {
                      fVar7 = (float10)func_?();
                      fVar10 = (float)fVar7;
                      if ((this->fields).color != (Single__Array *)0x0) {
                        fVar7 = (float10)func_?();
                        uVar5 = 0;
                        uVar11 = 0;
                        uVar12 = 0;
                        func_?(&stack0xffffffe0,fVar8,fVar9,fVar10,(float)fVar7,0);
                        if (pIVar6 != (Image *)0x0) {
                          func_?(0x17,pIVar6,uVar5,uVar11,uVar12);
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
code_?:
        func_?();
      }
      else {
        pSVar3 = (this->fields).color;
        if (pSVar3 == (Single__Array *)0x0) goto code_?;
        pfVar4 = (float *)func_?();
        if (2 < pSVar3->max_length) {
          pSVar3->vector[2] = *pfVar4;
          goto code_?;
        }
      }
      uVar5 = func_?(0);
      func_?(uVar5);
      goto code_?;
    }
    pSVar3 = (this->fields).color;
    if ((pSVar3 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar4 = (float *)func_?();
    if (1 < pSVar3->max_length) {
      pSVar3->vector[1] = *pfVar4;
code_?:
      pSVar2 = (this->fields).settingsBase;
      if (pSVar2 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged
                (pSVar2,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
      pSVar3 = (this->fields).color;
      pIVar6 = (this->fields).preview;
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      uVar13 = pSVar3->max_length;
      if (uVar13 == 0) goto code_?;
      fVar8 = pSVar3->vector[0];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (uVar13 < 2) goto code_?;
      fVar9 = pSVar3->vector[1];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (uVar13 < 3) goto code_?;
      fVar10 = pSVar3->vector[2];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (3 < uVar13) goto code_?;
      goto code_?;
    }
  }
  else {
    pSVar3 = (this->fields).color;
    if ((pSVar3 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar4 = (float *)func_?();
    if (pSVar3->max_length == 0) goto code_?;
    pSVar3->vector[0] = *pfVar4;
    pSVar2 = (this->fields).settingsBase;
    if (pSVar2 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_OnSettingChanged
              (pSVar2,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar3 = (this->fields).color;
    pIVar6 = (this->fields).preview;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar13 = pSVar3->max_length;
    if (uVar13 != 0) {
      fVar8 = pSVar3->vector[0];
      if (pSVar3 != (Single__Array *)0x0) {
        if (uVar13 < 2) goto code_?;
        fVar9 = pSVar3->vector[1];
        if (pSVar3 != (Single__Array *)0x0) {
          if (uVar13 < 3) goto code_?;
          fVar10 = pSVar3->vector[2];
          if (pSVar3 != (Single__Array *)0x0) {
            if (uVar13 < 4) goto code_?;
code_?:
            uVar5 = 0;
            uVar11 = 0;
            uVar12 = 0;
            uVar14 = 0;
            func_?(&stack0xffffffe0,fVar8,fVar9,fVar10,pSVar3->vector[3]);
            if (pIVar6 != (Image *)0x0) {
              (*(code *)(pIVar6->klass->vtable).set_color.method)(pIVar6,uVar5,uVar11,uVar12,uVar14)
              ;
              return;
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
  }
  uVar5 = func_?(0);
  func_?(uVar5);
  value = extraout_ECX;
code_?:
  func_?(value);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* SmokeSettings() */

void Assembly-CSharp.dll::SmokeSettings::SmokeSettings__ctor(SmokeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,4);
  (this->fields).color = pSVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

