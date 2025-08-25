
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
  pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pLVar2 = (this->fields).PanelsToDestroy;
  if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RequirementNotification____c);
  }
  this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)TypeInfo__RequirementNotification____c->static_fields->__9__11_0;
  if (this_03 ==
      (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RequirementNotification____c);
    }
    object = TypeInfo__RequirementNotification____c->static_fields->__9;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)object,
               MethodInfo__RequirementNotification____c___Initialize_b__11_0_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    TypeInfo__RequirementNotification____c->static_fields->__9__11_0 =
         (Action_1_UnityEngine_GameObject_ *)this_03;
    func_?(&TypeInfo__RequirementNotification____c->static_fields->__9__11_0,this_03);
    pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)data;
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
      pOVar6 = (Object *)func_?();
      if (pEVar1 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pEVar1,
                            pOVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar8 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
        if (TVar7.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar4 = (int32_t *)func_?(TVar7.m_Index);
          iVar9 = *piVar4;
          this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((this_04 != (MVWorldObjectClientManager *)0x0) &&
              (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (this_04,iVar9,(MethodInfo *)0x0),
              pMVar10 != (MVWorldObject *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar10->fields).data, method_01 != (MethodInfo *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            method_02 = 
            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
            ;
            bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                method_01,(Object *)StringLiteral_levelAmount,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               );
            if (bVar11 == 0) {
code_?:
              pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (pMVar10->fields).data;
              if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                   (pDVar12,(Object *)StringLiteral_gameCoinAmount,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                   );
                if (bVar11 == 0) {
code_?:
                  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           (pMVar10->fields).data;
                  if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  {
                    bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::TextureId]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                       (pDVar12,(Object *)StringLiteral_starAmount,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                       );
                    if (bVar11 == 0) {
code_?:
                      pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               (pMVar10->fields).data;
                      if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    0x0) {
                        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,UnityEngine::UIElements::TextureId]::
                                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                           (pDVar12,(Object *)StringLiteral_team,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                           );
                        if (bVar11 == 0) {
code_?:
                          pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   (pMVar10->fields).data;
                          if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                         *)0x0) {
                            bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,UnityEngine::UIElements::TextureId]::
                                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                               (pDVar12,(Object *)StringLiteral_RequiredRank,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                               );
                            if (bVar11 == 0) {
                              return;
                            }
                            pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )(pMVar10->fields).data;
                            if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                           *)0x0) {
                              TVar7 = mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Object,UnityEngine::UIElements::
                                       TextureId]::
                                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                 (pDVar12,(Object *)StringLiteral_RequiredRank,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                 );
                              uVar8 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
                              if (TVar7.m_Index != 0) {
                                if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
                                    (TypeInfo__System__Int32->_0).element_class)
                                goto code_?;
                                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                method = (MethodInfo *)TVar7;
                                puVar13 = (undefined1 *)func_?();
                                uVar14 = *puVar13;
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
                                pOVar6 = (Object *)func_?();
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                          (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pEVar1
                                          );
                                if (pOVar6 != (Object *)0x0) {
                                  *(undefined1 *)&pOVar6[1].klass = uVar14;
                                  target = (Dictionary_2_System_Object_System_Object_ *)
                                           RequirementNotification_InstantiatePanel
                                                     (this_02,(this_02->fields).GameTierPanel,
                                                      (MethodInfo *)0x0);
                                  *(undefined1 *)&pOVar6[2].klass = 0;
                                  data = target;
                                  if (cRam_? == '\0') {
                                    func_?(&TypeInfo__GamePassesManager);
                                    cRam_? = '\x01';
                                  }
                                  if (TypeInfo__GamePassesManager->static_fields->
                                      _GamePassesActive_k__BackingField == 0) {
code_?:
                                    pSVar15 = (&(this_02->fields).OnSprite)
                                             [*(char *)&pOVar6[2].klass == '\0'];
                                    pOVar6[1].monitor = (MonitorData *)pSVar15;
                                    func_?(&pOVar6[1].monitor,pSVar15);
                                    pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                              func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[System::Object,System::Object]::
                                    UnityAction_2_System_Object_System_Object___ctor
                                              ((UnityAction_2_System_Object_System_Object_ *)pEVar1
                                               ,pOVar6,
                                               MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                               ,(MethodInfo *)0x0);
                                    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                    ExecuteEvents_Execute_18
                                              ((GameObject *)target,(BaseEventData *)0x0,pEVar1,
                                               bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                              );
                                    return;
                                  }
                                  bVar16 = *(byte *)&pOVar6[1].klass;
                                  if (cRam_? == '\0') {
                                    func_?(&TypeInfo__GamePassesManager);
                                    cRam_? = '\x01';
                                  }
                                  pPVar17 = TypeInfo__GamePassesManager->static_fields->
                                           playerPlanetData;
                                  if (pPVar17 != (PlayerPlanetData *)0x0) {
                                    *(bool *)&pOVar6[2].klass =
                                         bVar16 <= (pPVar17->fields).gamePassTier;
                                    target = data;
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   (pMVar10->fields).data;
                          if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                         *)0x0) {
                            TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,UnityEngine::UIElements::TextureId]::
                                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                               (pDVar12,(Object *)StringLiteral_team,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               );
                            uVar8 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,TVar7.m_Index);
                            if (TVar7.m_Index != 0) {
                              if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
                                  (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
                              goto code_?;
                              data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                              method = (MethodInfo *)TVar7;
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
                              pOVar6 = (Object *)func_?();
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        (pOVar6,ExceptionArgument__Enum_obj,method_00);
                              if (pOVar6 != (Object *)0x0) {
                                pOVar6[1].klass = (Object__Class *)this;
                                RequirementNotification_InstantiatePanel
                                          (this_02,(this_02->fields).TeamPanel,(MethodInfo *)0x0);
                                pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                    ((MethodInfo *)0x0);
                                if ((pMVar19 != (MVNetworkGame *)0x0) &&
                                   (pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                        (pMVar19,(MethodInfo *)0x0),
                                   pMVar20 != (MVLocalPlayer *)0x0)) {
                                  if (pOVar6[1].klass ==
                                      (Object__Class *)(pMVar20->fields)._._Team_k__BackingField) {
                                    pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                        ((MethodInfo *)0x0);
                                    if ((pMVar19 == (MVNetworkGame *)0x0) ||
                                       (this_01 = (pMVar19->fields).teamManager,
                                       this_01 == (MVTeamManager *)0x0)) goto code_?;
                                    iVar9 = MVTeamManager::MVTeamManager_TeamCount
                                                       (this_01,(MethodInfo *)0x0);
                                    bVar21 = iVar9 != 1;
                                  }
                                  else {
                                    bVar21 = false;
                                  }
                                  *(bool *)&pOVar6[2].klass = bVar21;
                                  pSVar15 = (&(this_02->fields).OnSprite)
                                           [*(char *)&pOVar6[2].klass == '\0'];
                                  pOVar6[1].monitor = (MonitorData *)pSVar15;
                                  pGVar22 = (GameObject *)&pOVar6[1].monitor;
                                  func_?(pGVar22,pSVar15);
                                  pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                            func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[System::Object,System::Object]::
                                  UnityAction_2_System_Object_System_Object___ctor
                                            ((UnityAction_2_System_Object_System_Object_ *)pEVar1,
                                             pOVar6,
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
                                            (pGVar22,(BaseEventData *)0x0,pEVar1,
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
                      pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               (pMVar10->fields).data;
                      if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    0x0) {
                        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,UnityEngine::UIElements::TextureId]::
                                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                           (pDVar12,(Object *)StringLiteral_starAmount,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           );
                        uVar8 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
                        if (TVar7.m_Index != 0) {
                          if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
                              (TypeInfo__System__Int32->_0).element_class) goto code_?;
                          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                          method = (MethodInfo *)TVar7;
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
                          pOVar6 = (Object *)func_?();
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                    (pOVar6,ExceptionArgument__Enum_obj,method_01);
                          if (pOVar6 != (Object *)0x0) {
                            pOVar6[1].klass = (Object__Class *)this;
                            method_00 = (MethodInfo *)&UNK_?;
                            pGVar22 = RequirementNotification_InstantiatePanel
                                                (this_02,(this_02->fields).StarPanel,
                                                 (MethodInfo *)0x0);
                            pOVar23 = pOVar6[1].klass;
                            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar19 != (MVNetworkGame *)0x0) &&
                               (pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                    (pMVar19,(MethodInfo *)0x0),
                               pMVar20 != (MVLocalPlayer *)0x0)) {
                              iVar9 = MVPlayer::MVPlayer_GetGameStat
                                                 ((MVPlayer *)pMVar20,
                                                  GameStatCounterType__Enum_Collectible,
                                                  (MethodInfo *)0x0);
                              *(bool *)&pOVar6[2].klass = (int)pOVar23 <= iVar9;
                              pSVar15 = (&(this_02->fields).OnSprite)[iVar9 < (int)pOVar23];
                              pOVar6[1].monitor = (MonitorData *)pSVar15;
                              func_?(&pOVar6[1].monitor,pSVar15);
                              pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                        func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System
                              ::Object,System::Object]::
                              UnityAction_2_System_Object_System_Object___ctor
                                        ((UnityAction_2_System_Object_System_Object_ *)pEVar1,
                                         pOVar6,
                                         MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                         ,(MethodInfo *)0x0);
                              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                              }
                              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                              ExecuteEvents_Execute_18
                                        (pGVar22,(BaseEventData *)0x0,pEVar1,
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
                  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           (pMVar10->fields).data;
                  if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  {
                    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::TextureId]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                       (pDVar12,(Object *)StringLiteral_gameCoinAmount,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    uVar8 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
                    if (TVar7.m_Index != 0) {
                      if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
                          (TypeInfo__System__Int32->_0).element_class) goto code_?;
                      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                      method = (MethodInfo *)TVar7;
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
                      pOVar6 = (Object *)func_?();
                      method_00 = (MethodInfo *)&UNK_?;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                (pOVar6,ExceptionArgument__Enum_obj,method_02);
                      if (pOVar6 != (Object *)0x0) {
                        pOVar6[1].klass = (Object__Class *)this;
                        pGVar22 = RequirementNotification_InstantiatePanel
                                            (this_02,(this_02->fields).GamecoinPanel,
                                             (MethodInfo *)0x0);
                        pOVar23 = pOVar6[1].klass;
                        pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if ((pMVar19 != (MVNetworkGame *)0x0) &&
                           (this_00 = (pMVar19->fields)._GameCoinManager_k__BackingField,
                           this_00 != (MVGameCoinManager *)0x0)) {
                          iVar9 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                                             (this_00,(MethodInfo *)0x0);
                          *(bool *)&pOVar6[2].klass = (int)pOVar23 <= iVar9;
                          pSVar15 = (&(this_02->fields).OnSprite)[iVar9 < (int)pOVar23];
                          pOVar6[1].monitor = (MonitorData *)pSVar15;
                          func_?(&pOVar6[1].monitor,pSVar15);
                          pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                    func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    ((UnityAction_2_System_Object_System_Object_ *)pEVar1,pOVar6,
                                     MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                          }
                          method_01 = (MethodInfo *)&UNK_?;
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_Execute_18
                                    (pGVar22,(BaseEventData *)0x0,pEVar1,
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
              pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (pMVar10->fields).data;
              if (pDVar12 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (pDVar12,(Object *)StringLiteral_levelAmount,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar8 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
                if (TVar7.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  puVar18 = (undefined4 *)func_?(TVar7.m_Index);
                  pOVar23 = (Object__Class *)*puVar18;
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
                  pOVar6 = (Object *)
                            func_?(TypeInfo__RequirementNotification____c__DisplayClass15_0
                                           );
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            (pOVar6,ExceptionArgument__Enum_obj,method_01);
                  if (pOVar6 != (Object *)0x0) {
                    pOVar6[1].klass = pOVar23;
                    method_00 = (MethodInfo *)&UNK_?;
                    pGVar22 = RequirementNotification_InstantiatePanel
                                        (this,(this->fields).LevelPanel,(MethodInfo *)0x0);
                    pOVar23 = pOVar6[1].klass;
                    pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar19 != (MVNetworkGame *)0x0) &&
                       (pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar19,(MethodInfo *)0x0),
                       pMVar20 != (MVLocalPlayer *)0x0)) {
                      iVar3 = (pMVar20->fields)._.level;
                      *(bool *)&pOVar6[2].klass = (int)pOVar23 <= iVar3;
                      pSVar15 = (&(this->fields).OnSprite)[iVar3 < (int)pOVar23];
                      pOVar6[1].monitor = (MonitorData *)pSVar15;
                      func_?(&pOVar6[1].monitor,pSVar15);
                      pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                func_?(
                                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                               );
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)pEVar1,pOVar6,
                                 MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      }
                      method_02 = (MethodInfo *)0x0;
                      method_01 = (MethodInfo *)&UNK_?;
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar22,(BaseEventData *)0x0,pEVar1,
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
  uVar8 = func_?();
code_?:
  func_?(uVar8);
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
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)gameCoins;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
    pOVar1 = value[1].klass;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
       this_00 != (MVGameCoinManager *)0x0)) {
      iVar3 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
      *(bool *)&value[2].klass = (int)pOVar1 <= iVar3;
      value[1].monitor = (MonitorData *)(&(this->fields).OnSprite)[iVar3 < (int)pOVar1];
      func_?();
      functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                 MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                (target,(BaseEventData *)0x0,functor,
                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    *(undefined1 *)&value[1].klass = (undefined1)tier;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).GameTierPanel,(MethodInfo *)0x0);
    *(undefined1 *)&value[2].klass = 0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      bVar1 = *(byte *)&value[1].klass;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
      *(bool *)&value[2].klass = bVar1 <= (pPVar2->fields).gamePassTier;
    }
    value[1].monitor = (MonitorData *)(&(this->fields).OnSprite)[*(char *)&value[2].klass == '\0'];
    func_?(&value[1].monitor);
    functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)functor,value,
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)level;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).LevelPanel,(MethodInfo *)0x0);
    pOVar1 = value[1].klass;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        iVar3 = (pMVar2->fields)._.level;
        *(bool *)&value[2].klass = (int)pOVar1 <= iVar3;
        value[1].monitor = (MonitorData *)(&(this->fields).OnSprite)[iVar3 < (int)pOVar1];
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                   MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                  (target,(BaseEventData *)0x0,functor,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass13_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)stars;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).StarPanel,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVLocalPlayer *)0x0) {
        iVar1 = MVPlayer::MVPlayer_GetGameStat
                          ((MVPlayer *)this_01,GameStatCounterType__Enum_Collectible,
                           (MethodInfo *)0x0);
        *(bool *)&value[2].klass = 2 < iVar1;
        value[1].monitor = (MonitorData *)(&(this->fields).OnSprite)[iVar1 < 3];
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                   MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                  (target,(BaseEventData *)0x0,functor,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)team;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).TeamPanel,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        if (value[1].klass == (Object__Class *)(pMVar2->fields)._._Team_k__BackingField) {
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
        *(bool *)&value[2].klass = bVar4;
        pSStack5 = (&(this->fields).OnSprite)[*(char *)&value[2].klass == '\0'];
        value[1].monitor = (MonitorData *)pSStack5;
        ppMStack6 = &value[1].monitor;
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                   MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
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

