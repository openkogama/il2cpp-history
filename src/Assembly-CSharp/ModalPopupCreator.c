
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
  method_00 = TypeInfo__ModalPopupCreator____c__DisplayClass4_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pNVar1 = (this->fields).notificationPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pNVar1,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar2 = value[1].klass;
    if ((pOVar2 != (Object__Class *)0x0) &&
       (pIVar3 = (pOVar2->_0).byval_arg.data.array, pIVar3 != (Il2CppArrayType *)0x0)) {
      pIVar4 = pIVar3->etype;
      uVar5._0_2_ = pIVar4[99].attrs;
      uVar5._2_1_ = pIVar4[99].type;
      uVar5._3_1_ = pIVar4[99].field_0x7;
      (*(code *)pIVar4[99].data)(pIVar3,text,uVar5);
      piVar6 = *(int **)&(pOVar2->_0).byval_arg.attrs;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x318))(piVar6,header,*(undefined4 *)(*piVar6 + 0x31c));
        return (NotificationPopup *)value[1].klass;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar1 = (NotificationPopup *)(*pcVar7)();
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
  method_00 = TypeInfo__ModalPopupCreator____c__DisplayClass4_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    original = (this->fields).notificationPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = value[1].klass;
    if ((pOVar1 != (Object__Class *)0x0) &&
       (pIVar2 = (pOVar1->_0).byval_arg.data.array, pIVar2 != (Il2CppArrayType *)0x0)) {
      pIVar3 = pIVar2->etype;
      uVar4._0_2_ = pIVar3[99].attrs;
      uVar4._2_1_ = pIVar3[99].type;
      uVar4._3_1_ = pIVar3[99].field_0x7;
      (*(code *)pIVar3[99].data)(pIVar2,error,uVar4);
      piVar5 = *(int **)&(pOVar1->_0).byval_arg.attrs;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x318))(piVar5,header,*(undefined4 *)(*piVar5 + 0x31c));
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  method_00 = TypeInfo__ModalPopupCreator____c__DisplayClass5_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pCVar1 = (this->fields).confirmationPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pCVar1,
                        ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                       );
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ModalPopupCreator____c__DisplayClass5_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Initialize
                ((ConfirmationPopup *)value[1].klass,text,resultCallback,header,(MethodInfo *)0x0);
      return (ConfirmationPopup *)value[1].klass;
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
  method_00 = TypeInfo__ModalPopupCreator____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pPVar1 = (this->fields).waitPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pPVar1,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ModalPopupCreator____c__DisplayClass6_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return (PleaseWaitPopup *)value[1].klass;
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
  method_00 = TypeInfo__ModalPopupCreator____c__DisplayClass7_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)this;
    func_?(pOVar1 + 1,this);
    if (returnCode == MVPurchaseReturnCode__Enum_InsufficientFunds) {
      pCVar2 = (this->fields).confirmationPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar2,
                           ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                          );
      pOVar1[1].monitor = (MonitorData *)pOVar3;
      func_?(&pOVar1[1].monitor,pOVar3);
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar1,
                 MethodInfo__ModalPopupCreator____c__DisplayClass7_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pCVar2 = (ConfirmationPopup *)pOVar1[1].monitor;
      pSVar6 = TM::TM__(StringLiteral_Get_more_gold_now_,(MethodInfo *)0x0);
      this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__ModalPopupCreator__OnGoldPurchaseDialogResult_bool__ConfirmationPopup_,
                 (MethodInfo *)0x0);
      pSVar7 = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
      if (pCVar2 != (ConfirmationPopup *)0x0) {
        ConfirmationPopup::ConfirmationPopup_Initialize
                  (pCVar2,pSVar6,(UnityAction_2_System_Boolean_ConfirmationPopup_ *)this_00,pSVar7,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      EStack_8.klass = (Enum__Class *)TypeInfo__MV__Common__MVPurchaseReturnCode;
      EStack_8.monitor = (MonitorData *)0xffffffff;
      puStack_9 = (undefined *)returnCode;
      method_01 = (Object_1__Class **)&UNK_?;
      pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_Error;
      if (cRam_? == '\0') {
        EStack_8.klass =
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
        method_01 = &TypeInfo__UnityEngine__Object;
        func_?();
        func_?(&
                        MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
        cRam_? = '\x01';
      }
      EStack_8.klass = (Enum__Class *)TypeInfo__ModalPopupCreator____c__DisplayClass4_0;
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (pOVar1 != (Object *)0x0) {
        pOVar1[1].monitor = (MonitorData *)this;
        func_?(&pOVar1[1].monitor,this);
        original = (this->fields).notificationPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar10 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                           );
        pOVar1[1].klass = pOVar10;
        func_?(pOVar1 + 1,pOVar10);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar1,
                   MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,pEVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar10 = pOVar1[1].klass;
        if ((pOVar10 != (Object__Class *)0x0) &&
           (pIVar11 = (pOVar10->_0).byval_arg.data.array, pIVar11 != (Il2CppArrayType *)0x0)) {
          pIVar12 = pIVar11->etype;
          uVar13._0_2_ = pIVar12[99].attrs;
          uVar13._2_1_ = pIVar12[99].type;
          uVar13._3_1_ = pIVar12[99].field_0x7;
          (*(code *)pIVar12[99].data)(pIVar11,pSVar7,uVar13);
          piVar14 = *(int **)&(pOVar10->_0).byval_arg.attrs;
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 0x318))(piVar14,pSVar6,*(undefined4 *)(*piVar14 + 0x31c));
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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

