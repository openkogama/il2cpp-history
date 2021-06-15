
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings_Initialize
               (WaterBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_WaterPlane,(MethodInfo *)0x0);
    if (woID != -1) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI = (Image *)woID;
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        this_02 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,woID,(MethodInfo *)0x0);
        if (this_02 != (PrefabPool *)0x0) {
          this_03 = (Dictionary_2_System_Type_Pool_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    this_03 = (Dictionary_2_System_Type_Pool_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    unaff_EBX = (Single__Array__Class *)func_?(TypeInfo__System__Single);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)unaff_EBX,__field_2771C32B635C7C7154A48DBE4F54B3449ABC6B50_Field,
               (MethodInfo *)0x0);
    unaff_EDI = (Image *)0x0;
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_waterColor,
               (CrossPlatformInputManager_VirtualButton *)unaff_EBX,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
code_?:
    unaff_EDI = (Image *)0x0;
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    unaff_EDI = (Image *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   (this_03,(Type *)StringLiteral_waterColor,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
    unaff_EBX = TypeInfo__System__Single;
    pSVar2 = (Single__Array *)0x0;
    if (unaff_EDI != (Image *)0x0) {
      pSVar2 = (Single__Array *)func_?(unaff_EDI,TypeInfo__System__Single);
      if (pSVar2 == (Single__Array *)0x0) goto code_?;
    }
    pSVar3 = (this->fields).colorR;
    (this->fields).color = pSVar2;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    if (pSVar2->max_length == 0) goto code_?;
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar3,StringLiteral_colorR,pSVar2->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar2 = (this->fields).color;
    pSVar3 = (this->fields).colorG;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    if (pSVar2->max_length < 2) goto code_?;
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar3,StringLiteral_colorG,pSVar2->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar2 = (this->fields).color;
    pSVar3 = (this->fields).colorB;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    if (pSVar2->max_length < 3) goto code_?;
    if (pSVar3 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar3,StringLiteral_colorB,pSVar2->vector[2],0.0,1.0,(MethodInfo *)0x0);
    pSVar2 = (this->fields).color;
    unaff_EDI = (this->fields).preview;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    uVar4 = pSVar2->max_length;
    if (uVar4 == 0) goto code_?;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    if (uVar4 < 2) goto code_?;
    if (pSVar2 == (Single__Array *)0x0) goto code_?;
    if (2 < uVar4) {
      uVar1 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      func_?();
      if (unaff_EDI != (Image *)0x0) {
        (*(code *)(unaff_EDI->klass->vtable).set_color.method)
                  (unaff_EDI,uVar1,uVar5,uVar6,uVar7,
                   (unaff_EDI->klass->vtable).get_raycastTarget.methodPtr);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings_OnSettingChanged
               (WaterBoxSettings *this,String *key,Object *value,MethodInfo *method)

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
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        this = (WaterBoxSettings *)&UNK_?;
        func_?();
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        this_00 = (this->fields).settingsBase;
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pSVar2 = (this->fields).color;
      if (pSVar2 == (Single__Array *)0x0) goto code_?;
      pfVar3 = (float *)func_?();
      if (2 < pSVar2->max_length) {
        pSVar2->vector[2] = *pfVar3;
        WaterBoxSettings_UpdateWaterColor(this,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?();
      func_?();
    }
    else {
      pSVar2 = (this->fields).color;
      if (pSVar2 == (Single__Array *)0x0) goto code_?;
      if (value == (Object *)0x0) goto code_?;
      pSVar4 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?();
      if (1 < pSVar2->max_length) {
        pSVar2->vector[1] = *pfVar3;
        WaterBoxSettings_UpdateWaterColor(this,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    func_?();
    value = extraout_ECX;
    pSVar4 = extraout_EDX;
  }
  else {
    pSVar2 = (this->fields).color;
    if (pSVar2 == (Single__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if (value == (Object *)0x0) goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar3 = (float *)func_?(value);
      if (pSVar2->max_length != 0) {
        pSVar2->vector[0] = *pfVar3;
        WaterBoxSettings_UpdateWaterColor(this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?(value,pSVar4);
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateWaterColor() */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings_UpdateWaterColor
               (WaterBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uStack_1 = 0;
    fStack_2 = 0.0;
    uVar3 = func_?();
    func_?(uVar3);
  }
  else {
    SettingsBase::SettingsBase_OnSettingChanged
              (this_00,StringLiteral_waterColor,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar4 = (this->fields).color;
    pIVar5 = (this->fields).preview;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    uVar6 = pSVar4->max_length;
    if (uVar6 == 0) goto code_?;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (1 < uVar6) {
      if (pSVar4 != (Single__Array *)0x0) {
        uStack_1 = 0;
        if (uVar6 < 3) goto code_?;
        fStack_2 = pSVar4->vector[2];
        uStack_1 = 0;
        uStack_7 = 0;
        uStack_8 = 0;
        func_?(&fStack_2,pSVar4->vector[0],pSVar4->vector[1]);
        if (pIVar5 != (Image *)0x0) {
          (*(code *)(pIVar5->klass->vtable).set_color.method)
                    (pIVar5,fStack_2,uStack_1,uStack_7,uStack_8,
                     (pIVar5->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
      goto code_?;
    }
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uVar3 = func_?();
  func_?(uVar3);
code_?:
  fStack_2 = 0.0;
  uVar3 = func_?();
  func_?(uVar3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* WaterBoxSettings() */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings__ctor
               (WaterBoxSettings *this,MethodInfo *method)

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

