
/* Void Initialize(Int32, GameObject, String) */

void Assembly-CSharp.dll::KillLimitSettings::KillLimitSettings_Initialize
               (KillLimitSettings *this,int32_t woID,GameObject *root,String *header,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  id = woID;
  pKVar1 = this;
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PlayerKillWinCondition,
               (MethodInfo *)0x0);
    pTVar2 = (pKVar1->fields).killLimitHeader;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,header);
      if (id == -1) {
        this_05 = (Dictionary_2_System_Type_Pool_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_05,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        this = (KillLimitSettings *)0x5;
        value = (CrossPlatformInputManager_VirtualButton *)
                func_?(TypeInfo__System__Int32,&this);
        if (this_05 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_05,StringLiteral_killLimit,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
code_?:
          this_01 = (pKVar1->fields).killLimitSlider;
          if (this_05 != (Dictionary_2_System_Type_Pool_ *)0x0) {
            pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (this_05,(Type *)StringLiteral_killLimit,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((this_01 != (SettingsSlider *)0x0) && (pPVar3 != (Pool *)0x0)) {
              if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              woID = (int32_t)&UNK_?;
              root = (GameObject *)pPVar3;
              piVar4 = (int32_t *)func_?();
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_01,StringLiteral_killLimit,*piVar4,1,200,(MethodInfo *)0x0);
              this_02 = (pKVar1->fields).killLimitInputField;
              pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (this_05,(Type *)StringLiteral_killLimit,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if ((this_02 != (SettingsInputFieldSlider *)0x0) && (pPVar3 != (Pool *)0x0)) {
                if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class
                   ) {
                  piVar4 = (int32_t *)func_?();
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (this_02,StringLiteral_killLimit,*piVar4,(MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClientManager *)0x0) {
          this_04 = (PrefabPool *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_03,id,(MethodInfo *)0x0);
          if (this_04 != (PrefabPool *)0x0) {
            this_05 = (Dictionary_2_System_Type_Pool_ *)
                      PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  pPVar3 = (Pool *)func_?();
code_?:
  func_?(pPVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::KillLimitSettings::KillLimitSettings_OnSettingChanged
               (KillLimitSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
  this_00 = (this->fields).settingsBase;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

