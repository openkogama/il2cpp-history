
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings_Initialize
               (PointLightSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  id = woID;
  pPVar1 = this;
  pSVar2 = (this->fields).settingsBase;
  if (pSVar2 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (pSVar2,woID,root,MVWorldObjectDocumentationType__Enum_PointLight,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_01 == (MVWorldObjectClientManager *)0x0) ||
      (this_02 = (PrefabPool *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,id,(MethodInfo *)0x0), this_02 == (PrefabPool *)0x0)) ||
     (this_03 = (PointLightSettings *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0),
     this_03 == (PointLightSettings *)0x0)) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)this_03,StringLiteral_hide,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 == 0) {
    this = (PointLightSettings *)CONCAT13(1,this._0_3_);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Boolean,(int)&this + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_hide,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (pPVar1->fields).settingsBase;
    root = (GameObject *)CONCAT13(1,root._0_3_);
    method_00 = (MethodInfo *)&UNK_?;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&root + 3);
    if (pSVar2 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_OnSettingChanged(pSVar2,StringLiteral_hide,pOVar5,method_00);
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)this_03,StringLiteral_halo,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 == 0) {
    this = (PointLightSettings *)0x1;
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_halo,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (pPVar1->fields).settingsBase;
    root = (GameObject *)0x1;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&root);
    if (pSVar2 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_OnSettingChanged(pSVar2,StringLiteral_halo,pOVar5,(MethodInfo *)0x0);
  }
  pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  this = (PointLightSettings *)TypeInfo__System__Single;
  if (pPVar6 == (Pool *)0x0) {
    pSVar7 = (Single__Array *)0x0;
code_?:
    pSVar8 = (pPVar1->fields).colorR;
    (pPVar1->fields).color = pSVar7;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length == 0) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_colorR,pSVar7->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pPVar1->fields).color;
    pSVar8 = (pPVar1->fields).colorG;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 2) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_colorG,pSVar7->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pPVar1->fields).color;
    pSVar8 = (pPVar1->fields).colorB;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 3) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    root = (GameObject *)0x0;
    woID = 0x3f800000;
    this = (PointLightSettings *)0x0;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_colorB,pSVar7->vector[2],0.0,1.0,(MethodInfo *)0x0);
    root = (GameObject *)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    pSVar8 = (pPVar1->fields).range;
    woID = (int32_t)StringLiteral_range;
    this = this_03;
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_range,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar9 = CONCAT44(TypeInfo__System__Single,pPVar6);
    if ((pSVar8 == (SettingsSlider *)0x0) || (pPVar6 == (Pool *)0x0)) goto code_?;
    if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      in_stack_10 = &UNK_?;
      in_stack_11 = pPVar6;
      pfVar12 = (float *)func_?();
      SettingsSlider::SettingsSlider_Initialize
                (pSVar8,StringLiteral_range,*pfVar12,1.0,10.0,(MethodInfo *)0x0);
      pSVar8 = (pPVar1->fields).intensity;
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_intensity
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      uVar9 = CONCAT44(TypeInfo__System__Single,pPVar6);
      if ((pSVar8 == (SettingsSlider *)0x0) || (pPVar6 == (Pool *)0x0)) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar12 = (float *)func_?(pPVar6);
      SettingsSlider::SettingsSlider_Initialize
                (pSVar8,StringLiteral_intensity,*pfVar12,1.0,20.0,(MethodInfo *)0x0);
      pSVar8 = (pPVar1->fields).HaloTextures;
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_halo,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      uVar9 = CONCAT44(TypeInfo__System__Int32,pPVar6);
      if ((pSVar8 == (SettingsSlider *)0x0) || (pPVar6 == (Pool *)0x0)) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar13 = (int32_t *)func_?(pPVar6);
      SettingsSlider::SettingsSlider_Initialize_1
                (pSVar8,StringLiteral_halo,*piVar13,1,3,(MethodInfo *)0x0);
      this_00 = (pPVar1->fields).hide;
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_hide,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      uVar9 = CONCAT44(TypeInfo__System__Boolean,pPVar6);
      if ((this_00 == (SettingsToggle *)0x0) || (pPVar6 == (Pool *)0x0)) goto code_?;
      if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pbVar14 = (bool *)func_?(pPVar6);
      SettingsToggle::SettingsToggle_Initialize
                (this_00,StringLiteral_hide,*pbVar14,(MethodInfo *)0x0);
      pSVar7 = (pPVar1->fields).color;
      pIVar15 = (pPVar1->fields).preview;
      if (pSVar7 == (Single__Array *)0x0) goto code_?;
      uVar16 = pSVar7->max_length;
      if (uVar16 == 0) goto code_?;
      if (pSVar7 == (Single__Array *)0x0) goto code_?;
      if (uVar16 < 2) goto code_?;
      if (pSVar7 == (Single__Array *)0x0) goto code_?;
      uVar17 = 0;
      if (2 < uVar16) {
        uVar18 = 0;
        uVar17 = 0;
        uVar19 = 0;
        uVar20 = 0;
        func_?(&stack0xffffffec,pSVar7->vector[0],pSVar7->vector[1],pSVar7->vector[2]);
        if (pIVar15 != (Image *)0x0) {
          (*(code *)(pIVar15->klass->vtable).set_color.method)
                    (pIVar15,uVar18,uVar17,uVar19,uVar20,
                     (pIVar15->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pSVar7 = (Single__Array *)func_?();
    if (pSVar7 != (Single__Array *)0x0) goto code_?;
    func_?(pPVar6,this);
code_?:
    uVar18 = func_?(0,0);
    func_?(uVar18);
code_?:
    uVar18 = func_?(0,0);
    func_?(uVar18);
code_?:
    uVar18 = func_?(0,0);
    func_?(uVar18);
code_?:
    uVar18 = func_?(0,0);
    func_?(uVar18);
code_?:
    uVar17 = 0;
    uVar18 = func_?(0,0);
    func_?(uVar18);
code_?:
    uVar18 = func_?(0,uVar17);
    uVar9 = func_?(uVar18);
  }
code_?:
  func_?(uVar9);
code_?:
  func_?(0);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings_OnSettingChanged
               (PointLightSettings *this,String *key,Object *value,MethodInfo *method)

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
                          (key,StringLiteral_halo,(MethodInfo *)0x0);
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
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          iRam_? = mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
          pSVar2 = pSRam00000014;
          value_00 = (Object *)func_?();
          if (pSVar2 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      (pSVar2,StringLiteral_halo,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pSVar3 = (this->fields).color;
        if (pSVar3 != (Single__Array *)0x0) {
          pfVar4 = (float *)func_?();
          if (pSVar3->max_length < 3) {
            uVar5 = func_?(0,0);
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
          else {
            pSVar3->vector[2] = *pfVar4;
            pSVar2 = (this->fields).settingsBase;
            if (pSVar2 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        (pSVar2,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0
                        );
              pSVar3 = (this->fields).color;
              pIVar6 = (this->fields).preview;
              if (pSVar3 != (Single__Array *)0x0) {
                uVar7 = pSVar3->max_length;
                if (uVar7 == 0) goto code_?;
                if (pSVar3 != (Single__Array *)0x0) {
                  if (uVar7 < 2) goto code_?;
                  if (pSVar3 != (Single__Array *)0x0) {
                    if (2 < uVar7) {
                      puVar8 = (undefined1 *)0x0;
                      fVar9 = 0.0;
                      fVar10 = 0.0;
                      fVar11 = 0.0;
                      func_?(&stack0xffffffec,pSVar3->vector[0],pSVar3->vector[1],
                                      pSVar3->vector[2]);
                      goto joined_?;
                    }
                    goto code_?;
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
      if ((pSVar3 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar4 = (float *)func_?();
      if (1 < pSVar3->max_length) {
        pSVar3->vector[1] = *pfVar4;
        goto code_?;
      }
    }
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    func_?();
    func_?();
    value = extraout_ECX;
  }
  else {
    pSVar3 = (this->fields).color;
    if ((pSVar3 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar4 = (float *)func_?();
      if (pSVar3->max_length == 0) goto code_?;
      pSVar3->vector[0] = *pfVar4;
code_?:
      pSVar2 = (this->fields).settingsBase;
      if (pSVar2 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged
                (pSVar2,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
      pSVar3 = (this->fields).color;
      pIVar6 = (this->fields).preview;
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      uVar7 = pSVar3->max_length;
      if (uVar7 == 0) goto code_?;
      fVar9 = pSVar3->vector[0];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (uVar7 < 2) goto code_?;
      fVar10 = pSVar3->vector[1];
      if (pSVar3 == (Single__Array *)0x0) goto code_?;
      if (2 < uVar7) {
        fVar11 = pSVar3->vector[2];
        puVar8 = &stack0xffffffec;
        func_?();
joined_?:
        if (pIVar6 != (Image *)0x0) {
          (*(code *)(pIVar6->klass->vtable).set_color.method)(pIVar6,puVar8,fVar9,fVar10,fVar11);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(value);
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* PointLightSettings() */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings__ctor
               (PointLightSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,3);
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

