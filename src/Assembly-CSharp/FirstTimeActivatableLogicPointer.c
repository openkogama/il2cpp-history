
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Clear(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatableLogicPointer___Clear_b__19_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_01,(Object *)this,MethodInfo__FirstTimeActivatableLogicPointer___Clear_b__19_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_;
  if ((UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_);
    LOCK();
    UNLOCK();
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain(pGVar1,(IList_1_UnityEngine_Transform_ *)TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18(pGVar1,(BaseEventData *)0x0,this_01,(pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnDestroy(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if ((this->fields).bubbleId != -1) {
    FirstTimeActivatableLogicPointer_Clear(this,(MethodInfo *)0x0);
  }
  bVar1 = iRam_? != 0;
  (this->fields).editorStateMachine = (EditorStateMachine *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)FUN_?(TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::UnityAction_2_System_Object_System_Int32___ctor(this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar7 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>;
  if (pDVar6 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
  }
  else {
    pAVar8 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)FUN_?(pDVar6,TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>);
    if (pAVar8 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
      FUN_?(pDVar6,pAVar7);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar8;
    pAVar7 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>;
    lVar10 = FUN_?(pDVar6,TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>);
    if (lVar10 == 0) {
      FUN_?(pDVar6,pAVar7);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnShow(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatableLogicPointer___OnShow_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).placedWo;
  if (pWVar2 != (WorldObjectClientRef *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pOVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(this_00,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
      (this->fields).showing = pOVar3 != (Object *)0x0;
      if (pOVar3 != (Object *)0x0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_01,(Object *)this,MethodInfo__FirstTimeActivatableLogicPointer___OnShow_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(root,(BaseEventData *)0x0,this_01,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnShown(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).showing = 0;
  FirstTimeActivatableLogicPointer_Clear(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)this,0.0,(MethodInfo *)0x0);
  index = (this->fields)._._.firstTimeEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) && (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
    if ((pBVar2->fields).m_length <= index) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length(pBVar2,index + 1,(MethodInfo *)0x0);
    }
    pBVar2 = (pFVar1->fields).bitArray;
    if (pBVar2 != (BitArray *)0x0) {
      pvVar3 = (void *)0x0;
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar2,index,1,(MethodInfo *)0x0);
      pFVar4 = TypeInfo__FirstTimeEventManager->static_fields;
      if (pFVar4->firstTimeStatePublisher != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        pAVar5 = pFVar4->firstTimeStatePublisher;
        pvVar3 = (pAVar5->fields)._._.method;
        (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code,pFVar4->firstTimeState,index,pvVar3);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) && (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) && (pMVar8 = (pMVar7->fields).operationRequests, pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_System_Byte_System_Object_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object___ctor(this_00,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__);
        aiStackX_8[0] = index;
        value = (Object *)FUN_?(uRam_?,aiStackX_8);
        if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_->klass->rgctx_data[0x22].method;
          uVar9 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object__TryInsert(this_00,0xc1,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar3 >> 8),2),method_00);
          pPVar10 = (pMVar8->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar10 != (PhotonPeer *)0x0) {
            (*(pPVar10->klass->vtable).SendOperation.methodPtr)(pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x54),this_00,TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,(pPVar10->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Start(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&DesktopEditModeController_MethodInfo__UnityEngine__Component__GetComponentInParent<DesktopEditModeController>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_Start((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1((Component *)this,DesktopEditModeController_MethodInfo__UnityEngine__Component__GetComponentInParent<DesktopEditModeController>__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (this->fields).editorStateMachine = (EditorStateMachine *)pOVar1[0x13].monitor;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Update(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatableLogicPointer___Update_b__17_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatableLogicPointer____c___Update_b__17_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableLogicPointer____c);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  if ((this->fields).showing == 0) {
    pEVar2 = (this->fields).editorStateMachine;
    if (pEVar2 != (EditorStateMachine *)0x0) {
      EVar3 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar2,(MethodInfo *)0x0);
      if (EVar3 == EditorEvent__Enum_ESInsert) {
        (this->fields).finishedESInsert = 1;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pEVar2 = (this->fields).editorStateMachine;
        if (((pEVar2 == (EditorStateMachine *)0x0) || (pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar2,(MethodInfo *)0x0), pMVar5 == (MVWorldObjectClient *)0x0)) || (pMVar4 == (MVWorldObjectClientManager *)0x0)) goto code_?;
        pWVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef(pMVar4,(pMVar5->fields)._.id,(MethodInfo *)0x0);
        bVar7 = iRam_? != 0;
        (this->fields).placedWo = pWVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).placedWo >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
          return;
        }
      }
      else if ((this->fields).finishedESInsert != 0) {
        pEVar2 = (this->fields).editorStateMachine;
        if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
        EVar3 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar2,(MethodInfo *)0x0);
        if (EVar3 == EditorEvent__Enum_ESTerrainEdit) {
          (this->fields).hasPlacedObject = 1;
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__FirstTimeActivatableLogicPointer____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__FirstTimeActivatableLogicPointer____c);
          }
          this_00 = TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9__17_1;
          if (this_00 == (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0) {
            if (*(int *)&(TypeInfo__FirstTimeActivatableLogicPointer____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__FirstTimeActivatableLogicPointer____c);
            }
            object = TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9;
            this_00 = (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,MethodInfo__FirstTimeActivatableLogicPointer____c___Update_b__17_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
            TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9__17_1 = this_00;
            func_?(&TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9__17_1);
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(pGVar12,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_);
        }
      }
      return;
    }
  }
  else {
    pWVar6 = (this->fields).placedWo;
    if ((pWVar6 != (WorldObjectClientRef *)0x0) && (pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0), pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      pOVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar4,(pWVar6->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
      if (pOVar13 != (Object *)0x0) {
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_01,(Object *)this,MethodInfo__FirstTimeActivatableLogicPointer___Update_b__17_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(pGVar12,(BaseEventData *)0x0,this_01,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_);
        if ((this->fields).hasPlacedObject == 0) {
          return;
        }
        pEVar2 = (this->fields).editorStateMachine;
        if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
        EVar3 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar2,(MethodInfo *)0x0);
        if (EVar3 != EditorEvent__Enum_ObjectSelected) {
          return;
        }
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar14 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
        if (bVar14 == 0) {
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this->fields).showing = 0;
      FirstTimeActivatableLogicPointer_Clear(this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)this,0.0,(MethodInfo *)0x0);
      index = (this->fields)._._.firstTimeEvent;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__FirstTimeEventManager,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pFVar15 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
      if ((pFVar15 != (FirstTimeState *)0x0) && (pBVar16 = (pFVar15->fields).bitArray, pBVar16 != (BitArray *)0x0)) {
        if ((pBVar16->fields).m_length <= index) {
          mscorlib.dll::System::Collections::BitArray::BitArray_set_Length(pBVar16,index + 1,(MethodInfo *)0x0);
        }
        pBVar16 = (pFVar15->fields).bitArray;
        if (pBVar16 != (BitArray *)0x0) {
          pvVar17 = (void *)0x0;
          mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar16,index,1,(MethodInfo *)0x0);
          pFVar18 = TypeInfo__FirstTimeEventManager->static_fields;
          if (pFVar18->firstTimeStatePublisher != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
            pAVar19 = pFVar18->firstTimeStatePublisher;
            pvVar17 = (pAVar19->fields)._._.method;
            (*(pAVar19->fields)._._.invoke_impl)((pAVar19->fields)._._.method_code,pFVar18->firstTimeState,index,pvVar17);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar20 != (MVGameControllerBase *)0x0) && (pMVar21 = (pMVar20->fields).game, pMVar21 != (MVNetworkGame *)0x0)) && (pMVar22 = (pMVar21->fields).operationRequests, pMVar22 != (MVNetworkGame_OperationRequests *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_02 = (Dictionary_2_System_Byte_System_Object_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object___ctor(this_02,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__);
            pOVar13 = (Object *)FUN_?(uRam_?,&stack0x00000008);
            if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_->klass->rgctx_data[0x22].method;
              uVar23 = CONCAT71((int7)((ulonglong)pMVar1 >> 8),0xc1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::Dictionary_2_System_Byte_System_Object__TryInsert(this_02,0xc1,pOVar13,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar17 >> 8),2),pMVar1);
              pPVar24 = (pMVar22->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar24 != (PhotonPeer *)0x0) {
                (*(pPVar24->klass->vtable).SendOperation.methodPtr)(pPVar24,CONCAT71((int7)((ulonglong)uVar23 >> 8),0x54),this_02,TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,(pPVar24->klass->vtable).SendOperation.method);
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void <Clear>b__19_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer__Clear_b__19_0(FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  if (x == (TextBubbleController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  key = (this->fields).bubbleId;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(x->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry(this_00,key,MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    this_01 = (x->fields).textBubbles;
    if ((this_01 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) && (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item((Dictionary_2_System_Int32_System_Object_ *)this_01,key,MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_), pOVar3 != (Object *)0x0)) {
      *(float *)&pOVar3[1].klass = (x->fields).bubbleLifeTime;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnShow>b__16_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer__OnShow_b__16_0(FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__FirstTimeActivatableLogicPointer__OnShown__);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).placedWo;
  if (((pWVar2 != (WorldObjectClientRef *)0x0) && (this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0), this_01 != (MVWorldObjectClientManager *)0x0)) && (pOVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(this_01,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method), pOVar3 != (Object *)0x0)) {
    puVar4 = (undefined8 *)(*(code *)pOVar3->klass[1].vtable.Finalize.method)(aVStack_5,pOVar3,pOVar3->klass[1].vtable.GetHashCode.methodPtr);
    uVar6 = *puVar4;
    uVar7 = (this->fields).bubbleWorldSpaceOffset.x;
    fVar8 = (this->fields).bubbleWorldSpaceOffset.y;
    fVar9 = (this->fields).bubbleWorldSpaceOffset.z;
    fVar10 = *(float *)(puVar4 + 1);
    lifeTime = (this->fields).bubbleLifetimeWhileShown;
    content = (this->fields).bubbleContent;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (x != (TextBubbleController *)0x0) {
      element = (Transform *)0x0;
      offset.y = (this->fields).offset.y;
      offset.x = (this->fields).offset.x;
      aVStack_5[0].y = fVar8 + (float)((ulonglong)uVar6 >> 0x20);
      aVStack_5[0].x = (float)uVar7 + (float)uVar6;
      aVStack_5[0].z = fVar9 + fVar10;
      iVar12 = TextBubbleController::TextBubbleController_ShowBubble3D_1(x,aVStack_5,lifeTime,content,pTVar11,offset,(MethodInfo *)0x0);
      (this->fields).bubbleId = iVar12;
      if (((this->fields).skipAllowed == 0) || ((this->fields).hasButtonBeenAdded != 0)) {
        return;
      }
      original = (this->fields).skipElement;
      (this->fields).hasButtonBeenAdded = 1;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_02 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)original,UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_);
      if (this_02 != (Component *)0x0) {
        this_00 = this_02[10].fields._.m_CachedPtr;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_03,(Object *)this,MethodInfo__FirstTimeActivatableLogicPointer__OnShown__,(MethodInfo *)0x0);
        if (this_00 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener(this_00,(UnityAction *)this_03,(MethodInfo *)0x0);
          iVar12 = (this->fields).bubbleId;
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(this_02,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            if (pTVar11->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
              element = pTVar11;
            }
            if (element == (Transform *)0x0) {
              FUN_?(pTVar11);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          TextBubbleController::TextBubbleController_AddElement(x,iVar12,(RectTransform *)element,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <Update>b__17_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer__Update_b__17_0(FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).placedWo;
  bubbleId = (this->fields).bubbleId;
  if (pWVar2 != (WorldObjectClientRef *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pOVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(this_00,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
      if (pOVar3 != (Object *)0x0) {
        puVar4 = (undefined8 *)(*(code *)pOVar3->klass[1].vtable.Finalize.method)(aVStack_5,pOVar3,pOVar3->klass[1].vtable.GetHashCode.methodPtr);
        uVar6 = (this->fields).bubbleWorldSpaceOffset.x;
        aVStack_5[0].x = (float)uVar6 + (float)*puVar4;
        aVStack_5[0].z = (this->fields).bubbleWorldSpaceOffset.z + *(float *)(puVar4 + 1);
        if (x != (TextBubbleController *)0x0) {
          aVStack_5[0].y = (this->fields).bubbleWorldSpaceOffset.y + (float)((ulonglong)*puVar4 >> 0x20);
          offset.y = (this->fields).offset.y;
          offset.x = (this->fields).offset.x;
          TextBubbleController::TextBubbleController_UpdatePosition3D(x,bubbleId,aVStack_5,offset,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* FirstTimeActivatableLogicPointer() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer__ctor(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).bubbleWorldSpaceOffset.x = 0.0;
  (this->fields).bubbleWorldSpaceOffset.y = 1.3;
  (this->fields).bubbleWorldSpaceOffset.z = 0.0;
  (this->fields).bubbleId = -1;
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields).skipAllowed = 1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_get_CanShow(FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (this->fields).hasPlacedObject;
    }
  }
  return 0;
}

