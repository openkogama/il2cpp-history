
/* Void CreateBlueprintSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateBlueprintSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BlueprintData);
    func_?(&TypeInfo__MV__WorldObject__BlueprintType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
      (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,woID,(MethodInfo *)0x0), pMVar1 != (MVWorldObject *)0x0)) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar1->fields).data,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    key = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    this_01 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (TVar2.m_Index != 0) {
      if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        func_?();
      }
      else {
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (TVar2.m_Index,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
              (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) goto code_?;
          pcVar3 = (char *)func_?();
          if (*pcVar3 == '\f') {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pOVar4 = (Object *)this_01[2].invoker_method;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_03 = (MovablesSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar4,
                                 MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                                );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (this_03 != (MovablesSettings *)0x0) {
              MovablesSettings::MovablesSettings_Initialize(this_03,woID,pGVar5,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (*pcVar3 != '\r') {
              return;
            }
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pOVar4 = (Object *)this_01[1].field7_0x1c.methodMetadataHandle;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_04 = (RotatorSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar4,
                                 RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                                );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (this_04 != (RotatorSettings *)0x0) {
              RotatorSettings::RotatorSettings_Initialize(this_04,woID,pGVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreateChangeScaleSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateChangeScaleSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsFactory____c__DisplayClass64_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__SettingsFactory____c__DisplayClass64_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  pCVar1 = (this->fields).changeScaleSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pCVar1,
                      CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                     );
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    pCVar1 = (CubeModelPopup *)(this_00->fields)._._defaultValue_k__BackingField;
    if (pCVar1 != (CubeModelPopup *)0x0) {
      CubeModelPopup::CubeModelPopup_Initialize(pCVar1,0x15,woID,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
                 MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateEditablePickupItemsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateEditablePickupItemsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,woID,(MethodInfo *)0x0),
     unaff_ESI = 
     TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
     , pMVar1 != (MVWorldObject *)0x0)) {
    if (((pMVar1->klass->_1).naturalAligment <
         (
         TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
         ->_1).naturalAligment) ||
       ((MVEditablePickupItemBaseBlueprint__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(
         TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
         ->_1).naturalAligment - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) goto code_?;
    pLVar2 = pMVar1[2].fields.outputLinkRefs;
    unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)0x0;
    if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
      pOVar3 = pLVar2[10].fields._syncRoot;
      if (pOVar3 == (Object *)0x8) {
        pMVar4 = (this->fields).meleeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar4 = (MeleeWeaponSettings *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pMVar4,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar2->fields)._items;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pMVar4 != (MeleeWeaponSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings::
          MeleeWeaponSettings_Initialize(pMVar4,(int32_t)unaff_ESI,pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pOVar3 == (Object *)0xf) {
        original = (this->fields).customGunSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar2->fields)._items;
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
        if (pOVar3 != (Object *)0x0) {
          (*(code *)pOVar3->klass[1]._0.parent)();
          return;
        }
      }
      else {
        if (pOVar3 != (Object *)0x3b) {
          return;
        }
        pCVar6 = (this->fields).costumeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pCVar6 = (CostumeSettings *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pCVar6,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar2->fields)._items;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pCVar6 != (CostumeSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
          CostumeSettings_Initialize(pCVar6,(int32_t)unaff_ESI,pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,unaff_ESI);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGamePointsMinorRewardSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsMinorRewardSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointMinorRewardSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_Crystal_Reward);
      func_?(&StringLiteral_gamePointAmount);
      cRam_? = '\x01';
    }
    this_00 = pOVar1[2].klass;
    pOVar1[3].monitor = (MonitorData *)woID;
    if (this_00 != (Object__Class *)0x0) {
      SettingsBase::SettingsBase_Initialize_1
                ((SettingsBase *)this_00,woID,root,StringLiteral_Crystal_Reward,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,woID,(MethodInfo *)0x0);
        if ((pMVar2 != (MVWorldObject *)0x0) &&
           (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      (pMVar2->fields).data,
           this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar3 == 0) {
            value_00 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
          if (TVar4.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            if ((SettingsSlider *)pOVar1[2].monitor != (SettingsSlider *)0x0) {
              value = *piVar6;
              SettingsSlider::SettingsSlider_Initialize_1
                        ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_gamePointAmount,value,0,
                         100,(MethodInfo *)0x0);
              if (pOVar1[3].klass != (Object__Class *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          ((SettingsInputFieldSlider *)pOVar1[3].klass,StringLiteral_gamePointAmount
                           ,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGamePointsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_Crystal_Reward);
      func_?(&StringLiteral_gamePointAmount);
      cRam_? = '\x01';
    }
    this_00 = pOVar1[2].klass;
    pOVar1[3].monitor = (MonitorData *)woID;
    if (this_00 != (Object__Class *)0x0) {
      SettingsBase::SettingsBase_Initialize_1
                ((SettingsBase *)this_00,woID,root,StringLiteral_Crystal_Reward,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,woID,(MethodInfo *)0x0);
        if ((pMVar2 != (MVWorldObject *)0x0) &&
           (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      (pMVar2->fields).data,
           this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar3 == 0) {
            value_00 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
          if (TVar4.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            if ((SettingsSlider *)pOVar1[2].monitor != (SettingsSlider *)0x0) {
              value = *piVar6;
              SettingsSlider::SettingsSlider_Initialize_1
                        ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_gamePointAmount,value,0,
                         1000,(MethodInfo *)0x0);
              if (pOVar1[3].klass != (Object__Class *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          ((SettingsInputFieldSlider *)pOVar1[3].klass,StringLiteral_gamePointAmount
                           ,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGlobalSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGlobalSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).globalSoundInventoryControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SoundInventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pSVar1 != (SoundInventoryController *)0x0) {
    SoundInventoryController::SoundInventoryController_Initialize
              (pSVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateMovablesSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateMovablesSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).movablesSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pMVar1 = (MovablesSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar1,
                      MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pMVar1 != (MovablesSettings *)0x0) {
    MovablesSettings::MovablesSettings_Initialize(pMVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateRespawnSetting(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRespawnSetting
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).respawnSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pRVar1 = (RespawnSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pRVar1,
                      RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pRVar1 != (RespawnSettings *)0x0) {
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
    this_00 = (pRVar1->fields).settingsBase;
    (pRVar1->fields).woID = woID;
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_Initialize_1
                (this_00,woID,root,StringLiteral_Respawn,(MethodInfo *)0x0);
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_04 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_04,woID,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar2->fields).data;
          value = 0x1e;
          if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              (this_01,(Object *)StringLiteral_respawnTime,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            (pRVar1->fields).isRespawnActive = bVar3;
            if (bVar3 != 0) {
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (this_01,(Object *)StringLiteral_respawnTime,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
              if (TVar4.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar6 = (int32_t *)func_?();
              value = *piVar6;
            }
            this_02 = (pRVar1->fields).respawnTimeSlider;
            if (this_02 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_02,StringLiteral_respawnTime,value,0x1e,0x708,(MethodInfo *)0x0);
              this_03 = (pRVar1->fields).respawnTimeInputField;
              if (this_03 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          (this_03,StringLiteral_respawnTime,value,(MethodInfo *)0x0);
                RespawnSettings::RespawnSettings_SetRespawnUIVisibility
                          (pRVar1,(pRVar1->fields).isRespawnActive,(MethodInfo *)0x0);
                (pRVar1->fields).isInitialized = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateRotatorSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRotatorSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).rotatorSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pRVar1 = (RotatorSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pRVar1,
                      RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pRVar1 != (RotatorSettings *)0x0) {
    RotatorSettings::RotatorSettings_Initialize(pRVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateSettingsDialog(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,woID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      this_00 = (SettingsFactory *)(pMVar1->fields).type;
      SettingsFactory_CreateSettingsDialog_2
                (this_00,0,(WorldObjectType__Enum)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateSettingsDialog(Int32, UseRequirementType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_1
               (SettingsFactory *this,int32_t woID,UseRequirementType__Enum requirementType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&
                    LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                   );
    func_?(&
                    StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                   );
    func_?(&
                    TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  switch(requirementType) {
  case UseRequirementType__Enum_Level:
    pLVar1 = (this->fields).levelRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pLVar1 = (LevelRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pLVar1,
                        LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pLVar1 != (LevelRequirementSettings *)0x0) {
      LevelRequirementSettings::LevelRequirementSettings_Initialize
                (pLVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_GameCoin:
    original = (this->fields).gameCoinRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&StringLiteral_gameCoinAmount);
        func_?(&StringLiteral_Game_Coin_Requirement);
        cRam_? = '\x01';
      }
      this_00 = pOVar3[2].klass;
      header = TM::TM__(StringLiteral_Game_Coin_Requirement,(MethodInfo *)0x0);
      if (this_00 != (Object__Class *)0x0) {
        SettingsBase::SettingsBase_Initialize_1
                  ((SettingsBase *)this_00,woID,pGVar2,header,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
            (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_02,woID,(MethodInfo *)0x0), pMVar4 != (MVWorldObject *)0x0))
           && (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         (pMVar4->fields).data,
              this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_gameCoinAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar5 == 0) {
            requirementType = UseRequirementType__Enum_Level;
            value = (Object *)func_?(TypeInfo__System__Int32,&requirementType);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gameCoinAmount,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_01,(Object *)StringLiteral_gameCoinAmount,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          value_01 = mscorlib.dll::System::Convert::Convert_ToInt32
                               (value_00.m_Index,(MethodInfo *)0x0);
          if ((SettingsSlider *)pOVar3[2].monitor != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize_1
                      ((SettingsSlider *)pOVar3[2].monitor,StringLiteral_gameCoinAmount,value_01,0,
                       10000,(MethodInfo *)0x0);
            if (pOVar3[3].klass != (Object__Class *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                        ((SettingsInputFieldSlider *)pOVar3[3].klass,StringLiteral_gameCoinAmount,
                         value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    break;
  case UseRequirementType__Enum_Star:
    pSVar6 = (this->fields).starsRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar6 = (StarsRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pSVar6,
                        StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pSVar6 != (StarsRequirementSettings *)0x0) {
      StarsRequirementSettings::StarsRequirementSettings_Initialize
                (pSVar6,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_Team:
    pTVar7 = (this->fields).teamRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar7 = (TeamRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pTVar7,
                        TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (TeamRequirementSettings *)0x0) {
      TeamRequirementSettings::TeamRequirementSettings_Initialize
                (pTVar7,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_GameRank:
    pGVar8 = (this->fields).gameRankRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar8 = (GameRankRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar8,
                        GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar8 != (GameRankRequirementSettings *)0x0) {
      GameRankRequirementSettings::GameRankRequirementSettings_Initialize
                (pGVar8,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_RewardedAd:
    pRVar9 = (this->fields).rewardedAdRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pRVar9 = (RewardedAdRequirementSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pRVar9,
                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pRVar9 != (RewardedAdRequirementSettings *)0x0) {
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings::
      RewardedAdRequirementSettings_Initialize(pRVar9,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    return;
  }
  uVar10 = func_?(&stack0xfffffff4);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void CreateSettingsDialog(Int32, WorldObjectType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_2
               (SettingsFactory *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                   );
    func_?(&
                    CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                   );
    func_?(&
                    CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                   );
    func_?(&
                    CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                   );
    func_?(&
                    CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                   );
    func_?(&
                    FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                   );
    func_?(&
                    GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                   );
    func_?(&
                    GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                   );
    func_?(&
                    GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                   );
    func_?(&
                    KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                   );
    func_?(&
                    LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                   );
    func_?(&
                    MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                   );
    func_?(&
                    ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                   );
    func_?(&
                    OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                   );
    func_?(&
                    PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                   );
    func_?(&
                    PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                   );
    func_?(&
                    PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                   );
    func_?(&
                    ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                   );
    func_?(&
                    SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                   );
    func_?(&
                    SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                   );
    func_?(&
                    SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                   );
    func_?(&
                    SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                   );
    func_?(&
                    SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                   );
    func_?(&
                    TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                   );
    func_?(&
                    TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                   );
    func_?(&
                    ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                   );
    func_?(&
                    TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                   );
    func_?(&
                    WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                   );
    func_?(&
                    WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsFactory____c__DisplayClass58_0);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_Oculus_Kill_Limit);
    func_?(&StringLiteral_WorldObjectType__);
    func_?(&StringLiteral__has_no_settings_dialogue_);
    func_?(&StringLiteral_Kill_Limit);
    cRam_? = '\x01';
  }
  pMVar1 = (MVDoorBlueprint__Class *)
            func_?(TypeInfo__SettingsFactory____c__DisplayClass58_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pMVar1,(MethodInfo *)0x0);
  if (0x41 < (int)worldObjectType) {
    if ((int)worldObjectType < 0x87) {
      if (worldObjectType == WorldObjectType__Enum_WorldObjectSpawnerVehicleEnergy) {
        pVVar2 = (this->fields).vehicleEnergySettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pVVar2 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar2,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        uVar4 = 0;
        pMVar1 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pVVar2 != (VehicleEnergySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar2,0,pGVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (worldObjectType != WorldObjectType__Enum_AvatarSpawnRoleCreator) goto code_?;
        unaff_EBX = (Link__Array *)(this->fields).spawnRoleEditorPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pIVar5 = (Int32__Array *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)unaff_EBX,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        uVar4 = 0;
        unaff_EDI = this;
        if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Fields *)
          &(pMVar1->_0).name)->_buckets = pIVar5;
          func_?();
          pIVar5 = ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Fields *)
                    &(pMVar1->_0).name)->_buckets;
          uVar4 = 0;
          if (pIVar5 != (Int32__Array *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)pIVar5,0,(MethodInfo *)0x0);
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pMVar1,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
      goto code_?;
    }
    if (worldObjectType == WorldObjectType__Enum_ModelTransparency) {
      pOVar6 = (this->fields).objectTransparencySettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar6 = (ObjectTransparencySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar6,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pOVar6 != (ObjectTransparencySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar6,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(worldObjectType) {
    case WorldObjectType__Enum_CameraSettings:
      pCVar7 = (this->fields).cameraBoxSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar7 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar7,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pCVar7 != (CameraBoxSettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
        CameraBoxSettings_Initialize(pCVar7,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_GravityCube:
    case WorldObjectType__Enum_GravityCube|WorldObjectType__Enum_CubeModel:
    case WorldObjectType__Enum_GameCoin:
    case WorldObjectType__Enum_Theme:
    case WorldObjectType__Enum_Door:
    case WorldObjectType__Enum_PickupMeleeWeapon:
    case WorldObjectType__Enum_PickupCostume:
    case WorldObjectType__Enum_PickupCustomGun:
    case WorldObjectType__Enum_Caspar15:
    case WorldObjectType__Enum_ShrinkGun:
    case WorldObjectType__Enum_Thomas4:
    case WorldObjectType__Enum_CollectTheItemCollectableInstance:
    case WorldObjectType__Enum_CollectTheItem:
      goto code_?;
    case WorldObjectType__Enum_GameCoinChest:
      pGVar8 = (this->fields).gameCoinChestSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar8 = (GameCoinChestSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar8,
                           GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pGVar8 != (GameCoinChestSettings *)0x0) {
        GameCoinChestSettings::GameCoinChestSettings_Initialize(pGVar8,0,pGVar3,(MethodInfo *)0x0)
        ;
        return;
      }
      break;
    case WorldObjectType__Enum_BlueprintDoor:
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar4 = 0;
      if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
        pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar9,woID,(MethodInfo *)0x0);
        pMVar1 = TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
        uVar4 = 0;
        if (pMVar10 != (MVWorldObject *)0x0) {
          bVar11 = (pMVar10->klass->_1).naturalAligment;
          bVar12 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
          uVar4 = SBORROW1(bVar11,bVar12);
          if ((bVar11 < bVar12) ||
             (pMVar13 = (MVDoorBlueprint__Class *)
                        (pMVar10->klass->_1).typeHierarchy
                        [(TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment -
                         1],
             uVar4 = SBORROW4((int)pMVar13,(int)TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint
                              ), pMVar13 != TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)) {
            func_?();
          }
          else {
            pLVar14 = pMVar10[2].fields.outputLinkRefs;
            uVar4 = 0;
            if (pLVar14 != (List_1_MV_WorldObject_Link_ *)0x0) {
              unaff_EBX = (pLVar14->fields)._items;
              pDVar15 = (this->fields).doorSettingsPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pDVar15 = (DoorSettings *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pDVar15,
                                   UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                                  );
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              uVar4 = 0;
              unaff_EDI = (SettingsFactory *)0x0;
              pMVar1 = (MVDoorBlueprint__Class *)this;
              if (pDVar15 != (DoorSettings *)0x0) {
                UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
                DoorSettings_Initialize(pDVar15,(int32_t)unaff_EBX,pGVar3,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      break;
    case WorldObjectType__Enum_BlueprintMeleeWeapon:
    case WorldObjectType__Enum_BlueprintCostume:
    case WorldObjectType__Enum_BlueprintCustomGun:
      SettingsFactory_CreateEditablePickupItemsSettings(this,woID,(MethodInfo *)0x0);
      return;
    case WorldObjectType__Enum_TeamEditor:
      pTVar16 = (this->fields).teamEditorSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pTVar16 = (TeamEditorSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar16,
                           TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pTVar16 != (TeamEditorSettings *)0x0) {
        TeamEditorSettings::TeamEditorSettings_Initialize(pTVar16,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_TriggerCube:
      pTVar17 = (this->fields).triggerCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pTVar17 = (TriggerCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar17,
                           TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pTVar17 != (TriggerCubeSettings *)0x0) {
        TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar17,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_ShootableButton:
      pSVar18 = (this->fields).shootablePlateSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pSVar18 = (ShootablePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar18,
                           ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pSVar18 != (ShootablePlateSettings *)0x0) {
        ShootablePlateSettings::ShootablePlateSettings_Initialize
                  (pSVar18,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_UseLever:
      original = (this->fields).leverSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      unaff_EDI = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                            );
      pMVar1 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      if (unaff_EDI == (SettingsFactory *)0x0) break;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
      uVar4 = 0;
      if (pTVar19 == (Toggle *)0x0) break;
      SettingsBase::SettingsBase_Initialize
                ((SettingsBase *)pTVar19,0,(GameObject *)pMVar1,
                 MVWorldObjectDocumentationType__Enum_Lever,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar4 = 0;
      pMVar1 = (MVDoorBlueprint__Class *)0x0;
      if (pMVar9 == (MVWorldObjectClientManager *)0x0) break;
      pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar9,0,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pMVar10 == (MVWorldObject *)0x0) break;
      pMVar1 = (MVDoorBlueprint__Class *)(pMVar10->fields).data;
      unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
      uVar4 = 0;
      if (pMVar1 == (MVDoorBlueprint__Class *)0x0) break;
      TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar1,
                          (Object *)StringLiteral_beginActivated,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = 0;
      if ((unaff_EDI == (SettingsFactory *)0x0) || (uVar4 = 0, TVar20.m_Index == 0)) break;
      pIVar21 = (TypeInfo__System__Boolean->_0).element_class;
      uVar4 = SBORROW4((int)*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20),(int)pIVar21);
      woID = (int32_t)unaff_EBX;
      if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) == pIVar21) {
        pbVar22 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize
                  ((SettingsToggle *)unaff_EDI,StringLiteral_beginActivated,*pbVar22,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case WorldObjectType__Enum_CollectTheItemDropOff:
      pCVar23 = (this->fields).collectTheItemDropoffSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar23 = (CollectTheItemDropoffSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar23,
                           CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pCVar23 != (CollectTheItemDropoffSettings *)0x0) {
        CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                  (pCVar23,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CollectTheItemCollectable:
      pCVar24 = (this->fields).collectTheItemSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar24 = (CollectTheItemSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar24,
                           CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pCVar24 != (CollectTheItemSettings *)0x0) {
        CollectTheItemSettings::CollectTheItemSettings_Initialize
                  (pCVar24,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_WindTurbine:
      pWVar25 = (this->fields).windTurbineSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pWVar25 = (WindTurbineSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar25,
                           WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pWVar25 != (WindTurbineSettings *)0x0) {
        WindTurbineSettings::WindTurbineSettings_Initialize(pWVar25,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_GlobalSoundEmitter:
      pGVar26 = (this->fields).globalSoundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar26 = (GlobalSoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar26,
                           GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pGVar26 != (GlobalSoundEmitterSettings *)0x0) {
        GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                  (pGVar26,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if (worldObjectType != WorldObjectType__Enum_GamePointChest) goto code_?;
      original_00 = (this->fields).gamePointChestSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      unaff_EDI = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                            );
      pMVar1 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      if (unaff_EDI != (SettingsFactory *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
        uVar4 = 0;
        if (pTVar19 != (Toggle *)0x0) {
          SettingsBase::SettingsBase_Initialize_1
                    ((SettingsBase *)pTVar19,0,(GameObject *)pMVar1,StringLiteral_Crystal_Reward,
                     (MethodInfo *)0x0);
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          uVar4 = 0;
          pMVar1 = (MVDoorBlueprint__Class *)0x0;
          if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
            pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar9,0,(MethodInfo *)0x0);
            uVar4 = 0;
            if (pMVar10 != (MVWorldObject *)0x0) {
              pMVar1 = (MVDoorBlueprint__Class *)(pMVar10->fields).data;
              uVar4 = 0;
              if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
                bVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   pMVar1,(Object *)StringLiteral_gamePointAmount,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                  );
                if (bVar27 == 0) {
                  pOVar28 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)pMVar1,
                             (Object *)StringLiteral_gamePointAmount,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                }
                TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    pMVar1,(Object *)StringLiteral_gamePointAmount,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar4 = 0;
                if (TVar20.m_Index != 0) {
                  pIVar21 = (TypeInfo__System__Int32->_0).element_class;
                  uVar4 = SBORROW4((int)*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20),
                                    (int)pIVar21);
                  woID = (int32_t)unaff_EBX;
                  if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) != pIVar21)
                  goto code_?;
                  puVar29 = (undefined4 *)func_?();
                  this_00 = (SettingsSlider *)(unaff_EDI->fields).worldObjectType;
                  uVar4 = 0;
                  if (this_00 != (SettingsSlider *)0x0) {
                    pMVar1 = (MVDoorBlueprint__Class *)*puVar29;
                    SettingsSlider::SettingsSlider_Initialize_1
                              (this_00,StringLiteral_gamePointAmount,(int32_t)pMVar1,2,100,
                               (MethodInfo *)0x0);
                    this_01 = (unaff_EDI->fields).materialsController;
                    uVar4 = 0;
                    if (this_01 != (MaterialsController *)0x0) {
                      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                                ((SettingsInputFieldSlider *)this_01,StringLiteral_gamePointAmount,
                                 (int32_t)pMVar1,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  if ((int)worldObjectType < 0xe) {
    if (worldObjectType == WorldObjectType__Enum_PointLight) {
      pPVar30 = (this->fields).pointLightSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar30 = (PointLightSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar30,
                           PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pPVar30 != (PointLightSettings *)0x0) {
        PointLightSettings::PointLightSettings_Initialize(pPVar30,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (worldObjectType != WorldObjectType__Enum_SoundEmitter) goto code_?;
      pSVar31 = (this->fields).soundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pSVar31 = (SoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar31,
                           SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pSVar31 != (SoundEmitterSettings *)0x0) {
        SoundEmitterSettings::SoundEmitterSettings_Initialize(pSVar31,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  switch(worldObjectType) {
  case WorldObjectType__Enum_ToggleBox:
    pTVar32 = (this->fields).toggleBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar32 = (ToggleBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar32,
                         ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pTVar32 != (ToggleBoxSettings *)0x0) {
      ToggleBoxSettings::ToggleBoxSettings_Initialize(pTVar32,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Negate:
  case WorldObjectType__Enum_And:
  case WorldObjectType__Enum_Explosives:
  case WorldObjectType__Enum_Teleporter:
  case WorldObjectType__Enum_Goal:
  case WorldObjectType__Enum_PickupItemHealthPack:
  case WorldObjectType__Enum_PickupItemCenterGun:
  case WorldObjectType__Enum_CubeModelTerrainFineGrained:
  case WorldObjectType__Enum_PickupItemImpulseGun:
  case WorldObjectType__Enum_PickupItemBazookaGun:
  case WorldObjectType__Enum_PickupItemRailGun:
  case WorldObjectType__Enum_PickupItemSpawner:
code_?:
    pSVar33 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar33 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WorldObjectType__,pSVar33,
                         StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar33,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_TextMsg:
    pMVar34 = (this->fields).messageBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar34 = (MessageBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar34,
                         MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pMVar34 != (MessageBoxSettings *)0x0) {
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar34,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Fire:
    pFVar35 = (this->fields).fireSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pFVar35 = (FireSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pFVar35,
                         FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pFVar35 != (FireSettings *)0x0) {
      FireSettings::FireSettings_Initialize(pFVar35,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Smoke:
    pSVar36 = (this->fields).smokeSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar36 = (SmokeSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar36,
                         SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pSVar36 != (SmokeSettings *)0x0) {
      SmokeSettings::SmokeSettings_Initialize(pSVar36,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_TimeTrigger:
    pTVar37 = (this->fields).timeTriggerSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar37 = (TimeTriggerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar37,
                         TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pTVar37 != (TimeTriggerSettings *)0x0) {
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar37,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_PressurePlate:
    original_01 = (this->fields).pressurePlateSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    unaff_EDI = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_01,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
    pMVar1 = (MVDoorBlueprint__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    if (unaff_EDI != (SettingsFactory *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
      uVar4 = 0;
      if (pTVar19 != (Toggle *)0x0) {
        SettingsBase::SettingsBase_Initialize
                  ((SettingsBase *)pTVar19,0,(GameObject *)pMVar1,
                   MVWorldObjectDocumentationType__Enum_PressurePlate,(MethodInfo *)0x0);
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        uVar4 = 0;
        pMVar1 = (MVDoorBlueprint__Class *)0x0;
        if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
          pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar9,0,(MethodInfo *)0x0);
          uVar4 = 0;
          if (pMVar10 != (MVWorldObject *)0x0) {
            pMVar1 = (MVDoorBlueprint__Class *)(pMVar10->fields).data;
            unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
            uVar4 = 0;
            if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
              TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  pMVar1,(Object *)StringLiteral_hide,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              uVar4 = 0;
              if ((unaff_EDI != (SettingsFactory *)0x0) && (uVar4 = 0, TVar20.m_Index != 0)) {
                pIVar21 = (TypeInfo__System__Boolean->_0).element_class;
                uVar4 = SBORROW4((int)*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20),(int)pIVar21)
                ;
                woID = (int32_t)unaff_EBX;
                if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) == pIVar21) {
                  pbVar22 = (bool *)func_?();
                  SettingsToggle::SettingsToggle_Initialize
                            ((SettingsToggle *)unaff_EDI,StringLiteral_hide,*pbVar22,
                             (MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
    break;
  case WorldObjectType__Enum_Skybox:
    pSVar38 = (this->fields).skyboxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar38 = (SkyboxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar38,
                         SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pSVar38 != (SkyboxSettings *)0x0) {
      SkyboxSettings::SkyboxSettings_Initialize(pSVar38,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_SpawnPointRed:
  case WorldObjectType__Enum_SpawnPointGreen:
  case WorldObjectType__Enum_SpawnPointYellow:
  case WorldObjectType__Enum_SpawnPointBlue:
    pSVar39 = (this->fields).spawnPointSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar39 = (SpawnPointSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar39,
                         SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pSVar39 != (SpawnPointSettings *)0x0) {
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar39,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_ModelToggle:
    pOVar40 = (this->fields).objectEnablerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar40 = (ObjectEnablerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pOVar40,
                         ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pOVar40 != (ObjectEnablerSettings *)0x0) {
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize(pOVar40,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_WaterPlane:
    pWVar41 = (this->fields).waterBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pWVar41 = (WaterBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pWVar41,
                         WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pWVar41 != (WaterBoxSettings *)0x0) {
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar41,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Blueprint:
    SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_PulseBox:
    pPVar42 = (this->fields).pulseBoxPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar42 = (PulseBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pPVar42,
                         PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                        );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    uVar4 = 0;
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)this;
    if (pPVar42 != (PulseBoxSettings *)0x0) {
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar42,0,pGVar3,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    switch(worldObjectType) {
    case WorldObjectType__Enum_PickupCubeGun:
      unaff_EDI = (SettingsFactory *)(this->fields).cubeGunSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = (CubeGunSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)unaff_EDI,
                           CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                          );
      uVar4 = 0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (this_02 != (CubeGunSettings *)0x0) {
        CubeGunSettings::CubeGunSettings_Initialize
                  (this_02,0,(this->fields).materialsController,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      goto code_?;
    case WorldObjectType__Enum_WorldObjectSpawnerVehicle:
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar4 = 0;
      if (pMVar9 == (MVWorldObjectClientManager *)0x0) break;
      pMVar13 = (MVDoorBlueprint__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar9,woID,(MethodInfo *)0x0);
      pMVar1 = pMVar13;
      unaff_EBX = (Link__Array *)woID;
      if (pMVar13 == (MVDoorBlueprint__Class *)0x0) {
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        uVar4 = SCARRY4((int)&stack0xfffffffc,4);
        break;
      }
      unaff_EDI = (SettingsFactory *)(pMVar13->_0).image;
      bVar11 = *(byte *)&(unaff_EDI->fields).gamePointChestSettingsPrefab;
      bVar12 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      uVar4 = SBORROW1(bVar11,bVar12);
      pLVar43 = (Link__Array *)woID;
      if ((bVar11 < bVar12) ||
         (pMVar44 = *(MVWorldObjectSpawnerVehicle__Class **)
                    ((int)(unaff_EDI->fields).cameraBoxSettingsPrefab +
                    (uint)(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment * 4 + -4),
         uVar4 = SBORROW4((int)pMVar44,(int)TypeInfo__MVWorldObjectSpawnerVehicle),
         pMVar44 != TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar4 = 0;
      if (pMVar9 == (MVWorldObjectClientManager *)0x0) break;
      unaff_EDI = (SettingsFactory *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar9,(int32_t)(pMVar13->vtable).get_Scale.methodPtr,
                             (MethodInfo *)0x0);
      pMVar13 = (MVDoorBlueprint__Class *)0x0;
      uVar4 = 0;
      pMVar1 = pMVar13;
      if (unaff_EDI == (SettingsFactory *)0x0) break;
      bVar11 = (((MVWorldObject__Class *)unaff_EDI->klass)->_1).naturalAligment;
      bVar12 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      uVar4 = SBORROW1(bVar11,bVar12);
      pMVar45 = TypeInfo__MVVehicleBase;
      if ((bVar12 <= bVar11) &&
         (pMVar46 = (MVVehicleBase__Class *)
                   (((MVWorldObject__Class *)unaff_EDI->klass)->_1).typeHierarchy
                   [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1],
         uVar4 = SBORROW4((int)pMVar46,(int)TypeInfo__MVVehicleBase),
         pMVar46 == TypeInfo__MVVehicleBase)) {
        iVar47 = func_?();
        pOVar28 = pORam0000009c;
        unaff_EDI = (SettingsFactory *)0x2c;
        if (iVar47 < 0x1b) {
          if (iVar47 == 0x19) {
            pOVar28 = pORam00000098;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
            ;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
              ;
            }
          }
          else {
            if (iVar47 != 0x1a) goto code_?;
            pOVar28 = pORam000000a0;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
            ;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
              ;
            }
          }
code_?:
          pMVar13 = (MVDoorBlueprint__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              (pOVar28,method_00);
        }
        else if ((iVar47 == 0x1f) || (iVar47 == 0x22)) {
          method_00 = 
          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
          ;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
            ;
          }
          goto code_?;
        }
code_?:
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar27 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pMVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar27 == 0) {
          return;
        }
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)0x2c,(MethodInfo *)0x0);
        uVar4 = 0;
        pMVar1 = (MVDoorBlueprint__Class *)0x0;
        if (pMVar13 != (MVDoorBlueprint__Class *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
          VehicleBaseSettings_Initialize
                    ((VehicleBaseSettings *)pMVar13,woID,pGVar3,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      goto code_?;
    case WorldObjectType__Enum_RoundCube:
      pRVar48 = (this->fields).roundCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pRVar48 = (RoundCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pRVar48,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pRVar48 != (RoundCubeSettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar48,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_AdvancedGhost:
      pOVar49 = (this->fields).oculusSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar49 = (OculusSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar49,
                           OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pOVar49 != (OculusSettings *)0x0) {
        OculusSettings::OculusSettings_Initialize(pOVar49,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_KillLimit:
      pKVar50 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar50 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar50,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar1 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar33 = TM::TM__(StringLiteral_Kill_Limit,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pKVar50 != (KillLimitSettings *)0x0) {
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar50,0,(GameObject *)pMVar1,pSVar33,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_OculusKillLimit:
      pKVar50 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar50 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar50,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar1 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar33 = TM::TM__(StringLiteral_Oculus_Kill_Limit,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pKVar50 != (KillLimitSettings *)0x0) {
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar50,0,(GameObject *)pMVar1,pSVar33,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CountingCube:
      pCVar51 = (this->fields).countingCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar51 = (CountingCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar51,
                           CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                          );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar4 = 0;
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)this;
      if (pCVar51 != (CountingCubeSettings *)0x0) {
        CountingCubeSettings::CountingCubeSettings_Initialize(pCVar51,0,pGVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  woID = (int32_t)unaff_EBX;
code_?:
  func_?();
  pMVar45 = extraout_EDX;
  pMVar13 = pMVar1;
code_?:
  func_?();
  pLVar43 = (Link__Array *)woID;
  this = unaff_EDI;
  woID = (int32_t)pMVar45;
code_?:
  uVar52 = func_?();
  pcVar53 = (char *)uVar52;
  bVar11 = (byte)uVar52;
  bVar12 = (byte)((uint)pLVar43 >> 8);
  if ((bool)uVar4) {
    bRam_? = bRam_? ^ bVar12;
    *pcVar53 = *pcVar53 + bVar11;
    *extraout_ECX = (int)(pcVar53 + *extraout_ECX);
  }
  cVar54 = (char)extraout_ECX + bVar11 + (pcVar53 < (char *)0x3d3cd110);
  cVar55 = (char)((ulonglong)uVar52 >> 0x20) + cVar54 + (unaff_EDI < pSRam3d2c1210);
  puVar56 = (uint *)CONCAT31((int3)((ulonglong)uVar52 >> 0x28),cVar55);
  bVar57 = cVar54 + (char)((ulonglong)uVar52 >> 8) + (bVar11 < 0x3d);
  pbVar58 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar57);
  cVar54 = (char)((ulonglong)uVar52 >> 0x28);
  cRam_? = cRam_? + cVar54 + ((byte)(bVar11 - 0x3d) < 0x3d);
  uVar59 = CONCAT31((int3)((ulonglong)uVar52 >> 8),bVar11 + 0x86) + 0xd222efc3;
  bVar60 = (byte)uVar59;
  bVar11 = (byte)pLVar43 + bVar60;
  uVar61 = CONCAT31((int3)(uVar59 >> 8),
                    bVar60 + (9 < (bVar60 & 0xf) | in_AF) * -6 +
                    (0x99 < bVar60 ||
                    (CARRY1((byte)pLVar43,bVar60) || CARRY1(bVar11,uVar59 < 0x3d2f6f10))) * -0x60);
  *(char *)(uVar61 + 0x30) =
       *(char *)(uVar61 + 0x30) + (char)((uint)extraout_ECX >> 8) + (uVar61 < 0x3d301710);
  *puVar56 = *puVar56 + uVar61;
  *(uint *)pbVar58 = *(int *)pbVar58 + uVar61;
  uVar62 = (undefined3)(uVar61 + *(int *)pbVar58 >> 8);
  bVar60 = (char)(uVar61 + *(int *)pbVar58) + 3;
  iRam_? = iRam_? + CONCAT31(uVar62,bVar60);
  *pbVar58 = *pbVar58 | bVar57;
  bVar60 = bVar60 | *pbVar58;
  piVar63 = (int *)((uint)pbVar58 | *(uint *)(CONCAT31(uVar62,bVar60) + (int)puVar56 * 4));
  cVar64 = bVar11 + (uVar59 < 0x3d2f6f10) + cVar54 + (bVar60 < 0x3d);
  pcVar65 = (char *)CONCAT31((int3)((uint)pLVar43 >> 8),cVar64);
  pcVar53 = (char *)(CONCAT31(uVar62,bVar60) + -0x16efc2cc);
  bRam_? = bVar60;
  *pcVar53 = *pcVar53 + cVar64;
  *(byte *)puVar56 = (char)*puVar56 + bVar12;
  pcVar66 = (char *)(CONCAT31(uVar62,bVar60) ^ 0x36c91000);
  pcVar53 = (char *)((int)&(pMVar13->_0).typeMetadataHandle + 3);
  *pcVar53 = *pcVar53 + (char)((uint)piVar63 >> 8) + (pcVar66 < (char *)0x3d371a10);
  *pcVar66 = *pcVar66 + cVar55 + (pcVar66 < (char *)0x3d37bf10);
  *pcVar66 = *pcVar66 + bVar60 + (bRam_? < bVar12);
  *piVar63 = (int)(pcVar66 + *piVar63);
  *puVar56 = (uint)(pcVar66 + *puVar56);
  pbVar58 = (byte *)(pcVar66 + *(int *)(pcVar66 + 0x1010101));
  (pMVar13->_0).image = (Il2CppImage *)(pbVar58 + (int)(pMVar13->_0).image);
  *piVar63 = (int)(pbVar58 + *piVar63);
  *piVar63 = (int)(pbVar58 + *piVar63);
  *pbVar58 = *pbVar58 | (byte)piVar63;
  *pbVar58 = *pbVar58 | (byte)piVar63;
  *puVar56 = *puVar56 | (uint)piVar63;
  pcVar53 = (char *)(CONCAT31((int3)(((uint)piVar63 | *(uint *)(pbVar58 + (int)puVar56 * 4)) >> 8),
                              (char)((uint)piVar63 | *(uint *)(pbVar58 + (int)puVar56 * 4)) +
                              cVar55 * '\x02' + (pbVar58 < (byte *)0x3d3cd110) +
                              (bRam_? < bVar12)) + 0x3a);
  *pcVar53 = *pcVar53 + cVar54 + ((byte)pbVar58 < 0x3d);
  *pcVar65 = *pcVar65 + cVar55 + ((byte)pbVar58 < 0x3d);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pSVar67 = (this->fields).soundInventoryControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar67 = (SoundInventoryController *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pSVar67,
                       SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                      );
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pSVar67 == (SoundInventoryController *)0x0) {
    func_?();
    pcVar68 = (code *)swi(3);
    (*pcVar68)();
    return;
  }
  SoundInventoryController::SoundInventoryController_Initialize
            (pSVar67,woID,pGVar3,(MethodInfo *)0x0);
  return;
}


/* Void CreateSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundInventoryControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SoundInventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pSVar1 != (SoundInventoryController *)0x0) {
    SoundInventoryController::SoundInventoryController_Initialize
              (pSVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_OnValidate
               (SettingsFactory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if ((bVar1 == 0) && ((this->fields).previewSettingsPopup != 0)) {
    SettingsFactory_CreateSettingsDialog_2(this,-1,(this->fields).worldObjectType,(MethodInfo *)0x0)
    ;
  }
  return;
}

