
/* Void AddRespawnTime() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_AddRespawnTime
               (RespawnSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_02 = this;
  if (this_03 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_03,(this->fields).woID,(MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObject *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar1->fields).data,
       this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)StringLiteral_respawnTime,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 == 0) {
        in_stack_3 = &this;
        method = (MethodInfo *)TypeInfo__System__Int32;
        this = (RespawnSettings *)&UNK_?;
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_respawnTime,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      this_01 = (this_02->fields).settingsBase;
      in_stack_3 = &this;
      method = (MethodInfo *)TypeInfo__System__Int32;
      this = (RespawnSettings *)&UNK_?;
      pOVar4 = (Object *)func_?();
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_respawnTime,pOVar4,(MethodInfo *)0x0);
        RespawnSettings_SetRespawnUIVisibility(this_02,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleActiveToggle() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_HandleActiveToggle
               (RespawnSettings *this,MethodInfo *method)

{
  this_01 = this;
  if ((this->fields).isInitialized == 0) {
    return;
  }
  if ((this->fields).isRespawnActive == 0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_respawnTime);
      cRam_? = '\x01';
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_02,(this_01->fields).woID,(MethodInfo *)0x0),
        pMVar1 != (MVWorldObject *)0x0)) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar1->fields).data,
       this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)StringLiteral_respawnTime,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 == 0) {
        in_stack_3 = &this;
        method = (MethodInfo *)TypeInfo__System__Int32;
        this = (RespawnSettings *)&UNK_?;
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_respawnTime,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      pSVar5 = (this_01->fields).settingsBase;
      in_stack_3 = &this;
      method = (MethodInfo *)TypeInfo__System__Int32;
      this = (RespawnSettings *)&UNK_?;
      pOVar4 = (Object *)func_?();
      if (pSVar5 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (pSVar5,StringLiteral_respawnTime,pOVar4,(MethodInfo *)0x0);
        RespawnSettings_SetRespawnUIVisibility(this_01,1,(MethodInfo *)0x0);
        (this_01->fields).isRespawnActive = 1;
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_respawnTime);
      cRam_? = '\x01';
    }
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (RespawnSettings *)0x0;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_03 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_03,
                 (Object *)StringLiteral_respawnTime,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                  (this_04,(this_01->fields).woID,
                   (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0);
        pSVar5 = (this_01->fields).settingsBase;
        if (pSVar5 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_RemoveData(pSVar5,StringLiteral_respawnTime,(MethodInfo *)0x0);
          RespawnSettings_SetRespawnUIVisibility(this_01,0,(MethodInfo *)0x0);
          (this_01->fields).isRespawnActive = 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_Initialize
               (RespawnSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Respawn);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              (this_00,woID,root,StringLiteral_Respawn,(MethodInfo *)0x0);
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_04,woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObject *)0x0) {
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar1->fields).data;
        value = 0x1e;
        if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_respawnTime,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          (this->fields).isRespawnActive = bVar2;
          if (bVar2 != 0) {
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_01,(Object *)StringLiteral_respawnTime,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if (TVar3.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar4 = (int32_t *)func_?();
            value = *piVar4;
          }
          this_02 = (this->fields).respawnTimeSlider;
          if (this_02 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize_1
                      (this_02,StringLiteral_respawnTime,value,0x1e,0x708,(MethodInfo *)0x0);
            this_03 = (this->fields).respawnTimeInputField;
            if (this_03 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                        (this_03,StringLiteral_respawnTime,value,(MethodInfo *)0x0);
              RespawnSettings_SetRespawnUIVisibility
                        (this,(this->fields).isRespawnActive,(MethodInfo *)0x0);
              (this->fields).isInitialized = 1;
              return;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_OnSettingChanged
               (RespawnSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_respawnTime,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?();
    fVar3 = *pfVar2;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    func_?((double)fVar3);
    this_00 = (this->fields).respawnTimeInputField;
    text = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (this_00 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_SetText(this_00,text,(MethodInfo *)0x0);
      this_01 = (this->fields).settingsBase;
      value_00 = (Object *)func_?();
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_respawnTime,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveRespawnTime() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_RemoveRespawnTime
               (RespawnSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_respawnTime,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_02,(this->fields).woID,(Dictionary_2_System_Object_System_Object_ *)this_01,
                 (MethodInfo *)0x0);
      this_00 = (this->fields).settingsBase;
      if (this_00 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_RemoveData(this_00,StringLiteral_respawnTime,(MethodInfo *)0x0);
        RespawnSettings_SetRespawnUIVisibility(this,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetRespawnUIVisibility(Boolean) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_SetRespawnUIVisibility
               (RespawnSettings *this,bool isRespawnActive,MethodInfo *method)

{
  pGVar1 = (this->fields).respawnTimeSettingsUI;
  if (pGVar1 != (GameObject *)0x0) {
    pGVar1 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,isRespawnActive,(MethodInfo *)0x0);
      pGVar1 = (this->fields).respawnActiveCheckmark;
      if (pGVar1 != (GameObject *)0x0) {
        pGVar1 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,isRespawnActive,(MethodInfo *)0x0);
          this_00 = (this->fields).activeToggle;
          if (this_00 != (Toggle *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn
                      (this_00,isRespawnActive,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

