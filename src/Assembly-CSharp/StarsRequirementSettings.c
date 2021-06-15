
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_Initialize
               (StarsRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields).settingsBase;
  pSVar3 = TM::TM__(StringLiteral_Star_Requirement,(MethodInfo *)0x0);
  if (pSVar2 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(pSVar2,woID,root,pSVar3,(MethodInfo *)0x0);
    if (woID == -1) {
      this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      value = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32);
      if (this_03 ==
          (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_03,StringLiteral_starAmount,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
         (pPVar4 = (PrefabPool *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_02,woID,(MethodInfo *)0x0), pPVar4 == (PrefabPool *)0x0))
      goto code_?;
      this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar4,(MethodInfo *)0x0);
    }
    if (this_03 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_03,StringLiteral_starAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar5 == 0) {
        value_00 = (Theme *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)this_03,StringLiteral_starAmount,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      value_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_03,
                            (Type *)StringLiteral_starAmount,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      value_02 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                           ((Object *)value_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar4 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pPVar4 != (PrefabPool *)0x0) &&
         (this_04 = (WinningConditionManager *)
                    PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar4,(MethodInfo *)0x0),
         this_04 != (WinningConditionManager *)0x0)) {
        this_05 = MVWorldObject.dll::WinningConditionManager::
                  WinningConditionManager_GetSingletonWinnerConditionByType_6
                            (this_04,
                             AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                            );
        (this->fields).collectible = (AllCollectiblesCollectedClient *)this_05;
        if (this_05 != (TimeAttackFlagReachedClient *)0x0) {
          pOVar6 = System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)this_05,(MethodInfo *)0x0);
          (this->fields).maxValue = (int32_t)((int)&pOVar6[-1].monitor + 3);
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields).maxValue < 1) {
          if (0 < value_02) {
            pOVar6 = (Object *)func_?();
            pSVar3 = StringLiteral_starAmount;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pSVar2 = (this->fields).settingsBase;
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32_16(pOVar6,(MethodInfo *)0x0);
            pOVar6 = (Object *)func_?();
            if (pSVar2 == (SettingsBase *)0x0) goto code_?;
            SettingsBase::SettingsBase_OnSettingChanged(pSVar2,pSVar3,pOVar6,(MethodInfo *)0x0);
          }
          pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).message;
          if ((pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) ||
             (this_06 = (GameObject *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (pDVar7,(MethodInfo *)0x0), this_06 == (GameObject *)0x0))
          goto code_?;
          this._0_1_ = 1;
        }
        else {
          pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).message;
          if ((pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) ||
             (this_06 = (GameObject *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (pDVar7,(MethodInfo *)0x0), this_06 == (GameObject *)0x0))
          goto code_?;
          this._0_1_ = 0;
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_06,(bool)this,(MethodInfo *)0x0);
        this_00 = (pSVar1->fields).slider;
        if (this_00 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize_1
                    (this_00,StringLiteral_starAmount,value_02,0,(pSVar1->fields).maxValue,
                     (MethodInfo *)0x0);
          this_01 = (pSVar1->fields).inputField;
          if (this_01 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                      (this_01,StringLiteral_starAmount,value_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_OnSettingChanged
               (StarsRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  this = (StarsRequirementSettings *)
         mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (WinningConditionManager *)0x0) {
      this_02 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType_6
                          (this_01,
                           AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                          );
      *(TimeAttackFlagReachedClient **)(unaff_ESI + 0x1c) = this_02;
      if (this_02 != (TimeAttackFlagReachedClient *)0x0) {
        pOVar1 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_02,(MethodInfo *)0x0);
        *(undefined1 **)(unaff_ESI + 0x20) = (undefined1 *)((int)&pOVar1[-1].monitor + 3);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateMessage(Int32) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_UpdateMessage
               (StarsRequirementSettings *this,int32_t starAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  if ((this->fields).maxValue < 1) {
    if (0 < starAmount) {
      this = (StarsRequirementSettings *)0x0;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&this);
      key = StringLiteral_starAmount;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (pSVar1->fields).settingsBase;
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_16(pOVar2,(MethodInfo *)0x0);
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      if (this_00 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key,pOVar2,(MethodInfo *)0x0);
    }
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(pSVar1->fields).message;
    if ((pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (pGVar4 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (pDVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).message;
    if ((pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (pGVar4 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (pDVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

