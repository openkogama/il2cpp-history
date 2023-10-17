
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_UnEquip_result__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&setSlotSuccess,(IFormatProvider *)0x0,(MethodInfo *)unaff_EDI);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_UnEquip_result__,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pAVar2 = (Action_1_Boolean___Class *)&UNK_?;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar3 != (MVNetworkGame *)0x0) {
    pAVar2 = (Action_1_Boolean___Class *)(pMVar3->fields).OnSetAvatarAccessoryResponse;
    _setSlotSuccess = TypeInfo__System__Action<bool>;
    this_00 = (UnityAction_1_System_ByteEnum_ *)func_?();
    unaff_EDI = (Delegate *)0x0;
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      _setSlotSuccess = (Action_1_Boolean___Class *)0x0;
      source = (Delegate *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)&UNK_?,
                 MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                 ,(MethodInfo *)0x0);
      _setSlotSuccess = (Action_1_Boolean___Class *)0x0;
      unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                            (source,(Delegate *)this_00,(MethodInfo *)0x0);
      if (unaff_EDI == (Delegate *)0x0) {
        (pMVar3->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
        pAStack4 = (Action_1_Boolean___Class *)0x0;
code_?:
        pDStack5 = (Delegate *)&(pMVar3->fields).OnSetAvatarAccessoryResponse;
        func_?();
        if (_UNK_? != 0) {
          pAStack4 = *(Action_1_Boolean___Class **)(_UNK_? + 0x14);
          pDStack5 = *(Delegate **)(_UNK_? + 0x20);
          (**(code **)(_UNK_? + 0xc))();
        }
        return;
      }
      pAStack4 = TypeInfo__System__Action<bool>;
      pDStack5 = unaff_EDI;
      pAVar2 = TypeInfo__System__Action<bool>;
      pAVar6 = (Action_1_Boolean_ *)func_?();
      if (pAVar6 != (Action_1_Boolean_ *)0x0) {
        (pMVar3->fields).OnSetAvatarAccessoryResponse = pAVar6;
        pAStack4 = TypeInfo__System__Action<bool>;
        pDStack5 = unaff_EDI;
        pAVar2 = TypeInfo__System__Action<bool>;
        pAStack4 = (Action_1_Boolean___Class *)func_?();
        if (pAStack4 != (Action_1_Boolean___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  _setSlotSuccess = (Action_1_Boolean___Class *)&UNK_?;
  func_?();
code_?:
  pAStack4 = pAVar2;
  pDStack5 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
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
      goto code_?;
    }
  }
  func_?();
code_?:
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
    unaff_EBX = (Action_1_Boolean___Class *)0x0;
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)this,
                 MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<bool>;
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
        unaff_EBX = TypeInfo__System__Action<bool>;
        pAStack4 = TypeInfo__System__Action<bool>;
        pAStack4 = (Action_1_Boolean___Class *)func_?();
        if (pAStack4 != (Action_1_Boolean___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pAStack4 = unaff_EBX;
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)this,MethodInfo__AccessoryUnEquip__OnUnequipPop_bool_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
      }
      else {
        pAVar2 = (Action_1_Boolean_ *)func_?();
        if (pAVar2 == (Action_1_Boolean_ *)0x0) goto code_?;
        (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__AccessoryUnEquip____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0;
      if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
      if ((TypeInfo__AccessoryUnEquip____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AccessoryUnEquip____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__AccessoryUnEquip____c___OnUnequipPop_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0 = callbackFunction;
        func_?(&TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0,callbackFunction);
        goto code_?;
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AccessoryUnEquip____c___UnEquip_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0 = callbackFunction;
    func_?();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Implement_callback__Investigate_,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

