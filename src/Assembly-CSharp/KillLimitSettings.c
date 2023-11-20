
/* Void Initialize(Int32, GameObject, String) */

void Assembly-CSharp.dll::KillLimitSettings::KillLimitSettings_Initialize
               (KillLimitSettings *this,int32_t woID,GameObject *root,String *header,
               MethodInfo *method)

{
  pKVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_killLimit);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (pKVar1->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PlayerKillWinCondition,
               (MethodInfo *)0x0);
    pTVar2 = (pKVar1->fields).killLimitHeader;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,header);
      if (id == -1) {
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        this = (KillLimitSettings *)0x5;
        value = (Object *)func_?(TypeInfo__System__Int32,&this);
        if (this_03 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_03,
                   (Object *)StringLiteral_killLimit,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        this_04 = (pKVar1->fields).killLimitSlider;
      }
      else {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
           (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_02,id,(MethodInfo *)0x0), pMVar3 == (MVWorldObject *)0x0))
        goto code_?;
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(pMVar3->fields).data;
        this_04 = (pKVar1->fields).killLimitSlider;
        if (this_03 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
      }
      this = (KillLimitSettings *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                         (Object *)StringLiteral_killLimit,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((this_04 != (SettingsSlider *)0x0) && (TVar4.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          root = (GameObject *)&UNK_?;
          header = (String *)TVar4;
          piVar5 = (int32_t *)func_?();
          SettingsSlider::SettingsSlider_Initialize_1
                    (this_04,StringLiteral_killLimit,*piVar5,1,200,(MethodInfo *)0x0);
          this_01 = (pKVar1->fields).killLimitInputField;
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03
                             ,(Object *)StringLiteral_killLimit,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((this_01 == (SettingsInputFieldSlider *)0x0) || (TVar4.m_Index == 0))
          goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar5 = (int32_t *)func_?(TVar4.m_Index);
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                      (this_01,StringLiteral_killLimit,*piVar5,(MethodInfo *)0x0);
            return;
          }
        }
        func_?(TVar4.m_Index,TypeInfo__System__Int32);
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::KillLimitSettings::KillLimitSettings_OnSettingChanged
               (KillLimitSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
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

