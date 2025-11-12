
/* Void Game_OnSetAvatarAccessorySlotResponseUnequipHandler(Boolean) */

void Assembly-CSharp.dll::AccessoryUnEquip::
     AccessoryUnEquip_Game_OnSetAvatarAccessorySlotResponseUnequipHandler
               (AccessoryUnEquip *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnEquip_result__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if (setSlotSuccess != 0) {
    pSVar1 = StringLiteral_True;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_UnEquip_result__,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 == (MVGameControllerBase *)0x0) ||
     (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar5 = (pMVar3->fields).OnSetAvatarAccessoryResponse;
  pDVar6 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar6,this);
  pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar5,pDVar6,(MethodInfo *)0x0);
  pAVar7 = TypeInfo__System__Action<bool>;
  if (pDVar6 == (Delegate *)0x0) {
    (pMVar3->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar5 = (Action_1_Boolean_ *)FUN_?(pDVar6,TypeInfo__System__Action<bool>);
    if (pAVar5 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar6,pAVar7);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pMVar3->fields).OnSetAvatarAccessoryResponse = pAVar5;
    pAVar7 = TypeInfo__System__Action<bool>;
    lVar8 = FUN_?(pDVar6,TypeInfo__System__Action<bool>);
    if (lVar8 == 0) {
      FUN_?(pDVar6,pAVar7);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnSetAvatarAccessoryResponse >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  if ((this->fields).OnUnequipFinished != (UnityAction *)0x0) {
    pUVar13 = (this->fields).OnUnequipFinished;
    (*(pUVar13->fields)._._.invoke_impl)
              ((pUVar13->fields)._._.method_code,(pUVar13->fields)._._.method);
  }
  return;
}


/* Void Initialize(AccessorySlotType, MVBody) */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_Initialize
               (AccessoryUnEquip *this,AccessorySlotType__Enum avatarAccessorySlot,MVBody *body,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).AvatarBody = body;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).AvatarBody >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields).avatarAccessorySlot = avatarAccessorySlot;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 == (MVGameControllerBase *)0x0) ||
     (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar9 = (pMVar7->fields).OnSetAvatarAccessoryResponse;
  pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar10,this);
  pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar9,pDVar10,(MethodInfo *)0x0);
  pAVar11 = TypeInfo__System__Action<bool>;
  if (pDVar10 == (Delegate *)0x0) {
    (pMVar7->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar9 = (Action_1_Boolean_ *)FUN_?(pDVar10,TypeInfo__System__Action<bool>);
    if (pAVar9 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar10,pAVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pMVar7->fields).OnSetAvatarAccessoryResponse = pAVar9;
    pAVar11 = TypeInfo__System__Action<bool>;
    lVar3 = FUN_?(pDVar10,TypeInfo__System__Action<bool>);
    if (lVar3 == 0) {
      FUN_?(pDVar10,pAVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pMVar7->fields).OnSetAvatarAccessoryResponse >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_OnDestroy
               (AccessoryUnEquip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryUnEquip__Game_OnSetAvatarAccessorySlotResponseUnequipHandler_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).OnUnequipFinished = (UnityAction *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnUnequipFinished >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 == (MVGameControllerBase *)0x0) ||
     (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar9 = (pMVar7->fields).OnSetAvatarAccessoryResponse;
  pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar10,this);
  pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar9,pDVar10,(MethodInfo *)0x0);
  pAVar11 = TypeInfo__System__Action<bool>;
  if (pDVar10 == (Delegate *)0x0) {
    (pMVar7->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar9 = (Action_1_Boolean_ *)FUN_?(pDVar10,TypeInfo__System__Action<bool>);
    if (pAVar9 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar10,pAVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pMVar7->fields).OnSetAvatarAccessoryResponse = pAVar9;
    pAVar11 = TypeInfo__System__Action<bool>;
    lVar3 = FUN_?(pDVar10,TypeInfo__System__Action<bool>);
    if (lVar3 == 0) {
      FUN_?(pDVar10,pAVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pMVar7->fields).OnSetAvatarAccessoryResponse >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void OnUnequipPop(Boolean) */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_OnUnequipPop
               (AccessoryUnEquip *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryUnEquip__OnUnequipPop_bool_,
                  CONCAT71(in_register_00000011,setSlotSuccess));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
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
                  MethodInfo__AccessoryUnEquip____c___OnUnequipPop_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryUnEquip____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pMVar2->fields).OnSetAvatarAccessoryResponse;
  pDVar5 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar5,this);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar4,pDVar5,(MethodInfo *)0x0);
  pAVar6 = TypeInfo__System__Action<bool>;
  if (pDVar5 == (Delegate *)0x0) {
    (pMVar2->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar4 = (Action_1_Boolean_ *)FUN_?(pDVar5,TypeInfo__System__Action<bool>);
    if (pAVar4 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields).OnSetAvatarAccessoryResponse = pAVar4;
    pAVar6 = TypeInfo__System__Action<bool>;
    lVar7 = FUN_?();
    if (lVar7 == 0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnSetAvatarAccessoryResponse >> 0xc);
    lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar10 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryUnEquip____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryUnEquip____c);
  }
  this_01 = TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryUnEquip____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryUnEquip____c);
    }
    object = TypeInfo__AccessoryUnEquip____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AccessoryUnEquip____c___OnUnequipPop_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0 = this_01;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&TypeInfo__AccessoryUnEquip____c->static_fields->__9__5_0 >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar13 = 
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
    if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar13);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar12,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar7 = (longlong)(pLVar14->fields)._size;
    uVar8 = 0;
    if (0 < lVar7) {
      lVar15 = 0;
      lVar16 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar14->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar17 = (pLVar14->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar8) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar12,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                            (pMVar13->field7_0x38).rgctx_data[1].method);
        if (bVar18 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar15 < lVar7);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnEquip() */

void Assembly-CSharp.dll::AccessoryUnEquip::AccessoryUnEquip_UnEquip
               (AccessoryUnEquip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryUnEquip____c___UnEquip_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryUnEquip____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Implement_callback__Investigate_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryUnEquip____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryUnEquip____c);
  }
  this_01 = TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryUnEquip____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryUnEquip____c);
    }
    object = TypeInfo__AccessoryUnEquip____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AccessoryUnEquip____c___UnEquip_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0 = this_01;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AccessoryUnEquip____c->static_fields->__9__4_0 >> 0xc);
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
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
      (pMVar7 = (this->fields).AvatarBody, pMVar7 != (MVBody *)0x0)) &&
     (this_00 = (pMVar6->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnEquipAccessory
              (this_00,(pMVar7->fields)._._._._.id,(this->fields).avatarAccessorySlot,
               (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar8 = StringLiteral_Implement_callback__Investigate_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar9 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,2,pSVar8);
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

