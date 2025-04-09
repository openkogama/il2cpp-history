
/* Void Game_OnSetAvatarAccessorySlotResponseUnequipHandler(Boolean) */

void Assembly-CSharp.dll::AccessoryUnEquip::
     AccessoryUnEquip_Game_OnSetAvatarAccessorySlotResponseUnequipHandler
               (AccessoryUnEquip *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                   );
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_UnEquip_result__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  str1 = mscorlib.dll::System::Boolean::Boolean_ToString
                   ((Boolean *)&setSlotSuccess,(MethodInfo *)0x0);
  message = (Delegate *)
            mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_UnEquip_result__,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  else {
    method = (MethodInfo *)TypeInfo__System__Action<bool>;
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    _setSlotSuccess = &UNK_?;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    _setSlotSuccess = (undefined *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)
                       MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
               ,
               MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
               ,(MethodInfo *)0x0);
    _setSlotSuccess = (undefined *)0x0;
    message = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool>;
    if (message == (Delegate *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
      pAStack3 = (Action_1_Boolean___Class *)0x0;
code_?:
      pDStack4 = (Delegate *)&(pMVar1->fields).OnSetAvatarAccessoryResponse;
      func_?();
      if ((this_00->fields)._._.method != (void *)0x0) {
        pvVar5 = (this_00->fields)._._.method;
        uStack6 = *(undefined4 *)((int)pvVar5 + 0x14);
        uStack7 = *(undefined4 *)((int)pvVar5 + 0x20);
        (**(code **)((int)pvVar5 + 0xc))();
      }
      return;
    }
    pAStack3 = TypeInfo__System__Action<bool>;
    pDStack4 = message;
    pAVar2 = (Action_1_Boolean_ *)func_?();
    if (pAVar2 != (Action_1_Boolean_ *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
      unaff_EDI = TypeInfo__System__Action<bool>;
      pAStack3 = TypeInfo__System__Action<bool>;
      pDStack4 = message;
      pAStack3 = (Action_1_Boolean___Class *)func_?();
      if (pAStack3 != (Action_1_Boolean___Class *)0x0) goto code_?;
    }
  }
  pDStack4 = message;
  pAStack3 = unaff_EDI;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(AccessorySlotType, MVBody) */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_Initialize
               (AccessoryUnEquip *this,AccessorySlotType__Enum avatarAccessorySlot,MVBody *body,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                   );
    func_?(&TypeInfo__System__Action<bool>);
    cRam_? = '\x01';
  }
  (this->fields).AvatarBody = body;
  func_?(&(this->fields).AvatarBody,body);
  (this->fields).avatarAccessorySlot = avatarAccessorySlot;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar2 = (Action_1_Boolean_ *)func_?();
    if (pAVar2 != (Action_1_Boolean_ *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_OnDestroy
               (AccessoryUnEquip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                   );
    func_?(&TypeInfo__System__Action<bool>);
    cRam_? = '\x01';
  }
  (this->fields).OnUnequipFinished = (UnityAction *)0x0;
  func_?(&(this->fields).OnUnequipFinished,0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool>;
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
      pAStack4 = (Action_1_Boolean___Class *)0x0;
code_?:
      func_?();
      return;
    }
    pAStack4 = TypeInfo__System__Action<bool>;
    pAVar2 = (Action_1_Boolean_ *)func_?();
    if (pAVar2 != (Action_1_Boolean_ *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
      unaff_EDI = TypeInfo__System__Action<bool>;
      pAStack4 = TypeInfo__System__Action<bool>;
      pAStack4 = (Action_1_Boolean___Class *)func_?();
      if (pAStack4 != (Action_1_Boolean___Class *)0x0) goto code_?;
    }
  }
  pAStack4 = unaff_EDI;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnUnequipPop(Boolean) */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_OnUnequipPop
               (AccessoryUnEquip *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryUnEquip__OnUnequipPop_bool_);
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryUnEquip____c___OnUnequipPop_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryUnEquip____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__AccessoryUnEquip__OnUnequipPop_bool_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
code_?:
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo__AccessoryUnEquip____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__AccessoryUnEquip____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__AccessoryUnEquip____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__AccessoryUnEquip____c___OnUnequipPop_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
    pAVar2 = (Action_1_Boolean_ *)func_?();
    if (pAVar2 != (Action_1_Boolean_ *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnEquip() */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_UnEquip
               (AccessoryUnEquip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryUnEquip____c___UnEquip_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryUnEquip____c);
    func_?(&StringLiteral_Implement_callback__Investigate_);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AccessoryUnEquip____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AccessoryUnEquip____c);
  }
  callbackFunction = TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__AccessoryUnEquip____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AccessoryUnEquip____c);
    }
    object = TypeInfo__AccessoryUnEquip____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AccessoryUnEquip____c___UnEquip_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0 = callbackFunction;
    func_?(&TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pMVar1 = (this->fields).AvatarBody;
  if ((pMVar1 != (MVBody *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnEquipAccessory
              (this_00,(pMVar1->fields)._._._._.id,(this->fields).avatarAccessorySlot,
               (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Implement_callback__Investigate_,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

