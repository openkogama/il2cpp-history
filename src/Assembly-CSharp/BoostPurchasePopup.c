
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
  this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            (this->fields).boosterList;
  do {
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->fields)._size <= index) {
      return;
    }
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                      );
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (this->fields).boosterList;
    if (XVar2.qname == (XmlQualifiedName *)boostType) {
      if (this_00 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        XVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                          );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_01 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)XVar2.xso,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((this_01 != (GameObject *)0x0) &&
           (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_02,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
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
  ppSVar1 = &(this->fields).boostKey;
  *ppSVar1 = boostKey;
  func_?(ppSVar1,boostKey);
  ppUVar2 = &(this->fields).OnPurchaseSuccessful;
  (this->fields).price = price;
  *ppUVar2 = OnPurchaseSuccessful;
  func_?(ppUVar2,OnPurchaseSuccessful);
  pTVar3 = (this->fields).headerText;
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,boostName,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar3 = (this->fields).priceText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString_1
                       ((Int32 *)&price,StringLiteral_N0,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) &&
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
       pTVar3 != (Text *)0x0)) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
      pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               (this->fields).boosterList;
      index = 0;
      while (pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        if ((pLVar5->fields)._size <= index) {
          return;
        }
        pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this->fields).boosterList;
        if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
        break;
        XVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (pLVar5,index,
                           MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                          );
        pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this->fields).boosterList;
        if (XVar6.qname == (XmlQualifiedName *)boostType) {
          if (pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          {
            XVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                    List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                              (pLVar5,index,
                               MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                              );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            this_00 = (GameObject *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)XVar6.xso,
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  method_00 = TypeInfo__BoostPurchasePopup____c__DisplayClass9_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    value[1].klass = (Object__Class *)returnCode;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (pMVar1->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
code_?:
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostPurchasePopup____c);
      }
      pEVar4 = TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_0;
      if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BoostPurchasePopup____c);
        }
        pBVar5 = TypeInfo__BoostPurchasePopup____c->static_fields->__9;
        pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pBVar5,
                   MethodInfo__BoostPurchasePopup____c___ProductPurchaseResponseHandler_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_0 = pEVar4;
        func_?(&TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_0,pEVar4);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostPurchasePopup____c);
      }
      pEVar4 = TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_1;
      if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__BoostPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BoostPurchasePopup____c);
        }
        pBVar5 = TypeInfo__BoostPurchasePopup____c->static_fields->__9;
        pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pBVar5,
                   MethodInfo__BoostPurchasePopup____c___ProductPurchaseResponseHandler_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_1 = pEVar4;
        func_?(&TypeInfo__BoostPurchasePopup____c->static_fields->__9__9_1,pEVar4);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (value[1].klass != (Object__Class *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__BoostPurchasePopup____c__DisplayClass9_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      pUVar6 = (this->fields).OnPurchaseSuccessful;
      if (pUVar6 != (UnityAction *)0x0) {
        (*(pUVar6->fields)._._.invoke_impl)
                  ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
        return;
      }
      goto code_?;
    }
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    _UNK_? = iVar7;
    iVar7 = func_?();
    if (iVar7 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__BoostPurchasePopup____c___Purchase_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BoostPurchasePopup____c->static_fields->__9__8_0 = callbackFunction;
    func_?(&TypeInfo__BoostPurchasePopup____c->static_fields->__9__8_0,callbackFunction);
  }
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
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    ppAVar3 = &(pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)0x0,
               MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *ppAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0;
    }
    else {
      pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)func_?();
      if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
      *ppAVar3 = pAVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseGameBooster
                (this_01,pSRam00000020,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

