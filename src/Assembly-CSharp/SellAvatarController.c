
/* Void Initialize(Int32, MVBody) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_Initialize
               (SellAvatarController *this,int32_t woID,MVBody *currentBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Update);
    func_?(&StringLiteral_Sell);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._AvatarMetaDataWoMap_k__BackingField,
     this_00 != (MvAvatarMetaDataWoMap *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
              (this_00,woID,(MvAvatarMetaData **)&stack0xfffffff8,(MethodInfo *)0x0);
    ppMVar2 = &(this->fields).body;
    *ppMVar2 = currentBody;
    func_?(ppMVar2,currentBody);
    ppMVar3 = &(this->fields).metaData;
    *ppMVar3 = unaff_ESI;
    func_?(ppMVar3,unaff_ESI);
    (this->fields).woID = woID;
    pTVar4 = (this->fields).sellButtonText;
    if (unaff_ESI != (MvAvatarMetaData *)0x0) {
      pSVar5 = StringLiteral_Sell;
      if ((unaff_ESI->fields).isOnMarketPlace != 0) {
        pSVar5 = StringLiteral_Update;
      }
      pSVar5 = TM::TM__(pSVar5,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        pMVar6 = (MvAvatarMetaData *)
                 (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar4->klass->vtable).set_text.method)(pTVar4,pSVar5);
        this_01 = (this->fields).removeButton;
        if ((((this_01 != (Button *)0x0) &&
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_01,(MethodInfo *)0x0),
             pMVar6 != (MvAvatarMetaData *)0x0)) && (this_03 != (GameObject *)0x0)) &&
           ((UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                       (this_03,(pMVar6->fields).isOnMarketPlace,(MethodInfo *)0x0),
            pMVar6 != (MvAvatarMetaData *)0x0 &&
            (this_02 = (this->fields).nameField, this_02 != (InputField *)0x0)))) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (this_02,(pMVar6->fields).name,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsSelectedBodyValid() */

bool Assembly-CSharp.dll::SellAvatarController::SellAvatarController_IsSelectedBodyValid
               (SellAvatarController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).metaData;
  if (pMVar1 != (MvAvatarMetaData *)0x0) {
    return (pMVar1->fields).canBeSoldOnMarketPlace;
  }
  return 0;
}


