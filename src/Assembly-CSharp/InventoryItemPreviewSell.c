
/* Void AddToMarket() */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_AddToMarket
               (InventoryItemPreviewSell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)this_00,(MethodInfo *)0x0);
      pPVar3 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar3 != (PrefabPool *)0x0) {
        pVVar4 = PrefabPool::PrefabPool_get_MVJetPackPrefab(pPVar3,(MethodInfo *)0x0);
        if ((int)pOVar2 < (int)pVVar4) {
          this_02 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_5);
          pSVar6 = TM::TM__(StringLiteral_You_can_not_add_item_to_your_sho,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pPVar3 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pPVar3 != (PrefabPool *)0x0) {
            PrefabPool::PrefabPool_get_MVJetPackPrefab(pPVar3,(MethodInfo *)0x0);
            pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar6 = mscorlib.dll::System::String::String_Concat
                               ((Object *)pSVar6,pOVar2,(MethodInfo *)0x0);
            if (this_02 != (ScaleAnimationBase *)0x0) {
              (this_02->fields)._._._._.m_CachedPtr = pSVar6;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)&UNK_?,(MethodInfo *)0x0);
              pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar8,(Object *)this_02,
                         MethodInfo__InventoryItemPreviewSell___AddToMarket_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar7,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar8,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
              return;
            }
          }
        }
        else {
          pIVar9 = (this->fields).itemName;
          if (pIVar9 != (InputField *)0x0) {
            pSVar6 = (String *)
                     TriggerCube::TriggerCube_get_InputSignalReceiver
                               ((TriggerCube *)pIVar9,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
            if (bVar10 != 0) {
code_?:
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              if (TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache0 ==
                  (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
                pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar8,(Object *)0x0,
                           MethodInfo__InventoryItemPreviewSell___AddToMarket_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                          );
                TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache0 =
                     (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar8;
              }
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache0;
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar7,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
              return;
            }
            pIVar9 = (this->fields).description;
            if (pIVar9 != (InputField *)0x0) {
              pSVar6 = (String *)
                       TriggerCube::TriggerCube_get_InputSignalReceiver
                                 ((TriggerCube *)pIVar9,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
              if (bVar10 != 0) goto code_?;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar1 != (MVNetworkGame *)0x0) {
                pMVar11 = (pMVar1->fields).OnMarketPlaceActionComplete;
                pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar8,(Object *)this,
                           MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_,
                           (MethodInfo *)0x0);
                pMVar12 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pMVar11,(Delegate *)pUVar8,(MethodInfo *)0x0);
                pMVar11 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
                if (pMVar12 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
                  if (pMVar12->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate
                     ) {
                    pMVar11 = pMVar12;
                  }
                  pMVar13 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
                  if (pMVar11 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0)
                  goto code_?;
                }
                (pMVar1->fields).OnMarketPlaceActionComplete = pMVar11;
                this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                pIVar14 = (this->fields).previewItem;
                if (pIVar14 != (InventoryItem *)0x0) {
                  pIVar9 = (this->fields).itemName;
                  itemID = (pIVar14->fields).itemID;
                  if (pIVar9 != (InputField *)0x0) {
                    pSVar6 = (String *)
                             TriggerCube::TriggerCube_get_InputSignalReceiver
                                       ((TriggerCube *)pIVar9,(MethodInfo *)0x0);
                    pIVar9 = (this->fields).description;
                    if (pIVar9 != (InputField *)0x0) {
                      itemDescription =
                           (String *)
                           TriggerCube::TriggerCube_get_InputSignalReceiver
                                     ((TriggerCube *)pIVar9,(MethodInfo *)0x0);
                      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
                        MVNetworkGame+OperationRequests::
                        MVNetworkGame_OperationRequests_RequestAddItemToMarketPlace
                                  (this_01,itemID,pSVar6,itemDescription,(MethodInfo *)0x0);
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
  }
  func_?(0);
  pMVar12 = extraout_ECX;
  pMVar13 = extraout_EDX;
code_?:
  func_?(pMVar12,pMVar13);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_Initialize
               (InventoryItemPreviewSell *this,RawImage *preview,InventoryItem *item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewImage;
  if (preview != (RawImage *)0x0) {
    value = (Texture *)
            (*(code *)(preview->klass->vtable).get_mainTexture.method)
                      (preview,(preview->klass->vtable).OnCullingChanged.methodPtr);
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,value,(MethodInfo *)0x0);
      (this->fields).previewItem = item;
      if ((item != (InventoryItem *)0x0) &&
         (pIVar1 = (this->fields).itemName, pIVar1 != (InputField *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar1,(item->fields).name,(MethodInfo *)0x0);
        pIVar1 = (this->fields).description;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        if (pIVar1 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
          bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                            ((item->fields).description,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pIVar1 = (this->fields).description;
            if (pIVar1 == (InputField *)0x0) goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (pIVar1,(item->fields).description,(MethodInfo *)0x0);
          }
          pBVar3 = (this->fields).sellButton;
          if (pBVar3 != (Button *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pBVar3,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pBVar3 = (this->fields).removeFromMarketButton;
              if (pBVar3 != (Button *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pBVar3,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                  if ((item->fields).shopInventoryID != 0) {
                    pOVar5 = (Object *)(item->fields).authorProfileID;
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
                    pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
                    if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
                    pOVar8 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar7,
                                         (MethodInfo *)0x0);
                    if (pOVar5 == pOVar8) {
                      pTVar9 = (this->fields).sellButtonText;
                      pSVar10 = TM::TM__(StringLiteral_Update,(MethodInfo *)0x0);
                      if (pTVar9 != (Text *)0x0) {
                        (*(code *)(pTVar9->klass->vtable).set_text.method)
                                  (pTVar9,pSVar10,
                                   (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pBVar3 = (this->fields).removeFromMarketButton;
                        if (pBVar3 != (Button *)0x0) {
                          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pBVar3,(MethodInfo *)0x0);
                          if (pGVar4 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,1,(MethodInfo *)0x0);
                            pBVar3 = (this->fields).sellButton;
                            if (pBVar3 != (Button *)0x0) {
                              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_gameObject
                                                 ((Component_1 *)pBVar3,(MethodInfo *)0x0);
                              if (pGVar4 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar4,1,(MethodInfo *)0x0);
                                (this->fields).addingToMarket = 0;
                                return;
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                  }
                  pOVar5 = (Object *)(item->fields).authorProfileID;
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar6 != (MVNetworkGame *)0x0) {
                    pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
                    if (pMVar7 != (MVLocalPlayer *)0x0) {
                      pOVar8 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar7,
                                           (MethodInfo *)0x0);
                      if (pOVar5 == pOVar8) {
                        pTVar9 = (this->fields).sellButtonText;
                        pSVar10 = TM::TM__(StringLiteral_Sell,(MethodInfo *)0x0);
                        if (pTVar9 != (Text *)0x0) {
                          (*(code *)(pTVar9->klass->vtable).set_text.method)
                                    (pTVar9,pSVar10,
                                     (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.
                                     methodPtr);
                          pBVar3 = (this->fields).sellButton;
                          if (pBVar3 != (Button *)0x0) {
                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_gameObject
                                               ((Component_1 *)pBVar3,(MethodInfo *)0x0);
                            if (pGVar4 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar4,1,(MethodInfo *)0x0);
                              (this->fields).addingToMarket = 1;
                              return;
                            }
                          }
                        }
                      }
                      else {
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(
                                                  TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>
                                                  );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_01,(Object *)this,
                                   MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                                   ,
                                   MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
                                  );
                        if (pMVar6 != (MVNetworkGame *)0x0) {
                          MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                                    (pMVar6,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                                            this_01,(MethodInfo *)0x0);
                          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                              ((MethodInfo *)0x0);
                          if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
                            MVNetworkGame+OperationRequests::
                            MVNetworkGame_OperationRequests_RequestMarketPlaceItem
                                      (this_02,(item->fields).itemID,(MethodInfo *)0x0);
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
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnAddToMarketplaceReturn(Boolean) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::
     InventoryItemPreviewSell_OnAddToMarketplaceReturn
               (InventoryItemPreviewSell *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_,
               (MethodInfo *)0x0);
    pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar2 = pMVar4;
      }
      pMVar5 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
      if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar2;
    pIVar6 = (this->fields).itemName;
    pIVar7 = (this->fields).previewItem;
    if ((pIVar6 != (InputField *)0x0) &&
       (pSVar8 = (String *)
                  TriggerCube::TriggerCube_get_InputSignalReceiver
                            ((TriggerCube *)pIVar6,(MethodInfo *)0x0),
       pIVar7 != (InventoryItem *)0x0)) {
      (pIVar7->fields).name = pSVar8;
      pIVar6 = (this->fields).description;
      pIVar7 = (this->fields).previewItem;
      if (pIVar6 != (InputField *)0x0) {
        pMVar9 = (MethodInfo *)&UNK_?;
        pSVar8 = (String *)
                  TriggerCube::TriggerCube_get_InputSignalReceiver
                            ((TriggerCube *)pIVar6,(MethodInfo *)0x0);
        if (pIVar7 != (InventoryItem *)0x0) {
          (pIVar7->fields).description = pSVar8;
          if (success == 0) {
            pSVar10 = (ScaleAnimationBase *)
                      func_?(
                                     TypeInfo__InventoryItemPreviewSell___OnAddToMarketplaceReturn_c__AnonStorey3
                                     );
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar10,0.0,pMVar9);
            if ((this->fields).addingToMarket == 0) {
              pSVar8 = TM::TM__(StringLiteral_Failed_to_update__0__in_your_sho,(MethodInfo *)0x0);
              pIVar7 = (this->fields).previewItem;
              if (pIVar7 != (InventoryItem *)0x0) {
                pSVar11 = (pIVar7->fields).name;
                if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) {
                  uVar12 = (TypeInfo__System__String->_1).cctor_started;
joined_?:
                  if (uVar12 == 0) {
                    func_?(TypeInfo__System__String);
                  }
                }
code_?:
                pMVar9 = (MethodInfo *)0x0;
                pSVar8 = mscorlib.dll::System::String::String_Format
                                    (pSVar8,(Object *)pSVar11,(MethodInfo *)0x0);
                if (pSVar10 != (ScaleAnimationBase *)0x0) {
                  (pSVar10->fields)._._._._.m_CachedPtr = pSVar8;
                  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  if (TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache3 ==
                      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    pMVar9 = 
                    MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar3,(Object *)0x0,
                               MethodInfo__InventoryItemPreviewSell___OnAddToMarketplaceReturn_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,
                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                              );
                    TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache3 =
                         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
                  }
                  pEVar14 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                           TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache3;
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (pGVar13,(BaseEventData *)0x0,pEVar14,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  method_1 = 
                  MethodInfo__InventoryItemPreviewSell___OnAddToMarketplaceReturn_c__AnonStorey3____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                  ;
code_?:
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar3,(Object *)pMVar9,method_1,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                            );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (pGVar13,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                            );
                  return;
                }
              }
            }
            else {
              pSVar8 = TM::TM__(StringLiteral_Failed_to_add__0__to_your_shop_,(MethodInfo *)0x0);
              pIVar7 = (this->fields).previewItem;
              if (pIVar7 != (InventoryItem *)0x0) {
                pSVar11 = (pIVar7->fields).name;
                if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) {
                  uVar12 = (TypeInfo__System__String->_1).cctor_started;
                  goto joined_?;
                }
                goto code_?;
              }
            }
          }
          else {
            pSVar10 = (ScaleAnimationBase *)
                      func_?(
                                     TypeInfo__InventoryItemPreviewSell___OnAddToMarketplaceReturn_c__AnonStorey2
                                     );
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar10,0.0,pMVar9);
            if ((this->fields).addingToMarket == 0) {
              pSVar8 = TM::TM__(StringLiteral_Successfully_updated__0__in_your,(MethodInfo *)0x0);
              pIVar7 = (this->fields).previewItem;
              if (pIVar7 != (InventoryItem *)0x0) {
                pSVar11 = (pIVar7->fields).name;
                if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) {
                  uVar12 = (TypeInfo__System__String->_1).cctor_started;
joined_?:
                  if (uVar12 == 0) {
                    func_?(TypeInfo__System__String);
                  }
                }
code_?:
                pMVar9 = (MethodInfo *)0x0;
                pSVar8 = mscorlib.dll::System::String::String_Format
                                    (pSVar8,(Object *)pSVar11,(MethodInfo *)0x0);
                if (pSVar10 != (ScaleAnimationBase *)0x0) {
                  (pSVar10->fields)._._._._.m_CachedPtr = pSVar8;
                  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  if (TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache2 ==
                      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    pMVar9 = 
                    MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar3,(Object *)0x0,
                               MethodInfo__InventoryItemPreviewSell___OnAddToMarketplaceReturn_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,
                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                              );
                    TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache2 =
                         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
                  }
                  pEVar14 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                           TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache2;
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (pGVar13,(BaseEventData *)0x0,pEVar14,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  method_1 = 
                  MethodInfo__InventoryItemPreviewSell___OnAddToMarketplaceReturn_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                  ;
                  goto code_?;
                }
              }
            }
            else {
              pSVar8 = TM::TM__(StringLiteral_Successfully_added__0__to_your_s,(MethodInfo *)0x0);
              pIVar7 = (this->fields).previewItem;
              if (pIVar7 != (InventoryItem *)0x0) {
                pSVar11 = (pIVar7->fields).name;
                if (((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) {
                  uVar12 = (TypeInfo__System__String->_1).cctor_started;
                  goto joined_?;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnLoadMarketPlaceItem(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_OnLoadMarketPlaceItem
               (InventoryItemPreviewSell *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_04,(Object *)this,
             MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
             ,
             MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
            );
  if (this_03 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
              (this_03,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_04,(MethodInfo *)0x0);
    if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
      pIVar1 = (this->fields).previewItem;
      koGaMaData = (e->fields).KoGaMaData;
      if (pIVar1 != (InventoryItem *)0x0) {
        buffer = (pIVar1->fields).data;
        this_05 = (BytePacker *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_05,buffer,(MethodInfo *)0x0);
        this_06 = (KoGaMaPackageClient *)func_?();
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_06,this_05,0,(MethodInfo *)0x0);
        if (this_06 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_06,(MethodInfo *)0x0);
          this_07 = (KoGaMaPackageClient *)func_?();
          KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_07,koGaMaData,0,(MethodInfo *)0x0);
          if (this_07 != (KoGaMaPackageClient *)0x0) {
            KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_07,(MethodInfo *)0x0);
            fVar2 = KoGaMaPackageClient::KoGaMaPackageClient_Compare
                              (this_07,this_06,(MethodInfo *)0x0);
            KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_06,(MethodInfo *)0x0);
            KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_07,(MethodInfo *)0x0);
            pPVar3 = (this->fields).compareSlider;
            if (pPVar3 != (ProgressBarAndroid *)0x0) {
              fVar2 = _UNK_? - fVar2;
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar3,fVar2,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MV__Common__CommonValues->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__MV__Common__CommonValues->_1).cctor_started == 0)) {
                func_?();
              }
              MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                        ((MethodInfo *)0x0);
              this_00 = (this->fields).sliderTransform;
              this_01 = (this->fields).thresholdCaret;
              if (this_00 != (RectTransform *)0x0) {
                pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_rect((Rect *)&stack0xffffffc8,this_00,(MethodInfo *)0x0);
                SubscribableVariableBase`1[System::Single]::
                SubscribableVariableBase_1_System_Single__get_Value
                          ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd8,
                           (MethodInfo *)pRVar4->m_XMin);
                func_?();
                if (this_01 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_anchoredPosition(this_01,(Vector2)0x0,(MethodInfo *)0x0);
                  pPVar3 = (this->fields).compareSlider;
                  if (pPVar3 != (ProgressBarAndroid *)0x0) {
                    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pPVar3,(MethodInfo *)0x0);
                    if (pGVar5 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar5,1,(MethodInfo *)0x0);
                      fVar6 = MVCommon.dll::MV::Common::CommonValues::
                              CommonValues_get_CompareThreshold((MethodInfo *)0x0);
                      pTVar7 = (this->fields).compareText;
                      if (fVar2 <= 1.0 - fVar6) {
                        TM::TM__(StringLiteral_Item_is_not_different_enough_fro,(MethodInfo *)0x0);
                        if (pTVar7 != (Text *)0x0) {
                          (*(code *)(pTVar7->klass->vtable).set_text.method)();
                          return;
                        }
                      }
                      else {
                        TM::TM__(StringLiteral_Item_is_sellable_,(MethodInfo *)0x0);
                        if (pTVar7 != (Text *)0x0) {
                          (*(code *)(pTVar7->klass->vtable).set_text.method)();
                          this_02 = (this->fields).sellButton;
                          if (this_02 != (Button *)0x0) {
                            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_gameObject
                                               ((Component_1 *)this_02,(MethodInfo *)0x0);
                            if (pGVar5 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar5,1,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnRemoveFromMarketplace(Boolean) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_OnRemoveFromMarketplace
               (InventoryItemPreviewSell *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InventoryItemPreviewSell___OnRemoveFromMarketplace_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0
              );
    pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar4 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar2 = pMVar4;
      }
      pMVar5 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
      if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar2;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__InventoryItemPreviewSell___OnRemoveFromMarketplace_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__InventoryItemPreviewSell->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar6,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pSVar7 = TM::TM__(StringLiteral_Failed_to_remove__0__from_your_s,(MethodInfo *)0x0);
    pIVar8 = (this->fields).itemName;
    if (pIVar8 != (InputField *)0x0) {
      pOVar9 = (Object *)
                TriggerCube::TriggerCube_get_InputSignalReceiver
                          ((TriggerCube *)pIVar8,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar7 = mscorlib.dll::System::String::String_Format(pSVar7,pOVar9,(MethodInfo *)0x0);
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields)._._._._.m_CachedPtr = pSVar7;
        if (success == 0) {
code_?:
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_00,
                     MethodInfo__InventoryItemPreviewSell___OnRemoveFromMarketplace_c__AnonStorey1____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar6,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
        pSVar7 = TM::TM__(StringLiteral_Successfully_removed__0__from_yo,(MethodInfo *)0x0);
        pIVar8 = (this->fields).itemName;
        if (pIVar8 != (InputField *)0x0) {
          pOVar9 = (Object *)
                    TriggerCube::TriggerCube_get_InputSignalReceiver
                              ((TriggerCube *)pIVar8,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar7 = mscorlib.dll::System::String::String_Format(pSVar7,pOVar9,(MethodInfo *)0x0);
          (this_00->fields)._._._._.m_CachedPtr = pSVar7;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar10 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if (pIVar10 != (IEditModeUI *)0x0) {
            this_01 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI,pIVar10);
            pIVar11 = (this->fields).previewItem;
            if ((pIVar11 != (InventoryItem *)0x0) && (this_01 != (PlayerInventoryRepository *)0x0)) {
              PlayerInventoryRepository::PlayerInventoryRepository_UpdateShopInventoryID
                        (this_01,(pIVar11->fields).itemID,0,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RemoveFromMarket() */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_RemoveFromMarket
               (InventoryItemPreviewSell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0
              );
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar3 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar2 = pMVar3;
      }
      pMVar4 = TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate;
      if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar2;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pIVar5 = (this->fields).previewItem;
    if ((pIVar5 != (InventoryItem *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RequestRemoveItemFromMarketPlace
                (this_01,(pIVar5->fields).itemID,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pMVar3 = extraout_ECX;
  pMVar4 = extraout_EDX;
code_?:
  func_?(pMVar3,pMVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <AddToMarket>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell__AddToMarket_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Item_name_and_description_requir,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Error__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnAddToMarketplaceReturn>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::
     InventoryItemPreviewSell__OnAddToMarketplaceReturn_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnAddToMarketplaceReturn>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::
     InventoryItemPreviewSell__OnAddToMarketplaceReturn_m__3
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnRemoveFromMarketplace>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::
     InventoryItemPreviewSell__OnRemoveFromMarketplace_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

