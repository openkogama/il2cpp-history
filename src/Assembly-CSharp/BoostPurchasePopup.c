
/* Void CreateBoostImage(BoostType) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_CreateBoostImage
               (BoostPurchasePopup *this,BoostType__Enum boostType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
  do {
    if (pLVar1 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    pLVar1 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
    if (pLVar1 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::
            List`1[TabMenuButtonAccessory+AccessoryTabDef]::
            List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                      );
    pLVar1 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
    if (TVar3.tabID == boostType) {
      if (pLVar1 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        TVar3 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                          );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_00 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)TVar3.streamedImagePrefab,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((this_00 != (GameObject *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_HandleSuccessfulPurchase
               (BoostPurchasePopup *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).OnPurchaseSuccessful;
  if (pUVar2 != (UnityAction *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    pvStack_3 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(BoostType, String, String, Int32, UnityAction) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_Initialize
               (BoostPurchasePopup *this,BoostType__Enum boostType,String *boostKey,
               String *boostName,int32_t price,UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).boostKey = boostKey;
  func_?(&(this->fields).boostKey,boostKey);
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  func_?(&(this->fields).OnPurchaseSuccessful,OnPurchaseSuccessful);
  pTVar1 = (this->fields).headerText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,boostName,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).priceText;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_1
                       ((Int32 *)&price,StringLiteral_N0,(MethodInfo *)0x0);
    if ((pSVar2 != (String *)0x0) &&
       (pSVar2 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar2,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
       pTVar1 != (Text *)0x0)) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      pLVar3 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
      index = 0;
      while (pLVar3 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        if ((pLVar3->fields)._size <= index) {
          return;
        }
        pLVar3 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
        if (pLVar3 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) break;
        TVar4 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                          );
        pLVar3 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
        if (TVar4.tabID == boostType) {
          if (pLVar3 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
            TVar4 = mscorlib.dll::System::Collections::Generic::
                    List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                    List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                              );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            this_00 = (GameObject *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)TVar4.streamedImagePrefab,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                );
            if ((this_00 != (GameObject *)0x0) &&
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(this_00,(MethodInfo *)0x0),
               this_01 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_ProductPurchaseResponseHandler
               (BoostPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
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
    func_?(&
                    MethodInfo__BoostPurchasePopup____c___ProductPurchaseResponseHandler_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__BoostPurchasePopup____c___ProductPurchaseResponseHandler_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__BoostPurchasePopup____c__DisplayClass9_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostPurchasePopup____c__DisplayClass9_0);
    func_?(&TypeInfo__BoostPurchasePopup____c);
    cRam_? = '\x01';
  }
  pEVar1 = unaff_EDI;
  value = (Object *)func_?(TypeInfo__BoostPurchasePopup____c__DisplayClass9_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)pEVar1);
    value[1].klass = (Object__Class *)returnCode;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      source = (pMVar2->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      unaff_EDI = (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0;
      if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        unaff_EDI = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        if (unaff_EDI == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          (pMVar2->fields).PurchaseProductResponseHandler =
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
        }
        else {
          iVar3 = func_?(unaff_EDI);
          if (iVar3 == 0) goto code_?;
          _UNK_? = iVar3;
          iVar3 = func_?(unaff_EDI);
          if (iVar3 == 0) goto code_?;
          pMVar2 = (MVNetworkGame *)&UNK_?;
        }
        func_?(&(pMVar2->fields).PurchaseProductResponseHandler);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BoostPurchasePopup____c);
        }
        pEVar1 = TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_0;
        if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__BoostPurchasePopup____c);
          }
          pBVar5 = TypeInfo__BoostPurchasePopup____c->static_fields->__9;
          pEVar1 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
          unaff_EDI = (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0;
          if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)pBVar5,
                     MethodInfo__BoostPurchasePopup____c___ProductPurchaseResponseHandler_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_0 = pEVar1;
          func_?(&TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_0,pEVar1);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BoostPurchasePopup____c);
        }
        unaff_EDI = TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_1;
        if (unaff_EDI == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__BoostPurchasePopup____c);
          }
          pBVar5 = TypeInfo__BoostPurchasePopup____c->static_fields->__9;
          unaff_EDI = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          if (unaff_EDI == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pBVar5,
                     MethodInfo__BoostPurchasePopup____c___ProductPurchaseResponseHandler_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_1 = unaff_EDI;
          func_?(&TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_1,unaff_EDI);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)unaff_EDI,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (value[1].klass == (Object__Class *)0x0) {
          pUVar6 = (this->fields).OnPurchaseSuccessful;
          if (pUVar6 != (UnityAction *)0x0) {
            (*(pUVar6->fields)._._.invoke_impl)
                      ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
            return;
          }
        }
        else {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          unaff_EDI = (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0;
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__BoostPurchasePopup____c__DisplayClass9_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_Purchase
               (BoostPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__BoostPurchasePopup____c___Purchase_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostPurchasePopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BoostPurchasePopup____c);
  }
  callbackFunction = TypeInfo__BoostPurchasePopup____c->static_fields->__9__8_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BoostPurchasePopup____c);
    }
    object = TypeInfo__BoostPurchasePopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BoostPurchasePopup____c___Purchase_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostPurchasePopup____c->static_fields->__9__8_0 = callbackFunction;
      func_?();
      goto code_?;
    }
  }
  else {
code_?:
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_00 = (Action_2_Int32Enum_Object_ *)func_?();
      if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
        a = this_00;
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar2 == (Delegate *)0x0) {
          (pMVar1->fields).PurchaseProductResponseHandler =
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
        }
        else {
          pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)func_?();
          if (pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)0x0) goto code_?;
          (pMVar1->fields).PurchaseProductResponseHandler = pAVar3;
          iVar4 = func_?();
          if (iVar4 == 0) goto code_?;
        }
        func_?();
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseGameBooster
                    (this_01,pSRam0000001c,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