/* Void OnAddToMarketplace(Boolean) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnAddToMarketplace
               (SellAvatarController *this,bool added,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&MethodInfo__SellAvatarController__OnAddToMarketplace_bool_);
    func_?(&
                    MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SellAvatarController____c__DisplayClass11_0___OnAddToMarketplace_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SellAvatarController____c__DisplayClass11_0);
    func_?(&TypeInfo__SellAvatarController____c);
    func_?(&StringLiteral_Update);
    func_?(&StringLiteral_Avatar_is_now_available_in_your_);
    func_?(&StringLiteral_Failed_to_update_Avatar_);
    func_?(&StringLiteral_Failed_to_put_Avatar_in_your_sho);
    func_?(&StringLiteral_You_need_to_be_level__0__to_plac);
    func_?(&StringLiteral_Avatar_updated_in_your_shop_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SellAvatarController____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__SellAvatarController__OnAddToMarketplace_bool_,
               (MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar1->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        func_?();
        goto code_?;
      }
      (pMVar1->fields).OnMarketPlaceActionComplete = pMVar3;
      pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0)
      goto code_?;
    }
    func_?();
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SellAvatarController____c);
    }
    callbackFunction = TypeInfo__SellAvatarController____c->static_fields->__9__11_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SellAvatarController____c);
      }
      pSVar5 = TypeInfo__SellAvatarController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pSVar5,
                 MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SellAvatarController____c->static_fields->__9__11_0 = callbackFunction;
      func_?(&TypeInfo__SellAvatarController____c->static_fields->__9__11_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SellAvatarController____c);
    }
    callbackFunction_00 = TypeInfo__SellAvatarController____c->static_fields->__9__11_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SellAvatarController____c);
      }
      pSVar5 = TypeInfo__SellAvatarController____c->static_fields->__9;
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pSVar5,
                 MethodInfo__SellAvatarController____c___OnAddToMarketplace_b__11_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SellAvatarController____c->static_fields->__9__11_1 = callbackFunction_00;
      func_?(&TypeInfo__SellAvatarController____c->static_fields->__9__11_1,
                      callbackFunction_00);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    pMVar6 = (this->fields).metaData;
    if (pMVar6 != (MvAvatarMetaData *)0x0) {
      pSVar7 = StringLiteral_Avatar_is_now_available_in_your_;
      if ((pMVar6->fields).isOnMarketPlace != 0) {
        pSVar7 = StringLiteral_Avatar_updated_in_your_shop_;
      }
      pOVar8 = (Object__Class *)TM::TM__(pSVar7,(MethodInfo *)0x0);
      if (value != (Object *)0x0) {
        value[1].klass = pOVar8;
        func_?(value + 1,pOVar8);
        this_00 = (this->fields).removeButton;
        if ((this_00 != (Button *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          pTVar9 = (this->fields).sellButtonText;
          pSVar7 = TM::TM__(StringLiteral_Update,(MethodInfo *)0x0);
          if (pTVar9 != (Text *)0x0) {
            (*(code *)(pTVar9->klass->vtable).set_text.method)
                      (pTVar9,pSVar7,
                       (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction_01 =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,value,
                       MethodInfo__SellAvatarController____c__DisplayClass11_0___OnAddToMarketplace_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,callbackFunction_01,
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnImageUploaded() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnImageUploaded
               (SellAvatarController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pIVar1 = (this->fields).nameField;
  if ((pIVar1 != (InputField *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
              (this_00,(this->fields).woID,(pIVar1->fields).m_Text,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnPop
               (SellAvatarController *this,MethodInfo *method)

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
                    MethodInfo__SellAvatarController____c___OnPop_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SellAvatarController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SellAvatarController____c);
  }
  callbackFunction = TypeInfo__SellAvatarController____c->static_fields->__9__12_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SellAvatarController____c);
    }
    object = TypeInfo__SellAvatarController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SellAvatarController____c___OnPop_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SellAvatarController____c->static_fields->__9__12_0 = callbackFunction;
    func_?(&TypeInfo__SellAvatarController____c->static_fields->__9__12_0,callbackFunction)
    ;
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


/* Void OnRemoveFromMarketplace(Boolean) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnRemoveFromMarketplace
               (SellAvatarController *this,bool added,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_);
    func_?(&
                    MethodInfo__SellAvatarController____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SellAvatarController____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SellAvatarController____c__DisplayClass15_0);
    func_?(&TypeInfo__SellAvatarController____c);
    func_?(&StringLiteral_Sell);
    func_?(&StringLiteral_Avatar_removed_from_your_shop_);
    func_?(&StringLiteral_Failed_to_remove_Avatar_from_you);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SellAvatarController____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      (pMVar1->fields).OnMarketPlaceActionComplete =
           (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
code_?:
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SellAvatarController____c);
      }
      callbackFunction = TypeInfo__SellAvatarController____c->static_fields->__9__15_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SellAvatarController____c);
        }
        object = TypeInfo__SellAvatarController____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SellAvatarController____c___OnRemoveFromMarketplace_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SellAvatarController____c->static_fields->__9__15_0 = callbackFunction;
        func_?(&TypeInfo__SellAvatarController____c->static_fields->__9__15_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar4 = (Object__Class *)
               TM::TM__(StringLiteral_Failed_to_remove_Avatar_from_you,(MethodInfo *)0x0);
      if (value != (Object *)0x0) {
        pOVar5 = value + 1;
        pOVar5->klass = pOVar4;
        func_?(pOVar5,pOVar4);
        pOVar4 = (Object__Class *)
                 TM::TM__(StringLiteral_Avatar_removed_from_your_shop_,(MethodInfo *)0x0);
        pOVar5->klass = pOVar4;
        func_?(pOVar5,pOVar4);
        this_00 = (this->fields).removeButton;
        if ((this_00 != (Button *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pTVar6 = (this->fields).sellButtonText;
          pSVar7 = TM::TM__(StringLiteral_Sell,(MethodInfo *)0x0);
          if (pTVar6 != (Text *)0x0) {
            (*(code *)(pTVar6->klass->vtable).set_text.method)
                      (pTVar6,pSVar7,
                       (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction_00 =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                       MethodInfo__SellAvatarController____c__DisplayClass15_0___OnRemoveFromMarketplace_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
        }
      }
      goto code_?;
    }
    pMVar8 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar8 = pMVar2;
    }
    if (pMVar8 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    (pMVar1->fields).OnMarketPlaceActionComplete = pMVar8;
    pMVar8 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
      pMVar8 = pMVar2;
    }
    if (pMVar8 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnRemovePressed() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnRemovePressed
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_);
    func_?(&
                    MethodInfo__SellAvatarController____c___OnRemovePressed_b__14_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SellAvatarController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SellAvatarController____c);
  }
  callbackFunction = TypeInfo__SellAvatarController____c->static_fields->__9__14_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SellAvatarController____c);
    }
    object = TypeInfo__SellAvatarController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SellAvatarController____c___OnRemovePressed_b__14_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SellAvatarController____c->static_fields->__9__14_0 = callbackFunction;
    func_?(&TypeInfo__SellAvatarController____c->static_fields->__9__14_0,callbackFunction)
    ;
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
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    ppMVar3 = &(pMVar1->fields).OnMarketPlaceActionComplete;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)0x0,MethodInfo__SellAvatarController__OnRemoveFromMarketplace_bool_
               ,(MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      *ppMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar2;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
      *ppMVar3 = pMVar4;
      pMVar4 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar4 = pMVar2;
      }
      if (pMVar4 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_DeleteAvatarFromShopInventory
                (this_01,iRam_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSellPressed() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_OnSellPressed
               (SellAvatarController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    func_?(&
                    MethodInfo__SellAvatarController__ScreenShotCallback_UnityEngine__Texture2D__System__String_
                   );
    func_?(&StringLiteral_Screenshot_taken_successfully_);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).metaData;
  if ((pMVar1 != (MvAvatarMetaData *)0x0) && ((pMVar1->fields).canBeSoldOnMarketPlace != 0)) {
    pIVar2 = (this->fields).nameField;
    if (pIVar2 == (InputField *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((pIVar2->fields).m_Text,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      this_00 = (this->fields).screenShooter;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SellAvatarController__ScreenShotCallback_UnityEngine__Texture2D__System__String_
                 ,(MethodInfo *)0x0);
      if (this_00 == (AvatarScreenShooter *)0x0) goto code_?;
      AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
                (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).body,1,
                 StringLiteral_Screenshot_taken_successfully_,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ScreenShotCallback(Texture2D, String) */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController_ScreenShotCallback
               (SellAvatarController *this,Texture2D *texture,String *successMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    func_?(&MethodInfo__SellAvatarController__OnAddToMarketplace_bool_);
    func_?(&
                    MethodInfo__SellAvatarController____c___ScreenShotCallback_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SellAvatarController____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).OnMarketPlaceActionComplete;
    this_00 = &(pMVar1->fields).OnMarketPlaceActionComplete;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__SellAvatarController__OnAddToMarketplace_bool_,
               (MethodInfo *)0x0);
    pMVar2 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      *this_00 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
    }
    else {
      pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
      *this_00 = pMVar3;
      pMVar3 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVNetworkGame__OnMarketPlaceActionCompleteDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) goto code_?;
    }
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    pGVar4 = root;
    if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SellAvatarController____c);
    }
    callbackFunction = TypeInfo__SellAvatarController____c->static_fields->__9__9_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      root = pGVar4;
      if ((TypeInfo__SellAvatarController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SellAvatarController____c);
        root = pGVar4;
      }
      object = TypeInfo__SellAvatarController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__SellAvatarController____c___ScreenShotCallback_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SellAvatarController____c->static_fields->__9__9_0 = callbackFunction;
      func_?(&TypeInfo__SellAvatarController____c->static_fields->__9__9_0,callbackFunction
                     );
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar5 = (pMVar1->fields).playerContainer;
    if ((pMVar5 != (MVPlayerContainer *)0x0) && (this_02 != (MVNetworkGame_OperationRequests *)0x0))
    {
      worldObjectId._0_1_ = (pMVar1->fields).embeddedSiteConfigData.showTouristPromotion;
      worldObjectId._1_1_ = (pMVar1->fields).embeddedSiteConfigData.allowsOpenInNewTab;
      worldObjectId._2_1_ = (pMVar1->fields).embeddedSiteConfigData.allowsRedirectToWebpage;
      worldObjectId._3_1_ = (pMVar1->fields).embeddedSiteConfigData.allowsModals;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
                (this_02,worldObjectId,(String *)pMVar5[7].fields.OnPlayerListLoaded,
                 (MethodInfo *)0x0);
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


/* SellAvatarController() */

void Assembly-CSharp.dll::SellAvatarController::SellAvatarController__ctor
               (SellAvatarController *this,MethodInfo *method)

{
  (this->fields).woID = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

