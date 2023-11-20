
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::LevelRequirementSettings::LevelRequirementSettings_Initialize
               (LevelRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_levelAmount);
    func_?(&StringLiteral_Level_Requirement);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Level_Requirement,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_04,woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObject *)0x0) {
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar1->fields).data;
        value = 0;
        if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_levelAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar2 != 0) {
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_01,(Object *)StringLiteral_levelAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if (TVar3.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar4 = (int32_t *)func_?();
            value = *piVar4;
          }
          this_02 = (this->fields).slider;
          this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_05 != (MVNetworkGame *)0x0) {
            pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_05,(MethodInfo *)0x0);
            if ((pMVar5 != (MVLocalPlayer *)0x0) && (this_02 != (SettingsSlider *)0x0)) {
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_02,StringLiteral_levelAmount,value,0,(pMVar5->fields)._.level,
                         (MethodInfo *)0x0);
              this_03 = (this->fields).inputField;
              if (this_03 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          (this_03,StringLiteral_levelAmount,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::LevelRequirementSettings::LevelRequirementSettings_OnSettingChanged
               (LevelRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  this = (LevelRequirementSettings *)
         mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

