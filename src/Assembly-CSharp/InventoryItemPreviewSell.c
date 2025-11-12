
/* Void AddToMarket() */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_AddToMarket
               (InventoryItemPreviewSell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c___AddToMarket_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass13_0___AddToMarket_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_not_add_item_to_your_sho);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    iVar4 = (pMVar3->fields)._.level;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      if ((pMVar2->fields)._MarketPlaceLevel_k__BackingField <= iVar4) {
        pIVar5 = (this->fields).itemName;
        if (pIVar5 == (InputField *)0x0) goto code_?;
        pSVar6 = (pIVar5->fields).m_Text;
        if ((pSVar6 != (String *)0x0) && ((pSVar6->fields)._stringLength != 0)) {
          pIVar5 = (this->fields).description;
          if (pIVar5 == (InputField *)0x0) goto code_?;
          pSVar6 = (pIVar5->fields).m_Text;
          if ((pSVar6 != (String *)0x0) && ((pSVar6->fields)._stringLength != 0)) {
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 != (MVNetworkGame *)0x0) {
              pMVar7 = (pMVar2->fields).OnMarketPlaceActionComplete;
              this_01 = (UnityAction_1_System_ByteEnum_ *)
                        FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
              uVar8 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
              UnityAction_1_System_ByteEnum___ctor
                        (this_01,(Object *)this,
                         MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_,
                         (MethodInfo *)0x0);
              pMVar7 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pMVar7,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pMVar7 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
                (pMVar2->fields).OnMarketPlaceActionComplete =
                     (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
              }
              else {
                pMVar9 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
                if (pMVar7->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate)
                {
                  pMVar9 = pMVar7;
                }
                if (pMVar9 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
                  FUN_?(pMVar7,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate
                               );
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                (pMVar2->fields).OnMarketPlaceActionComplete = pMVar9;
                pMVar9 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
                if (pMVar7->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate)
                {
                  pMVar9 = pMVar7;
                }
                if (pMVar9 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
                  FUN_?(pMVar7);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              func_?();
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              pIVar12 = (this->fields).previewItem;
              if (pIVar12 != (InventoryItem *)0x0) {
                iVar13 = (pIVar12->fields).itemID;
                pIVar5 = (this->fields).itemName;
                if (pIVar5 != (InputField *)0x0) {
                  pSVar6 = (pIVar5->fields).m_Text;
                  pIVar5 = (this->fields).description;
                  if ((pIVar5 != (InputField *)0x0) &&
                     (pSVar14 = (pIVar5->fields).m_Text,
                     pMVar11 != (MVNetworkGame_OperationRequests *)0x0)) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                           );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object___ctor
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                              );
                    aiStackX_18[0] = iVar13;
                    pOVar15 = (Object *)FUN_?(uRam_?,aiStackX_18);
                    if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method;
                      uVar16 = (undefined7)((ulonglong)method_00 >> 8);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_02,0x28,pOVar15,(InsertionBehavior__Enum)uVar8,method_00);
                      uVar17 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_02,0x2a,(Object *)pSVar6,(InsertionBehavior__Enum)uVar17,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                 ->klass->rgctx_data[0x22].method);
                      uVar8 = CONCAT71(uVar16,0x86);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_02,0x86,(Object *)pSVar14,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method);
                      pPVar18 = (pMVar11->fields).peer;
                      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                          == 0) {
                        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      if (pPVar18 != (PhotonPeer *)0x0) {
                        (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                                  (pPVar18,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x2c),this_02,
                                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                   SendReliable,(pPVar18->klass->vtable).SendOperation.method);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__InventoryItemPreviewSell____c);
        }
        this_03 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__13_0;
        if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__InventoryItemPreviewSell____c);
          }
          object = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
          this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                     MethodInfo__InventoryItemPreviewSell____c___AddToMarket_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__13_0 = this_03;
          if (iRam_? != 0) {
            uVar19 = (uint)((ulonglong)
                            &TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__13_0 >>
                           0xc);
            lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
            do {
              uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
              puVar22 = (ulonglong *)(lVar20 + 0xADDR);
              LOCK();
              bVar23 = uVar21 == *puVar22;
              if (bVar23) {
                *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
        }
code_?:
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      pOVar15 = (Object *)FUN_?(TypeInfo__InventoryItemPreviewSell____c__DisplayClass13_0);
      pSVar6 = TM::TM__(StringLiteral_You_can_not_add_item_to_your_sho,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
        iVar13 = (pMVar2->fields)._MarketPlaceLevel_k__BackingField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_24[0]._pointer._value = (void *)0x0;
        aRStack_24[0]._length = 0;
        aRStack_24[0]._12_4_ = 0;
        pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                            (iVar13,aRStack_24,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        pOVar25 = (Object__Class *)
                  mscorlib.dll::System::String::String_Concat_4(pSVar6,pSVar14,(MethodInfo *)0x0);
        if (pOVar15 != (Object *)0x0) {
          bVar23 = iRam_? != 0;
          pOVar15[1].klass = pOVar25;
          if (bVar23) {
            uVar19 = (uint)((ulonglong)(pOVar15 + 1) >> 0xc);
            lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
            do {
              uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
              puVar22 = (ulonglong *)(lVar20 + 0xADDR);
              LOCK();
              bVar23 = uVar21 == *puVar22;
              if (bVar23) {
                *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,pOVar15,
                     MethodInfo__InventoryItemPreviewSell____c__DisplayClass13_0___AddToMarket_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_Initialize
               (InventoryItemPreviewSell *this,RawImage *preview,InventoryItem *item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Update);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sell);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewImage;
  if ((preview != (RawImage *)0x0) &&
     (value_00 = (Texture *)
                 (*(preview->klass->vtable).get_mainTexture.methodPtr)
                           (preview,(preview->klass->vtable).get_mainTexture.method),
     this_00 != (RawImage *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,value_00,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).previewItem = item;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).previewItem >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if ((item != (InventoryItem *)0x0) &&
       (pIVar6 = (this->fields).itemName, pIVar6 != (InputField *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar6,(item->fields).name,1,(MethodInfo *)0x0);
      pIVar6 = (this->fields).description;
      if (pIVar6 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar6,::StringLiteral__,1,(MethodInfo *)0x0);
        value = (item->fields).description;
        if ((value != (String *)0x0) && ((value->fields)._stringLength != 0)) {
          pIVar6 = (this->fields).description;
          if (pIVar6 == (InputField *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                    (pIVar6,value,1,(MethodInfo *)0x0);
        }
        pBVar7 = (this->fields).sellButton;
        if ((pBVar7 != (Button *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pBVar7,(MethodInfo *)0x0),
           pGVar8 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,0,(MethodInfo *)0x0);
          pBVar7 = (this->fields).removeFromMarketButton;
          if ((pBVar7 != (Button *)0x0) &&
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar7,(MethodInfo *)0x0),
             pGVar8 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,0,(MethodInfo *)0x0);
            if ((item->fields).shopInventoryID != 0) {
              iVar9 = (item->fields).authorProfileID;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar10 == (MVGameControllerBase *)0x0) ||
                   (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) ||
                  (pMVar12 = (pMVar11->fields).playerContainer, pMVar12 == (MVPlayerContainer *)0x0))
                 || (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVLocalPlayer *)0x0
                    )) goto code_?;
              if (iVar9 == (pMVar13->fields)._._ProfileID_k__BackingField) {
                pTVar14 = (this->fields).sellButtonText;
                TM::TM__(StringLiteral_Update,(MethodInfo *)0x0);
                if (pTVar14 != (Text *)0x0) {
                  (*(pTVar14->klass->vtable).set_text.methodPtr)(pTVar14);
                  pBVar7 = (this->fields).removeFromMarketButton;
                  if ((pBVar7 != (Button *)0x0) &&
                     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pBVar7,(MethodInfo *)0x0),
                     pGVar8 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar8,1,(MethodInfo *)0x0);
                    pBVar7 = (this->fields).sellButton;
                    if ((pBVar7 != (Button *)0x0) &&
                       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pBVar7,(MethodInfo *)0x0),
                       pGVar8 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar8,1,(MethodInfo *)0x0);
                      (this->fields).addingToMarket = 0;
                      return;
                    }
                  }
                }
                goto code_?;
              }
            }
            iVar9 = (item->fields).authorProfileID;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
               ((pMVar12 = (pMVar11->fields).playerContainer, pMVar12 != (MVPlayerContainer *)0x0 &&
                (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (pMVar12,(MethodInfo *)0x0), pMVar13 != (MVLocalPlayer *)0x0))))
            {
              if (iVar9 == (pMVar13->fields)._._ProfileID_k__BackingField) {
                pTVar14 = (this->fields).sellButtonText;
                TM::TM__(StringLiteral_Sell,(MethodInfo *)0x0);
                if (pTVar14 != (Text *)0x0) {
                  (*(pTVar14->klass->vtable).set_text.methodPtr)(pTVar14);
                  pBVar7 = (this->fields).sellButton;
                  if ((pBVar7 != (Button *)0x0) &&
                     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pBVar7,(MethodInfo *)0x0),
                     pGVar8 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar8,1,(MethodInfo *)0x0);
                    (this->fields).addingToMarket = 1;
                    return;
                  }
                }
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (pMVar10 != (MVGameControllerBase *)0x0) {
                  pMVar11 = (pMVar10->fields).game;
                  this_01 = (UnityAction_2_System_Object_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>
                                         );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (this_01,(Object *)this,
                             MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                             ,(MethodInfo *)0x0);
                  if (pMVar11 != (MVNetworkGame *)0x0) {
                    MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                              (pMVar11,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,
                               (MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnAddToMarketplaceReturn(Boolean) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::
     InventoryItemPreviewSell_OnAddToMarketplaceReturn
               (InventoryItemPreviewSell *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_0___OnAddToMarketplaceReturn_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_1___OnAddToMarketplaceReturn_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Successfully_added__0__to_your_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Successfully_updated__0__in_your);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_add__0__to_your_shop_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_update__0__in_your_sho);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).OnMarketPlaceActionComplete;
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnAddToMarketplaceReturn_bool_,
               (MethodInfo *)0x0);
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pMVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar2->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar2->fields).OnMarketPlaceActionComplete = pMVar4;
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnMarketPlaceActionComplete >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    iVar11 = iRam_?;
    pIVar12 = (this->fields).itemName;
    if ((pIVar12 != (InputField *)0x0) &&
       (pIVar13 = (this->fields).previewItem, pIVar13 != (InventoryItem *)0x0)) {
      (pIVar13->fields).name = (pIVar12->fields).m_Text;
      if (iVar11 != 0) {
        uVar6 = (uint)((ulonglong)&(pIVar13->fields).name >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
          iVar11 = iRam_?;
        } while (!bVar10);
      }
      pIVar12 = (this->fields).description;
      if ((pIVar12 != (InputField *)0x0) &&
         (pIVar13 = (this->fields).previewItem, pIVar13 != (InventoryItem *)0x0)) {
        (pIVar13->fields).description = (pIVar12->fields).m_Text;
        if (iVar11 != 0) {
          uVar6 = (uint)((ulonglong)&(pIVar13->fields).description >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if (success == 0) {
          object = (Object *)
                   FUN_?(TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_1);
          pSVar14 = StringLiteral_Failed_to_add__0__to_your_shop_;
          if ((this->fields).addingToMarket == 0) {
            pSVar14 = StringLiteral_Failed_to_update__0__in_your_sho;
          }
          pSVar14 = TM::TM__(pSVar14,(MethodInfo *)0x0);
          pIVar13 = (this->fields).previewItem;
          if (pIVar13 != (InventoryItem *)0x0) {
            PStack_15._arg0 = (Object *)0x0;
            PStack_15._arg1 = (Object *)0x0;
            PStack_15._arg2 = (Object *)0x0;
            PStack_15._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                      (&PStack_15,(Object *)(pIVar13->fields).name,(MethodInfo *)0x0);
            PStack_16._arg0 = PStack_15._arg0;
            PStack_16._arg1 = PStack_15._arg1;
            PStack_16._arg2 = PStack_15._arg2;
            PStack_16._args = PStack_15._args;
            pOVar17 = (Object__Class *)
                      mscorlib.dll::System::String::String_FormatHelper
                                ((IFormatProvider *)0x0,pSVar14,&PStack_16,(MethodInfo *)0x0);
            if (object != (Object *)0x0) {
              bVar10 = iRam_? != 0;
              object[1].klass = pOVar17;
              if (bVar10) {
                uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__InventoryItemPreviewSell____c);
              }
              pEVar19 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_2;
              if (pEVar19 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__InventoryItemPreviewSell____c);
                }
                pIVar20 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
                pEVar19 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar19,(Object *)pIVar20,
                           MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_2 = pEVar19;
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)
                                  &TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_2
                                 >> 0xc);
                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                    LOCK();
                    bVar10 = uVar8 == *puVar9;
                    if (bVar10) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar18,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar19,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
              pMVar21 = 
              MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_1___OnAddToMarketplaceReturn_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
              ;
code_?:
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (this_02,object,pMVar21,(MethodInfo *)0x0);
              pMVar21 = 
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              ;
              if ((
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                PStack_15._arg1 = (Object *)&UNK_?;
                FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                LOCK();
                UNLOCK();
                PStack_15._arg1 = (Object *)&UNK_?;
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                             );
                LOCK();
                UNLOCK();
                PStack_15._arg1 = (Object *)&UNK_?;
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                if ((pMVar21->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  PStack_15._arg1 = (Object *)&UNK_?;
                  FUN_?(pMVar21);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                PStack_15._arg1 = (Object *)&UNK_?;
                FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              PStack_15._arg1 = (Object *)&UNK_?;
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_GetEventChain
                        (pGVar18,(IList_1_UnityEngine_Transform_ *)
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                                 s_InternalTransformList,(MethodInfo *)0x0);
              pLVar22 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar22 != (List_1_UnityEngine_Transform_ *)0x0) {
                lVar7 = (longlong)(pLVar22->fields)._size;
                uVar6 = 0;
                if (0 < lVar7) {
                  lVar23 = 0;
                  lVar24 = 0x20;
                  do {
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      PStack_15._arg1 = (Object *)&UNK_?;
                      FUN_?();
                    }
                    pLVar22 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList;
                    if (pLVar22 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                    if ((uint)(pLVar22->fields)._size <= uVar6) {
                      PStack_15._arg1 = (Object *)&UNK_?;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pTVar25 = (pLVar22->fields)._items;
                    if (pTVar25 == (Transform__Array *)0x0) goto code_?;
                    if ((uint)pTVar25->max_length <= uVar6) {
                      PStack_15._arg1 = (Object *)&UNK_?;
                      FUN_?();
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    this_00 = *(Component **)((longlong)pTVar25->vector + lVar24 + -0x20);
                    if (this_00 == (Component *)0x0) goto code_?;
                    PStack_15._arg1 = (Object *)&UNK_?;
                    pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(this_00,(MethodInfo *)0x0);
                    PStack_15._arg1 = (Object *)&UNK_?;
                    bVar26 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                             ExecuteEvents_Execute_18
                                       (pGVar18,(BaseEventData *)0x0,this_02,
                                        (pMVar21->field7_0x38).rgctx_data[1].method);
                    if (bVar26 != 0) {
                      PStack_15._arg1 = (Object *)&UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
                      return;
                    }
                    uVar6 = uVar6 + 1;
                    lVar23 = lVar23 + 1;
                    lVar24 = lVar24 + 8;
                  } while (lVar23 < lVar7);
                }
                return;
              }
code_?:
              PStack_15._arg1 = (Object *)&UNK_?;
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        else {
          object = (Object *)
                   FUN_?(TypeInfo__InventoryItemPreviewSell____c__DisplayClass16_0);
          pSVar14 = StringLiteral_Successfully_added__0__to_your_s;
          if ((this->fields).addingToMarket == 0) {
            pSVar14 = StringLiteral_Successfully_updated__0__in_your;
          }
          pSVar14 = TM::TM__(pSVar14,(MethodInfo *)0x0);
          pIVar13 = (this->fields).previewItem;
          if (pIVar13 != (InventoryItem *)0x0) {
            PStack_15._arg0 = (Object *)0x0;
            PStack_15._arg1 = (Object *)0x0;
            PStack_15._arg2 = (Object *)0x0;
            PStack_15._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                      (&PStack_15,(Object *)(pIVar13->fields).name,(MethodInfo *)0x0);
            PStack_16._arg0 = PStack_15._arg0;
            PStack_16._arg1 = PStack_15._arg1;
            PStack_16._arg2 = PStack_15._arg2;
            PStack_16._args = PStack_15._args;
            pOVar17 = (Object__Class *)
                      mscorlib.dll::System::String::String_FormatHelper
                                ((IFormatProvider *)0x0,pSVar14,&PStack_16,(MethodInfo *)0x0);
            if (object != (Object *)0x0) {
              bVar10 = iRam_? != 0;
              object[1].klass = pOVar17;
              if (bVar10) {
                uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__InventoryItemPreviewSell____c);
              }
              pEVar19 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_0;
              if (pEVar19 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__InventoryItemPreviewSell____c);
                }
                pIVar20 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
                pEVar19 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar19,(Object *)pIVar20,
                           MethodInfo__InventoryItemPreviewSell____c___OnAddToMarketplaceReturn_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_0 = pEVar19;
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)
                                  &TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__16_0
                                 >> 0xc);
                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                    LOCK();
                    bVar10 = uVar8 == *puVar9;
                    if (bVar10) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar18,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar19,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
              pMVar21 = 
              MethodInfo__InventoryItemPreviewSell____c__DisplayClass16_0___OnAddToMarketplaceReturn_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
              ;
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnLoadMarketPlaceItem(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_OnLoadMarketPlaceItem
               (InventoryItemPreviewSell *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__CommonValues);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_is_not_different_enough_fro);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_is_sellable_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).game;
    this_04 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_04,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnLoadMarketPlaceItem_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                  (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_04,
                   (MethodInfo *)0x0), e != (ReceivedItemFromQueryEventArgs *)0x0)) {
      koGaMaData = (e->fields).KoGaMaData;
      pIVar2 = (this->fields).previewItem;
      if (pIVar2 != (InventoryItem *)0x0) {
        buffer = (pIVar2->fields).data;
        this_05 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_05,buffer,(MethodInfo *)0x0);
        this_06 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_06,this_05,0,(MethodInfo *)0x0);
        if (this_06 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_06,(MethodInfo *)0x0);
          this_07 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
          KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_07,koGaMaData,0,(MethodInfo *)0x0);
          if (this_07 != (KoGaMaPackageClient *)0x0) {
            KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_07,(MethodInfo *)0x0);
            fVar3 = KoGaMaPackageClient::KoGaMaPackageClient_Compare
                               (this_07,this_06,(MethodInfo *)0x0);
            KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_06,(MethodInfo *)0x0);
            KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_07,(MethodInfo *)0x0);
            fVar4 = _UNK_?;
            pPVar5 = (this->fields).compareSlider;
            if (pPVar5 != (ProgressBarAndroid *)0x0) {
              fVar6 = _UNK_? - fVar3;
              if (fVar6 < 0.0) {
                fVar6 = 0.0;
              }
              else if (_UNK_? < fVar6) {
                fVar6 = _UNK_?;
              }
              (pPVar5->fields).progress = fVar6;
              this_01 = (pPVar5->fields).ProgressBar;
              if (this_01 != (Scrollbar *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                          (this_01,fVar6,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__MV__Common__CommonValues->_1).field_0x1c == 0) {
                  FUN_?();
                }
                obj = (this->fields).sliderTransform;
                this_02 = (this->fields).thresholdCaret;
                if (obj != (RectTransform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_7 = 0;
                  uStack_8 = 0;
                  pvVar9 = (obj->fields)._._._.m_CachedPtr;
                  if (pvVar9 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  (*pcRam_?)(pvVar9,&uStack_7);
                  fVar6 = _UNK_?;
                  if (this_02 != (RectTransform *)0x0) {
                    value.y = 0.0;
                    value.x = (float)uStack_8 * _UNK_?;
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_set_anchoredPosition(this_02,value,(MethodInfo *)0x0);
                    pPVar5 = (this->fields).compareSlider;
                    if ((pPVar5 != (ProgressBarAndroid *)0x0) &&
                       (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pPVar5,(MethodInfo *)0x0),
                       pGVar12 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar12,1,(MethodInfo *)0x0);
                      pTVar13 = (this->fields).compareText;
                      if (fVar4 - fVar3 <= fVar6) {
                        pSVar14 = TM::TM__(StringLiteral_Item_is_not_different_enough_fro,
                                          (MethodInfo *)0x0);
                        if (pTVar13 != (Text *)0x0) {
                          (*(pTVar13->klass->vtable).set_text.methodPtr)
                                    (pTVar13,pSVar14,(pTVar13->klass->vtable).set_text.method);
                          return;
                        }
                      }
                      else {
                        TM::TM__(StringLiteral_Item_is_sellable_,(MethodInfo *)0x0);
                        if (pTVar13 != (Text *)0x0) {
                          (*(pTVar13->klass->vtable).set_text.methodPtr)(pTVar13);
                          this_03 = (this->fields).sellButton;
                          if ((this_03 != (Button *)0x0) &&
                             (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)this_03,(MethodInfo *)0x0),
                             pGVar12 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar12,1,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnRemoveFromMarketplace(Boolean) */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_OnRemoveFromMarketplace
               (InventoryItemPreviewSell *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventoryItemPreviewSell____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemPreviewSell____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_remove__0__from_your_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Successfully_removed__0__from_yo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__InventoryItemPreviewSell____c__DisplayClass15_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).OnMarketPlaceActionComplete;
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0
              );
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pMVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar2->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar2->fields).OnMarketPlaceActionComplete = pMVar4;
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnMarketPlaceActionComplete >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__InventoryItemPreviewSell____c);
    }
    this_02 = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__15_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__InventoryItemPreviewSell____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__InventoryItemPreviewSell____c);
      }
      object = TypeInfo__InventoryItemPreviewSell____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__InventoryItemPreviewSell____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__15_0 = this_02;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__InventoryItemPreviewSell____c->static_fields->__9__15_0 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar11,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pSVar12 = TM::TM__(StringLiteral_Failed_to_remove__0__from_your_s,(MethodInfo *)0x0);
    pIVar13 = (this->fields).itemName;
    if (pIVar13 != (InputField *)0x0) {
      PStack_14._arg0 = (Object *)0x0;
      PStack_14._arg1 = (Object *)0x0;
      PStack_14._arg2 = (Object *)0x0;
      PStack_14._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                (&PStack_14,(Object *)(pIVar13->fields).m_Text,(MethodInfo *)0x0);
      PStack_15._arg0 = PStack_14._arg0;
      PStack_15._arg1 = PStack_14._arg1;
      PStack_15._arg2 = PStack_14._arg2;
      PStack_15._args = PStack_14._args;
      pOVar16 = (Object__Class *)
                mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar12,&PStack_15,(MethodInfo *)0x0);
      if (object_00 != (Object *)0x0) {
        bVar10 = iRam_? != 0;
        object_00[1].klass = pOVar16;
        if (bVar10) {
          uVar6 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if (success == 0) {
code_?:
          pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_04,object_00,
                     MethodInfo__InventoryItemPreviewSell____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar17 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            PStack_14._arg1 = (Object *)&UNK_?;
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            PStack_14._arg1 = (Object *)&UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                         );
            LOCK();
            UNLOCK();
            PStack_14._arg1 = (Object *)&UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            if ((pMVar17->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              PStack_14._arg1 = (Object *)&UNK_?;
              FUN_?(pMVar17);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            PStack_14._arg1 = (Object *)&UNK_?;
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          PStack_14._arg1 = (Object *)&UNK_?;
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar11,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar18 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar18 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar7 = (longlong)(pLVar18->fields)._size;
            uVar6 = 0;
            if (0 < lVar7) {
              lVar19 = 0;
              lVar20 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  PStack_14._arg1 = (Object *)&UNK_?;
                  FUN_?();
                }
                pLVar18 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar18 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar18->fields)._size <= uVar6) {
                  PStack_14._arg1 = (Object *)&UNK_?;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pTVar21 = (pLVar18->fields)._items;
                if (pTVar21 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar21->max_length <= uVar6) {
                  PStack_14._arg1 = (Object *)&UNK_?;
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                this_00 = *(Component **)((longlong)pTVar21->vector + lVar20 + -0x20);
                if (this_00 == (Component *)0x0) goto code_?;
                PStack_14._arg1 = (Object *)&UNK_?;
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_00,(MethodInfo *)0x0);
                PStack_14._arg1 = (Object *)&UNK_?;
                bVar22 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar11,(BaseEventData *)0x0,this_04,
                                    (pMVar17->field7_0x38).rgctx_data[1].method);
                if (bVar22 != 0) {
                  PStack_14._arg1 = (Object *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                uVar6 = uVar6 + 1;
                lVar19 = lVar19 + 1;
                lVar20 = lVar20 + 8;
              } while (lVar19 < lVar7);
            }
            return;
          }
code_?:
          PStack_14._arg1 = (Object *)&UNK_?;
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pSVar12 = TM::TM__(StringLiteral_Successfully_removed__0__from_yo,(MethodInfo *)0x0);
        pIVar13 = (this->fields).itemName;
        if (pIVar13 != (InputField *)0x0) {
          PStack_14._arg0 = (Object *)0x0;
          PStack_14._arg1 = (Object *)0x0;
          PStack_14._arg2 = (Object *)0x0;
          PStack_14._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                    (&PStack_14,(Object *)(pIVar13->fields).m_Text,(MethodInfo *)0x0);
          PStack_15._arg0 = PStack_14._arg0;
          PStack_15._arg1 = PStack_14._arg1;
          PStack_15._arg2 = PStack_14._arg2;
          PStack_15._args = PStack_14._args;
          pOVar16 = (Object__Class *)
                    mscorlib.dll::System::String::String_FormatHelper
                              ((IFormatProvider *)0x0,pSVar12,&PStack_15,(MethodInfo *)0x0);
          bVar10 = iRam_? != 0;
          object_00[1].klass = pOVar16;
          if (bVar10) {
            uVar6 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
              (IEditModeUI *)0x0) {
            this_03 = (PlayerShopInventoryRepository *)FUN_?();
            pIVar23 = (this->fields).previewItem;
            if ((pIVar23 != (InventoryItem *)0x0) &&
               (this_03 != (PlayerShopInventoryRepository *)0x0)) {
              UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                        (this_03,(pIVar23->fields).itemID,0,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveFromMarket() */

void Assembly-CSharp.dll::InventoryItemPreviewSell::InventoryItemPreviewSell_RemoveFromMarket
               (InventoryItemPreviewSell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    uVar4 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)this,
               MethodInfo__InventoryItemPreviewSell__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0
              );
    pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar2->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar5 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar5 = pMVar3;
      }
      if (pMVar5 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?(pMVar3,TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).OnMarketPlaceActionComplete = pMVar5;
      pMVar5 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar5 = pMVar3;
      }
      if (pMVar5 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar2->fields).OnMarketPlaceActionComplete >> 0xc);
      uVar4 = (ulonglong)(uVar7 & 0x3f);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << uVar4;
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pIVar11 = (this->fields).previewItem, pIVar11 != (InventoryItem *)0x0)) {
      pMVar12 = (pMVar2->fields).operationRequests;
      iVar13 = (pIVar11->fields).itemID;
      if (pMVar12 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = iVar13;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar14 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x28);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x28,value,(InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
                     method_00);
          pPVar15 = (pMVar12->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar15 != (PhotonPeer *)0x0) {
            (*(pPVar15->klass->vtable).SendOperation.methodPtr)
                      (pPVar15,CONCAT71((int7)((ulonglong)uVar14 >> 8),0x2d),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar15->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

