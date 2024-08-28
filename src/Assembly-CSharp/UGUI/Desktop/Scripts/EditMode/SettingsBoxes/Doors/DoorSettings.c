
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
     DoorSettings_Initialize(DoorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__MVWorldObjectDocumentationType);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (woID == -1) {
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    }
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
                        (DoorType__Enum_Door,(MethodInfo *)0x0);
code_?:
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (this_03 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_03,(Object *)
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                               static_fields->DocType,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
        (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) goto code_?;
    pMVar2 = (MVWorldObjectDocumentationType__Enum *)func_?();
    this_00 = (this->fields).settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize(this_00,woID,root,*pMVar2,(MethodInfo *)0x0);
    this_01 = (this->fields).nameInputField;
    pSVar3 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             Name;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_03,(Object *)pSVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (this_01 == (SettingsInputField *)0x0) goto code_?;
    value.m_Index = 0;
    if (TVar1.m_Index != 0) {
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        value = TVar1;
      }
      if ((String *)value.m_Index == (String *)0x0) goto code_?;
    }
    SettingsInputField::SettingsInputField_Initialize
              (this_01,pSVar3,(String *)value.m_Index,(MethodInfo *)0x0);
    pSVar4 = (this->fields).toggleBeginOpen;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_03,(Object *)
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                               static_fields->BeginOpen,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((pSVar4 == (SettingsToggle *)0x0) || (TVar1.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar5 = (bool *)func_?();
      SettingsToggle::SettingsToggle_Initialize
                (pSVar4,(String *)TVar1.m_Index,*pbVar5,(MethodInfo *)0x0);
      pSVar4 = (this->fields).togglePlayersCanOpen;
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_03,(Object *)
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                 ->static_fields->PlayersCanOpen,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((pSVar4 == (SettingsToggle *)0x0) || (TVar1.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar5 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize
                  (pSVar4,(String *)TVar1.m_Index,*pbVar5,(MethodInfo *)0x0);
        pSVar4 = (this->fields).toggleReverseOpenDirection;
        pSVar3 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->ReverseOpenDirection;
        TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_03,(Object *)pSVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((pSVar4 == (SettingsToggle *)0x0) || (TVar1.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pbVar5 = (bool *)func_?();
          SettingsToggle::SettingsToggle_Initialize(pSVar4,pSVar3,*pbVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,woID,(MethodInfo *)0x0);
      if (pMVar6 != (MVWorldObject *)0x0) {
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  DoorSettings_ReadWorldObjectData(this,(pMVar6->fields).data,(MethodInfo *)0x0);
        goto code_?;
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
     DoorSettings_OnSettingChanged(DoorSettings *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsBase;
  if (pSVar1 != (SettingsBase *)0x0) {
    if (cRam_? == '\0') {
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
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__WorldObjectDataValidator);
      cRam_? = '\x01';
    }
    if (((pSVar1->fields).woID == -1) ||
       (bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0),
       bVar2 != 0)) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      wo = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_02,(pSVar1->fields).woID,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        wo = (MVWorldObjectClient *)&UNK_?;
      }
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pSVar1->fields).result;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (this_00,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        this_01 = (pSVar1->fields).result;
        if (bVar2 == 0) {
          if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        else {
          if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (this_01,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (this_03 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          (**(code **)(iRam_? + 0x178))();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
DoorSettings_ReadWorldObjectData
          (DoorSettings *this,Dictionary_2_System_Object_System_Object_ *woData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&StringLiteral_Door_has_no_set_type);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pMStack_2 = (MethodInfo *)0x0;
  pMStack_3 = (MethodInfo *)0x0;
  pMStack_4 = (MethodInfo *)0x0;
  pMStack_5 = (MethodInfo *)0x0;
  pMStack_6 = (MethodInfo *)0x0;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (woData,(Object *)
                              TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                              static_fields->DoorType,&pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar7 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Door_has_no_set_type,(MethodInfo *)0x0);
      pOStack_1 = (Object *)func_?();
    }
    pOVar8 = pOStack_1;
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (pOVar8 != (Object *)0x0) {
      if ((pOVar8->klass->_0).element_class !=
          (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).element_class)
      goto code_?;
      value = (MethodInfo *)&UNK_?;
      pDVar9 = (DoorType__Enum *)func_?();
      pDVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
                         (*pDVar9,(MethodInfo *)0x0);
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->Name,(Object **)&pMStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 != 0) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value = pMStack_2;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->Name,(Object *)pMStack_2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->BeginOpen,(Object **)&pMStack_3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 != 0) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value = pMStack_3;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->BeginOpen,(Object *)pMStack_3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->PlayersCanOpen,(Object **)&pMStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 != 0) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value = pMStack_4;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->PlayersCanOpen,(Object *)pMStack_4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->ReverseOpenDirection,(Object **)&pMStack_5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 != 0) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value = pMStack_5;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->ReverseOpenDirection,(Object *)pMStack_5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->OpenValue,(Object **)&pMStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 != 0) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value = pMStack_6;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->OpenValue,(Object *)pMStack_6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->CloseValue,(Object **)&stack0xffffffe0,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 != 0) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->CloseValue,
                   (Object *)
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->ToggleTime,(Object **)&stack0xffffffdc,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar7 == 0) {
        return pDVar10;
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        value = (MethodInfo *)&UNK_?;
        func_?();
      }
      if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->ToggleTime,(Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        return pDVar10;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar11)();
  return pDVar10;
}

