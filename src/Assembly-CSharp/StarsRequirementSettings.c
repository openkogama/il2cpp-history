
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_Initialize
               (StarsRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_starAmount);
    func_?(&StringLiteral_Star_Requirement);
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields).settingsBase;
  pSVar3 = TM::TM__(StringLiteral_Star_Requirement,(MethodInfo *)0x0);
  if (pSVar2 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(pSVar2,woID,root,pSVar3,(MethodInfo *)0x0);
    if (woID == -1) {
      this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_04,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32);
      if (this_04 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_04,
                 (Object *)StringLiteral_starAmount,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_03,woID,(MethodInfo *)0x0), pMVar5 == (MVWorldObject *)0x0)) ||
         (this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar5->fields).data,
         this_04 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) goto code_?;
    }
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                       (Object *)StringLiteral_starAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 == 0) {
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_04,
                 (Object *)StringLiteral_starAmount,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                       (Object *)StringLiteral_starAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Convert::Convert_ToInt32(value.m_Index,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar7 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar7->fields)._WinningConditionManager_k__BackingField,
       this_00 != (WinningConditionManager *)0x0)) {
      pAVar8 = (AllCollectiblesCollectedClient *)
               MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType
                         (this_00,
                          AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                         );
      (this->fields).collectible = pAVar8;
      func_?();
      if ((this->fields).collectible != (AllCollectiblesCollectedClient *)0x0) {
        (this->fields).maxValue = (((this->fields).collectible)->fields)._._.limit + -1;
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((this->fields).maxValue < 1) {
        if (0 < value_00) {
          root = (GameObject *)func_?();
          pSVar3 = StringLiteral_starAmount;
          if (cRam_? == '\0') {
            func_?();
            root = (GameObject *)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pSVar2 = (this->fields).settingsBase;
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_ToInt32((Object *)root,(MethodInfo *)0x0);
          pOVar4 = (Object *)func_?();
          if (pSVar2 == (SettingsBase *)0x0) goto code_?;
          SettingsBase::SettingsBase_OnSettingChanged(pSVar2,pSVar3,pOVar4,(MethodInfo *)0x0);
        }
        pGVar9 = (this->fields).message;
        if ((pGVar9 == (GameObject *)0x0) ||
           (pGVar9 = (GameObject *)
                      UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar9,(MethodInfo *)0x0),
           pGVar9 == (GameObject *)0x0)) goto code_?;
        this._0_1_ = 1;
      }
      else {
        pGVar9 = (this->fields).message;
        if ((pGVar9 == (GameObject *)0x0) ||
           (pGVar9 = (GameObject *)
                      UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar9,(MethodInfo *)0x0),
           pGVar9 == (GameObject *)0x0)) goto code_?;
        this._0_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,(bool)this,(MethodInfo *)0x0);
      this_01 = (pSVar1->fields).slider;
      if (this_01 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize_1
                  (this_01,StringLiteral_starAmount,value_00,0,(pSVar1->fields).maxValue,
                   (MethodInfo *)0x0);
        this_02 = (pSVar1->fields).inputField;
        if (this_02 != (SettingsInputFieldSlider *)0x0) {
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                    (this_02,StringLiteral_starAmount,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_OnSettingChanged
               (StarsRequirementSettings *this,String *key,Object *value,MethodInfo *method)

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
  this = (StarsRequirementSettings *)
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


/* Void UpdateMaxValue() */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_UpdateMaxValue
               (StarsRequirementSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pAVar2 = (AllCollectiblesCollectedClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                       );
    (this->fields).collectible = pAVar2;
    func_?(&(this->fields).collectible,pAVar2);
    if ((this->fields).collectible != (AllCollectiblesCollectedClient *)0x0) {
      (this->fields).maxValue = (((this->fields).collectible)->fields)._._.limit + -1;
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateMessage(Int32) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_UpdateMessage
               (StarsRequirementSettings *this,int32_t starAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_starAmount);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  if ((this->fields).maxValue < 1) {
    if (0 < starAmount) {
      this = (StarsRequirementSettings *)0x0;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&this);
      key = StringLiteral_starAmount;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Convert);
        func_?(&TypeInfo__System__Int32);
        cRam_? = '\x01';
      }
      this_00 = (pSVar1->fields).settingsBase;
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      if (this_00 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key,pOVar2,(MethodInfo *)0x0);
    }
    pGVar3 = (pSVar1->fields).message;
    if (pGVar3 != (GameObject *)0x0) {
      pGVar3 = (GameObject *)
               UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_AsRef_1((Void *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pGVar3 = (this->fields).message;
    if (pGVar3 != (GameObject *)0x0) {
      pGVar3 = (GameObject *)
               UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_AsRef_1((Void *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

