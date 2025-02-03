
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_Initialize
               (RequirementNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&
                    MethodInfo__RequirementNotification____c___Initialize_b__11_0_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RequirementNotification____c);
    func_?(&StringLiteral_starAmount);
    func_?(&StringLiteral_gameCoinAmount);
    func_?(&StringLiteral_levelAmount);
    func_?(&StringLiteral_RequiredRank);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pLVar2 = (this->fields).PanelsToDestroy;
  if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RequirementNotification____c);
  }
  this_03 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            TypeInfo__RequirementNotification____c->static_fields->__9__11_0;
  if (this_03 == (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
    if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RequirementNotification____c);
    }
    object = TypeInfo__RequirementNotification____c->static_fields->__9;
    this_03 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_03,(Object *)object,
               MethodInfo__RequirementNotification____c___Initialize_b__11_0_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    TypeInfo__RequirementNotification____c->static_fields->__9__11_0 =
         (Action_1_UnityEngine_GameObject_ *)this_03;
    func_?(&TypeInfo__RequirementNotification____c->static_fields->__9__11_0,this_03);
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data;
  }
  if (pLVar2 != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
    List_1_System_UInt32__ForEach
              ((List_1_System_UInt32_ *)pLVar2,(Action_1_UInt32_ *)this_03,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
              );
    pLVar2 = (this->fields).PanelsToDestroy;
    if (pLVar2 != (List_1_UnityEngine_GameObject_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      piVar4 = &(pLVar2->fields)._version;
      *piVar4 = *piVar4 + 1;
      (pLVar2->fields)._size = 0;
      if (0 < iVar3) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      in_stack_5 = (int)&data + 3;
      method = (MethodInfo *)TypeInfo__System__Byte;
      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      key = (Object *)func_?();
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
        if (TVar6.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar4 = (int32_t *)func_?(TVar6.m_Index);
          iVar8 = *piVar4;
          this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((this_04 != (MVWorldObjectClientManager *)0x0) &&
              (pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (this_04,iVar8,(MethodInfo *)0x0),
              pMVar9 != (MVWorldObject *)0x0)) &&
             (pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        (pMVar9->fields).data,
             pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
            bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              (pDVar1,(Object *)StringLiteral_levelAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar10 == 0) {
code_?:
              pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        (pMVar9->fields).data;
              if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                  (pDVar1,(Object *)StringLiteral_gameCoinAmount,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                  );
                if (bVar10 == 0) {
code_?:
                  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            (pMVar9->fields).data;
                  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0
                     ) {
                    bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                      (pDVar1,(Object *)StringLiteral_starAmount,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar10 == 0) {
code_?:
                      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                (pMVar9->fields).data;
                      if (pDVar1 !=
                          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,UnityEngine::UIElements::TextureId]::
                                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                          (pDVar1,(Object *)StringLiteral_team,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar10 == 0) {
code_?:
                          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    (pMVar9->fields).data;
                          if (pDVar1 !=
                              (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                            bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,UnityEngine::UIElements::TextureId]::
                                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                              (pDVar1,(Object *)StringLiteral_RequiredRank,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                              );
                            if (bVar10 == 0) {
                              return;
                            }
                            pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)(pMVar9->fields).data;
                            if (pDVar1 !=
                                (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                            {
                              TVar6 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,UnityEngine::UIElements::
                                      TextureId]::
                                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                (pDVar1,(Object *)StringLiteral_RequiredRank,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                );
                              uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
                              if (TVar6.m_Index != 0) {
                                if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                                    (TypeInfo__System__Int32->_0).element_class)
                                goto code_?;
                                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                method = (MethodInfo *)TVar6;
                                puVar11 = (undefined1 *)func_?();
                                uVar12 = *puVar11;
                                if (cRam_? == '\0') {
                                  method = (MethodInfo *)
                                           &
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                  ;
                                  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                  func_?();
                                  data = (Dictionary_2_System_Object_System_Object_ *)
                                         &
                                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                  ;
                                  func_?();
                                  func_?();
                                  func_?();
                                  func_?(&
                                                  TypeInfo__RequirementNotification____c__DisplayClass16_0
                                                 );
                                  cRam_? = '\x01';
                                }
                                method = (MethodInfo *)
                                         TypeInfo__RequirementNotification____c__DisplayClass16_0;
                                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                pUVar13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                                          func_?();
                                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                UxmlObjectListAttributeDescription`1[System::Object]::
                                UxmlObjectListAttributeDescription_1_System_Object___ctor
                                          (pUVar13,(MethodInfo *)0x0);
                                if (pUVar13 !=
                                    (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
                                  *(undefined1 *)&(pUVar13->fields)._._defaultValue_k__BackingField
                                       = uVar12;
                                  target_00 = (Dictionary_2_System_Object_System_Object_ *)
                                              RequirementNotification_InstantiatePanel
                                                        (this_02,(this_02->fields).GameTierPanel,
                                                         (MethodInfo *)0x0);
                                  *(undefined1 *)&pUVar13[1].monitor = 0;
                                  data = target_00;
                                  if (cRam_? == '\0') {
                                    func_?(&TypeInfo__GamePassesManager);
                                    cRam_? = '\x01';
                                  }
                                  if (TypeInfo__GamePassesManager->static_fields->
                                      _GamePassesActive_k__BackingField == 0) {
code_?:
                                    if (*(char *)&pUVar13[1].monitor == '\0') {
                                      pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class
                                                 *)(this_02->fields).OffSprite;
                                    }
                                    else {
                                      pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class
                                                 *)(this_02->fields).OnSprite;
                                    }
                                    pUVar13[1].klass = pUVar14;
                                    func_?(pUVar13 + 1,pUVar14);
                                    pEVar15 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                              func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[System::Object,System::Object]::
                                    UnityAction_2_System_Object_System_Object___ctor
                                              ((UnityAction_2_System_Object_System_Object_ *)pEVar15
                                               ,(Object *)pUVar13,
                                               MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                               ,(MethodInfo *)0x0);
                                    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                    ExecuteEvents_Execute_18
                                              ((GameObject *)target_00,(BaseEventData *)0x0,pEVar15,
                                               bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                              );
                                    return;
                                  }
                                  bVar16 = *(byte *)&(pUVar13->fields)._.
                                                    _defaultValue_k__BackingField;
                                  if (cRam_? == '\0') {
                                    func_?(&TypeInfo__GamePassesManager);
                                    cRam_? = '\x01';
                                  }
                                  pPVar17 = TypeInfo__GamePassesManager->static_fields->
                                           playerPlanetData;
                                  if (pPVar17 != (PlayerPlanetData *)0x0) {
                                    *(bool *)&pUVar13[1].monitor =
                                         bVar16 <= (pPVar17->fields).gamePassTier;
                                    target_00 = data;
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    (pMVar9->fields).data;
                          if (pDVar1 !=
                              (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                            TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,UnityEngine::UIElements::TextureId]::
                                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                              (pDVar1,(Object *)StringLiteral_team,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                              );
                            uVar7 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,TVar6.m_Index);
                            if (TVar6.m_Index != 0) {
                              if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                                  (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
                              goto code_?;
                              data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                              method = (MethodInfo *)TVar6;
                              puVar18 = (undefined4 *)func_?();
                              this = (RequirementNotification *)*puVar18;
                              if (cRam_? == '\0') {
                                method = (MethodInfo *)
                                         &
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                ;
                                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                func_?();
                                data = (Dictionary_2_System_Object_System_Object_ *)
                                       &
                                       bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                ;
                                func_?();
                                this = (RequirementNotification *)
                                       &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                                func_?();
                                func_?();
                                func_?(&
                                                TypeInfo__RequirementNotification____c__DisplayClass14_0
                                               );
                                cRam_? = '\x01';
                              }
                              method = (MethodInfo *)
                                       TypeInfo__RequirementNotification____c__DisplayClass14_0;
                              data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                              pUVar13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                                        func_?();
                              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                              UxmlObjectListAttributeDescription`1[System::Object]::
                              UxmlObjectListAttributeDescription_1_System_Object___ctor
                                        (pUVar13,(MethodInfo *)0x0);
                              if (pUVar13 !=
                                  (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
                                (pUVar13->fields)._._defaultValue_k__BackingField =
                                     (List_1_System_Object_ *)this;
                                RequirementNotification_InstantiatePanel
                                          (this_02,(this_02->fields).TeamPanel,(MethodInfo *)0x0);
                                pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                    ((MethodInfo *)0x0);
                                if ((pMVar19 != (MVNetworkGame *)0x0) &&
                                   (pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                        (pMVar19,(MethodInfo *)0x0),
                                   pMVar20 != (MVLocalPlayer *)0x0)) {
                                  if ((pUVar13->fields)._._defaultValue_k__BackingField ==
                                      (List_1_System_Object_ *)
                                      (pMVar20->fields)._._Team_k__BackingField) {
                                    pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                        ((MethodInfo *)0x0);
                                    if ((pMVar19 == (MVNetworkGame *)0x0) ||
                                       (this_01 = (pMVar19->fields).teamManager,
                                       this_01 == (MVTeamManager *)0x0)) goto code_?;
                                    iVar8 = MVTeamManager::MVTeamManager_TeamCount
                                                       (this_01,(MethodInfo *)0x0);
                                    bVar21 = iVar8 != 1;
                                  }
                                  else {
                                    bVar21 = false;
                                  }
                                  *(bool *)&pUVar13[1].monitor = bVar21;
                                  if (bVar21 == false) {
                                    pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class
                                               *)(this_02->fields).OffSprite;
                                  }
                                  else {
                                    pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class
                                               *)(this_02->fields).OnSprite;
                                  }
                                  pUVar13[1].klass = pUVar14;
                                  pUVar22 = pUVar13 + 1;
                                  func_?(pUVar22,pUVar14);
                                  pEVar15 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                            func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[System::Object,System::Object]::
                                  UnityAction_2_System_Object_System_Object___ctor
                                            ((UnityAction_2_System_Object_System_Object_ *)pEVar15,
                                             (Object *)pUVar13,
                                             MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                             ,(MethodInfo *)0x0);
                                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                  );
                                  }
                                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                  ExecuteEvents_Execute_18
                                            ((GameObject *)pUVar22,(BaseEventData *)0x0,pEVar15,
                                             bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                            );
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                (pMVar9->fields).data;
                      if (pDVar1 !=
                          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                        TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,UnityEngine::UIElements::TextureId]::
                                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                          (pDVar1,(Object *)StringLiteral_starAmount,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          );
                        uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
                        if (TVar6.m_Index != 0) {
                          if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                              (TypeInfo__System__Int32->_0).element_class) goto code_?;
                          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                          method = (MethodInfo *)TVar6;
                          puVar18 = (undefined4 *)func_?();
                          this = (RequirementNotification *)*puVar18;
                          if (cRam_? == '\0') {
                            method = (MethodInfo *)
                                     &
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                            ;
                            data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                            func_?();
                            data = (Dictionary_2_System_Object_System_Object_ *)
                                   &
                                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                            ;
                            func_?();
                            this = (RequirementNotification *)
                                   &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                            func_?();
                            func_?();
                            func_?(&
                                            TypeInfo__RequirementNotification____c__DisplayClass13_0
                                           );
                            cRam_? = '\x01';
                          }
                          method = (MethodInfo *)
                                   TypeInfo__RequirementNotification____c__DisplayClass13_0;
                          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                          pUVar13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                                    func_?();
                          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                          UxmlObjectListAttributeDescription`1[System::Object]::
                          UxmlObjectListAttributeDescription_1_System_Object___ctor
                                    (pUVar13,(MethodInfo *)0x0);
                          if (pUVar13 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)
                          {
                            (pUVar13->fields)._._defaultValue_k__BackingField =
                                 (List_1_System_Object_ *)this;
                            RequirementNotification_InstantiatePanel
                                      (this_02,(this_02->fields).StarPanel,(MethodInfo *)0x0);
                            pLVar23 = (pUVar13->fields)._._defaultValue_k__BackingField;
                            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar19 != (MVNetworkGame *)0x0) &&
                               (pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                    (pMVar19,(MethodInfo *)0x0),
                               pMVar20 != (MVLocalPlayer *)0x0)) {
                              iVar8 = MVPlayer::MVPlayer_GetGameStat
                                                 ((MVPlayer *)pMVar20,
                                                  GameStatCounterType__Enum_Collectible,
                                                  (MethodInfo *)0x0);
                              *(bool *)&pUVar13[1].monitor = (int)pLVar23 <= iVar8;
                              if (iVar8 < (int)pLVar23) {
                                pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class
                                           *)(this_02->fields).OffSprite;
                              }
                              else {
                                pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class
                                           *)(this_02->fields).OnSprite;
                              }
                              pUVar13[1].klass = pUVar14;
                              func_?(pUVar13 + 1);
                              target_01 = 
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                              ;
                              pEVar15 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                        func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System
                              ::Object,System::Object]::
                              UnityAction_2_System_Object_System_Object___ctor
                                        ((UnityAction_2_System_Object_System_Object_ *)pEVar15,
                                         (Object *)pUVar13,
                                         MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                         ,(MethodInfo *)0x0);
                              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                              }
                              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                              ExecuteEvents_Execute_18
                                        ((GameObject *)target_01,(BaseEventData *)0x0,pEVar15,
                                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                        );
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            (pMVar9->fields).data;
                  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0
                     ) {
                    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      (pDVar1,(Object *)StringLiteral_gameCoinAmount,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
                    if (TVar6.m_Index != 0) {
                      if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                          (TypeInfo__System__Int32->_0).element_class) goto code_?;
                      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                      method = (MethodInfo *)TVar6;
                      puVar18 = (undefined4 *)func_?();
                      this = (RequirementNotification *)*puVar18;
                      if (cRam_? == '\0') {
                        method = (MethodInfo *)
                                 &
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                        ;
                        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                        func_?();
                        data = (Dictionary_2_System_Object_System_Object_ *)
                               &
                               bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                        ;
                        func_?();
                        this = (RequirementNotification *)
                               &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                        func_?();
                        func_?();
                        func_?(&TypeInfo__RequirementNotification____c__DisplayClass12_0);
                        cRam_? = '\x01';
                      }
                      method = (MethodInfo *)
                               TypeInfo__RequirementNotification____c__DisplayClass12_0;
                      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                      pUVar13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                                func_?();
                      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      UxmlObjectListAttributeDescription`1[System::Object]::
                      UxmlObjectListAttributeDescription_1_System_Object___ctor
                                (pUVar13,(MethodInfo *)0x0);
                      if (pUVar13 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
                        (pUVar13->fields)._._defaultValue_k__BackingField =
                             (List_1_System_Object_ *)this;
                        RequirementNotification_InstantiatePanel
                                  (this_02,(this_02->fields).GamecoinPanel,(MethodInfo *)0x0);
                        pLVar23 = (pUVar13->fields)._._defaultValue_k__BackingField;
                        pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if ((pMVar19 != (MVNetworkGame *)0x0) &&
                           (this_00 = (pMVar19->fields)._GameCoinManager_k__BackingField,
                           this_00 != (MVGameCoinManager *)0x0)) {
                          iVar8 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                                             (this_00,(MethodInfo *)0x0);
                          *(bool *)&pUVar13[1].monitor = (int)pLVar23 <= iVar8;
                          if (iVar8 < (int)pLVar23) {
                            pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)
                                      (this_02->fields).OffSprite;
                          }
                          else {
                            pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)
                                      (this_02->fields).OnSprite;
                          }
                          pUVar13[1].klass = pUVar14;
                          pUVar22 = pUVar13 + 1;
                          func_?(pUVar22,pUVar14);
                          pEVar15 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                    func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    ((UnityAction_2_System_Object_System_Object_ *)pEVar15,
                                     (Object *)pUVar13,
                                     MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                          }
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_Execute_18
                                    ((GameObject *)pUVar22,(BaseEventData *)0x0,pEVar15,
                                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                    );
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        (pMVar9->fields).data;
              if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (pDVar1,(Object *)StringLiteral_levelAmount,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
                if (TVar6.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  puVar18 = (undefined4 *)func_?(TVar6.m_Index);
                  pLVar23 = (List_1_System_Object_ *)*puVar18;
                  if (cRam_? == '\0') {
                    func_?(&
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                   );
                    func_?(&
                                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                   );
                    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    func_?(&
                                    MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                   );
                    func_?(&TypeInfo__RequirementNotification____c__DisplayClass15_0);
                    cRam_? = '\x01';
                  }
                  pUVar13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                            func_?(TypeInfo__RequirementNotification____c__DisplayClass15_0
                                           );
                  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  UxmlObjectListAttributeDescription`1[System::Object]::
                  UxmlObjectListAttributeDescription_1_System_Object___ctor
                            (pUVar13,(MethodInfo *)0x0);
                  if (pUVar13 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
                    (pUVar13->fields)._._defaultValue_k__BackingField = pLVar23;
                    target = RequirementNotification_InstantiatePanel
                                       (this,(this->fields).LevelPanel,(MethodInfo *)0x0);
                    pLVar23 = (pUVar13->fields)._._defaultValue_k__BackingField;
                    pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar19 != (MVNetworkGame *)0x0) &&
                       (pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar19,(MethodInfo *)0x0),
                       pMVar20 != (MVLocalPlayer *)0x0)) {
                      iVar3 = (pMVar20->fields)._.level;
                      *(bool *)&pUVar13[1].monitor = (int)pLVar23 <= iVar3;
                      if (iVar3 < (int)pLVar23) {
                        pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)
                                  (this->fields).OffSprite;
                      }
                      else {
                        pUVar14 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)
                                  (this->fields).OnSprite;
                      }
                      pUVar13[1].klass = pUVar14;
                      func_?(pUVar13 + 1,pUVar14);
                      pEVar15 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                func_?(
                                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                               );
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)pEVar15,
                                 (Object *)pUVar13,
                                 MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (target,(BaseEventData *)0x0,pEVar15,
                                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                );
                      goto code_?;
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
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* GameObject InstantiatePanel(NotificationRequirementPanel) */

GameObject *
Assembly-CSharp.dll::RequirementNotification::RequirementNotification_InstantiatePanel
          (RequirementNotification *this,NotificationRequirementPanel *panel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (panel != (NotificationRequirementPanel *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)panel,(MethodInfo *)0x0);
    this_00 = (this->fields).Layout;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar1,parent,0,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      this_01 = (this->fields).PanelsToDestroy;
      if (this_01 != (List_1_UnityEngine_GameObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)pGVar1,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  );
        return pGVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar2)();
  return pGVar1;
}


/* Void ShowGameCoinRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameCoinRequirement
               (RequirementNotification *this,int32_t gameCoins,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RequirementNotification____c__DisplayClass12_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)gameCoins;
    RequirementNotification_InstantiatePanel(this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
    pLVar1 = (this_01->fields)._._defaultValue_k__BackingField;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
       this_00 != (MVGameCoinManager *)0x0)) {
      iVar3 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
      *(bool *)&this_01[1].monitor = (int)pLVar1 <= iVar3;
      if (iVar3 < (int)pLVar1) {
        pUStack4 =
             (UxmlObjectListAttributeDescription_1_System_Object___Class *)(this->fields).OffSprite;
      }
      else {
        pUStack4 =
             (UxmlObjectListAttributeDescription_1_System_Object___Class *)(this->fields).OnSprite;
      }
      this_01[1].klass = pUStack4;
      func_?();
      target = 
      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
      ;
      functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)functor,(Object *)this_01,
                 MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                ((GameObject *)target,(BaseEventData *)0x0,functor,
                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                );
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowGameTierRequirement(GamePassTier) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameTierRequirement
               (RequirementNotification *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RequirementNotification____c__DisplayClass16_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    *(undefined1 *)&(this_00->fields)._._defaultValue_k__BackingField = (undefined1)tier;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).GameTierPanel,(MethodInfo *)0x0);
    *(undefined1 *)&this_00[1].monitor = 0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      bVar1 = *(byte *)&(this_00->fields)._._defaultValue_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
      *(bool *)&this_00[1].monitor = bVar1 <= (pPVar2->fields).gamePassTier;
    }
    if (*(char *)&this_00[1].monitor == '\0') {
      pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)
               (this->fields).OffSprite;
    }
    else {
      pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)(this->fields).OnSprite
      ;
    }
    this_00[1].klass = pUVar3;
    func_?(this_00 + 1);
    functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)functor,(Object *)this_00,
               MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
              (target,(BaseEventData *)0x0,functor,
               bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
              );
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowLevelRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowLevelRequirement
               (RequirementNotification *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RequirementNotification____c__DisplayClass15_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)level;
    RequirementNotification_InstantiatePanel(this,(this->fields).LevelPanel,(MethodInfo *)0x0);
    pLVar1 = (this_00->fields)._._defaultValue_k__BackingField;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        iVar3 = (pMVar2->fields)._.level;
        *(bool *)&this_00[1].monitor = (int)pLVar1 <= iVar3;
        if (iVar3 < (int)pLVar1) {
          pUStack4 =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)
               (this->fields).OffSprite;
        }
        else {
          pUStack4 =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)(this->fields).OnSprite
          ;
        }
        this_00[1].klass = pUStack4;
        func_?();
        target = 
        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
        ;
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,(Object *)this_00,
                   MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        pUStack4 =
             (UxmlObjectListAttributeDescription_1_System_Object___Class *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                  ((GameObject *)target,(BaseEventData *)0x0,functor,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowStarRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowStarRequirement
               (RequirementNotification *this,int32_t stars,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass13_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RequirementNotification____c__DisplayClass13_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)stars;
    RequirementNotification_InstantiatePanel(this,(this->fields).StarPanel,(MethodInfo *)0x0);
    pLVar1 = (this_00->fields)._._defaultValue_k__BackingField;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        iVar2 = MVPlayer::MVPlayer_GetGameStat
                          ((MVPlayer *)this_02,GameStatCounterType__Enum_Collectible,
                           (MethodInfo *)0x0);
        *(bool *)&this_00[1].monitor = (int)pLVar1 <= iVar2;
        if (iVar2 < (int)pLVar1) {
          pUStack3 =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)
               (this->fields).OffSprite;
        }
        else {
          pUStack3 =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)(this->fields).OnSprite
          ;
        }
        this_00[1].klass = pUStack3;
        pUStack4 = this_00 + 1;
        pEStack5 =
             (ExecuteEvents_EventFunction_1_INotificationRequirementPanel___Class *)&UNK_?;
        func_?();
        pEStack5 =
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
        ;
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,(Object *)this_00,
                   MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        pUStack3 =
             (UxmlObjectListAttributeDescription_1_System_Object___Class *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                  ((GameObject *)this_00,(BaseEventData *)0x0,functor,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowTeamRequirement(MVTeam) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowTeamRequirement
               (RequirementNotification *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RequirementNotification____c__DisplayClass14_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)team;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).TeamPanel,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        if ((this_01->fields)._._defaultValue_k__BackingField ==
            (List_1_System_Object_ *)(pMVar2->fields)._._Team_k__BackingField) {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
          goto code_?;
          iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
          bVar4 = iVar3 != 1;
        }
        else {
          bVar4 = false;
        }
        *(bool *)&this_01[1].monitor = bVar4;
        if (bVar4 == false) {
          pUStack5 =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)
               (this->fields).OffSprite;
        }
        else {
          pUStack5 =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)(this->fields).OnSprite
          ;
        }
        this_01[1].klass = pUStack5;
        pUStack6 = this_01 + 1;
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,(Object *)this_01,
                   MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        pUStack5 =
             (UxmlObjectListAttributeDescription_1_System_Object___Class *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                  (target,(BaseEventData *)0x0,functor,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* RequirementNotification() */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification__ctor
               (RequirementNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields).PanelsToDestroy = this_00;
  func_?(&(this->fields).PanelsToDestroy,this_00);
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
  return;
}

