
/* Void Exit() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Exit
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_HandleNotOwnedUI
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  BundlePurchasePopUp_HandlePrices(this,(this->fields).bundleDataClient,(MethodInfo *)0x0);
  pAVar1 = (this->fields).bundleDataClient;
  if ((pAVar1 != (AccessoryBundleClient *)0x0) &&
     (pAVar2 = (this->fields).timeLimitDisplayer, pAVar2 != (AccessoryTimeLimitDisplayer *)0x0)) {
    bVar3 = iRam_? != 0;
    (pAVar2->fields).accessoryTimeLimitData = (pAVar1->fields)._.timelimit;
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
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pAVar2,(MethodInfo *)0x0);
      pAVar1 = (this->fields).bundleDataClient;
      if (((pAVar1 != (AccessoryBundleClient *)0x0) &&
          (pAVar8 = (pAVar1->fields)._.timelimit, pAVar8 != (AccessoryTimelimit *)0x0)) &&
         (obj != (GameObject *)0x0)) {
        bVar3 = (pAVar8->fields).timeLimit != 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar3,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pvVar10 = (obj->fields)._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar10,bVar3);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandlePrices(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_HandlePrices
               (BundlePurchasePopUp *this,AccessoryBundleClient *bundleDataClient,MethodInfo *method
               )

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
  if (bundleDataClient != (AccessoryBundleClient *)0x0) {
    pTVar1 = (this->fields).originalPriceText;
    iVar2 = (bundleDataClient->fields)._.discount;
    value = (this->fields).originalPrice;
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
        if (0 < iVar2) {
          pTVar1 = (this->fields).discountTagText;
          pSVar4 = StringLiteral_FREE;
          if (iVar2 < 100) {
            pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
            pSVar4 = mscorlib.dll::System::String::String_Concat_5
                               (::StringLiteral__,pSVar4,::StringLiteral__,(MethodInfo *)0x0);
          }
          if (pTVar1 == (Text *)0x0) goto code_?;
          (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar4);
          iVar2 = FUN_?(((float)iVar2 / _UNK_?) *
                                (float)(this->fields).originalPrice);
          pTVar1 = (this->fields).originalPriceText;
          value = (this->fields).originalPrice - iVar2;
          pSVar4 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)&(this->fields).originalPrice,StringLiteral_N0,
                              (MethodInfo *)0x0);
          if ((pSVar4 == (String *)0x0) ||
             (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar1 == (Text *)0x0)) goto code_?;
          (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar4);
        }
        pGVar3 = (this->fields).freeLabel;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,value == 0,(MethodInfo *)0x0);
          if (value == 0) {
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
          pSVar4 = StringLiteral_N0;
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
          if (pSVar4 == (String *)0x0) {
            puVar5 = (uint16_t *)0x0;
            iVar6 = 0;
          }
          else {
            aRStack_7[0]._pointer._value = &(pSVar4->fields)._firstChar;
            aRStack_7[0]._12_4_ = 0;
            iVar6 = (pSVar4->fields)._stringLength;
            aRStack_7[0]._length = iVar6;
            puVar5 = aRStack_7[0]._pointer._value;
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_7[0]._12_4_ = 0;
          aRStack_7[0]._pointer._value = puVar5;
          aRStack_7[0]._length = iVar6;
          pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if ((pSVar4 != (String *)0x0) &&
             (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar1 != (Text *)0x0)) {
            UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pTVar1,pSVar4,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(AccessoryBundleClient, Int32, Int32, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Initialize
               (BundlePurchasePopUp *this,AccessoryBundleClient *bundleDataClient,int32_t price,
               int32_t originalPrice,UnityAction_1_System_Boolean_ *resultCallback,
               MethodInfo *method)

{
  (this->fields).bundleDataClient = bundleDataClient;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).bundleDataClient >> 0xc);
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
  iVar6 = iRam_?;
  (this->fields).resultCallback = resultCallback;
  (this->fields).originalPrice = originalPrice;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
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
  pTVar7 = (this->fields).priceText;
  aIStackX_18[0].m_value = price;
  pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
  if (pTVar7 != (Text *)0x0) {
    (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar8);
    BundlePurchasePopUp_HandlePrices(this,(this->fields).bundleDataClient,(MethodInfo *)0x0);
    pAVar9 = (this->fields).bundleDataClient;
    if ((pAVar9 != (AccessoryBundleClient *)0x0) &&
       (pAVar10 = (this->fields).timeLimitDisplayer, pAVar10 != (AccessoryTimeLimitDisplayer *)0x0)) {
      bVar5 = iRam_? != 0;
      (pAVar10->fields).accessoryTimeLimitData = (pAVar9->fields)._.timelimit;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(pAVar10->fields).accessoryTimeLimitData >> 0xc);
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
      pAVar10 = (this->fields).timeLimitDisplayer;
      if (pAVar10 != (AccessoryTimeLimitDisplayer *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pAVar10,(MethodInfo *)0x0);
        pAVar9 = (this->fields).bundleDataClient;
        if (((pAVar9 != (AccessoryBundleClient *)0x0) &&
            (pAVar11 = (pAVar9->fields)._.timelimit, pAVar11 != (AccessoryTimelimit *)0x0)) &&
           (obj != (GameObject *)0x0)) {
          bVar5 = (pAVar11->fields).timeLimit != 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,bVar5,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pvVar13 = (obj->fields)._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar13,bVar5);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_OnGoldPurchaseDialogResult
               (BundlePurchasePopUp *this,bool result,MethodInfo *method)

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
                  MethodInfo__BundlePurchasePopUp____c___OnGoldPurchaseDialogResult_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundlePurchasePopUp____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BundlePurchasePopUp____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BundlePurchasePopUp____c);
  }
  this_00 = TypeInfo__BundlePurchasePopUp____c->static_fields->__9__12_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__BundlePurchasePopUp____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BundlePurchasePopUp____c);
    }
    object = TypeInfo__BundlePurchasePopUp____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__BundlePurchasePopUp____c___OnGoldPurchaseDialogResult_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundlePurchasePopUp____c->static_fields->__9__12_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__BundlePurchasePopUp____c->static_fields->__9__12_0 >> 0xc
                    );
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


/* Void Pop() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Pop
               (BundlePurchasePopUp *this,MethodInfo *method)

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
                  MethodInfo__BundlePurchasePopUp____c___Pop_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BundlePurchasePopUp____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BundlePurchasePopUp____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BundlePurchasePopUp____c);
  }
  this_01 = TypeInfo__BundlePurchasePopUp____c->static_fields->__9__13_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__BundlePurchasePopUp____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BundlePurchasePopUp____c);
    }
    object = TypeInfo__BundlePurchasePopUp____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__BundlePurchasePopUp____c___Pop_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundlePurchasePopUp____c->static_fields->__9__13_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__BundlePurchasePopUp____c->static_fields->__9__13_0 >>
                     0xc);
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


/* Void Purchase() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Purchase
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?(0,(char)method);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

