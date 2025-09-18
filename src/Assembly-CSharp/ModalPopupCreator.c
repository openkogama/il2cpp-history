
/* NotificationPopup Create(String, String) */

NotificationPopup *
Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create
          (ModalPopupCreator *this,String *text,String *header,MethodInfo *method)

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
                    NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    this_00[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
    func_?(this_00 + 1,this);
    pNVar1 = (this->fields).notificationPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pLVar2 = (List_1_System_Object_ *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pNVar1,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pNVar1 = (NotificationPopup *)(this_00->fields)._._defaultValue_k__BackingField;
    if (pNVar1 != (NotificationPopup *)0x0) {
      NotificationPopup::NotificationPopup_Initialize(pNVar1,text,header,(MethodInfo *)0x0);
      return (NotificationPopup *)(this_00->fields)._._defaultValue_k__BackingField;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pNVar1 = (NotificationPopup *)(*pcVar3)();
  return pNVar1;
}


/* Void CreateErrorNotificationPopup(String, String) */

void Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_CreateErrorNotificationPopup
               (ModalPopupCreator *this,String *error,String *header,MethodInfo *method)

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
                    NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    this_00[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
    func_?(this_00 + 1,this);
    original = (this->fields).notificationPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pLVar1 = (List_1_System_Object_ *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    (this_00->fields)._._defaultValue_k__BackingField = pLVar1;
    pUVar2 = &this_00->fields;
    func_?(pUVar2,pLVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pLVar1 = (this_00->fields)._._defaultValue_k__BackingField;
    if (pLVar1 != (List_1_System_Object_ *)0x0) {
      piVar3 = *(int **)(unaff_retaddr + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x318))
                  (piVar3,pLVar1,*(undefined4 *)(*piVar3 + 0x31c),pUVar2,unaff_EBX);
        piVar3 = *(int **)(unaff_retaddr + 0x14);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x318))(piVar3,error,*(undefined4 *)(*piVar3 + 0x31c));
          return;
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ConfirmationPopup Create(String, UnityAction`2[System.Boolean,ConfirmationPopup], String) */

ConfirmationPopup *
Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create_1
          (ModalPopupCreator *this,String *text,
          UnityAction_2_System_Boolean_ConfirmationPopup_ *resultCallback,String *header,
          MethodInfo *method)

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
                    ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ModalPopupCreator____c__DisplayClass5_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass5_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__ModalPopupCreator____c__DisplayClass5_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    this_00[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
    func_?(this_00 + 1,this);
    pCVar1 = (this->fields).confirmationPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pLVar2 = (List_1_System_Object_ *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pCVar1,
                        ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                       );
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__ModalPopupCreator____c__DisplayClass5_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pCVar1 = (ConfirmationPopup *)(this_00->fields)._._defaultValue_k__BackingField;
    if (pCVar1 != (ConfirmationPopup *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Initialize
                (pCVar1,text,resultCallback,header,(MethodInfo *)0x0);
      return (ConfirmationPopup *)(this_00->fields)._._defaultValue_k__BackingField;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pCVar1 = (ConfirmationPopup *)(*pcVar3)();
  return pCVar1;
}


/* PleaseWaitPopup Create() */

PleaseWaitPopup *
Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create_2
          (ModalPopupCreator *this,MethodInfo *method)

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
                    PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ModalPopupCreator____c__DisplayClass6_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__ModalPopupCreator____c__DisplayClass6_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  pPVar1 = (this->fields).waitPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pPVar1,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__ModalPopupCreator____c__DisplayClass6_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return (PleaseWaitPopup *)(this_00->fields)._._defaultValue_k__BackingField;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar1 = (PleaseWaitPopup *)(*pcVar3)();
  return pPVar1;
}


/* Void Create(MVPurchaseReturnCode, Int32) */

void Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create_3
               (ModalPopupCreator *this,MVPurchaseReturnCode__Enum returnCode,int32_t priceGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MV__Common__MVPurchaseReturnCode);
    func_?(&
                    MethodInfo__ModalPopupCreator__OnGoldPurchaseDialogResult_bool__ConfirmationPopup_
                   );
    func_?(&
                    ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ModalPopupCreator____c__DisplayClass7_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass7_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Get_more_gold_now_);
    func_?(&StringLiteral_Not_enough_gold);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__ModalPopupCreator____c__DisplayClass7_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
  if (pUVar1 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (pUVar1->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)this;
    func_?(&pUVar1->fields,this);
    if (returnCode == MVPurchaseReturnCode__Enum_InsufficientFunds) {
      original = (this->fields).confirmationPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pUVar2 = (UxmlObjectListAttributeDescription_1_System_Object___Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                         );
      pUVar1[1].klass = pUVar2;
      func_?(pUVar1 + 1,pUVar2);
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pUVar1,
                 MethodInfo__ModalPopupCreator____c__DisplayClass7_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pUVar2 = pUVar1[1].klass;
      pSVar5 = TM::TM__(StringLiteral_Get_more_gold_now_,(MethodInfo *)0x0);
      this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__ModalPopupCreator__OnGoldPurchaseDialogResult_bool__ConfirmationPopup_,
                 (MethodInfo *)0x0);
      pSVar6 = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
      if (pUVar2 != (UxmlObjectListAttributeDescription_1_System_Object___Class *)0x0) {
        ConfirmationPopup::ConfirmationPopup_Initialize
                  ((ConfirmationPopup *)pUVar2,pSVar5,
                   (UnityAction_2_System_Boolean_ConfirmationPopup_ *)this_00,pSVar6,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      EStack_7.klass = (Enum__Class *)TypeInfo__MV__Common__MVPurchaseReturnCode;
      EStack_7.monitor = (MonitorData *)0xffffffff;
      puStack_8 = (undefined *)returnCode;
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
      pSVar5 = StringLiteral_Error;
      if (cRam_? == '\0') {
        EStack_7.klass =
             (Enum__Class *)
             &
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
        ;
        func_?();
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
        cRam_? = '\x01';
      }
      EStack_7.klass = (Enum__Class *)TypeInfo__ModalPopupCreator____c__DisplayClass4_0;
      pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
      if (pUVar1 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
        pUVar1[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
        func_?(pUVar1 + 1,this);
        pNVar9 = (this->fields).notificationPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pLVar10 = (List_1_System_Object_ *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pNVar9,
                            NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                           );
        (pUVar1->fields)._._defaultValue_k__BackingField = pLVar10;
        func_?(&pUVar1->fields,pLVar10);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pUVar1,
                   MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pNVar9 = (NotificationPopup *)(pUVar1->fields)._._defaultValue_k__BackingField;
        if (pNVar9 != (NotificationPopup *)0x0) {
          NotificationPopup::NotificationPopup_Initialize(pNVar9,pSVar6,pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_OnGoldPurchaseDialogResult
               (bool result,ConfirmationPopup *confirmationPopup,MethodInfo *method)

{
  if (confirmationPopup == (ConfirmationPopup *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ConfirmationPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)confirmationPopup,(MethodInfo *)0x0);
  if ((TypeInfo__ConfirmationPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ConfirmationPopup____c);
  }
  callbackFunction = TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ConfirmationPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ConfirmationPopup____c);
    }
    object = TypeInfo__ConfirmationPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0 = callbackFunction;
    func_?(&TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (result != 0) {
    if (cRam_? == '\0') {
      ppMStack2 = (MVGameControllerBase__Class **)&TypeInfo__BrowserComm;
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      ppMStack2 = &TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      ppMStack2 = (MVGameControllerBase__Class **)method;
      url = (pGVar3->fields).purchaseGoldURL;
      if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

