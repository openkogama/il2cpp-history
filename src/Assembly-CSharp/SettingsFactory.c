
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
                    MethodInfo__SettingsFactory____c__DisplayClass63_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsFactory____c__DisplayClass63_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsFactory____c__DisplayClass63_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).changeScaleSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      CubeModelPopup::CubeModelPopup_Initialize
                ((CubeModelPopup *)value[1].klass,0x15,woID,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__SettingsFactory____c__DisplayClass63_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
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
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
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
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
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
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
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
                    MethodInfo__SettingsFactory____c__DisplayClass57_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsFactory____c__DisplayClass57_0);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_Oculus_Kill_Limit);
    func_?(&StringLiteral_WorldObjectType__);
    func_?(&StringLiteral__has_no_settings_dialogue_);
    func_?(&StringLiteral_Kill_Limit);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsFactory____c__DisplayClass57_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (0x77 < (int)worldObjectType) {
    pCVar2 = (CultureInfo__Class *)this;
    if ((int)worldObjectType < 0x89) {
      if (worldObjectType == WorldObjectType__Enum_AvatarSpawnRoleCreator) {
        original_02 = (this->fields).spawnRoleEditorPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar3 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_02,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        bVar4 = 0;
        cVar5 = (int)pOVar1 < 0;
        cVar6 = pOVar1 == (Object *)0x0;
        cVar7 = (POPCOUNT((uint)pOVar1 & 0xff) & 1U) == 0;
        if (!(bool)cVar6) {
          pOVar1[1].klass = pOVar3;
          func_?();
          pOVar3 = pOVar1[1].klass;
          bVar4 = 0;
          cVar5 = (int)pOVar3 < 0;
          cVar6 = pOVar3 == (Object__Class *)0x0;
          cVar7 = (POPCOUNT((uint)pOVar3 & 0xff) & 1U) == 0;
          if (!(bool)cVar6) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)pOVar3,0,(MethodInfo *)0x0);
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar1,
                       MethodInfo__SettingsFactory____c__DisplayClass57_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar8,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
      else {
        if (worldObjectType != WorldObjectType__Enum_ModelTransparency) goto code_?;
        pOVar9 = (this->fields).objectTransparencySettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar9 = (ObjectTransparencySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pOVar9,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                            );
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = (int)pOVar9 < 0;
        cVar6 = pOVar9 == (ObjectTransparencySettings *)0x0;
        cVar7 = (POPCOUNT((uint)pOVar9 & 0xff) & 1U) == 0;
        pCVar2 = (CultureInfo__Class *)0x0;
        if (!(bool)cVar6) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
          ObjectTransparencySettings_Initialize(pOVar9,0,pGVar8,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if (worldObjectType == WorldObjectType__Enum_CameraSettings) {
      pCVar10 = (this->fields).cameraBoxSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar10 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar10,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pCVar10 < 0;
      cVar6 = pCVar10 == (CameraBoxSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pCVar10 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
        CameraBoxSettings_Initialize(pCVar10,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(worldObjectType) {
    case WorldObjectType__Enum_GameCoinChest:
      pGVar11 = (this->fields).gameCoinChestSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar11 = (GameCoinChestSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar11,
                           GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pGVar11 < 0;
      cVar6 = pGVar11 == (GameCoinChestSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pGVar11 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        GameCoinChestSettings::GameCoinChestSettings_Initialize(pGVar11,0,pGVar8,(MethodInfo *)0x0)
        ;
        return;
      }
      break;
    case WorldObjectType__Enum_Theme:
    case WorldObjectType__Enum_Door:
    case WorldObjectType__Enum_PickupMeleeWeapon:
    case WorldObjectType__Enum_PickupCostume:
    case WorldObjectType__Enum_Caspar13:
    case WorldObjectType__Enum_Caspar14:
    case WorldObjectType__Enum_Caspar15:
    case WorldObjectType__Enum_ShrinkGun:
    case WorldObjectType__Enum_Thomas4:
    case WorldObjectType__Enum_CollectTheItemCollectableInstance:
    case WorldObjectType__Enum_CollectTheItem:
      goto code_?;
    case WorldObjectType__Enum_DoorBlueprint:
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pMVar12 < 0;
      cVar6 = pMVar12 == (MVWorldObjectClientManager *)0x0;
      cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
      pCVar2 = unaff_EDI;
      if (!(bool)cVar6) {
        pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar12,woID,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = (int)pMVar13 < 0;
        cVar6 = pMVar13 == (MVWorldObject *)0x0;
        cVar7 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
        if (!(bool)cVar6) {
          bVar14 = (pMVar13->klass->_1).naturalAligment;
          bVar15 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
          bVar4 = bVar14 < bVar15;
          cVar7 = bVar14 - bVar15;
          cVar5 = cVar7 < '\0';
          cVar6 = cVar7 == '\0';
          cVar7 = (POPCOUNT(cVar7) & 1U) == 0;
          if (!(bool)bVar4) {
            pMVar16 = (MVDoorBlueprint__Class *)
                     (pMVar13->klass->_1).typeHierarchy
                     [(TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment - 1]
            ;
            bVar4 = pMVar16 < TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
            uVar17 = (int)pMVar16 - (int)TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
            cVar5 = (int)uVar17 < 0;
            cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
            cVar6 = false;
            if (uVar17 == 0) {
              pLVar18 = pMVar13[2].fields.outputLinkRefs;
              bVar4 = 0;
              cVar5 = (int)pLVar18 < 0;
              cVar6 = pLVar18 == (List_1_MV_WorldObject_Link_ *)0x0;
              cVar7 = (POPCOUNT((uint)pLVar18 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
                pLVar19 = (pLVar18->fields)._items;
                pDVar20 = (this->fields).doorSettingsPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar20 = (DoorSettings *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)pDVar20,
                                     UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                                    );
                pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                bVar4 = 0;
                cVar5 = (int)pDVar20 < 0;
                cVar6 = pDVar20 == (DoorSettings *)0x0;
                cVar7 = (POPCOUNT((uint)pDVar20 & 0xff) & 1U) == 0;
                pCVar2 = (CultureInfo__Class *)0x0;
                if (!(bool)cVar6) {
                  UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
                  DoorSettings_Initialize(pDVar20,(int32_t)pLVar19,pGVar8,(MethodInfo *)0x0);
                  return;
                }
              }
              break;
            }
          }
code_?:
          func_?();
          pCVar2 = unaff_EDI;
        }
      }
      break;
    case WorldObjectType__Enum_PickupMeleeWeaponBlueprint:
    case WorldObjectType__Enum_PickupCostumeBlueprint:
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                       );
        func_?(&
                        UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                       );
        func_?(&
                        UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pMVar12 < 0;
      cVar6 = pMVar12 == (MVWorldObjectClientManager *)0x0;
      cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
      pCVar2 = unaff_EDI;
      if (!(bool)cVar6) {
        pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar12,woID,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = (int)pMVar13 < 0;
        cVar6 = pMVar13 == (MVWorldObject *)0x0;
        cVar7 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
        pCVar2 = unaff_EDI;
        if (!(bool)cVar6) {
          bVar14 = (pMVar13->klass->_1).naturalAligment;
          bVar15 = (
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                  ->_1).naturalAligment;
          bVar4 = bVar14 < bVar15;
          cVar7 = bVar14 - bVar15;
          cVar5 = cVar7 < '\0';
          cVar6 = cVar7 == '\0';
          cVar7 = (POPCOUNT(cVar7) & 1U) == 0;
          if (!(bool)bVar4) {
            pMVar21 = (MVEditablePickupItemBaseBlueprint__Class *)
                     (pMVar13->klass->_1).typeHierarchy
                     [(
                      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                      ->_1).naturalAligment - 1];
            bVar4 = pMVar21 < 
                     TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ;
            uVar17 = (int)pMVar21 -
                     (int)
                     TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ;
            cVar5 = (int)uVar17 < 0;
            cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
            cVar6 = false;
            if (uVar17 == 0) {
              pLVar18 = pMVar13[2].fields.outputLinkRefs;
              bVar4 = 0;
              cVar5 = (int)pLVar18 < 0;
              cVar6 = pLVar18 == (List_1_MV_WorldObject_Link_ *)0x0;
              cVar7 = (POPCOUNT((uint)pLVar18 & 0xff) & 1U) == 0;
              pCVar2 = unaff_EDI;
              if (!(bool)cVar6) {
                pOVar1 = pLVar18[10].fields._syncRoot;
                if (pOVar1 == (Object *)0x8) {
                  pMVar22 = (this->fields).meleeSettingsPrefab;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pMVar22 = (MeleeWeaponSettings *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)pMVar22,
                                       UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                                      );
                  pLVar19 = (pLVar18->fields)._items;
                  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  bVar4 = 0;
                  cVar5 = (int)pMVar22 < 0;
                  cVar6 = pMVar22 == (MeleeWeaponSettings *)0x0;
                  cVar7 = (POPCOUNT((uint)pMVar22 & 0xff) & 1U) == 0;
                  pCVar2 = (CultureInfo__Class *)this;
                  if (!(bool)cVar6) {
                    UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
                    MeleeWeaponSettings::MeleeWeaponSettings_Initialize
                              (pMVar22,(int32_t)pLVar19,pGVar8,(MethodInfo *)0x0);
                    return;
                  }
                }
                else {
                  if (pOVar1 != (Object *)0x3b) {
                    return;
                  }
                  pCVar23 = (this->fields).costumeSettingsPrefab;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar23 = (CostumeSettings *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)pCVar23,
                                       UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                                      );
                  pLVar19 = (pLVar18->fields)._items;
                  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  bVar4 = 0;
                  cVar5 = (int)pCVar23 < 0;
                  cVar6 = pCVar23 == (CostumeSettings *)0x0;
                  cVar7 = (POPCOUNT((uint)pCVar23 & 0xff) & 1U) == 0;
                  pCVar2 = (CultureInfo__Class *)this;
                  if (!(bool)cVar6) {
                    UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
                    CostumeSettings_Initialize(pCVar23,(int32_t)pLVar19,pGVar8,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              break;
            }
          }
          goto code_?;
        }
      }
      break;
    case WorldObjectType__Enum_TeamEditor:
      pTVar24 = (this->fields).teamEditorSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pTVar24 = (TeamEditorSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar24,
                           TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pTVar24 < 0;
      cVar6 = pTVar24 == (TeamEditorSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pTVar24 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        TeamEditorSettings::TeamEditorSettings_Initialize(pTVar24,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_TriggerCube:
      pTVar25 = (this->fields).triggerCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pTVar25 = (TriggerCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar25,
                           TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pTVar25 < 0;
      cVar6 = pTVar25 == (TriggerCubeSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pTVar25 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar25,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_ShootableButton:
      original = (this->fields).shootablePlateSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                          );
      pCVar2 = (CultureInfo__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pOVar1 < 0;
      cVar6 = pOVar1 == (Object *)0x0;
      cVar7 = (POPCOUNT((uint)pOVar1 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pOVar3 = pOVar1[2].klass;
        bVar4 = 0;
        cVar5 = (int)pOVar3 < 0;
        cVar6 = pOVar3 == (Object__Class *)0x0;
        cVar7 = (POPCOUNT((uint)pOVar3 & 0xff) & 1U) == 0;
        if (!(bool)cVar6) {
          pCVar26 = (CultureInfo__Class *)0x0;
          SettingsBase::SettingsBase_Initialize
                    ((SettingsBase *)pOVar3,0,(GameObject *)pCVar2,
                     MVWorldObjectDocumentationType__Enum_ShootableButton,(MethodInfo *)0x0);
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = (int)pMVar12 < 0;
          cVar6 = pMVar12 == (MVWorldObjectClientManager *)0x0;
          cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
          pCVar2 = pCVar26;
          if (!(bool)cVar6) {
            pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar12,0,(MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = (int)pMVar13 < 0;
            cVar6 = pMVar13 == (MVWorldObject *)0x0;
            cVar7 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              pDVar27 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (pMVar13->fields).data;
              bVar4 = 0;
              cVar5 = (int)pDVar27 < 0;
              cVar6 = pDVar27 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0
              ;
              cVar7 = (POPCOUNT((uint)pDVar27 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
                TVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (pDVar27,(Object *)StringLiteral_duration,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?();
                }
                pCVar2 = (CultureInfo__Class *)
                          mscorlib.dll::System::Globalization::CultureInfo::
                          CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__System__Convert);
                }
                value_00 = mscorlib.dll::System::Convert::Convert_ToSingle
                                     ((Object *)TVar28.m_Index,(IFormatProvider *)pCVar2,
                                      (MethodInfo *)0x0);
                pSVar29 = (SettingsSlider *)pOVar1[2].monitor;
                bVar4 = 0;
                cVar5 = (int)pSVar29 < 0;
                cVar6 = pSVar29 == (SettingsSlider *)0x0;
                cVar7 = (POPCOUNT((uint)pSVar29 & 0xff) & 1U) == 0;
                if (!(bool)cVar6) {
                  SettingsSlider::SettingsSlider_Initialize
                            (pSVar29,StringLiteral_duration,value_00,0.5,30.0,(MethodInfo *)0x0);
                  pOVar3 = pOVar1[3].klass;
                  bVar4 = 0;
                  cVar5 = (int)pOVar3 < 0;
                  cVar6 = pOVar3 == (Object__Class *)0x0;
                  cVar7 = (POPCOUNT((uint)pOVar3 & 0xff) & 1U) == 0;
                  if (!(bool)cVar6) {
                    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                              ((SettingsInputFieldSlider *)pOVar3,StringLiteral_duration,value_00,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      break;
    case WorldObjectType__Enum_UseLever:
      original_00 = (this->fields).leverSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar2 = (CultureInfo__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pCVar2 < 0;
      cVar7 = (POPCOUNT((uint)pCVar2 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pCVar2 == (CultureInfo__Class *)0x0) break;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar30 = (Toggle *)(pCVar2->_0).byval_arg.data.typeHandle;
      bVar4 = 0;
      cVar5 = (int)pTVar30 < 0;
      cVar7 = (POPCOUNT((uint)pTVar30 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pTVar30 == (Toggle *)0x0) break;
      SettingsBase::SettingsBase_Initialize
                ((SettingsBase *)pTVar30,0,pGVar8,MVWorldObjectDocumentationType__Enum_Lever,
                 (MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pMVar12 < 0;
      cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pMVar12 == (MVWorldObjectClientManager *)0x0) break;
      pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar12,0,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pMVar13 < 0;
      cVar7 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pMVar13 == (MVWorldObject *)0x0) break;
      pDVar27 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar13->fields).data;
      pCVar2 = *(CultureInfo__Class **)&(pCVar2->_0).byval_arg.attrs;
      bVar4 = 0;
      cVar5 = (int)pDVar27 < 0;
      cVar7 = (POPCOUNT((uint)pDVar27 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pDVar27 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
      TVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (pDVar27,(Object *)StringLiteral_beginActivated,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      bVar4 = 0;
      cVar5 = (int)pCVar2 < 0;
      cVar7 = (POPCOUNT((uint)pCVar2 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pCVar2 == (CultureInfo__Class *)0x0) break;
      bVar4 = 0;
      cVar5 = TVar28.m_Index < 0;
      cVar7 = (POPCOUNT(TVar28.m_Index & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (TVar28.m_Index == 0) break;
      pIVar31 = (TypeInfo__System__Boolean->_0).element_class;
      bVar4 = *(Il2CppClass **)(*(int *)TVar28.m_Index + 0x20) < pIVar31;
      uVar17 = (int)*(Il2CppClass **)(*(int *)TVar28.m_Index + 0x20) - (int)pIVar31;
      cVar5 = (int)uVar17 < 0;
      cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
      cVar6 = '\0';
      if (uVar17 == 0) {
        pbVar32 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize
                  ((SettingsToggle *)pCVar2,StringLiteral_beginActivated,*pbVar32,(MethodInfo *)0x0
                  );
        return;
      }
      goto code_?;
    case WorldObjectType__Enum_CollectTheItemDropOff:
      pCVar33 = (this->fields).collectTheItemDropoffSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar33 = (CollectTheItemDropoffSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar33,
                           CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pCVar33 < 0;
      cVar6 = pCVar33 == (CollectTheItemDropoffSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pCVar33 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                  (pCVar33,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CollectTheItemCollectable:
      pCVar34 = (this->fields).collectTheItemSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar34 = (CollectTheItemSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar34,
                           CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pCVar34 < 0;
      cVar6 = pCVar34 == (CollectTheItemSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pCVar34 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        CollectTheItemSettings::CollectTheItemSettings_Initialize
                  (pCVar34,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_WindTurbine:
      pWVar35 = (this->fields).windTurbineSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pWVar35 = (WindTurbineSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar35,
                           WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pWVar35 < 0;
      cVar6 = pWVar35 == (WindTurbineSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pWVar35 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        WindTurbineSettings::WindTurbineSettings_Initialize(pWVar35,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_GlobalSoundEmitter:
      pGVar36 = (this->fields).globalSoundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar36 = (GlobalSoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar36,
                           GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pGVar36 < 0;
      cVar6 = pGVar36 == (GlobalSoundEmitterSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pGVar36 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                  (pGVar36,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if (worldObjectType != WorldObjectType__Enum_GamePointChest) goto code_?;
      original_01 = (this->fields).gamePointChestSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar2 = (CultureInfo__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_01,
                           GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pCVar2 < 0;
      cVar6 = pCVar2 == (CultureInfo__Class *)0x0;
      cVar7 = (POPCOUNT((uint)pCVar2 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pTVar30 = (Toggle *)(pCVar2->_0).byval_arg.data.typeHandle;
        bVar4 = 0;
        cVar5 = (int)pTVar30 < 0;
        cVar6 = pTVar30 == (Toggle *)0x0;
        cVar7 = (POPCOUNT((uint)pTVar30 & 0xff) & 1U) == 0;
        if (!(bool)cVar6) {
          SettingsBase::SettingsBase_Initialize_1
                    ((SettingsBase *)pTVar30,0,pGVar8,StringLiteral_Crystal_Reward,(MethodInfo *)0x0
                    );
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = (int)pMVar12 < 0;
          cVar6 = pMVar12 == (MVWorldObjectClientManager *)0x0;
          cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
          if (!(bool)cVar6) {
            pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar12,0,(MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = (int)pMVar13 < 0;
            cVar6 = pMVar13 == (MVWorldObject *)0x0;
            cVar7 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              pDVar27 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (pMVar13->fields).data;
              bVar4 = 0;
              cVar5 = (int)pDVar27 < 0;
              cVar6 = pDVar27 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0
              ;
              cVar7 = (POPCOUNT((uint)pDVar27 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
                bVar37 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                   (pDVar27,(Object *)StringLiteral_gamePointAmount,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                   );
                if (bVar37 == 0) {
                  pOVar1 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)pDVar27,
                             (Object *)StringLiteral_gamePointAmount,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                }
                TVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (pDVar27,(Object *)StringLiteral_gamePointAmount,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                bVar4 = 0;
                cVar5 = TVar28.m_Index < 0;
                cVar6 = TVar28.m_Index == 0;
                cVar7 = (POPCOUNT(TVar28.m_Index & 0xff) & 1U) == 0;
                if (!(bool)cVar6) {
                  pIVar31 = (TypeInfo__System__Int32->_0).element_class;
                  bVar4 = *(Il2CppClass **)(*(int *)TVar28.m_Index + 0x20) < pIVar31;
                  uVar17 = (int)*(Il2CppClass **)(*(int *)TVar28.m_Index + 0x20) - (int)pIVar31;
                  cVar5 = (int)uVar17 < 0;
                  cVar6 = uVar17 == 0;
                  cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
                  if (!(bool)cVar6) goto code_?;
                  piVar38 = (int32_t *)func_?();
                  pSVar29 = *(SettingsSlider **)&(pCVar2->_0).byval_arg.attrs;
                  bVar4 = 0;
                  cVar5 = (int)pSVar29 < 0;
                  cVar6 = pSVar29 == (SettingsSlider *)0x0;
                  cVar7 = (POPCOUNT((uint)pSVar29 & 0xff) & 1U) == 0;
                  if (!(bool)cVar6) {
                    value = *piVar38;
                    SettingsSlider::SettingsSlider_Initialize_1
                              (pSVar29,StringLiteral_gamePointAmount,value,2,100,(MethodInfo *)0x0);
                    this_00 = (SettingsInputFieldSlider *)(pCVar2->_0).this_arg.data.typeHandle;
                    bVar4 = 0;
                    cVar5 = (int)this_00 < 0;
                    cVar6 = this_00 == (SettingsInputFieldSlider *)0x0;
                    cVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
                    if (!(bool)cVar6) {
                      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                (this_00,StringLiteral_gamePointAmount,value,(MethodInfo *)0x0);
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
      pPVar39 = (this->fields).pointLightSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar39 = (PointLightSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar39,
                           PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pPVar39 < 0;
      cVar6 = pPVar39 == (PointLightSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pPVar39 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        PointLightSettings::PointLightSettings_Initialize(pPVar39,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (worldObjectType != WorldObjectType__Enum_SoundEmitter) goto code_?;
      pSVar40 = (this->fields).soundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pSVar40 = (SoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar40,
                           SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pSVar40 < 0;
      cVar6 = pSVar40 == (SoundEmitterSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pSVar40 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        SoundEmitterSettings::SoundEmitterSettings_Initialize(pSVar40,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  switch(worldObjectType) {
  case WorldObjectType__Enum_ToggleBox:
    pTVar41 = (this->fields).toggleBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar41 = (ToggleBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar41,
                         ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pTVar41 < 0;
    cVar6 = pTVar41 == (ToggleBoxSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pTVar41 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      ToggleBoxSettings::ToggleBoxSettings_Initialize(pTVar41,0,pGVar8,(MethodInfo *)0x0);
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
    pSVar42 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar42 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WorldObjectType__,pSVar42,
                         StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
    pDVar43 = TypeInfo__UnityEngine__Debug;
    goto code_?;
  case WorldObjectType__Enum_TextMsg:
    pMVar44 = (this->fields).messageBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar44 = (MessageBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar44,
                         MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pMVar44 < 0;
    cVar6 = pMVar44 == (MessageBoxSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pMVar44 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar44,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Fire:
    pFVar45 = (this->fields).fireSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pFVar45 = (FireSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pFVar45,
                         FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pFVar45 < 0;
    cVar6 = pFVar45 == (FireSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pFVar45 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      FireSettings::FireSettings_Initialize(pFVar45,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Smoke:
    pSVar46 = (this->fields).smokeSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar46 = (SmokeSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar46,
                         SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pSVar46 < 0;
    cVar6 = pSVar46 == (SmokeSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pSVar46 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      SmokeSettings::SmokeSettings_Initialize(pSVar46,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_TimeTrigger:
    pTVar47 = (this->fields).timeTriggerSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar47 = (TimeTriggerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar47,
                         TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pTVar47 < 0;
    cVar6 = pTVar47 == (TimeTriggerSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pTVar47 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar47,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_PressurePlate:
    original_03 = (this->fields).pressurePlateSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar2 = (CultureInfo__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_03,
                         PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pCVar2 < 0;
    cVar7 = (POPCOUNT((uint)pCVar2 & 0xff) & 1U) == 0;
    cVar6 = '\x01';
    if (pCVar2 != (CultureInfo__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar30 = (Toggle *)(pCVar2->_0).byval_arg.data.typeHandle;
      bVar4 = 0;
      cVar5 = (int)pTVar30 < 0;
      cVar7 = (POPCOUNT((uint)pTVar30 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      if (pTVar30 != (Toggle *)0x0) {
        SettingsBase::SettingsBase_Initialize
                  ((SettingsBase *)pTVar30,0,pGVar8,
                   MVWorldObjectDocumentationType__Enum_PressurePlate,(MethodInfo *)0x0);
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = (int)pMVar12 < 0;
        cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
        cVar6 = '\x01';
        if (pMVar12 != (MVWorldObjectClientManager *)0x0) {
          pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar12,0,(MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = (int)pMVar13 < 0;
          cVar7 = (POPCOUNT((uint)pMVar13 & 0xff) & 1U) == 0;
          cVar6 = '\x01';
          if (pMVar13 != (MVWorldObject *)0x0) {
            pDVar27 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (pMVar13->fields).data;
            pCVar2 = *(CultureInfo__Class **)&(pCVar2->_0).byval_arg.attrs;
            bVar4 = 0;
            cVar5 = (int)pDVar27 < 0;
            cVar7 = (POPCOUNT((uint)pDVar27 & 0xff) & 1U) == 0;
            cVar6 = '\x01';
            if (pDVar27 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              TVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (pDVar27,(Object *)StringLiteral_hide,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              bVar4 = 0;
              cVar5 = (int)pCVar2 < 0;
              cVar7 = (POPCOUNT((uint)pCVar2 & 0xff) & 1U) == 0;
              cVar6 = '\x01';
              if (pCVar2 != (CultureInfo__Class *)0x0) {
                bVar4 = 0;
                cVar5 = TVar28.m_Index < 0;
                cVar7 = (POPCOUNT(TVar28.m_Index & 0xff) & 1U) == 0;
                cVar6 = '\x01';
                if (TVar28.m_Index != 0) {
                  pIVar31 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar4 = *(Il2CppClass **)(*(int *)TVar28.m_Index + 0x20) < pIVar31;
                  uVar17 = (int)*(Il2CppClass **)(*(int *)TVar28.m_Index + 0x20) - (int)pIVar31;
                  cVar5 = (int)uVar17 < 0;
                  cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
                  cVar6 = '\0';
                  if (uVar17 == 0) {
                    pbVar32 = (bool *)func_?();
                    SettingsToggle::SettingsToggle_Initialize
                              ((SettingsToggle *)pCVar2,StringLiteral_hide,*pbVar32,
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
    }
    break;
  case WorldObjectType__Enum_Skybox:
    pSVar48 = (this->fields).skyboxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar48 = (SkyboxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar48,
                         SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pSVar48 < 0;
    cVar6 = pSVar48 == (SkyboxSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pSVar48 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      SkyboxSettings::SkyboxSettings_Initialize(pSVar48,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_SpawnPointRed:
  case WorldObjectType__Enum_SpawnPointGreen:
  case WorldObjectType__Enum_SpawnPointYellow:
  case WorldObjectType__Enum_SpawnPointBlue:
    pSVar49 = (this->fields).spawnPointSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar49 = (SpawnPointSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar49,
                         SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pSVar49 < 0;
    cVar6 = pSVar49 == (SpawnPointSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pSVar49 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar49,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_ModelToggle:
    pOVar50 = (this->fields).objectEnablerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar50 = (ObjectEnablerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pOVar50,
                         ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pOVar50 < 0;
    cVar6 = pOVar50 == (ObjectEnablerSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pOVar50 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize(pOVar50,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_WaterPlane:
    pWVar51 = (this->fields).waterBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pWVar51 = (WaterBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pWVar51,
                         WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pWVar51 < 0;
    cVar6 = pWVar51 == (WaterBoxSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pWVar51 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar51,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Blueprint:
    SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_PulseBox:
    pPVar52 = (this->fields).pulseBoxPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar52 = (PulseBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pPVar52,
                         PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                        );
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = (int)pPVar52 < 0;
    cVar6 = pPVar52 == (PulseBoxSettings *)0x0;
    cVar7 = (POPCOUNT((uint)pPVar52 & 0xff) & 1U) == 0;
    pCVar2 = (CultureInfo__Class *)0x0;
    if (!(bool)cVar6) {
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar52,0,pGVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    switch(worldObjectType) {
    case WorldObjectType__Enum_PickupCubeGun:
      pCVar2 = (CultureInfo__Class *)(this->fields).cubeGunSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_01 = (CubeGunSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar2,
                           CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                          );
      bVar4 = 0;
      cVar5 = (int)this_01 < 0;
      cVar6 = this_01 == (CubeGunSettings *)0x0;
      cVar7 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        CubeGunSettings::CubeGunSettings_Initialize
                  (this_01,0,(this->fields).materialsController,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CheckPoint:
    case WorldObjectType__Enum_HoverCraft:
    case WorldObjectType__Enum_MonoPlane:
    case WorldObjectType__Enum_JetPack:
    case WorldObjectType__Enum_HamsterWheel:
      goto code_?;
    case WorldObjectType__Enum_WorldObjectSpawnerVehicle:
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pMVar12 < 0;
      cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
      cVar6 = '\x01';
      pCVar2 = unaff_EDI;
      if (pMVar12 == (MVWorldObjectClientManager *)0x0) break;
      pCVar2 = (CultureInfo__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar12,woID,(MethodInfo *)0x0);
      if (pCVar2 == (CultureInfo__Class *)0x0) {
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = (undefined1 *)0xfffffffb < &stack0xfffffffc;
        cVar5 = (int)&stack0x00000000 < 0;
        cVar6 = &stack0x00000000 == (undefined1 *)0x0;
        cVar7 = '\x01';
        pCVar2 = unaff_EDI;
        break;
      }
      pCVar26 = (CultureInfo__Class *)(pCVar2->_0).image;
      bVar14 = (pCVar26->_1).naturalAligment;
      bVar15 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      bVar4 = bVar14 < bVar15;
      cVar7 = bVar14 - bVar15;
      cVar5 = cVar7 < '\0';
      cVar6 = cVar7 == '\0';
      cVar7 = (POPCOUNT(cVar7) & 1U) == 0;
      if (!(bool)bVar4) {
        pMVar53 = (MVWorldObjectSpawnerVehicle__Class *)
                  (pCVar26->_1).typeHierarchy
                  [(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1];
        bVar4 = pMVar53 < TypeInfo__MVWorldObjectSpawnerVehicle;
        uVar17 = (int)pMVar53 - (int)TypeInfo__MVWorldObjectSpawnerVehicle;
        cVar5 = (int)uVar17 < 0;
        cVar6 = uVar17 == 0;
        cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
        if (!(bool)cVar6) goto code_?;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = (int)pMVar12 < 0;
        cVar7 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
        cVar6 = '\x01';
        if (pMVar12 == (MVWorldObjectClientManager *)0x0) break;
        pCVar2 = (CultureInfo__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar12,(int32_t)(pCVar2->vtable).get_Calendar.methodPtr,
                             (MethodInfo *)0x0);
        this_02 = (VehicleBaseSettings *)0x0;
        bVar4 = 0;
        cVar5 = (int)pCVar2 < 0;
        cVar7 = (POPCOUNT((uint)pCVar2 & 0xff) & 1U) == 0;
        cVar6 = '\x01';
        if (pCVar2 == (CultureInfo__Class *)0x0) break;
        pCVar26 = (CultureInfo__Class *)(pCVar2->_0).image;
        bVar14 = (pCVar26->_1).naturalAligment;
        bVar15 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        bVar4 = bVar14 < bVar15;
        cVar7 = bVar14 - bVar15;
        cVar5 = cVar7 < '\0';
        cVar6 = cVar7 == '\0';
        cVar7 = (POPCOUNT(cVar7) & 1U) == 0;
        if (!(bool)bVar4) {
          pMVar54 = (MVVehicleBase__Class *)
                    (pCVar26->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1];
          bVar4 = pMVar54 < TypeInfo__MVVehicleBase;
          uVar17 = (int)pMVar54 - (int)TypeInfo__MVVehicleBase;
          cVar5 = (int)uVar17 < 0;
          cVar7 = (POPCOUNT(uVar17 & 0xff) & 1U) == 0;
          cVar6 = '\0';
          if (uVar17 == 0) {
            iVar55 = func_?();
            pOVar1 = pORam0000009b;
            pCVar2 = (CultureInfo__Class *)0x2b;
            if (iVar55 < 0x1b) {
              if (iVar55 == 0x19) {
                pOVar1 = pORam00000097;
                method_01 = 
                UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                ;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  method_01 = 
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                  ;
                }
              }
              else {
                if (iVar55 != 0x1a) goto code_?;
                pOVar1 = pORam0000009f;
                method_01 = 
                UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                ;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  method_01 = 
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                  ;
                }
              }
code_?:
              this_02 = (VehicleBaseSettings *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  (pOVar1,method_01);
            }
            else if ((iVar55 == 0x1f) || (iVar55 == 0x22)) {
              method_01 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
              ;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                method_01 = 
                UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                ;
              }
              goto code_?;
            }
code_?:
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar37 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                               ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar37 == 0) {
              return;
            }
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)0x2b,(MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = (int)this_02 < 0;
            cVar6 = this_02 == (VehicleBaseSettings *)0x0;
            cVar7 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
              VehicleBaseSettings_Initialize(this_02,woID,pGVar8,(MethodInfo *)0x0);
              return;
            }
            break;
          }
        }
        goto code_?;
      }
      goto code_?;
    case WorldObjectType__Enum_RoundCube:
      pRVar56 = (this->fields).roundCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pRVar56 = (RoundCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pRVar56,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pRVar56 < 0;
      cVar6 = pRVar56 == (RoundCubeSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pRVar56 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar56,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_AdvancedGhost:
      pOVar57 = (this->fields).oculusSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar57 = (OculusSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar57,
                           OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pOVar57 < 0;
      cVar6 = pOVar57 == (OculusSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pOVar57 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        OculusSettings::OculusSettings_Initialize(pOVar57,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_KillLimit:
      pKVar58 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar58 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar58,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar42 = TM::TM__(StringLiteral_Kill_Limit,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pKVar58 < 0;
      cVar6 = pKVar58 == (KillLimitSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pKVar58 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        KillLimitSettings::KillLimitSettings_Initialize(pKVar58,0,pGVar8,pSVar42,(MethodInfo *)0x0)
        ;
        return;
      }
      break;
    case WorldObjectType__Enum_OculusKillLimit:
      pKVar58 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar58 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar58,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar42 = TM::TM__(StringLiteral_Oculus_Kill_Limit,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pKVar58 < 0;
      cVar6 = pKVar58 == (KillLimitSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pKVar58 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        KillLimitSettings::KillLimitSettings_Initialize(pKVar58,0,pGVar8,pSVar42,(MethodInfo *)0x0)
        ;
        return;
      }
      break;
    case WorldObjectType__Enum_CountingCube:
      pCVar59 = (this->fields).countingCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar59 = (CountingCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar59,
                           CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pCVar59 < 0;
      cVar6 = pCVar59 == (CountingCubeSettings *)0x0;
      cVar7 = (POPCOUNT((uint)pCVar59 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        CountingCubeSettings::CountingCubeSettings_Initialize(pCVar59,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if (worldObjectType != WorldObjectType__Enum_WorldObjectSpawnerVehicleEnergy)
      goto code_?;
      pVVar60 = (this->fields).vehicleEnergySettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pVVar60 = (VehicleEnergySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pVVar60,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                          );
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = (int)pVVar60 < 0;
      cVar6 = pVVar60 == (VehicleEnergySettings *)0x0;
      cVar7 = (POPCOUNT((uint)pVVar60 & 0xff) & 1U) == 0;
      pCVar2 = (CultureInfo__Class *)0x0;
      if (!(bool)cVar6) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
        VehicleEnergySettings_Initialize(pVVar60,0,pGVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pCVar26 = pCVar2;
code_?:
  uVar61 = func_?();
  pCVar2 = (CultureInfo__Class *)in((short)((ulonglong)uVar61 >> 0x20));
  (pCVar26->_0).image = (Il2CppImage *)pCVar2;
  uVar62 = (undefined2)((ulonglong)uVar61 >> 0x10);
  bVar4 = *(byte *)CONCAT22(uVar62,CONCAT11(cVar5 << 7 | cVar6 << 6 | in_AF << 4 | cVar7 << 2 |
                                             2U | bVar4,(char)uVar61));
  bVar14 = (byte)((ulonglong)uVar61 >> 0x20);
  cVar6 = bVar14 - bVar4;
  pcVar63 = (char *)CONCAT22(uVar62,CONCAT11((cVar6 < '\0') << 7 | (cVar6 == '\0') << 6 |
                                             in_AF << 4 | ((POPCOUNT(cVar6) & 1U) == 0) << 2 | 2U |
                                             bVar14 < bVar4,(char)uVar61));
  if (-1 < (char)(bVar14 - *pcVar63)) {
    puVar64 = (uint *)((int)((ulonglong)uVar61 >> 0x20) + -0x5bf5efc6);
    *puVar64 = *puVar64 & 0xa59c103a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar63 = *pcVar63 + -0x75;
  pSVar42 = (String *)((uint)pcVar63 | 0xADDR);
  pDVar43 = extraout_ECX;
code_?:
  if ((pDVar43->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar42,(MethodInfo *)0x0);
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

