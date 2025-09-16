
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_Initialize
               (RequirementNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
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
                    MethodInfo__RequirementNotification____c___Initialize_b__13_0_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RequirementNotification____c);
    func_?(&StringLiteral_Missing_requirements_);
    func_?(&StringLiteral_starAmount);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_gameCoinAmount);
    func_?(&StringLiteral_levelAmount);
    func_?(&StringLiteral_RequiredRank);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  functor = (ExecuteEvents_EventFunction_1_System_Object_ *)data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pLVar1 = (this->fields).PanelsToDestroy;
  if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RequirementNotification____c);
  }
  this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)TypeInfo__RequirementNotification____c->static_fields->__9__13_0;
  if (this_02 ==
      (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RequirementNotification____c);
    }
    object = TypeInfo__RequirementNotification____c->static_fields->__9;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)object,
               MethodInfo__RequirementNotification____c___Initialize_b__13_0_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    TypeInfo__RequirementNotification____c->static_fields->__9__13_0 =
         (Action_1_UnityEngine_GameObject_ *)this_02;
    func_?(&TypeInfo__RequirementNotification____c->static_fields->__9__13_0,this_02);
    functor = (ExecuteEvents_EventFunction_1_System_Object_ *)data;
  }
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
    List_1_System_UInt32__ForEach
              ((List_1_System_UInt32_ *)pLVar1,(Action_1_UInt32_ *)this_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
              );
    pLVar1 = (this->fields).PanelsToDestroy;
    if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
      iVar2 = (pLVar1->fields)._size;
      piVar3 = &(pLVar1->fields)._version;
      *piVar3 = *piVar3 + 1;
      (pLVar1->fields)._size = 0;
      if (0 < iVar2) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      method = (MethodInfo *)((int)&data + 3);
      data = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
      pOVar4 = (Object *)func_?();
      if (functor != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)functor,
                            pOVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
        if (TVar5.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar3 = (int32_t *)func_?(TVar5.m_Index);
          iVar7 = *piVar3;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_03 != (MVWorldObjectClientManager *)0x0) {
            pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_03,iVar7,(MethodInfo *)0x0);
            if ((pMVar8 != (MVWorldObject *)0x0) &&
               (method_00 = (MethodInfo *)(pMVar8->fields).data, method_00 != (MethodInfo *)0x0)) {
              method_01 = 
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
              ;
              bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 method_00,(Object *)StringLiteral_levelAmount,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar9 == 0) {
code_?:
                pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         (pMVar8->fields).data;
                if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                  bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                    (pDVar10,(Object *)StringLiteral_gameCoinAmount,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                    );
                  if (bVar9 == 0) {
code_?:
                    pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             (pMVar8->fields).data;
                    if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  0x0) {
                      bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                        (pDVar10,(Object *)StringLiteral_starAmount,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                        );
                      if (bVar9 == 0) {
code_?:
                        pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 (pMVar8->fields).data;
                        if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)0x0) {
                          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,UnityEngine::UIElements::TextureId]::
                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                            (pDVar10,(Object *)StringLiteral_team,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                            );
                          if (bVar9 == 0) {
code_?:
                            pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )(pMVar8->fields).data;
                            if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                           *)0x0) {
                              bVar9 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,UnityEngine::UIElements::
                                      TextureId]::
                                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                                (pDVar10,(Object *)StringLiteral_RequiredRank,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                                );
                              if (bVar9 == 0) {
code_?:
                                pTVar11 = (this->fields).Label;
                                pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                                pSVar12 = mscorlib.dll::System::String::String_Concat_4
                                                    (StringLiteral_Missing_requirements_,pSVar12,
                                                     ::StringLiteral___,(MethodInfo *)0x0);
                                if (pTVar11 != (Text *)0x0) {
                                  (*(code *)(pTVar11->klass->vtable).set_text.method)
                                            (pTVar11,pSVar12,
                                             (pTVar11->klass->vtable).
                                             CalculateLayoutInputHorizontal_1.methodPtr);
                                  this_01 = (this->fields).tertiaryNotificationUI;
                                  l = (*(code *)(this->klass->vtable).get_Lifetime.method)
                                                (this,(this->klass->vtable).Initialize.methodPtr);
                                  if (this_01 != (TertiaryNotificationUI *)0x0) {
                                    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                                              (this_01,(Notification *)this,l,0,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                              else {
                                pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                          *)(pMVar8->fields).data;
                                if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                               *)0x0) {
                                  TVar5 = mscorlib.dll::System::Collections::Generic::
                                           Dictionary`2[System::Object,UnityEngine::UIElements::
                                           TextureId]::
                                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                     (pDVar10,(Object *)StringLiteral_RequiredRank,
                                                                                                            
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                  uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
                                  if (TVar5.m_Index != 0) {
                                    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
                                        (TypeInfo__System__Int32->_0).element_class)
                                    goto code_?;
                                    data = (Dictionary_2_System_Object_System_Object_ *)TVar5;
                                    puVar13 = (undefined1 *)func_?();
                                    uVar14 = *puVar13;
                                    if (cRam_? == '\0') {
                                      data = (Dictionary_2_System_Object_System_Object_ *)
                                             &
                                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                      ;
                                      func_?();
                                      func_?();
                                      func_?();
                                      func_?();
                                      func_?();
                                      func_?(&
                                                  TypeInfo__RequirementNotification____c__DisplayClass18_0
                                                  );
                                      cRam_? = '\x01';
                                    }
                                    data = (Dictionary_2_System_Object_System_Object_ *)
                                           TypeInfo__RequirementNotification____c__DisplayClass18_0;
                                    pOVar4 = (Object *)func_?();
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                              (pOVar4,ExceptionArgument__Enum_obj,
                                               (MethodInfo *)functor);
                                    if (pOVar4 != (Object *)0x0) {
                                      *(undefined1 *)&pOVar4[1].klass = uVar14;
                                      pGVar15 = RequirementNotification_InstantiatePanel
                                                          (this,(this->fields).GameTierPanel,
                                                           (MethodInfo *)0x0);
                                      *(undefined1 *)&pOVar4[2].klass = 0;
                                      if (cRam_? == '\0') {
                                        func_?(&TypeInfo__GamePassesManager);
                                        cRam_? = '\x01';
                                      }
                                      if (TypeInfo__GamePassesManager->static_fields->
                                          _GamePassesActive_k__BackingField != 0) {
                                        data = (Dictionary_2_System_Object_System_Object_ *)
                                               CONCAT13(*(byte *)&pOVar4[1].klass,data._0_3_);
                                        bVar16 = *(byte *)&pOVar4[1].klass;
                                        if (cRam_? == '\0') {
                                          func_?(&TypeInfo__GamePassesManager);
                                          cRam_? = '\x01';
                                          bVar16 = data._3_1_;
                                        }
                                        pPVar17 = TypeInfo__GamePassesManager->static_fields->
                                                 playerPlanetData;
                                        if (pPVar17 == (PlayerPlanetData *)0x0)
                                        goto code_?;
                                        *(bool *)&pOVar4[2].klass =
                                             bVar16 <= (pPVar17->fields).gamePassTier;
                                      }
                                      if (*(char *)&pOVar4[2].klass == '\0') {
                                        pSVar18 = (this->fields).OffSprite;
                                      }
                                      else {
                                        pSVar18 = (this->fields).OnSprite;
                                      }
                                      pOVar4[1].monitor = (MonitorData *)pSVar18;
                                      func_?(&pOVar4[1].monitor,pSVar18);
                                      if (pGVar15 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponent_1
                                                  (pGVar15,
                                                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                                                  );
                                        data = (Dictionary_2_System_Object_System_Object_ *)
                                               func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`2[System::Object,System::Object]::
                                        UnityAction_2_System_Object_System_Object___ctor
                                                  ((UnityAction_2_System_Object_System_Object_ *)
                                                   data,pOVar4,
                                                                                                      
                                                  MethodInfo__RequirementNotification____c__DisplayClass18_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                                  ,(MethodInfo *)0x0);
                                        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1)
                                            .cctor_finished_or_no_cctor == 0) {
                                          func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                  );
                                        }
                                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents
                                        ::ExecuteEvents_Execute_18
                                                  (pGVar15,(BaseEventData *)0x0,
                                                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                                                   data,
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
                            pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )(pMVar8->fields).data;
                            if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                           *)0x0) {
                              TVar5 = mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Object,UnityEngine::UIElements::
                                       TextureId]::
                                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                 (pDVar10,(Object *)StringLiteral_team,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                 );
                              uVar6 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,TVar5.m_Index);
                              if (TVar5.m_Index != 0) {
                                if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
                                    (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
                                goto code_?;
                                data = (Dictionary_2_System_Object_System_Object_ *)TVar5;
                                pMVar19 = (MVTeam__Enum *)func_?();
                                functor = (ExecuteEvents_EventFunction_1_System_Object_ *)*pMVar19;
                                RequirementNotification_ShowTeamRequirement
                                          (this,(MVTeam__Enum)functor,(MethodInfo *)0x0);
                                goto code_?;
                              }
                            }
                          }
                        }
                      }
                      else {
                        pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 (pMVar8->fields).data;
                        if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)0x0) {
                          TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,UnityEngine::UIElements::TextureId]::
                                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                             (pDVar10,(Object *)StringLiteral_starAmount,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             );
                          uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
                          if (TVar5.m_Index != 0) {
                            if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
                                (TypeInfo__System__Int32->_0).element_class) goto code_?;
                            data = (Dictionary_2_System_Object_System_Object_ *)TVar5;
                            pMVar19 = (MVTeam__Enum *)func_?();
                            functor = (ExecuteEvents_EventFunction_1_System_Object_ *)*pMVar19;
                            RequirementNotification_ShowStarRequirement
                                      (this,(int32_t)functor,(MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                  else {
                    pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             (pMVar8->fields).data;
                    if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  0x0) {
                      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,UnityEngine::UIElements::TextureId]::
                               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                         (pDVar10,(Object *)StringLiteral_gameCoinAmount,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                      uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
                      if (TVar5.m_Index != 0) {
                        if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
                            (TypeInfo__System__Int32->_0).element_class) goto code_?;
                        data = (Dictionary_2_System_Object_System_Object_ *)TVar5;
                        func_?();
                        if (cRam_? == '\0') {
                          data = (Dictionary_2_System_Object_System_Object_ *)
                                 &
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                          ;
                          func_?();
                          func_?();
                          func_?();
                          func_?();
                          func_?();
                          func_?(&TypeInfo__RequirementNotification____c__DisplayClass14_0)
                          ;
                          cRam_? = '\x01';
                        }
                        data = (Dictionary_2_System_Object_System_Object_ *)
                               TypeInfo__RequirementNotification____c__DisplayClass14_0;
                        pOVar4 = (Object *)func_?();
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                  (pOVar4,ExceptionArgument__Enum_obj,method_01);
                        if (pOVar4 != (Object *)0x0) {
                          pOVar4[1].klass = (Object__Class *)&UNK_?;
                          pGVar15 = RequirementNotification_InstantiatePanel
                                              (this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
                          pOVar20 = pOVar4[1].klass;
                          pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar21 != (MVNetworkGame *)0x0) &&
                             (this_00 = (pMVar21->fields)._GameCoinManager_k__BackingField,
                             this_00 != (MVGameCoinManager *)0x0)) {
                            iVar7 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                                               (this_00,(MethodInfo *)0x0);
                            *(bool *)&pOVar4[2].klass = (int)pOVar20 <= iVar7;
                            if (iVar7 < (int)pOVar20) {
                              pSVar18 = (this->fields).OffSprite;
                            }
                            else {
                              pSVar18 = (this->fields).OnSprite;
                            }
                            pOVar4[1].monitor = (MonitorData *)pSVar18;
                            func_?(&pOVar4[1].monitor);
                            if (pGVar15 != (GameObject *)0x0) {
                              pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponent_1
                                                  (pGVar15,
                                                  NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                                                  );
                              if ((pOVar22 != (Object *)0x0) &&
                                 ((Behaviour *)pOVar22[2].monitor != (Behaviour *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled
                                          ((Behaviour *)pOVar22[2].monitor,0,(MethodInfo *)0x0);
                                pOVar22[2].monitor = (MonitorData *)0x0;
                                func_?(&pOVar22[2].monitor,0);
                                functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                          func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[System::Object,System::Object]::
                                UnityAction_2_System_Object_System_Object___ctor
                                          ((UnityAction_2_System_Object_System_Object_ *)functor,
                                           pOVar4,
                                           MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                           ,(MethodInfo *)0x0);
                                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                 );
                                }
                                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                ExecuteEvents_Execute_18
                                          (pGVar15,(BaseEventData *)0x0,functor,
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
              else {
                pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         (pMVar8->fields).data;
                if (pDVar10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                  TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     (pDVar10,(Object *)StringLiteral_levelAmount,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
                  if (TVar5.m_Index != 0) {
                    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
                        (TypeInfo__System__Int32->_0).element_class) goto code_?;
                    puVar23 = (undefined4 *)func_?(TVar5.m_Index);
                    pOVar20 = (Object__Class *)*puVar23;
                    if (cRam_? == '\0') {
                      func_?(&
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                     );
                      func_?(&
                                      bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                     );
                      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      func_?(&
                                      MethodInfo__RequirementNotification____c__DisplayClass17_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     );
                      func_?(&TypeInfo__RequirementNotification____c__DisplayClass17_0);
                      cRam_? = '\x01';
                    }
                    pOVar4 = (Object *)
                             func_?(
                                            TypeInfo__RequirementNotification____c__DisplayClass17_0
                                            );
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              (pOVar4,ExceptionArgument__Enum_obj,method_00);
                    if (pOVar4 != (Object *)0x0) {
                      pOVar4[1].klass = pOVar20;
                      pGVar15 = RequirementNotification_InstantiatePanel
                                          (this,(this->fields).LevelPanel,(MethodInfo *)0x0);
                      pOVar20 = pOVar4[1].klass;
                      pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (pMVar21 != (MVNetworkGame *)0x0) {
                        pMVar24 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar21,(MethodInfo *)0x0);
                        if (pMVar24 != (MVLocalPlayer *)0x0) {
                          iVar2 = (pMVar24->fields)._.level;
                          *(bool *)&pOVar4[2].klass = (int)pOVar20 <= iVar2;
                          if (iVar2 < (int)pOVar20) {
                            pSVar18 = (this->fields).OffSprite;
                          }
                          else {
                            pSVar18 = (this->fields).OnSprite;
                          }
                          pOVar4[1].monitor = (MonitorData *)pSVar18;
                          func_?(&pOVar4[1].monitor,pSVar18);
                          functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                    func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    ((UnityAction_2_System_Object_System_Object_ *)functor,pOVar4,
                                     MethodInfo__RequirementNotification____c__DisplayClass17_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                          }
                          method_01 = (MethodInfo *)0x0;
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_Execute_18
                                    (pGVar15,(BaseEventData *)0x0,functor,
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
    }
  }
code_?:
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* GameObject InstantiatePanel(NotificationRequirementPanel) */

GameObject *
Assembly-CSharp.dll::RequirementNotification::RequirementNotification_InstantiatePanel
          (RequirementNotification *this,NotificationRequirementPanel *panel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
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
    pRVar2 = (this->fields).Layout;
    if (pRVar2 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar1,parent,0,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      if (pGVar1 != (GameObject *)0x0) {
        pRVar2 = (RectTransform *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                           );
        if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__UI__LayoutRebuilder);
        }
        UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
        LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar2,(MethodInfo *)0x0);
        this_00 = (this->fields).PanelsToDestroy;
        if (this_00 != (List_1_UnityEngine_GameObject_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)pGVar1,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                    );
          return pGVar1;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar3)();
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
                    NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                   );
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)gameCoins;
    this_01 = RequirementNotification_InstantiatePanel
                        (this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
    pOVar1 = value[1].klass;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
       this_00 != (MVGameCoinManager *)0x0)) {
      iVar3 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
      *(bool *)&value[2].klass = (int)pOVar1 <= iVar3;
      if (iVar3 < (int)pOVar1) {
        pSVar4 = (this->fields).OffSprite;
      }
      else {
        pSVar4 = (this->fields).OnSprite;
      }
      value[1].monitor = (MonitorData *)pSVar4;
      func_?();
      if (this_01 != (GameObject *)0x0) {
        pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_01,
                            NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                           );
        if ((pOVar5 != (Object *)0x0) && ((Behaviour *)pOVar5[2].monitor != (Behaviour *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar5[2].monitor,0,(MethodInfo *)0x0);
          pOVar5[2].monitor = (MonitorData *)0x0;
          func_?();
          functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                     MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                    (this_01,(BaseEventData *)0x0,functor,
                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                    );
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
                    NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                   );
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass18_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass18_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass18_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    *(undefined1 *)&value[1].klass = (undefined1)tier;
    this_00 = RequirementNotification_InstantiatePanel
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
    if (*(char *)&value[2].klass == '\0') {
      pSVar3 = (this->fields).OffSprite;
    }
    else {
      pSVar3 = (this->fields).OnSprite;
    }
    value[1].monitor = (MonitorData *)pSVar3;
    func_?(&value[1].monitor);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                (this_00,
                 NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                );
      functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                 MethodInfo__RequirementNotification____c__DisplayClass18_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                (this_00,(BaseEventData *)0x0,functor,
                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                );
      return;
    }
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
                    MethodInfo__RequirementNotification____c__DisplayClass17_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass17_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass17_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)level;
    RequirementNotification_InstantiatePanel(this,(this->fields).LevelPanel,(MethodInfo *)0x0);
    pOVar1 = value[1].klass;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        iVar3 = (pMVar2->fields)._.level;
        *(bool *)&value[2].klass = (int)pOVar1 <= iVar3;
        if (iVar3 < (int)pOVar1) {
          pSStack4 = (this->fields).OffSprite;
        }
        else {
          pSStack4 = (this->fields).OnSprite;
        }
        value[1].monitor = (MonitorData *)pSStack4;
        func_?();
        target = 
        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
        ;
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                   MethodInfo__RequirementNotification____c__DisplayClass17_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
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
                    NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                   );
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)stars;
    this_00 = RequirementNotification_InstantiatePanel
                        (this,(this->fields).StarPanel,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        iVar1 = MVPlayer::MVPlayer_GetGameStat
                          ((MVPlayer *)this_02,GameStatCounterType__Enum_Collectible,
                           (MethodInfo *)0x0);
        *(bool *)&value[2].klass = 2 < iVar1;
        if (iVar1 < 3) {
          pSVar2 = (this->fields).OffSprite;
        }
        else {
          pSVar2 = (this->fields).OnSprite;
        }
        value[1].monitor = (MonitorData *)pSVar2;
        func_?();
        if (this_00 != (GameObject *)0x0) {
          pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this_00,
                              NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                             );
          if ((pOVar3 != (Object *)0x0) && ((Behaviour *)pOVar3[2].monitor != (Behaviour *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar3[2].monitor,0,(MethodInfo *)0x0);
            pOVar3[2].monitor = (MonitorData *)0x0;
            func_?();
            functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                       MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                      (this_00,(BaseEventData *)0x0,functor,
                       bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
                    NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                   );
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)team;
    this_01 = RequirementNotification_InstantiatePanel
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
        if (bVar4 == false) {
          pSVar5 = (this->fields).OffSprite;
        }
        else {
          pSVar5 = (this->fields).OnSprite;
        }
        value[1].monitor = (MonitorData *)pSVar5;
        func_?();
        if (this_01 != (GameObject *)0x0) {
          pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this_01,
                              NotificationRequirementPanel_MethodInfo__UnityEngine__GameObject__GetComponent<NotificationRequirementPanel>__
                             );
          if ((pOVar6 != (Object *)0x0) && ((Behaviour *)pOVar6[2].monitor != (Behaviour *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar6[2].monitor,0,(MethodInfo *)0x0);
            pOVar6[2].monitor = (MonitorData *)0x0;
            func_?();
            functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                       MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                      (this_01,(BaseEventData *)0x0,functor,
                       bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                      );
            return;
          }
        }
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

