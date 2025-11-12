
/* Void HandleInsufficientResources(String, String) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleInsufficientResources
               (AvatarAccessoryPurchasePopup *this,String *header,String *buttonText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarAccessoryPurchasePopup__OnGoldPurchaseDialogResult_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&
                  AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0___HandleInsufficientResources_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0);
  original = (this->fields).insufficientResourcesPopup;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass20_0___HandleInsufficientResources_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    resultCallback =
         (UnityAction_1_System_Boolean_ *)
         FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
    FUN_?(resultCallback,this,
                  MethodInfo__AvatarAccessoryPurchasePopup__OnGoldPurchaseDialogResult_bool_);
    if (pOVar1 != (Object__Class *)0x0) {
      AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                ((AvatarAccessoryErrorPopup *)pOVar1,resultCallback,(this->fields).previewImageUrl,
                 (this->fields).accessoryDataClient,header,buttonText,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleNotOwnedUI
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  AvatarAccessoryPurchasePopup_HandlePrices
            (this,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 != (AccessoryDataClient *)0x0) &&
     (pAVar2 = (this->fields).timeLimitDisplayer, pAVar2 != (AccessoryTimeLimitDisplayer *)0x0)) {
    bVar3 = iRam_? != 0;
    (pAVar2->fields).accessoryTimeLimitData = (pAVar1->fields)._.time;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pAVar2->fields).accessoryTimeLimitData >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pAVar2 = (this->fields).timeLimitDisplayer;
    if (pAVar2 != (AccessoryTimeLimitDisplayer *)0x0) {
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar2,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryDataClient;
      if (((pAVar1 != (AccessoryDataClient *)0x0) &&
          (pAVar9 = (pAVar1->fields)._.time, pAVar9 != (AccessoryTimelimit *)0x0)) &&
         (pGVar8 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,(pAVar9->fields).timeLimit != 0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).accessoryDataClient;
        if ((pAVar1 != (AccessoryDataClient *)0x0) &&
           (pGVar8 = (this->fields).newAccessoryImage, pGVar8 != (GameObject *)0x0)) {
          bVar10 = (pAVar1->fields)._.iNew;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,bVar10,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar8 == (GameObject *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pvVar12 = (pGVar8->fields)._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar12,bVar10);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandlePrices(AccessoryDataClient) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_HandlePrices
               (AvatarAccessoryPurchasePopup *this,AccessoryDataClient *streamingAssetInfo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FREE);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (streamingAssetInfo != (AccessoryDataClient *)0x0) {
    value = (streamingAssetInfo->fields)._.cost;
    pTVar1 = (this->fields).originalPriceText;
    iVar2 = (streamingAssetInfo->fields)._.dsc;
    aIStackX_10[0].m_value = iVar2;
    if ((pTVar1 != (Text *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0 < iVar2,(MethodInfo *)0x0);
      pGVar3 = (this->fields).discountTag;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0 < iVar2,(MethodInfo *)0x0);
        iVar4 = value;
        if (0 < iVar2) {
          pTVar1 = (this->fields).discountTagText;
          pSVar5 = StringLiteral_FREE;
          if (iVar2 < 100) {
            pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
            pSVar5 = mscorlib.dll::System::String::String_Concat_5
                               (::StringLiteral__,pSVar5,::StringLiteral__,(MethodInfo *)0x0);
          }
          if (pTVar1 == (Text *)0x0) goto code_?;
          (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar5);
          iVar4 = FUN_?(((float)iVar2 / _UNK_?) * (float)value);
          pSVar5 = StringLiteral_N0;
          pTVar1 = (this->fields).originalPriceText;
          iVar4 = value - iVar4;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar5 == (String *)0x0) {
            puVar6 = (uint16_t *)0x0;
            iVar7 = 0;
          }
          else {
            aRStack_8[0]._pointer._value = &(pSVar5->fields)._firstChar;
            aRStack_8[0]._12_4_ = 0;
            iVar7 = (pSVar5->fields)._stringLength;
            aRStack_8[0]._length = iVar7;
            puVar6 = aRStack_8[0]._pointer._value;
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_8[0]._12_4_ = 0;
          aRStack_8[0]._pointer._value = puVar6;
          aRStack_8[0]._length = iVar7;
          pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if ((pSVar5 == (String *)0x0) ||
             (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar5,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar1 == (Text *)0x0)) goto code_?;
          (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar5);
        }
        pGVar3 = (this->fields).freeItemTag;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,iVar4 == 0,(MethodInfo *)0x0);
          if (iVar4 == 0) {
            pTVar1 = (this->fields).originalPriceText;
            if ((pTVar1 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pGVar3 = (this->fields).discountTag;
            if (pGVar3 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pTVar1 = (this->fields).priceText;
            if ((pTVar1 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
          }
          pSVar5 = StringLiteral_N0;
          pTVar1 = (this->fields).priceText;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar5 == (String *)0x0) {
            puVar6 = (uint16_t *)0x0;
            iVar7 = 0;
          }
          else {
            aRStack_8[0]._pointer._value = &(pSVar5->fields)._firstChar;
            aRStack_8[0]._12_4_ = 0;
            iVar7 = (pSVar5->fields)._stringLength;
            aRStack_8[0]._length = iVar7;
            puVar6 = aRStack_8[0]._pointer._value;
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_8[0]._12_4_ = 0;
          aRStack_8[0]._pointer._value = puVar6;
          aRStack_8[0]._length = iVar7;
          pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                             (iVar4,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if ((pSVar5 != (String *)0x0) &&
             (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar5,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar1 != (Text *)0x0)) {
            UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pTVar1,pSVar5,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleSuccessfulPurchase(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_HandleSuccessfulPurchase
               (AvatarAccessoryPurchasePopup *this,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000010);
  if ((purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (purchaseResponseData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 == (Object *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar1,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  streamingAssetId = *(int32_t *)&pOVar1[1].klass;
  AccessoryDataManager::AccessoryDataManager_SetToOwns(streamingAssetId,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataClient,streamingAssetId,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&
                  PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0___SuccessfulPopupCallBack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0);
  if (pOVar1 != (Object *)0x0) {
    bVar3 = iRam_? != 0;
    pOVar1[1].monitor = (MonitorData *)this;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pAVar8 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                       (streamingAssetId,(MethodInfo *)0x0);
    previewAccessories =
         (AccessoryDataClient__Array *)FUN_?(TypeInfo__AccessoryDataClient,1);
    if (previewAccessories != (AccessoryDataClient__Array *)0x0) {
      if ((pAVar8 != (AccessoryDataClient *)0x0) &&
         (lVar5 = FUN_?(pAVar8,(previewAccessories->klass->_0).element_class), lVar5 == 0)
         ) {
        uVar9 = FUN_?();
        FUN_?(uVar9,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(previewAccessories,0);
      original = (this->fields).successPreviewer;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar10 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                          );
      bVar3 = iRam_? != 0;
      pOVar1[1].klass = pOVar10;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      if (pOVar1[1].klass != (Object__Class *)0x0) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                  ((PurchasedAccessoryPreviewer *)pOVar1[1].klass,previewAccessories,
                   (MethodInfo *)0x0);
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,pOVar1,
                   MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0___SuccessfulPopupCallBack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar12 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar12);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar11,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar5 = (longlong)(pLVar13->fields)._size;
          uVar4 = 0;
          if (0 < lVar5) {
            lVar14 = 0;
            lVar15 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar13->fields)._size <= uVar4) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar16 = (pLVar13->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar4) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar16->vector + lVar15 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar11,(BaseEventData *)0x0,this_01,
                                 (pMVar12->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar4 = uVar4 + 1;
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 8;
            } while (lVar14 < lVar5);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(AccessoryDataClient, String) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Initialize
               (AvatarAccessoryPurchasePopup *this,AccessoryDataClient *accessoryDataClient,
               String *previewImageUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarAccessoryPurchasePopup__OnPreviewImageDownLoaded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).preview;
    if ((pSVar2 != (StreamedSpriteToImageManual *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pSVar2 = (this->fields).preview;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__AvatarAccessoryPurchasePopup__OnPreviewImageDownLoaded__,
                 (MethodInfo *)0x0);
      if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
        StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                  (pSVar2,previewImageUrl,(UnityAction *)this_01,(MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields).accessoryDataClient = accessoryDataClient;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).accessoryDataClient >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pTVar8 = (this->fields).priceText;
        if ((accessoryDataClient != (AccessoryDataClient *)0x0) &&
           (pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&(accessoryDataClient->fields)._.cost,(MethodInfo *)0x0),
           pTVar8 != (Text *)0x0)) {
          (*(pTVar8->klass->vtable).set_text.methodPtr)(pTVar8,pSVar9);
          bVar3 = iRam_? != 0;
          (this->fields).price = (accessoryDataClient->fields)._.cost;
          (this->fields).previewImageUrl = previewImageUrl;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).previewImageUrl >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          this_00 = (this->fields).accessoryItemBackground;
          if (this_00 != (AccessoryItemBackground *)0x0) {
            AccessoryItemBackground::AccessoryItemBackground_Initialize
                      (this_00,accessoryDataClient,(MethodInfo *)0x0);
            AvatarAccessoryPurchasePopup_HandlePrices
                      (this,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
            pAVar10 = (this->fields).accessoryDataClient;
            if ((pAVar10 != (AccessoryDataClient *)0x0) &&
               (pAVar11 = (this->fields).timeLimitDisplayer,
               pAVar11 != (AccessoryTimeLimitDisplayer *)0x0)) {
              bVar3 = iRam_? != 0;
              (pAVar11->fields).accessoryTimeLimitData = (pAVar10->fields)._.time;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(pAVar11->fields).accessoryTimeLimitData >> 0xc);
                lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pAVar11 = (this->fields).timeLimitDisplayer;
              if (pAVar11 != (AccessoryTimeLimitDisplayer *)0x0) {
                pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pAVar11,(MethodInfo *)0x0);
                pAVar10 = (this->fields).accessoryDataClient;
                if (((pAVar10 != (AccessoryDataClient *)0x0) &&
                    (pAVar12 = (pAVar10->fields)._.time, pAVar12 != (AccessoryTimelimit *)0x0)) &&
                   (pGVar1 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,(pAVar12->fields).timeLimit != 0,(MethodInfo *)0x0);
                  pAVar10 = (this->fields).accessoryDataClient;
                  if ((pAVar10 != (AccessoryDataClient *)0x0) &&
                     (pGVar1 = (this->fields).newAccessoryImage, pGVar1 != (GameObject *)0x0)) {
                    bVar13 = (pAVar10->fields)._.iNew;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                    ,bVar13,0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (pGVar1 == (GameObject *)0x0) {
                      FUN_?();
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pvVar15 = (pGVar1->fields)._.m_CachedPtr;
                    if (pvVar15 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0)
                      ;
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pcVar14 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                      uVar16 = func_?(&UNK_?);
                      FUN_?(uVar16,0);
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pcRam_? = pcVar14;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam_?)(pvVar15,bVar13);
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
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_OnGoldPurchaseDialogResult
               (AvatarAccessoryPurchasePopup *this,bool result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c___OnGoldPurchaseDialogResult_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
  }
  this_00 = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__21_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
    }
    object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__AvatarAccessoryPurchasePopup____c___OnGoldPurchaseDialogResult_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__21_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__21_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (result != 0) {
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPurchaseGold(0,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPreviewImageDownLoaded() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_OnPreviewImageDownLoaded
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).preview;
      if ((this_00 != (StreamedSpriteToImageManual *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Pop
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c___Pop_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
  }
  this_01 = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__24_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
    }
    object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarAccessoryPurchasePopup____c___Pop_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__24_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__24_0 >> 0xc)
      ;
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_ProductPurchaseResponseHandler
               (AvatarAccessoryPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c___ProductPurchaseResponseHandler_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Too_low_level);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Get_XP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Get_gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_enough_gold);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    *(int32_t *)&pOVar1[1].klass = returnCode;
    pOVar1[1].monitor = (MonitorData *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar7 != (MVGameControllerBase *)0x0) &&
       (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
      pAVar9 = (pMVar8->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar9,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar11 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar10 == (Delegate *)0x0) {
        (pMVar8->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar9 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar10,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar9 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar10,pAVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (pMVar8->fields).PurchaseProductResponseHandler = pAVar9;
        pAVar11 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar4 = FUN_?();
        if (lVar4 == 0) {
          FUN_?(pDVar10,pAVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pMVar8->fields).PurchaseProductResponseHandler >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
      }
      this_01 = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__19_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
        }
        object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__AvatarAccessoryPurchasePopup____c___ProductPurchaseResponseHandler_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__19_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__19_0 >>
                         0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar13,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      iVar14 = *(int *)&pOVar1[1].klass;
      if (iVar14 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStackX_10[0] = 0x69;
        pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
        if ((purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (purchaseResponseData,pOVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar1 == (Object *)0x0)) goto code_?;
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1,lRam_?);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        streamingAssetId = *(int32_t *)&pOVar1[1].klass;
        AccessoryDataManager::AccessoryDataManager_SetToOwns(streamingAssetId,(MethodInfo *)0x0);
        AvatarAccessoryPurchasePopup_SuccessfulPopupCallBack
                  (this,streamingAssetId,(MethodInfo *)0x0);
      }
      else {
        if (iVar14 == 1) {
          header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
          pSVar15 = StringLiteral_Get_gold;
        }
        else {
          if (iVar14 != 6) {
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,pOVar1,
                       MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass19_0___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar13,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
          header = TM::TM__(StringLiteral_Too_low_level,(MethodInfo *)0x0);
          pSVar15 = StringLiteral_Get_XP;
        }
        pSVar15 = TM::TM__(pSVar15,(MethodInfo *)0x0);
        AvatarAccessoryPurchasePopup_HandleInsufficientResources
                  (this,header,pSVar15,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Purchase
               (AvatarAccessoryPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c___Purchase_b__18_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
  }
  this_00 = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__18_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessoryPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c);
    }
    object = TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__AvatarAccessoryPurchasePopup____c___Purchase_b__18_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__18_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                      &TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9__18_0 >> 0xc)
      ;
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 != (MVGameControllerBase *)0x0) &&
     (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
    pAVar8 = (pMVar7->fields).PurchaseProductResponseHandler;
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    uVar3 = 0;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarAccessoryPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar10 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar9 == (Delegate *)0x0) {
      (pMVar7->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)FUN_?(pDVar9,
                                 TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
      if (pAVar8 ==
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        FUN_?(pDVar9,pAVar10);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
      pAVar10 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar2 = FUN_?(pDVar9,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (lVar2 == 0) {
        FUN_?(pDVar9,pAVar10);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
      uVar3 = (ulonglong)(uVar1 & 0x3f);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar12 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar12 | 1L << uVar3;
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 != (MVGameControllerBase *)0x0) &&
        (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
       (pAVar13 = (this->fields).accessoryDataClient, pAVar13 != (AccessoryDataClient *)0x0)) {
      pMVar14 = (pMVar7->fields).operationRequests;
      iVar15 = (pAVar13->fields)._.sAID;
      if (pMVar14 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_18[0]._0_1_ = 0x69;
        pOVar16 = (Object *)FUN_?(uRam_?,aiStackX_18);
        aiStackX_18[0] = iVar15;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar16,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uVar17 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          ,2,this_02,0);
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
          this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pOVar16 = (Object *)FUN_?(uRam_?,&stack0x00000010);
          if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar18 = CONCAT71((int7)((ulonglong)uVar17 >> 8),2);
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar19 = (undefined7)((ulonglong)method_00 >> 8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_03,0x5e,pOVar16,(InsertionBehavior__Enum)uVar18,method_00);
            uVar17 = CONCAT71(uVar19,0x5f);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_03,0x5f,(Object *)this_02,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar18 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pPVar20 = (pMVar14->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar20 != (PhotonPeer *)0x0) {
              (*(pPVar20->klass->vtable).SendOperation.methodPtr)
                        (pPVar20,CONCAT71((int7)((ulonglong)uVar17 >> 8),0x23),this_03,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar20->klass->vtable).SendOperation.method);
              return;
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SuccessfulPopupCallBack(Int32) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup::
     AvatarAccessoryPurchasePopup_SuccessfulPopupCallBack
               (AvatarAccessoryPurchasePopup *this,int32_t streamingAssetId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&
                  PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0___SuccessfulPopupCallBack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar6 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                       (streamingAssetId,(MethodInfo *)0x0);
    previewAccessories =
         (AccessoryDataClient__Array *)FUN_?(TypeInfo__AccessoryDataClient,1);
    if (previewAccessories != (AccessoryDataClient__Array *)0x0) {
      if ((pAVar6 != (AccessoryDataClient *)0x0) &&
         (lVar3 = FUN_?(pAVar6,(previewAccessories->klass->_0).element_class), lVar3 == 0))
      {
        uVar7 = FUN_?();
        FUN_?(uVar7,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(previewAccessories,0);
      original = (this->fields).successPreviewer;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar9 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           PurchasedAccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<PurchasedAccessoryPreviewer>_PurchasedAccessoryPreviewer_
                          );
      bVar1 = iRam_? != 0;
      object[1].klass = pOVar9;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (object[1].klass != (Object__Class *)0x0) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
                  ((PurchasedAccessoryPreviewer *)object[1].klass,previewAccessories,
                   (MethodInfo *)0x0);
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__AvatarAccessoryPurchasePopup____c__DisplayClass23_0___SuccessfulPopupCallBack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar11 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar11);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar10,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar3 = (longlong)(pLVar12->fields)._size;
          uVar2 = 0;
          if (0 < lVar3) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar12->fields)._size <= uVar2) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pTVar15 = (pLVar12->fields)._items;
              if (pTVar15 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar15->max_length <= uVar2) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar15->vector + lVar14 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar10,(BaseEventData *)0x0,this_01,
                                 (pMVar11->field7_0x38).rgctx_data[1].method);
              if (bVar16 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar2 = uVar2 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar3);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

