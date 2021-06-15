
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_Initialize
               (MessageBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Text,(MethodInfo *)0x0);
    if (woID != -1) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        this_04 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_03,woID,(MethodInfo *)0x0);
        if (this_04 != (PrefabPool *)0x0) {
          this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
          if (this_05 !=
              (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
            bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              (this_05,StringLiteral_textSize,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar1 == 0) {
              value = (Theme *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)this_05,StringLiteral_textSize,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_05,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (this_05 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_05,StringLiteral_text,
               (CrossPlatformInputManager_VirtualButton *)StringLiteral_test,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    value_00 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_05,StringLiteral_textSize,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
code_?:
    this_01 = (this->fields).sizeSlider;
    if (this_05 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_textSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_01 == (SettingsSlider *)0x0) || (pPVar2 == (Pool *)0x0)) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (this_01,StringLiteral_textSize,*pfVar3,0.1,0.4,(MethodInfo *)0x0);
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_textSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?();
    MessageBoxSettings_SetTextSize(this,*pfVar3,(MethodInfo *)0x0);
    this_02 = (this->fields).inputField;
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_text,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (this_02 == (SettingsInputField *)0x0) goto code_?;
    value_01 = (Pool *)0x0;
    if (pPVar2 == (Pool *)0x0) {
code_?:
      SettingsInputField::SettingsInputField_Initialize
                (this_02,StringLiteral_text,(String *)value_01,(MethodInfo *)0x0);
      return;
    }
    if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
      value_01 = pPVar2;
    }
    if (value_01 != (Pool *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_OnSettingChanged
               (MessageBoxSettings *this,String *key,Object *value,MethodInfo *method)

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
                    (key,StringLiteral_textSize,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pSVar2 = (this->fields).settingsBase;
    if (pSVar2 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar3 = mscorlib.dll::System::Convert::Convert_ToDecimal_12
                       ((Decimal *)&stack0xffffffe8,value,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Math::Math_Round_1
                       ((Decimal *)&stack0xffffffe8,*pDVar3,1,(MethodInfo *)0x0);
    uVar4 = pDVar3->flags;
    this_00 = (MessageBoxSettings *)pDVar3->hi;
    uVar5 = pDVar3->lo;
    uVar6 = pDVar3->mid;
    if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
      func_?();
    }
    value_00.hi = (uint32_t)this_00;
    value_00.flags = uVar4;
    value_00.lo = uVar5;
    value_00.mid = uVar6;
    value_02 = mscorlib.dll::System::Decimal::Decimal_op_Explicit_10(value_00,(MethodInfo *)0x0);
    MessageBoxSettings_SetTextSize(this_00,value_02,(MethodInfo *)0x0);
    pSVar2 = (this_00->fields).settingsBase;
    value_01 = (Object *)func_?();
    if (pSVar2 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTextSize(Single) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_SetTextSize
               (MessageBoxSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == _UNK_?) {
    pTVar1 = (this->fields).sizeLabel;
    pSVar2 = StringLiteral_Small;
  }
  else if (value == _UNK_?) {
    pTVar1 = (this->fields).sizeLabel;
    pSVar2 = StringLiteral_Medium;
  }
  else if (value == _UNK_?) {
    pTVar1 = (this->fields).sizeLabel;
    pSVar2 = StringLiteral_Large;
  }
  else {
    if (value != _UNK_?) {
      return;
    }
    pTVar1 = (this->fields).sizeLabel;
    pSVar2 = StringLiteral_Huge;
  }
  pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

