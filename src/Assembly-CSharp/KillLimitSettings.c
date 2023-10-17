
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
      (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,header);
      if (id == -1) {
        this_03 = (Dictionary_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        this = (KillLimitSettings *)0x5;
        pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_03,(Object *)StringLiteral_killLimit,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        this_04 = (pKVar1->fields).killLimitSlider;
      }
      else {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
           (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_02,id,(MethodInfo *)0x0), pMVar4 == (MVWorldObject *)0x0))
        goto code_?;
        this_03 = (pMVar4->fields).data;
        this_04 = (pKVar1->fields).killLimitSlider;
        if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_03,(Object *)StringLiteral_killLimit,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((this_04 != (SettingsSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
        if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int32_t *)func_?(pOVar3);
          SettingsSlider::SettingsSlider_Initialize_1
                    (this_04,StringLiteral_killLimit,*piVar5,1,200,(MethodInfo *)0x0);
          this_01 = (pKVar1->fields).killLimitInputField;
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_03,(Object *)StringLiteral_killLimit,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((this_01 == (SettingsInputFieldSlider *)0x0) || (pOVar3 == (Object *)0x0))
          goto code_?;
          if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar5 = (int32_t *)func_?(pOVar3);
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                      (this_01,StringLiteral_killLimit,*piVar5,(MethodInfo *)0x0);
            return;
          }
        }
        func_?(pOVar3,TypeInfo__System__Int32);
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

