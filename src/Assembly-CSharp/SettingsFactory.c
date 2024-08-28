
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
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) < bVar3) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar2.m_Index + 100) + -4 + (uint)bVar3 * 4) !=
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
          pcVar4 = (char *)func_?();
          if (*pcVar4 == '\f') {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pOVar5 = (Object *)this_01[2].invoker_method;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_03 = (MovablesSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar5,
                                 MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                                );
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (this_03 != (MovablesSettings *)0x0) {
              MovablesSettings::MovablesSettings_Initialize(this_03,woID,pGVar6,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (*pcVar4 != '\r') {
              return;
            }
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pOVar5 = (Object *)this_01[1].field7_0x1c.methodMetadataHandle;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_04 = (RotatorSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar5,
                                 RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                                );
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (this_04 != (RotatorSettings *)0x0) {
              RotatorSettings::RotatorSettings_Initialize(this_04,woID,pGVar6,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    if (pOVar2->klass != (Object__Class *)0x0) {
      CubeModelPopup::CubeModelPopup_Initialize
                ((CubeModelPopup *)pOVar2->klass,0x15,woID,(MethodInfo *)0x0);
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
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVEditablePickupItemBaseBlueprint__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) goto code_?;
    pLVar3 = pMVar1[2].fields.outputLinkRefs;
    unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)0x0;
    if (pLVar3 != (List_1_MV_WorldObject_Link_ *)0x0) {
      pOVar4 = pLVar3[10].fields._syncRoot;
      if (pOVar4 == (Object *)0x8) {
        pMVar5 = (this->fields).meleeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar5 = (MeleeWeaponSettings *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pMVar5,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar3->fields)._items;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pMVar5 != (MeleeWeaponSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings::
          MeleeWeaponSettings_Initialize(pMVar5,(int32_t)unaff_ESI,pGVar6,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (pOVar4 != (Object *)0x3b) {
          return;
        }
        pCVar7 = (this->fields).costumeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pCVar7 = (CostumeSettings *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pCVar7,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar3->fields)._items;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pCVar7 != (CostumeSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
          CostumeSettings_Initialize(pCVar7,(int32_t)unaff_ESI,pGVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,unaff_ESI);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  pMVar1 = (MVVehicleBase__Class *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pMVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)this;
  if (0x77 < (int)worldObjectType) {
    if ((int)worldObjectType < 0x89) {
      if (worldObjectType == WorldObjectType__Enum_AvatarSpawnRoleCreator) {
        pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(this->fields).spawnRoleEditorPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pMVar2,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar1 < 0);
        unaff_EBX.m_Index = (int32_t)this;
        if (pMVar1 != (MVVehicleBase__Class *)0x0) {
          pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)&(pMVar1->_0).name;
          (((SettingsToggle__Fields *)pMVar2)->_)._._._.m_CachedPtr = pOVar3;
          func_?();
          this_03 = (((SettingsToggle__Fields *)pMVar2)->_)._._._.m_CachedPtr;
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)this_03 < 0);
          if (this_03 != (SpawnRoleEditorMenu *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize(this_03,0,(MethodInfo *)0x0);
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pMVar1,
                       MethodInfo__SettingsFactory____c__DisplayClass57_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar7,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
      else {
        if (worldObjectType != WorldObjectType__Enum_ModelTransparency) goto code_?;
        pOVar8 = (this->fields).objectTransparencySettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar8 = (ObjectTransparencySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pOVar8,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pOVar8 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pOVar8 != (ObjectTransparencySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
          ObjectTransparencySettings_Initialize(pOVar8,0,pGVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (worldObjectType == WorldObjectType__Enum_CameraSettings) {
      pCVar9 = (this->fields).cameraBoxSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar9 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar9,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pCVar9 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pCVar9 != (CameraBoxSettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
        CameraBoxSettings_Initialize(pCVar9,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      switch(worldObjectType) {
      case WorldObjectType__Enum_GameCoinChest:
        pGVar10 = (this->fields).gameCoinChestSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pGVar10 = (GameCoinChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar10,
                             GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pGVar10 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pGVar10 != (GameCoinChestSettings *)0x0) {
          GameCoinChestSettings::GameCoinChestSettings_Initialize
                    (pGVar10,0,pGVar7,(MethodInfo *)0x0);
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
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar11 < 0);
        pMVar2 = unaff_ESI;
        if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
          pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar11,woID,(MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pMVar12 < 0);
          pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                    TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
          if (pMVar12 != (MVWorldObject *)0x0) {
            bVar13 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
            bVar14 = (pMVar12->klass->_1).naturalAligment;
            bVar4 = bVar14 < bVar13;
            cVar5 = SBORROW1(bVar14,bVar13);
            uVar6._0_1_ = (uint)((char)(bVar14 - bVar13) < '\0');
            pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                      TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
            if (!(bool)bVar4) {
              pMVar15 = (MVDoorBlueprint__Class *)(pMVar12->klass->_1).typeHierarchy[bVar13 - 1];
              bVar4 = pMVar15 < TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
              cVar5 = SBORROW4((int)pMVar15,(int)TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint
                               );
              uVar6._0_1_ = (uint)((int)pMVar15 -
                                    (int)TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint < 0);
              if (pMVar15 == TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint) {
                pLVar16 = pMVar12[2].fields.outputLinkRefs;
                bVar4 = 0;
                cVar5 = '\0';
                uVar6._0_1_ = (uint)((int)pLVar16 < 0);
                pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                          TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
                if (pLVar16 != (List_1_MV_WorldObject_Link_ *)0x0) {
                  unaff_EBX.m_Index = (int32_t)(pLVar16->fields)._items;
                  pDVar17 = (this->fields).doorSettingsPrefab;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pDVar17 = (DoorSettings *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)pDVar17,
                                       UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                                      );
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  bVar4 = 0;
                  cVar5 = '\0';
                  uVar6._0_1_ = (uint)((int)pDVar17 < 0);
                  pMVar1 = (MVVehicleBase__Class *)0x0;
                  pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)this;
                  if (pDVar17 != (DoorSettings *)0x0) {
                    UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
                    DoorSettings_Initialize(pDVar17,unaff_EBX.m_Index,pGVar7,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
            }
            goto code_?;
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
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar11 < 0);
        pMVar2 = unaff_ESI;
        if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
          pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar11,woID,(MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pMVar12 < 0);
          pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
          ;
          if (pMVar12 != (MVWorldObject *)0x0) {
            bVar13 = (
                     TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                     ->_1).naturalAligment;
            bVar14 = (pMVar12->klass->_1).naturalAligment;
            bVar4 = bVar14 < bVar13;
            cVar5 = SBORROW1(bVar14,bVar13);
            uVar6._0_1_ = (uint)((char)(bVar14 - bVar13) < '\0');
            pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ;
            if (!(bool)bVar4) {
              pMVar18 = (MVEditablePickupItemBaseBlueprint__Class *)
                       (pMVar12->klass->_1).typeHierarchy[bVar13 - 1];
              bVar4 = pMVar18 < 
                       TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
              ;
              cVar5 = SBORROW4((int)pMVar18,
                                (int)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                               );
              uVar6._0_1_ = (uint)((int)pMVar18 -
                                    (int)
                                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                                   < 0);
              if (pMVar18 == 
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                 ) {
                pLVar16 = pMVar12[2].fields.outputLinkRefs;
                bVar4 = 0;
                cVar5 = '\0';
                uVar6._0_1_ = (uint)((int)pLVar16 < 0);
                pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
                if (pLVar16 != (List_1_MV_WorldObject_Link_ *)0x0) {
                  pOVar3 = pLVar16[10].fields._syncRoot;
                  pMVar1 = (MVVehicleBase__Class *)this;
                  if (pOVar3 == (Object *)0x8) {
                    pMVar19 = (this->fields).meleeSettingsPrefab;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pMVar19 = (MeleeWeaponSettings *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        ((Object *)pMVar19,
                                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                                        );
                    pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(pLVar16->fields)._items;
                    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    bVar4 = 0;
                    cVar5 = '\0';
                    uVar6._0_1_ = (uint)((int)pMVar19 < 0);
                    unaff_EBX.m_Index = 0;
                    if (pMVar19 != (MeleeWeaponSettings *)0x0) {
                      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
                      MeleeWeaponSettings::MeleeWeaponSettings_Initialize
                                (pMVar19,(int32_t)pMVar2,pGVar7,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  else {
                    if (pOVar3 != (Object *)0x3b) {
                      return;
                    }
                    pCVar20 = (this->fields).costumeSettingsPrefab;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pCVar20 = (CostumeSettings *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        ((Object *)pCVar20,
                                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                                        );
                    pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(pLVar16->fields)._items;
                    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    bVar4 = 0;
                    cVar5 = '\0';
                    uVar6._0_1_ = (uint)((int)pCVar20 < 0);
                    unaff_EBX.m_Index = 0;
                    if (pCVar20 != (CostumeSettings *)0x0) {
                      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
                      CostumeSettings_Initialize(pCVar20,(int32_t)pMVar2,pGVar7,(MethodInfo *)0x0)
                      ;
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
        original = (this->fields).teamEditorSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar1 = (MVVehicleBase__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar1 < 0);
        if (pMVar1 != (MVVehicleBase__Class *)0x0) {
          pSVar21 = (SettingsBase *)(pMVar1->_0).byval_arg.data.typeHandle;
          (pMVar1->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)woID;
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pSVar21 < 0);
          pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)woID;
          if (pSVar21 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_Initialize
                      (pSVar21,woID,pGVar7,MVWorldObjectDocumentationType__Enum_TeamEditor,
                       (MethodInfo *)0x0);
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = '\0';
            uVar6._0_1_ = (uint)((int)pMVar11 < 0);
            pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)woID;
            if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
              pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar11,woID,(MethodInfo *)0x0);
              bVar4 = 0;
              cVar5 = '\0';
              uVar6._0_1_ = (uint)((int)pMVar12 < 0);
              pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)woID;
              if (pMVar12 != (MVWorldObject *)0x0) {
                ppIVar22 = &(pMVar1->_0).interopData;
                *ppIVar22 = (Il2CppInteropData *)(pMVar12->fields).data;
                func_?();
                TeamEditorSettings::TeamEditorSettings_InitInputfield
                          ((TeamEditorSettings *)pMVar1,
                           *(SettingsInputField **)&(pMVar1->_0).byval_arg.attrs,
                           (GameObject *)(pMVar1->_0).castClass,MVTeam__Enum_Blue,(MethodInfo *)0x0
                          );
                TeamEditorSettings::TeamEditorSettings_InitInputfield
                          ((TeamEditorSettings *)pMVar1,
                           (SettingsInputField *)(pMVar1->_0).this_arg.data.typeHandle,
                           (GameObject *)(pMVar1->_0).declaringType,MVTeam__Enum_Red,
                           (MethodInfo *)0x0);
                TeamEditorSettings::TeamEditorSettings_InitInputfield
                          ((TeamEditorSettings *)pMVar1,
                           *(SettingsInputField **)&(pMVar1->_0).this_arg.attrs,
                           (GameObject *)(pMVar1->_0).parent,MVTeam__Enum_Green,(MethodInfo *)0x0);
                TeamEditorSettings::TeamEditorSettings_InitInputfield
                          ((TeamEditorSettings *)pMVar1,
                           (SettingsInputField *)(pMVar1->_0).element_class,
                           (GameObject *)(pMVar1->_0).generic_class,MVTeam__Enum_Yellow,
                           (MethodInfo *)0x0);
                TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                          ((TeamEditorSettings *)pMVar1,
                           (Dictionary_2_System_Object_System_Object_ *)*ppIVar22,(MethodInfo *)0x0);
                *ppIVar22 = (Il2CppInteropData *)0x0;
                func_?();
                return;
              }
            }
          }
        }
        break;
      case WorldObjectType__Enum_TriggerCube:
        pTVar23 = (this->fields).triggerCubeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pTVar23 = (TriggerCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pTVar23,
                             TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pTVar23 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pTVar23 != (TriggerCubeSettings *)0x0) {
          TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar23,0,pGVar7,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_ShootableButton:
        original_00 = (this->fields).shootablePlateSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                            );
        pMVar1 = (MVVehicleBase__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar2 < 0);
        if (pMVar2 != (MVWorldObjectSpawnerVehicle__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pSVar21 = (SettingsBase *)(pMVar2->_0).byval_arg.data.typeHandle;
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pSVar21 < 0);
          if (pSVar21 != (SettingsBase *)0x0) {
            pMVar24 = (MVVehicleBase__Class *)0x0;
            SettingsBase::SettingsBase_Initialize
                      (pSVar21,0,(GameObject *)pMVar1,
                       MVWorldObjectDocumentationType__Enum_ShootableButton,(MethodInfo *)0x0);
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = '\0';
            uVar6._0_1_ = (uint)((int)pMVar11 < 0);
            pMVar1 = pMVar24;
            if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
              pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar11,0,(MethodInfo *)0x0);
              bVar4 = 0;
              cVar5 = '\0';
              uVar6._0_1_ = (uint)((int)pMVar12 < 0);
              if (pMVar12 != (MVWorldObject *)0x0) {
                this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          (pMVar12->fields).data;
                bVar4 = 0;
                cVar5 = '\0';
                uVar6._0_1_ = (uint)((int)this_00 < 0);
                if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                {
                  unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                        (this_00,(Object *)StringLiteral_duration,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor
                      == 0) {
                    func_?();
                  }
                  pMVar1 = (MVVehicleBase__Class *)
                            mscorlib.dll::System::Globalization::CultureInfo::
                            CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__System__Convert);
                  }
                  value = mscorlib.dll::System::Convert::Convert_ToSingle_1
                                    ((Object *)unaff_EBX.m_Index,(IFormatProvider *)pMVar1,
                                     (MethodInfo *)0x0);
                  this_01._0_2_ = (pMVar2->_0).byval_arg.attrs;
                  this_01._2_1_ = (pMVar2->_0).byval_arg.type;
                  this_01._3_1_ = (pMVar2->_0).byval_arg.field_0x7;
                  bVar4 = 0;
                  cVar5 = '\0';
                  uVar6 = ZPULL(this_01,0x1f,1);
                  if ((SettingsSlider *)this_01 != (SettingsSlider *)0x0) {
                    SettingsSlider::SettingsSlider_Initialize
                              ((SettingsSlider *)this_01,StringLiteral_duration,value,0.5,30.0,
                               (MethodInfo *)0x0);
                    pSVar25 = (SettingsInputFieldSlider *)(pMVar2->_0).this_arg.data.typeHandle;
                    bVar4 = 0;
                    cVar5 = '\0';
                    uVar6._0_1_ = (uint)((int)pSVar25 < 0);
                    if (pSVar25 != (SettingsInputFieldSlider *)0x0) {
                      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                                (pSVar25,StringLiteral_duration,value,(MethodInfo *)0x0);
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
        original_01 = (this->fields).leverSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar1 = (MVVehicleBase__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_01,
                             LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                            );
        pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar1 < 0);
        if (pMVar1 != (MVVehicleBase__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pTVar26 = (Toggle *)(pMVar1->_0).byval_arg.data.typeHandle;
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pTVar26 < 0);
          if (pTVar26 != (Toggle *)0x0) {
            SettingsBase::SettingsBase_Initialize
                      ((SettingsBase *)pTVar26,0,(GameObject *)pMVar2,
                       MVWorldObjectDocumentationType__Enum_Lever,(MethodInfo *)0x0);
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = '\0';
            uVar6._0_1_ = (uint)((int)pMVar11 < 0);
            pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
            if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
              pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar11,0,(MethodInfo *)0x0);
              bVar4 = 0;
              cVar5 = '\0';
              uVar6._0_1_ = (uint)((int)pMVar12 < 0);
              if (pMVar12 != (MVWorldObject *)0x0) {
                pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(pMVar12->fields).data;
                pMVar1 = *(MVVehicleBase__Class **)&(pMVar1->_0).byval_arg.attrs;
                bVar4 = 0;
                cVar5 = '\0';
                uVar6._0_1_ = (uint)((int)pMVar2 < 0);
                if (pMVar2 != (MVWorldObjectSpawnerVehicle__Class *)0x0) {
                  TVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)pMVar2,(Object *)StringLiteral_beginActivated,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  bVar4 = 0;
                  cVar5 = '\0';
                  uVar6._0_1_ = (uint)((int)pMVar1 < 0);
                  if (pMVar1 != (MVVehicleBase__Class *)0x0) {
                    bVar4 = 0;
                    cVar5 = '\0';
                    uVar6._0_1_ = (uint)(TVar27.m_Index < 0);
                    if (TVar27.m_Index != 0) {
                      pIVar28 = *(Il2CppClass **)(*(int *)TVar27.m_Index + 0x20);
                      pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
                      bVar4 = pIVar28 < pIVar29;
                      cVar5 = SBORROW4((int)pIVar28,(int)pIVar29);
                      uVar6._0_1_ = (uint)((int)pIVar28 - (int)pIVar29 < 0);
                      woID = unaff_EBX.m_Index;
                      if (pIVar28 == pIVar29) {
                        pbVar30 = (bool *)func_?();
                        SettingsToggle::SettingsToggle_Initialize
                                  ((SettingsToggle *)pMVar1,StringLiteral_beginActivated,*pbVar30,
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
      case WorldObjectType__Enum_CollectTheItemDropOff:
        pCVar31 = (this->fields).collectTheItemDropoffSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pCVar31 = (CollectTheItemDropoffSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar31,
                             CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pCVar31 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pCVar31 != (CollectTheItemDropoffSettings *)0x0) {
          CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                    (pCVar31,0,pGVar7,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_CollectTheItemCollectable:
        pCVar32 = (this->fields).collectTheItemSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pCVar32 = (CollectTheItemSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar32,
                             CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pCVar32 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pCVar32 != (CollectTheItemSettings *)0x0) {
          CollectTheItemSettings::CollectTheItemSettings_Initialize
                    (pCVar32,0,pGVar7,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_WindTurbine:
        pWVar33 = (this->fields).windTurbineSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pWVar33 = (WindTurbineSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pWVar33,
                             WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pWVar33 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pWVar33 != (WindTurbineSettings *)0x0) {
          WindTurbineSettings::WindTurbineSettings_Initialize(pWVar33,0,pGVar7,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_GlobalSoundEmitter:
        pGVar34 = (this->fields).globalSoundEmitterSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pGVar34 = (GlobalSoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar34,
                             GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                            );
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pGVar34 < 0);
        pMVar1 = (MVVehicleBase__Class *)0x0;
        if (pGVar34 != (GlobalSoundEmitterSettings *)0x0) {
          GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                    (pGVar34,0,pGVar7,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        if (worldObjectType != WorldObjectType__Enum_GamePointChest) goto code_?;
        original_02 = (this->fields).gamePointChestSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar1 = (MVVehicleBase__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_02,
                             GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                            );
        pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar1 < 0);
        if (pMVar1 != (MVVehicleBase__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pTVar26 = (Toggle *)(pMVar1->_0).byval_arg.data.typeHandle;
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pTVar26 < 0);
          if (pTVar26 != (Toggle *)0x0) {
            SettingsBase::SettingsBase_Initialize_1
                      ((SettingsBase *)pTVar26,0,(GameObject *)pMVar2,StringLiteral_Crystal_Reward,
                       (MethodInfo *)0x0);
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = '\0';
            uVar6._0_1_ = (uint)((int)pMVar11 < 0);
            pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
            if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
              pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar11,0,(MethodInfo *)0x0);
              bVar4 = 0;
              cVar5 = '\0';
              uVar6._0_1_ = (uint)((int)pMVar12 < 0);
              if (pMVar12 != (MVWorldObject *)0x0) {
                pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(pMVar12->fields).data;
                bVar4 = 0;
                cVar5 = '\0';
                uVar6._0_1_ = (uint)((int)pMVar2 < 0);
                if (pMVar2 != (MVWorldObjectSpawnerVehicle__Class *)0x0) {
                  bVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)pMVar2,(Object *)StringLiteral_gamePointAmount,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                     );
                  if (bVar35 == 0) {
                    pOVar3 = (Object *)func_?();
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              ((Dictionary_2_System_Object_System_Object_ *)pMVar2,
                               (Object *)StringLiteral_gamePointAmount,pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                              );
                  }
                  TVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)pMVar2,(Object *)StringLiteral_gamePointAmount,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  bVar4 = 0;
                  cVar5 = '\0';
                  uVar6._0_1_ = (uint)(TVar27.m_Index < 0);
                  if (TVar27.m_Index != 0) {
                    pIVar28 = *(Il2CppClass **)(*(int *)TVar27.m_Index + 0x20);
                    pIVar29 = (TypeInfo__System__Int32->_0).element_class;
                    bVar4 = pIVar28 < pIVar29;
                    cVar5 = SBORROW4((int)pIVar28,(int)pIVar29);
                    uVar6._0_1_ = (uint)((int)pIVar28 - (int)pIVar29 < 0);
                    woID = unaff_EBX.m_Index;
                    if (pIVar28 != pIVar29) goto code_?;
                    puVar36 = (undefined4 *)func_?();
                    this_02 = *(SettingsSlider **)&(pMVar1->_0).byval_arg.attrs;
                    bVar4 = 0;
                    cVar5 = '\0';
                    uVar6._0_1_ = (uint)((int)this_02 < 0);
                    if (this_02 != (SettingsSlider *)0x0) {
                      pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)*puVar36;
                      SettingsSlider::SettingsSlider_Initialize_1
                                (this_02,StringLiteral_gamePointAmount,(int32_t)pMVar2,2,100,
                                 (MethodInfo *)0x0);
                      pSVar25 = (SettingsInputFieldSlider *)(pMVar1->_0).this_arg.data.typeHandle;
                      bVar4 = 0;
                      cVar5 = '\0';
                      uVar6._0_1_ = (uint)((int)pSVar25 < 0);
                      if (pSVar25 != (SettingsInputFieldSlider *)0x0) {
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                  (pSVar25,StringLiteral_gamePointAmount,(int32_t)pMVar2,
                                   (MethodInfo *)0x0);
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
    }
    goto code_?;
  }
  if ((int)worldObjectType < 0xe) {
    if (worldObjectType == WorldObjectType__Enum_PointLight) {
      pPVar37 = (this->fields).pointLightSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar37 = (PointLightSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar37,
                           PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pPVar37 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pPVar37 != (PointLightSettings *)0x0) {
        PointLightSettings::PointLightSettings_Initialize(pPVar37,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (worldObjectType != WorldObjectType__Enum_SoundEmitter) goto code_?;
      pSVar38 = (this->fields).soundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pSVar38 = (SoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar38,
                           SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pSVar38 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pSVar38 != (SoundEmitterSettings *)0x0) {
        SoundEmitterSettings::SoundEmitterSettings_Initialize(pSVar38,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  switch(worldObjectType) {
  case WorldObjectType__Enum_ToggleBox:
    original_03 = (this->fields).toggleBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar1 = (MVVehicleBase__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_03,
                         ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                        );
    pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar1 < 0);
    if (pMVar1 == (MVVehicleBase__Class *)0x0) break;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pTVar26 = (Toggle *)(pMVar1->_0).byval_arg.data.typeHandle;
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pTVar26 < 0);
    if (pTVar26 == (Toggle *)0x0) break;
    SettingsBase::SettingsBase_Initialize
              ((SettingsBase *)pTVar26,0,(GameObject *)pMVar2,
               MVWorldObjectDocumentationType__Enum_ToggleBox,(MethodInfo *)0x0);
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar11 < 0);
    pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
    if (pMVar11 == (MVWorldObjectClientManager *)0x0) break;
    pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar11,0,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar12 < 0);
    if (pMVar12 == (MVWorldObject *)0x0) break;
    pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(pMVar12->fields).data;
    pMVar1 = *(MVVehicleBase__Class **)&(pMVar1->_0).byval_arg.attrs;
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar2 < 0);
    if (pMVar2 == (MVWorldObjectSpawnerVehicle__Class *)0x0) break;
    TVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar2,
                        (Object *)StringLiteral_once,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar1 < 0);
    if (pMVar1 == (MVVehicleBase__Class *)0x0) break;
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)(TVar27.m_Index < 0);
    if (TVar27.m_Index == 0) break;
    pIVar28 = *(Il2CppClass **)(*(int *)TVar27.m_Index + 0x20);
    pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
    bVar4 = pIVar28 < pIVar29;
    cVar5 = SBORROW4((int)pIVar28,(int)pIVar29);
    uVar6._0_1_ = (uint)((int)pIVar28 - (int)pIVar29 < 0);
    woID = unaff_EBX.m_Index;
    if (pIVar28 == pIVar29) {
      pbVar30 = (bool *)func_?();
      SettingsToggle::SettingsToggle_Initialize
                ((SettingsToggle *)pMVar1,StringLiteral_once,*pbVar30,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
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
    pSVar39 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar39 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WorldObjectType__,pSVar39,
                         StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar39,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_TextMsg:
    pMVar40 = (this->fields).messageBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar40 = (MessageBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar40,
                         MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar40 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pMVar40 != (MessageBoxSettings *)0x0) {
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar40,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Fire:
    pFVar41 = (this->fields).fireSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pFVar41 = (FireSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pFVar41,
                         FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pFVar41 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pFVar41 != (FireSettings *)0x0) {
      FireSettings::FireSettings_Initialize(pFVar41,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Smoke:
    pSVar42 = (this->fields).smokeSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar42 = (SmokeSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar42,
                         SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pSVar42 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pSVar42 != (SmokeSettings *)0x0) {
      SmokeSettings::SmokeSettings_Initialize(pSVar42,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_TimeTrigger:
    pTVar43 = (this->fields).timeTriggerSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar43 = (TimeTriggerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar43,
                         TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pTVar43 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pTVar43 != (TimeTriggerSettings *)0x0) {
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar43,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_PressurePlate:
    original_04 = (this->fields).pressurePlateSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar1 = (MVVehicleBase__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_04,
                         PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                        );
    pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pMVar1 < 0);
    if (pMVar1 != (MVVehicleBase__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar26 = (Toggle *)(pMVar1->_0).byval_arg.data.typeHandle;
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pTVar26 < 0);
      if (pTVar26 != (Toggle *)0x0) {
        SettingsBase::SettingsBase_Initialize
                  ((SettingsBase *)pTVar26,0,(GameObject *)pMVar2,
                   MVWorldObjectDocumentationType__Enum_PressurePlate,(MethodInfo *)0x0);
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = 0;
        cVar5 = '\0';
        uVar6._0_1_ = (uint)((int)pMVar11 < 0);
        pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
        if (pMVar11 != (MVWorldObjectClientManager *)0x0) {
          pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar11,0,(MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pMVar12 < 0);
          if (pMVar12 != (MVWorldObject *)0x0) {
            pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)(pMVar12->fields).data;
            pMVar1 = *(MVVehicleBase__Class **)&(pMVar1->_0).byval_arg.attrs;
            bVar4 = 0;
            cVar5 = '\0';
            uVar6._0_1_ = (uint)((int)pMVar2 < 0);
            if (pMVar2 != (MVWorldObjectSpawnerVehicle__Class *)0x0) {
              TVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  pMVar2,(Object *)StringLiteral_hide,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              bVar4 = 0;
              cVar5 = '\0';
              uVar6._0_1_ = (uint)((int)pMVar1 < 0);
              if (pMVar1 != (MVVehicleBase__Class *)0x0) {
                bVar4 = 0;
                cVar5 = '\0';
                uVar6._0_1_ = (uint)(TVar27.m_Index < 0);
                if (TVar27.m_Index != 0) {
                  pIVar28 = *(Il2CppClass **)(*(int *)TVar27.m_Index + 0x20);
                  pIVar29 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar4 = pIVar28 < pIVar29;
                  cVar5 = SBORROW4((int)pIVar28,(int)pIVar29);
                  uVar6._0_1_ = (uint)((int)pIVar28 - (int)pIVar29 < 0);
                  woID = unaff_EBX.m_Index;
                  if (pIVar28 == pIVar29) {
                    pbVar30 = (bool *)func_?();
                    SettingsToggle::SettingsToggle_Initialize
                              ((SettingsToggle *)pMVar1,StringLiteral_hide,*pbVar30,
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
    pSVar44 = (this->fields).skyboxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar44 = (SkyboxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar44,
                         SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pSVar44 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pSVar44 != (SkyboxSettings *)0x0) {
      SkyboxSettings::SkyboxSettings_Initialize(pSVar44,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_SpawnPointRed:
  case WorldObjectType__Enum_SpawnPointGreen:
  case WorldObjectType__Enum_SpawnPointYellow:
  case WorldObjectType__Enum_SpawnPointBlue:
    pSVar45 = (this->fields).spawnPointSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar45 = (SpawnPointSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar45,
                         SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pSVar45 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pSVar45 != (SpawnPointSettings *)0x0) {
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar45,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_ModelToggle:
    pOVar46 = (this->fields).objectEnablerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar46 = (ObjectEnablerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pOVar46,
                         ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pOVar46 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pOVar46 != (ObjectEnablerSettings *)0x0) {
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize(pOVar46,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_WaterPlane:
    pWVar47 = (this->fields).waterBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pWVar47 = (WaterBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pWVar47,
                         WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pWVar47 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pWVar47 != (WaterBoxSettings *)0x0) {
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar47,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Blueprint:
    SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_PulseBox:
    pPVar48 = (this->fields).pulseBoxPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar48 = (PulseBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pPVar48,
                         PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                        );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    uVar6._0_1_ = (uint)((int)pPVar48 < 0);
    pMVar1 = (MVVehicleBase__Class *)0x0;
    if (pPVar48 != (PulseBoxSettings *)0x0) {
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar48,0,pGVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    switch(worldObjectType) {
    case WorldObjectType__Enum_PickupCubeGun:
      pMVar1 = (MVVehicleBase__Class *)(this->fields).cubeGunSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_04 = (CubeGunSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pMVar1,
                           CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                          );
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)this_04 < 0);
      if (this_04 != (CubeGunSettings *)0x0) {
        CubeGunSettings::CubeGunSettings_Initialize
                  (this_04,0,(this->fields).materialsController,(MethodInfo *)0x0);
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
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pMVar11 < 0);
      pMVar2 = unaff_ESI;
      if (pMVar11 == (MVWorldObjectClientManager *)0x0) break;
      pMVar49 = (MVWorldObjectSpawnerVehicle__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar11,woID,(MethodInfo *)0x0);
      pMVar2 = TypeInfo__MVWorldObjectSpawnerVehicle;
      unaff_EBX.m_Index = woID;
      if (pMVar49 == (MVWorldObjectSpawnerVehicle__Class *)0x0) {
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        bVar4 = (undefined1 *)0xfffffffb < &stack0xfffffffc;
        cVar5 = SCARRY4((int)&stack0xfffffffc,4);
        uVar6._0_1_ = (uint)((int)&stack0x00000000 < 0);
        break;
      }
      pIVar50 = (pMVar49->_0).image;
      bVar13 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      bVar14 = *(byte *)&pIVar50[4].assembly;
      cVar5 = SBORROW1(bVar14,bVar13);
      uVar6._0_1_ = (uint)((char)(bVar14 - bVar13) < '\0');
      bVar4 = true;
      if (bVar14 < bVar13) {
code_?:
        func_?();
        break;
      }
      pMVar51 = *(MVWorldObjectSpawnerVehicle__Class **)
                 ((pIVar50[2].typeCount - 4) + (uint)bVar13 * 4);
      bVar4 = pMVar51 < TypeInfo__MVWorldObjectSpawnerVehicle;
      cVar5 = SBORROW4((int)pMVar51,(int)TypeInfo__MVWorldObjectSpawnerVehicle);
      uVar6._0_1_ = (uint)((int)pMVar51 - (int)TypeInfo__MVWorldObjectSpawnerVehicle < 0);
      if (pMVar51 != TypeInfo__MVWorldObjectSpawnerVehicle) goto code_?;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pMVar11 < 0);
      pMVar2 = pMVar49;
      if (pMVar11 == (MVWorldObjectClientManager *)0x0) break;
      pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar11,(int32_t)(pMVar49->vtable).get_Scale.methodPtr,(MethodInfo *)0x0)
      ;
      pMVar49 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pMVar12 < 0);
      pMVar2 = pMVar49;
      pMVar1 = TypeInfo__MVVehicleBase;
      if (pMVar12 == (MVWorldObject *)0x0) break;
      bVar13 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      bVar14 = (pMVar12->klass->_1).naturalAligment;
      bVar4 = bVar14 < bVar13;
      cVar5 = SBORROW1(bVar14,bVar13);
      uVar6._0_1_ = (uint)((char)(bVar14 - bVar13) < '\0');
      if (!(bool)bVar4) {
        pMVar24 = (MVVehicleBase__Class *)(pMVar12->klass->_1).typeHierarchy[bVar13 - 1];
        bVar4 = pMVar24 < TypeInfo__MVVehicleBase;
        cVar5 = SBORROW4((int)pMVar24,(int)TypeInfo__MVVehicleBase);
        uVar6._0_1_ = (uint)((int)pMVar24 - (int)TypeInfo__MVVehicleBase < 0);
        if (pMVar24 == TypeInfo__MVVehicleBase) {
          iVar52 = func_?();
          pOVar3 = pORam0000009b;
          pMVar1 = (MVVehicleBase__Class *)0x2b;
          if (iVar52 < 0x1b) {
            if (iVar52 == 0x19) {
              pOVar3 = pORam00000097;
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
              if (iVar52 != 0x1a) goto code_?;
              pOVar3 = pORam0000009f;
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
            pMVar49 = (MVWorldObjectSpawnerVehicle__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar3,method_01);
          }
          else if ((iVar52 == 0x1f) || (iVar52 == 0x22)) {
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
          bVar35 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pMVar49,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar35 == 0) {
            return;
          }
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)0x2b,(MethodInfo *)0x0);
          bVar4 = 0;
          cVar5 = '\0';
          uVar6._0_1_ = (uint)((int)pMVar49 < 0);
          pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)0x0;
          if (pMVar49 != (MVWorldObjectSpawnerVehicle__Class *)0x0) {
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
            VehicleBaseSettings_Initialize
                      ((VehicleBaseSettings *)pMVar49,woID,pGVar7,(MethodInfo *)0x0);
            return;
          }
          break;
        }
      }
      goto code_?;
    case WorldObjectType__Enum_RoundCube:
      pRVar53 = (this->fields).roundCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pRVar53 = (RoundCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pRVar53,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pRVar53 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pRVar53 != (RoundCubeSettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar53,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_AdvancedGhost:
      pOVar54 = (this->fields).oculusSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar54 = (OculusSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar54,
                           OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pOVar54 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pOVar54 != (OculusSettings *)0x0) {
        OculusSettings::OculusSettings_Initialize(pOVar54,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_KillLimit:
      pKVar55 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar55 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar55,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar39 = TM::TM__(StringLiteral_Kill_Limit,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pKVar55 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pKVar55 != (KillLimitSettings *)0x0) {
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar55,0,(GameObject *)pMVar2,pSVar39,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_OculusKillLimit:
      pKVar55 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar55 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar55,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar2 = (MVWorldObjectSpawnerVehicle__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar39 = TM::TM__(StringLiteral_Oculus_Kill_Limit,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pKVar55 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pKVar55 != (KillLimitSettings *)0x0) {
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar55,0,(GameObject *)pMVar2,pSVar39,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CountingCube:
      pCVar56 = (this->fields).countingCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar56 = (CountingCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar56,
                           CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pCVar56 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pCVar56 != (CountingCubeSettings *)0x0) {
        CountingCubeSettings::CountingCubeSettings_Initialize(pCVar56,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if (worldObjectType != WorldObjectType__Enum_WorldObjectSpawnerVehicleEnergy)
      goto code_?;
      pVVar57 = (this->fields).vehicleEnergySettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pVVar57 = (VehicleEnergySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pVVar57,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                          );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      uVar6._0_1_ = (uint)((int)pVVar57 < 0);
      pMVar1 = (MVVehicleBase__Class *)0x0;
      if (pVVar57 != (VehicleEnergySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
        VehicleEnergySettings_Initialize(pVVar57,0,pGVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  woID = unaff_EBX.m_Index;
code_?:
  func_?();
  pMVar49 = pMVar2;
code_?:
  uVar58 = func_?();
  ppMVar59 = &(pMVar1->_0).gc_desc;
  pSVar60 = (SettingsToggle__Class *)in((short)(uVar58 >> 0x20));
  (pMVar1->_0).image = (Il2CppImage *)pSVar60;
  bVar13 = (byte)(uVar58 >> 0x20);
  bVar14 = (byte)(uVar58 >> 0x28);
  puVar61 = extraout_ECX;
  if ((uint)cVar5 == (uint)uVar6) {
    bVar62 = CARRY4(*extraout_ECX,(uint)uVar58);
    *extraout_ECX = *extraout_ECX + (uint)uVar58;
code_?:
    piVar63 = (int *)CONCAT22((short)(uVar58 >> 0x30),
                              CONCAT11(bVar14 + (char)uVar58 + bVar62,bVar13));
    pcVar64 = (char *)(CONCAT31((int3)(uVar58 >> 8),
                                ((char)uVar58 - *(byte *)((int)puVar61 + -0x7d5cefc5)) -
                                (*(byte *)&((SettingsFactory *)woID)->klass < 0x10)) ^ 0x89103b84);
    cVar5 = (char)((uint)puVar61 >> 8) + (char)woID;
    bVar4 = (byte)puVar61;
    puVar61 = (uint *)CONCAT22((short)((uint)puVar61 >> 0x10),CONCAT11(cVar5,bVar4));
    *(char *)&(pMVar49->_0).image = *(char *)&(pMVar49->_0).image + cVar5;
    *pcVar64 = *pcVar64 + (char)pcVar64;
    *puVar61 = (uint)(pcVar64 + *puVar61);
    iVar52 = CONCAT31((int3)((uint)pcVar64 >> 8),(char)pcVar64 + (byte)*puVar61) + *puVar61 +
             *puVar61;
    uVar58 = CONCAT44(piVar63,iVar52);
    *puVar61 = *puVar61 + iVar52;
    *(int *)(iVar52 + 0x7060101) = *(int *)(iVar52 + 0x7060101) + iVar52;
    *(byte *)puVar61 = (byte)*puVar61 | bVar4;
    *piVar63 = (int)(*piVar63 + (int)puVar61);
  }
  else {
    bVar65 = SCARRY1(bRam_?,bVar14);
    bVar66 = bRam_? + bVar14;
    bVar62 = CARRY1(bRam_?,bVar14) || CARRY1(bVar66,bVar4);
    bRam_? = bVar66 + bVar4;
    if ((bVar65 != SCARRY1(bVar66,bVar4)) != (char)bRam_? < '\0') {
      pbVar67 = (byte *)((int)&(pMVar49->_0).fields + (int)&pMVar1->_0 * 2 + 3);
      bVar65 = CARRY1(*pbVar67,bVar14) || CARRY1(*pbVar67 + bVar14,bVar62);
      *pbVar67 = *pbVar67 + bVar14 + bVar62;
      bVar66 = (byte)extraout_ECX;
      bVar4 = bVar66 + bVar13;
      bVar62 = CARRY1(bVar66,bVar13) || CARRY1(bVar4,bVar65);
      cVar5 = bVar4 + bVar65;
      puVar61 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),cVar5);
      if (cVar5 != '\0' && (SCARRY1(bVar66,bVar13) != SCARRY1(bVar4,bVar65)) == cVar5 < '\0') {
        *(int *)((int)puVar61 + -0x75afefc5) = *(int *)((int)puVar61 + -0x75afefc5) + -1;
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar6 = (uint)uVar58;
  uVar68 = (uint)(uVar58 >> 0x20) | *(uint *)(&UNK_? + uVar6);
  uVar58 = CONCAT44(uVar68,uVar6) ^ 0xff103b93;
  ((SettingsFactory *)woID)->klass = (SettingsFactory__Class *)ppMVar59;
  pcVar64 = (char *)((uVar6 ^ 0xff103b93) - 0x76);
  *pcVar64 = *pcVar64 + (char)uVar68;
code_?:
  uVar68 = (uint)(uVar58 >> 0x20);
  uVar6 = *(uint *)uVar58;
  *(undefined1 *)ppMVar59 = *(undefined1 *)&(pMVar49->_0).image;
  bVar4 = (byte)((uint)puVar61 >> 8);
  bVar13 = (byte)(uVar58 >> 0x28);
  cVar5 = *(char *)CONCAT22((short)((uint)woID >> 0x10),
                             CONCAT11(*(undefined1 *)&((SettingsFactory *)woID)->klass,(char)woID));
  ppMVar69 = &pMVar49[-1].vtable.RemovePreviewBox.method;
  *(char *)ppMVar69 =
       *(char *)ppMVar69 + (char)uVar58 +
       (CARRY1(bVar4,bVar13) || CARRY1(bVar4 + bVar13,uVar68 < uVar6));
  *(char *)(uVar68 - 0x73) =
       *(char *)(uVar68 - 0x73) + cVar5 +
       (uVar68 < *(uint *)CONCAT22((short)(uVar58 >> 0x10),
                                   (ushort)(byte)((char)uVar58 + (char)(uVar58 >> 8) * -0x74)));
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

