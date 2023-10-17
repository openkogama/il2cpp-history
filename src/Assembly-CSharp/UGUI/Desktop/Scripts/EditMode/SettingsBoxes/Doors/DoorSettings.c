
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
    this_03 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
                        (DoorType__Enum_Door,(MethodInfo *)0x0);
code_?:
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_03,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->DocType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class !=
        (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) goto code_?;
    pMVar2 = (MVWorldObjectDocumentationType__Enum *)func_?();
    this_00 = (this->fields).settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize(this_00,woID,root,*pMVar2,(MethodInfo *)0x0);
    this_01 = (this->fields).nameInputField;
    pSVar3 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             Name;
    pSVar4 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_03,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->Name,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (this_01 == (SettingsInputField *)0x0) goto code_?;
    value = (String *)0x0;
    if (pSVar4 != (String *)0x0) {
      if (pSVar4->klass == TypeInfo__System__String) {
        value = pSVar4;
      }
      if (value == (String *)0x0) goto code_?;
    }
    SettingsInputField::SettingsInputField_Initialize(this_01,pSVar3,value,(MethodInfo *)0x0);
    pSVar5 = (this->fields).toggleBeginOpen;
    pSVar3 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_03,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->BeginOpen,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar5 == (SettingsToggle *)0x0) || (pSVar3 == (String *)0x0)) goto code_?;
    if ((pSVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar6 = (bool *)func_?();
      SettingsToggle::SettingsToggle_Initialize(pSVar5,pSVar3,*pbVar6,(MethodInfo *)0x0);
      pSVar5 = (this->fields).togglePlayersCanOpen;
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_03,(Object *)
                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                  ->static_fields->PlayersCanOpen,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((pSVar5 == (SettingsToggle *)0x0) || (pSVar3 == (String *)0x0)) goto code_?;
      if ((pSVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar6 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize(pSVar5,pSVar3,*pbVar6,(MethodInfo *)0x0);
        pSVar5 = (this->fields).toggleReverseOpenDirection;
        pSVar3 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->ReverseOpenDirection;
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_03,(Object *)pSVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((pSVar5 == (SettingsToggle *)0x0) || (pOVar1 == (Object *)0x0)) goto code_?;
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar6 = (bool *)func_?();
          SettingsToggle::SettingsToggle_Initialize(pSVar5,pSVar3,*pbVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,woID,(MethodInfo *)0x0);
      if (pMVar7 != (MVWorldObject *)0x0) {
        this_03 = DoorSettings_ReadWorldObjectData(this,(pMVar7->fields).data,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      wo = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(pSVar1->fields).woID,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        wo = (MVWorldObjectClient *)&UNK_?;
      }
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pSVar1->fields).result;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pDVar3 = (pSVar1->fields).result;
        if (bVar2 == 0) {
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        else {
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar3,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          (**(code **)(iRam_? + 0x17c))();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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

