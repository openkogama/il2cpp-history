
/* Void Cancel() */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_Cancel
               (TierPurchasePopup *this,MethodInfo *method)

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
                  MethodInfo__TierPurchasePopup____c___Cancel_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TierPurchasePopup____c);
  }
  this_01 = TypeInfo__TierPurchasePopup____c->static_fields->__9__7_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierPurchasePopup____c);
    }
    object = TypeInfo__TierPurchasePopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__TierPurchasePopup____c___Cancel_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierPurchasePopup____c->static_fields->__9__7_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__TierPurchasePopup____c->static_fields->__9__7_0 >> 0xc);
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


/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_HandleSuccessfulPurchase
               (TierPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Tier_GoldSpent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Tier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Tier_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
  EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
  uStack_2 = (this->fields).tierToPurchase;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Purchase_Tier_,pSVar3,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
  pUVar4 = (this->fields).OnPurchaseSuccessful;
  if (pUVar4 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar4->fields)._._.invoke_impl)
              ((pUVar4->fields)._._.method_code,(pUVar4->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(GamePassTier, Int32, UnityAction) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_Initialize
               (TierPurchasePopup *this,GamePassTier__Enum tierToPurchase,int32_t price,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).tierToPurchase = (uint8_t)tierToPurchase;
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnPurchaseSuccessful >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pTVar6 = (this->fields).tierText;
  aIStackX_18[0].m_value = price;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_7[0]._pointer._value = (void *)0x0;
  aRStack_7[0]._length = 0;
  aRStack_7[0]._12_4_ = 0;
  pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                     (tierToPurchase & 0xff,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar6 != (Text *)0x0) {
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,pSVar8,(pTVar6->klass->vtable).set_text.method);
    pTVar6 = (this->fields).priceText;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar6,pSVar8,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_ProductPurchaseResponseHandler
               (TierPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
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
                  MethodInfo__TierPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierPurchasePopup____c___ProductPurchaseResponseHandler_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierPurchasePopup____c___ProductPurchaseResponseHandler_b__8_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierPurchasePopup____c__DisplayClass8_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierPurchasePopup____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierPurchasePopup____c__DisplayClass8_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    *(int32_t *)&object[1].klass = returnCode;
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
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__TierPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
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
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
        pAVar10 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar3 = FUN_?();
        if (lVar3 == 0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
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
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierPurchasePopup____c);
      }
      pEVar13 = TypeInfo__TierPurchasePopup____c->static_fields->__9__8_0;
      if (pEVar13 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierPurchasePopup____c);
        }
        pTVar14 = TypeInfo__TierPurchasePopup____c->static_fields->__9;
        pEVar13 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,(Object *)pTVar14,
                   MethodInfo__TierPurchasePopup____c___ProductPurchaseResponseHandler_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierPurchasePopup____c->static_fields->__9__8_0 = pEVar13;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&TypeInfo__TierPurchasePopup____c->static_fields->__9__8_0 >>
                         0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierPurchasePopup____c);
      }
      pEVar13 = TypeInfo__TierPurchasePopup____c->static_fields->__9__8_1;
      if (pEVar13 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierPurchasePopup____c);
        }
        pTVar14 = TypeInfo__TierPurchasePopup____c->static_fields->__9;
        pEVar13 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,(Object *)pTVar14,
                   MethodInfo__TierPurchasePopup____c___ProductPurchaseResponseHandler_b__8_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierPurchasePopup____c->static_fields->__9__8_1 = pEVar13;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&TypeInfo__TierPurchasePopup____c->static_fields->__9__8_1 >>
                         0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(int *)&object[1].klass == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MV__Common__GamePassTier);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__StatHatWrapper);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Purchase_Tier_GoldSpent);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Purchase_Tier);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Purchase_Tier_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
        EStack_15.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
        uStack_16 = (this->fields).tierToPurchase;
        EStack_15.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_15,(MethodInfo *)0x0);
        pSVar17 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Purchase_Tier_,pSVar17,(MethodInfo *)0x0);
        StatHatWrapper::StatHatWrapper_Count(pSVar17,1,(MethodInfo *)0x0);
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
        pUVar18 = (this->fields).OnPurchaseSuccessful;
        if (pUVar18 == (UnityAction *)0x0) goto code_?;
        (*(pUVar18->fields)._._.invoke_impl)
                  ((pUVar18->fields)._._.method_code,(pUVar18->fields)._._.method);
      }
      else {
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__TierPurchasePopup____c__DisplayClass8_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar12,(BaseEventData *)0x0,this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::TierPurchasePopup::TierPurchasePopup_Purchase
               (TierPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
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
                  MethodInfo__TierPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierPurchasePopup____c___Purchase_b__6_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TierPurchasePopup____c);
  }
  this_00 = TypeInfo__TierPurchasePopup____c->static_fields->__9__6_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__TierPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierPurchasePopup____c);
    }
    object = TypeInfo__TierPurchasePopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__TierPurchasePopup____c___Purchase_b__6_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierPurchasePopup____c->static_fields->__9__6_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__TierPurchasePopup____c->static_fields->__9__6_0 >> 0xc);
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
               MethodInfo__TierPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
       (pMVar13 = (pMVar7->fields).operationRequests,
       pMVar13 != (MVNetworkGame_OperationRequests *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      ,(this->fields).tierToPurchase,0);
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
      pOVar14 = (Object *)FUN_?(uRam_?,&stack0x00000010);
      value = (Object *)FUN_?(uRam_?,&stack0x00000010);
      if (this_02 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar14,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar3 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar15 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,10,this_02,0);
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
      pOVar14 = (Object *)FUN_?(uRam_?,&stack0x00000010);
      if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar16 = CONCAT71((int7)((ulonglong)uVar15 >> 8),2);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar17 = (undefined7)((ulonglong)method_00 >> 8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_03,0x5e,pOVar14,(InsertionBehavior__Enum)uVar16,method_00);
        uVar15 = CONCAT71(uVar17,0x5f);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_03,0x5f,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar16 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar18 = (pMVar13->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar18 != (PhotonPeer *)0x0) {
          (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                    (pPVar18,CONCAT71((int7)((ulonglong)uVar15 >> 8),0x23),this_03,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar18->klass->vtable).SendOperation.method);
          return;
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

