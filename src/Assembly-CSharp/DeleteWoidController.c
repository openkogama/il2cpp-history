
/* Void DeleteWorldObject(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController_DeleteWorldObject
               (DeleteWoidController *this,bool success,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DeleteWoidController___DeleteWorldObject_b__4_1_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeleteWoidController____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__DeleteWoidController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DeleteWoidController____c);
  }
  pEVar3 = TypeInfo__DeleteWoidController____c->static_fields->__9__4_0;
  if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__DeleteWoidController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DeleteWoidController____c);
      pGVar1 = pGVar2;
    }
    pDVar4 = TypeInfo__DeleteWoidController____c->static_fields->__9;
    pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pDVar4,
               MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeleteWoidController____c->static_fields->__9__4_0 = pEVar3;
    func_?(&TypeInfo__DeleteWoidController____c->static_fields->__9__4_0,pEVar3);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (success == 0) {
    if ((TypeInfo__DeleteWoidController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pEVar3 = TypeInfo__DeleteWoidController____c->static_fields->__9__4_3;
    if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__DeleteWoidController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar4 = TypeInfo__DeleteWoidController____c->static_fields->__9;
      pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pDVar4,
                 MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__DeleteWoidController____c->static_fields->__9__4_3 = pEVar3;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__DeleteWoidController___DeleteWorldObject_b__4_1_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__DeleteWoidController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction_00 = TypeInfo__DeleteWoidController____c->static_fields->__9__4_2;
  if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__DeleteWoidController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar4 = TypeInfo__DeleteWoidController____c->static_fields->__9;
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pDVar4,
               MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeleteWoidController____c->static_fields->__9__4_2 = callbackFunction_00;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController_Initialize
               (DeleteWoidController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DeleteWoidController__OnPick_MVWorldObjectClient__MVWorldObjectClient_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__DeleteWoidController____c__DisplayClass2_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeleteWoidController____c__DisplayClass2_0);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                   );
    func_?(&StringLiteral_Select_object_to_delete);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeleteWoidController____c__DisplayClass2_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).pickHelperPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
                     );
  if (value != (Object *)0x0) {
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
               MethodInfo__DeleteWoidController____c__DisplayClass2_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = value[1].klass;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__DeleteWoidController__OnPick_MVWorldObjectClient__MVWorldObjectClient_,
               (MethodInfo *)0x0);
    if ((pOVar1 != (Object__Class *)0x0) &&
       (piVar2 = *(int **)&(pOVar1->_0).byval_arg.attrs, piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x318))
                (piVar2,StringLiteral_Select_object_to_delete,*(undefined4 *)(*piVar2 + 0x31c));
      (pOVar1->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_00;
      func_?(&(pOVar1->_0).byval_arg,this_00);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPick(MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController_OnPick
               (DeleteWoidController *this,MVWorldObjectClient *wo,MVWorldObjectClient *woParent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DeleteWoidController___OnPick_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DeleteWoidController___OnPick_b__3_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    iVar1 = (wo->fields)._.id;
    (this->fields).woid = iVar1;
    if (iVar1 < 1) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      method_1 = 
      MethodInfo__DeleteWoidController___OnPick_b__3_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
      ;
    }
    else {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      method_1 = 
      MethodInfo__DeleteWoidController___OnPick_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
      ;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               method_1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <DeleteWorldObject>b__4_1(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController__DeleteWorldObject_b__4_1
               (DeleteWoidController *this,IEditModeController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IEditModeController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    ppIStack_1 = (IEditModeController__Class **)(this->fields).woid;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IEditModeController;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditModeController__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPick>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController__OnPick_b__3_0
               (DeleteWoidController *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DeleteWoidController__DeleteWorldObject_bool__ConfirmationPopup_);
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Are_you_sure_you_wish_to_delete_);
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral_Are_you_sure_you_wish_to_delete_,str1,::StringLiteral__,(MethodInfo *)0x0
            );
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__DeleteWoidController__DeleteWorldObject_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar5 = &(&(x->klass->vtable).Create_2)[x->klass->interfaceOffsets[uVar2].offset].method;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?();
code_?:
  (*(code *)*ppMVar5)(x);
  return;
}


/* Void <OnPick>b__3_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController__OnPick_b__3_1
               (DeleteWoidController *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_woid_not_valid__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_woid_not_valid__,str1,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?();
    return;
  }
  func_?();
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

