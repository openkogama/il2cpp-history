
/* Void Exit() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Exit
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).resultCallback;
  if (pUVar2 != (UnityAction_1_System_Boolean_ *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    uStack_3 = 0;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    pAVar3 = (pAVar1->fields)._.timelimit;
    ppAVar4 = &(pAVar2->fields).accessoryTimeLimitData;
    *ppAVar4 = pAVar3;
    func_?(ppAVar4,pAVar3);
    pAVar2 = (this->fields).timeLimitDisplayer;
    if (pAVar2 != (AccessoryTimeLimitDisplayer *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar2,(MethodInfo *)0x0);
      pAVar1 = (this->fields).bundleDataClient;
      if ((pAVar1 != (AccessoryBundleClient *)0x0) &&
         (pAVar3 = (pAVar1->fields)._.timelimit, pAVar3 != (AccessoryTimelimit *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                AccessoryTimelimit_get_IsTimeLimited(pAVar3,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePrices(AccessoryBundleClient) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_HandlePrices
               (BundlePurchasePopUp *this,AccessoryBundleClient *bundleDataClient,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_FREE);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (bundleDataClient != (AccessoryBundleClient *)0x0) {
    IVar1.m_value = (bundleDataClient->fields)._.discount;
    this_00 = &(this->fields).originalPrice;
    pTVar2 = (this->fields).originalPriceText;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0 < IVar1.m_value,(MethodInfo *)0x0);
      pGVar3 = (this->fields).discountTag;
      if (pGVar3 != (GameObject *)0x0) {
        str1.m_value = 0;
        IVar4.m_value._1_3_ = 0;
        IVar4.m_value._0_1_ = 0 < IVar1.m_value;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0 < IVar1.m_value,(MethodInfo *)0x0);
        if (0 < str1.m_value) {
          pTVar2 = (this->fields).discountTagText;
          pSVar5 = StringLiteral_FREE;
          if (str1.m_value < 100) {
            str1.m_value = (int32_t)mscorlib.dll::System::Int32::Int32_ToString
                                              ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            pSVar5 = mscorlib.dll::System::String::String_Concat_4
                               (::StringLiteral__,(String *)str1.m_value,::StringLiteral__,
                                (MethodInfo *)0x0);
          }
          if (pTVar2 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar2->klass->vtable).set_text.method)
                    (pTVar2,pSVar5,
                     (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          iVar6 = *this_00;
          fVar7 = (float)str1.m_value / _UNK_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar8 = (float10)func_?((double)((float)iVar6 * fVar7));
          pTVar2 = (this->fields).originalPriceText;
          IVar4.m_value = *this_00 - (int)fVar8;
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)this_00,StringLiteral_N0,(MethodInfo *)0x0);
          if ((pSVar5 == (String *)0x0) ||
             (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar5,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar2 == (Text *)0x0)) goto code_?;
          (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pSVar5);
        }
        pGVar3 = (this->fields).freeLabel;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,IVar4.m_value == 0,(MethodInfo *)0x0);
          if (IVar4.m_value == 0) {
            pTVar2 = (this->fields).originalPriceText;
            if ((pTVar2 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pGVar3 = (this->fields).discountTag;
            if (pGVar3 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pTVar2 = (this->fields).priceText;
            if ((pTVar2 == (Text *)0x0) ||
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
               pGVar3 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
          }
          pTVar2 = (this->fields).priceText;
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)&stack0xfffffff4,StringLiteral_N0,(MethodInfo *)0x0);
          if ((pSVar5 != (String *)0x0) &&
             (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar5,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar2 != (Text *)0x0)) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)
                      (pTVar2,pSVar5,
                       (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize(AccessoryBundleClient, Int32, Int32, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Initialize
               (BundlePurchasePopUp *this,AccessoryBundleClient *bundleDataClient,int32_t price,
               int32_t originalPrice,UnityAction_1_System_Boolean_ *resultCallback,
               MethodInfo *method)

{
  ppAVar1 = &(this->fields).bundleDataClient;
  *ppAVar1 = bundleDataClient;
  func_?(ppAVar1,bundleDataClient);
  ppUVar2 = &(this->fields).resultCallback;
  (this->fields).originalPrice = originalPrice;
  *ppUVar2 = resultCallback;
  func_?(ppUVar2,resultCallback);
  pTVar3 = (this->fields).priceText;
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&price,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    BundlePurchasePopUp_HandlePrices(this,*ppAVar1,(MethodInfo *)0x0);
    if ((*ppAVar1 != (AccessoryBundleClient *)0x0) &&
       (pAVar5 = (this->fields).timeLimitDisplayer, pAVar5 != (AccessoryTimeLimitDisplayer *)0x0)) {
      pAVar6 = ((*ppAVar1)->fields)._.timelimit;
      ppAVar7 = &(pAVar5->fields).accessoryTimeLimitData;
      *ppAVar7 = pAVar6;
      func_?(ppAVar7,pAVar6);
      pAVar5 = (this->fields).timeLimitDisplayer;
      if (pAVar5 != (AccessoryTimeLimitDisplayer *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar5,(MethodInfo *)0x0);
        if ((*ppAVar1 != (AccessoryBundleClient *)0x0) &&
           (pAVar6 = ((*ppAVar1)->fields)._.timelimit, pAVar6 != (AccessoryTimelimit *)0x0)) {
          value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                  AccessoryTimelimit_get_IsTimeLimited(pAVar6,(MethodInfo *)0x0);
          if (this_00 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,value,(MethodInfo *)0x0);
            return;
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


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_OnGoldPurchaseDialogResult
               (BundlePurchasePopUp *this,bool result,MethodInfo *method)

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
                    MethodInfo__BundlePurchasePopUp____c___OnGoldPurchaseDialogResult_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundlePurchasePopUp____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__BundlePurchasePopUp____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BundlePurchasePopUp____c);
  }
  callbackFunction = TypeInfo__BundlePurchasePopUp____c->static_fields->__9__12_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__BundlePurchasePopUp____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BundlePurchasePopUp____c);
    }
    object = TypeInfo__BundlePurchasePopUp____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__BundlePurchasePopUp____c___OnGoldPurchaseDialogResult_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundlePurchasePopUp____c->static_fields->__9__12_0 = callbackFunction;
    func_?(&TypeInfo__BundlePurchasePopUp____c->static_fields->__9__12_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (result == 0) {
    return;
  }
  if (cRam_? == '\0') {
    ppMStack1 = (MVGameControllerBase__Class **)&TypeInfo__BrowserComm;
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    ppMStack1 = &TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    url = (pGVar2->fields).purchaseGoldURL;
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Pop
               (BundlePurchasePopUp *this,MethodInfo *method)

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
                    MethodInfo__BundlePurchasePopUp____c___Pop_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundlePurchasePopUp____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__BundlePurchasePopUp____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BundlePurchasePopUp____c);
  }
  callbackFunction = TypeInfo__BundlePurchasePopUp____c->static_fields->__9__13_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__BundlePurchasePopUp____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BundlePurchasePopUp____c);
    }
    object = TypeInfo__BundlePurchasePopUp____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__BundlePurchasePopUp____c___Pop_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BundlePurchasePopUp____c->static_fields->__9__13_0 = callbackFunction;
    func_?(&TypeInfo__BundlePurchasePopUp____c->static_fields->__9__13_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::BundlePurchasePopUp::BundlePurchasePopUp_Purchase
               (BundlePurchasePopUp *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).resultCallback;
  if (pUVar2 != (UnityAction_1_System_Boolean_ *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    uStack_3 = 1;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

