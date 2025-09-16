
/* Void AddToMarket() */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_AddToMarket
               (InventoryItemPreviewSell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c___AddToMarket_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c__DisplayClass13_0___AddToMarket_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass13_0);
    func_?(&TypeInfo__InventoryItemPreviewSell____c);
    in_stack_1 = (MethodInfo *)&UNK_?;
    func_?(&StringLiteral_You_can_not_add_item_to_your_sho);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 == (MVLocalPlayer *)0x0)) {
code_?:
    func_?();
  }
  else {
    iVar4 = (pMVar3->fields)._.level;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    if (iVar4 < (pMVar2->fields)._MarketPlaceLevel_k__BackingField) {
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,in_stack_1);
      str0 = TM::TM__(StringLiteral_You_can_not_add_item_to_your_sho,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
        pOVar5 = (Object__Class *)
                  mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
        if (value != (Object *)0x0) {
          value[1].klass = pOVar5;
          func_?(value + 1,pOVar5);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__InventoryItemPreviewSell____c__DisplayClass13_0___AddToMarket_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          uVar6 = (TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor;
          goto joined_?;
        }
      }
      goto code_?;
    }
    pIVar7 = (this->fields).itemName;
    if (pIVar7 == (InputField *)0x0) goto code_?;
    bVar8 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((pIVar7->fields).m_Text,(MethodInfo *)0x0);
    if (bVar8 != 0) {
code_?:
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__13_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__InventoryItemPreviewSell____c___AddToMarket_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__13_0 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)callbackFunction;
        func_?();
      }
      uVar6 = (TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar6 == 0) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pIVar7 = (this->fields).description;
    if (pIVar7 == (InputField *)0x0) goto code_?;
    bVar8 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((pIVar7->fields).m_Text,(MethodInfo *)0x0);
    if (bVar8 != 0) goto code_?;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    a = (pMVar2->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_,
               (MethodInfo *)0x0);
    puVar9 = &UNK_?;
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      *(undefined4 *)(puVar9 + 0xdc) = 0;
code_?:
      func_?();
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pIVar11 = (this->fields).previewItem;
      if ((((pIVar11 != (InventoryItem *)0x0) &&
           (pIVar7 = (this->fields).itemName, pIVar7 != (InputField *)0x0)) &&
          (pIVar12 = (this->fields).description, pIVar12 != (InputField *)0x0)) &&
         (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAddItemToMarketPlace
                  (this_01,(pIVar11->fields).itemID,(pIVar7->fields).m_Text,(pIVar12->fields).m_Text,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pDVar13 = (Delegate *)0x0;
    if ((MVNetworkGame_OnMarketPlaceActionCompleteDelegate__Class *)pDVar10->klass ==
        TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pDVar13 = pDVar10;
    }
    if (pDVar13 == (Delegate *)0x0) goto code_?;
    *(Delegate **)(puVar9 + 0xdc) = pDVar13;
    pDVar13 = (Delegate *)0x0;
    if ((MVNetworkGame_OnMarketPlaceActionCompleteDelegate__Class *)pDVar10->klass ==
        TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pDVar13 = pDVar10;
    }
    if (pDVar13 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_Initialize
               (InventoryItemPreviewSell *this,RawImage *preview,InventoryItem *item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&StringLiteral_Update);
    func_?(&StringLiteral_Sell);
    func_?(&::StringLiteral__);
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
      func_?(&(this->fields).previewItem,item);
      if ((item != (InventoryItem *)0x0) &&
         (pIVar1 = (this->fields).itemName, pIVar1 != (InputField *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar1,(item->fields).name,(MethodInfo *)0x0);
        pIVar1 = (this->fields).description;
        if (pIVar1 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar1,::StringLiteral__,(MethodInfo *)0x0);
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
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pBVar3,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pBVar3 = (this->fields).removeFromMarketButton;
              if (pBVar3 != (Button *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pBVar3,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0,(MethodInfo *)0x0);
                  if ((item->fields).shopInventoryID != 0) {
                    iVar5 = (item->fields).authorProfileID;
                    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
                    pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
                    if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
                    if (iVar5 == (pMVar7->fields)._._ProfileID_k__BackingField) {
                      pTVar8 = (this->fields).sellButtonText;
                      TM::TM__(StringLiteral_Update,(MethodInfo *)0x0);
                      if (pTVar8 != (Text *)0x0) {
                        (*(code *)(pTVar8->klass->vtable).set_text.method)();
                        pBVar3 = (this->fields).removeFromMarketButton;
                        if (pBVar3 != (Button *)0x0) {
                          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pBVar3,(MethodInfo *)0x0);
                          if (pGVar4 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,1,(MethodInfo *)0x0);
                            pBVar3 = (this->fields).sellButton;
                            if (pBVar3 != (Button *)0x0) {
                              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)pBVar3,(MethodInfo *)0x0);
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
                  iVar5 = (item->fields).authorProfileID;
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar6 != (MVNetworkGame *)0x0) {
                    pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
                    if (pMVar7 != (MVLocalPlayer *)0x0) {
                      if (iVar5 == (pMVar7->fields)._._ProfileID_k__BackingField) {
                        pTVar8 = (this->fields).sellButtonText;
                        pSVar9 = TM::TM__(StringLiteral_Sell,(MethodInfo *)0x0);
                        if (pTVar8 != (Text *)0x0) {
                          (*(code *)(pTVar8->klass->vtable).set_text.method)
                                    (pTVar8,pSVar9,
                                     (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.
                                     methodPtr);
                          pBVar3 = (this->fields).sellButton;
                          if (pBVar3 != (Button *)0x0) {
                            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject((Component *)pBVar3,(MethodInfo *)0x0)
                            ;
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
                        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        this_01 = (EventHandler_1_Object_ *)
                                  func_?(
                                                 TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>
                                                 );
                        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                                  (this_01,(Object *)this,
                                   MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                                   ,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnAddToMarketplaceReturn(Boolean) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::
     InventoryItemPreviewSell_OnAddToMarketplaceReturn
               (InventoryItemPreviewSell *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_0___OnAddToMarketplaceReturn_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_0);
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_1___OnAddToMarketplaceReturn_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_1);
    func_?(&TypeInfo__InventoryItemPreviewSell____c);
    func_?(&StringLiteral_Successfully_added__0__to_your_s);
    func_?(&StringLiteral_Successfully_updated__0__in_your);
    func_?(&StringLiteral_Failed_to_add__0__to_your_shop_);
    func_?(&StringLiteral_Failed_to_update__0__in_your_sho);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_,
               (MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)&UNK_?;
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar1->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
code_?:
      func_?();
      pIVar4 = (this->fields).itemName;
      if (pIVar4 != (InputField *)0x0) {
        pSVar5 = (pIVar4->fields).m_Text;
        pIVar6 = (this->fields).previewItem;
        if (pIVar6 != (InventoryItem *)0x0) {
          (pIVar6->fields).name = pSVar5;
          func_?(&(pIVar6->fields).name,pSVar5);
          pIVar4 = (this->fields).description;
          if (pIVar4 != (InputField *)0x0) {
            pSVar5 = (pIVar4->fields).m_Text;
            pIVar6 = (this->fields).previewItem;
            if (pIVar6 != (InventoryItem *)0x0) {
              (pIVar6->fields).description = pSVar5;
              func_?(&(pIVar6->fields).description,pSVar5);
              if (success == 0) {
                pOVar7 = (Object *)
                         func_?(TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_1);
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (pOVar7,ExceptionArgument__Enum_obj,pMVar3);
                pSVar5 = StringLiteral_Failed_to_update__0__in_your_sho;
                if ((this->fields).addingToMarket != 0) {
                  pSVar5 = StringLiteral_Failed_to_add__0__to_your_shop_;
                }
                pSVar5 = TM::TM__(pSVar5,(MethodInfo *)0x0);
                pIVar6 = (this->fields).previewItem;
                if ((pIVar6 != (InventoryItem *)0x0) &&
                   (pOVar8 = (Object__Class *)
                             mscorlib.dll::System::String::String_Format
                                       (pSVar5,(Object *)(pIVar6->fields).name,(MethodInfo *)0x0),
                   pOVar7 != (Object *)0x0)) {
                  pOVar7[1].klass = pOVar8;
                  func_?(pOVar7 + 1,pOVar8);
                  pEVar9 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor == 0)
                  {
                    func_?(TypeInfo__InventoryItemPreviewSell____c);
                  }
                  callbackFunction =
                       TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_2;
                  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                    if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?(TypeInfo__InventoryItemPreviewSell____c);
                    }
                    pIVar10 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
                    callbackFunction =
                         (ExecuteEvents_EventFunction_1_IUIStack_ *)
                         func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                               (Object *)pIVar10,
                               MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_2 =
                         callbackFunction;
                    pEVar9 = callbackFunction;
                    func_?(&TypeInfo__InventoryItemPreviewSell____c->static_fields->
                                     __9__16_2);
                  }
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            ((GameObject *)pEVar9,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  callbackFunction_00 =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                      );
                  pMVar3 = 
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_1___OnAddToMarketplaceReturn_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                  ;
                  method_1 = 
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_1___OnAddToMarketplaceReturn_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                  ;
code_?:
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                             (Object *)pMVar3,method_1,(MethodInfo *)0x0);
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar11,(BaseEventData *)0x0,callbackFunction_00,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                            );
                  return;
                }
              }
              else {
                value = (Object *)
                        func_?(TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_0);
                pOVar7 = value;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (value,ExceptionArgument__Enum_obj,pMVar3);
                pSVar5 = StringLiteral_Successfully_updated__0__in_your;
                if ((this->fields).addingToMarket != 0) {
                  pSVar5 = StringLiteral_Successfully_added__0__to_your_s;
                }
                pSVar5 = TM::TM__(pSVar5,(MethodInfo *)0x0);
                pIVar6 = (this->fields).previewItem;
                if ((pIVar6 != (InventoryItem *)0x0) &&
                   (pOVar8 = (Object__Class *)
                             mscorlib.dll::System::String::String_Format
                                       (pSVar5,(Object *)(pIVar6->fields).name,(MethodInfo *)0x0),
                   value != (Object *)0x0)) {
                  value[1].klass = pOVar8;
                  func_?(value + 1,pOVar8,pOVar7);
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor == 0)
                  {
                    func_?(TypeInfo__InventoryItemPreviewSell____c);
                  }
                  pEVar9 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_0;
                  if (pEVar9 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                    if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?(TypeInfo__InventoryItemPreviewSell____c);
                    }
                    pIVar10 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
                    pEVar9 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                              func_?(
                                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                             );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              ((UnityAction_2_System_Object_System_Object_ *)pEVar9,
                               (Object *)pIVar10,
                               MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_0 = pEVar9;
                    pGVar11 = (GameObject *)
                              &TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_0;
                    func_?(pGVar11,pEVar9);
                  }
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar11,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar9,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  callbackFunction_00 =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                      );
                  pMVar3 = (MethodInfo *)0x0;
                  method_1 = 
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_0___OnAddToMarketplaceReturn_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                  ;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pMVar12 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar12 = pMVar2;
    }
    if (pMVar12 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar12;
    pMVar12 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar12 = pMVar2;
    }
    if (pMVar12 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnLoadMarketPlaceItem(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_OnLoadMarketPlaceItem
               (InventoryItemPreviewSell *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__Common__CommonValues);
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&TypeInfo__KoGaMaPackageClient);
    func_?(&StringLiteral_Item_is_not_different_enough_fro);
    func_?(&StringLiteral_Item_is_sellable_);
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_04 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_04,(Object *)this,
             MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
             ,(MethodInfo *)0x0);
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
              ProgressBarAndroid::ProgressBarAndroid_set_Progress
                        (pPVar3,_UNK_? - fVar2,(MethodInfo *)0x0);
              if ((TypeInfo__MV__Common__CommonValues->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MV__Common__CommonValues);
              }
              fVar4 = MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                                ((MethodInfo *)0x0);
              this_00 = (this->fields).sliderTransform;
              this_01 = (this->fields).thresholdCaret;
              if (this_00 != (RectTransform *)0x0) {
                pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_rect((Rect *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
                if (this_01 != (RectTransform *)0x0) {
                  value.y = 0.0;
                  value.x = (_UNK_? - fVar4) * pRVar5->m_Width;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_anchoredPosition(this_01,value,(MethodInfo *)0x0);
                  pPVar3 = (this->fields).compareSlider;
                  if (pPVar3 != (ProgressBarAndroid *)0x0) {
                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pPVar3,(MethodInfo *)0x0);
                    if (pGVar6 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar6,1,(MethodInfo *)0x0);
                      fVar4 = MVCommon.dll::MV::Common::CommonValues::
                              CommonValues_get_CompareThreshold((MethodInfo *)0x0);
                      pTVar7 = (this->fields).compareText;
                      if (_UNK_? - fVar2 <= 1.0 - fVar4) {
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
                            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject
                                               ((Component *)this_02,(MethodInfo *)0x0);
                            if (pGVar6 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar6,1,(MethodInfo *)0x0);
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__InventoryItemPreviewSell____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass15_0);
    func_?(&TypeInfo__InventoryItemPreviewSell____c);
    func_?(&StringLiteral_Failed_to_remove__0__from_your_s);
    func_?(&StringLiteral_Successfully_removed__0__from_yo);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InventoryItemPreviewSell____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0
              );
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar1->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
code_?:
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__InventoryItemPreviewSell____c);
      }
      callbackFunction = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__15_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__InventoryItemPreviewSell____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__InventoryItemPreviewSell____c);
        }
        object = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__InventoryItemPreviewSell____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__15_0 = callbackFunction;
        func_?(&TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__15_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar4 = TM::TM__(StringLiteral_Failed_to_remove__0__from_your_s,(MethodInfo *)0x0);
      pIVar5 = (this->fields).itemName;
      if ((pIVar5 != (InputField *)0x0) &&
         (pOVar6 = (Object__Class *)
                   mscorlib.dll::System::String::String_Format
                             (pSVar4,(Object *)(pIVar5->fields).m_Text,(MethodInfo *)0x0),
         value != (Object *)0x0)) {
        value[1].klass = pOVar6;
        func_?(value + 1,pOVar6);
        pSVar4 = TM::TM__(StringLiteral_Successfully_removed__0__from_yo,(MethodInfo *)0x0);
        pIVar5 = (this->fields).itemName;
        if (pIVar5 != (InputField *)0x0) {
          pOVar6 = (Object__Class *)
                   mscorlib.dll::System::String::String_Format
                             (pSVar4,(Object *)(pIVar5->fields).m_Text,(MethodInfo *)0x0);
          value[1].klass = pOVar6;
          func_?();
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if (pIVar7 != (IEditModeUI *)0x0) {
            this_01 = (PlayerShopInventoryRepository *)
                      func_?(4,TypeInfo__IEditModeUI,pIVar7);
            pIVar8 = (this->fields).previewItem;
            if ((pIVar8 != (InventoryItem *)0x0) &&
               (this_01 != (PlayerShopInventoryRepository *)0x0)) {
              UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                        (this_01,(pIVar8->fields).itemID,0,(MethodInfo *)0x0);
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                         MethodInfo__InventoryItemPreviewSell____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pMVar9 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar9 = pMVar2;
    }
    if (pMVar9 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar9;
    pMVar9 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar9 = pMVar2;
    }
    if (pMVar9 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RemoveFromMarket() */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_RemoveFromMarket
               (InventoryItemPreviewSell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0
              );
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar1->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
      (pMVar1->fields).OnMarketPlaceActionComplete = pMVar3;
      pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pIVar4 = (this->fields).previewItem;
    if ((pIVar4 != (InventoryItem *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RequestRemoveItemFromMarketPlace
                (this_01,(pIVar4->fields).itemID,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

