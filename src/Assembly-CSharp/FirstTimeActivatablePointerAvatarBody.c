
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_Clear
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerAvatarBody___Clear_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerAvatarBody___Clear_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
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
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
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
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnDestroy
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if ((this->fields).bubbleId != -1) {
    FirstTimeActivatablePointerAvatarBody_Clear(this,(MethodInfo *)0x0);
  }
  bVar1 = iRam_? != 0;
  (this->fields).bodyController = (AvatarEditModeBodyController *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).bodyController >> 0xc);
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
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)this_00,(MethodInfo *)0x0);
  pAVar7 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar6 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar8 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar6,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar8 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar6,pAVar7);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar8;
    pAVar7 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar10 = FUN_?(pDVar6,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
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


/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnDisable
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  (this->fields).showing = 0;
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnShow
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarEditModeBodyController_MethodInfo__UnityEngine__Component__GetComponentInParent<AvatarEditModeBodyController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerAvatarBody___OnShow_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).showing = 1;
  pAVar1 = (AvatarEditModeBodyController *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1
                     ((Component *)this,
                      AvatarEditModeBodyController_MethodInfo__UnityEngine__Component__GetComponentInParent<AvatarEditModeBodyController>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).bodyController = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).bodyController >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerAvatarBody___OnShow_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
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
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar10 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar10) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar14 = (pLVar9->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar3) {
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_01,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar10);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnShown
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnShown_done);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_OnShown_done,(MethodInfo *)0x0);
  (this->fields).showing = 0;
  FirstTimeActivatablePointerAvatarBody_Clear(this,(MethodInfo *)0x0);
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
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)this,0.0,(MethodInfo *)0x0);
  index = (this->fields)._._.firstTimeEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
    if ((pBVar2->fields).m_length <= index) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar2,index + 1,(MethodInfo *)0x0);
    }
    pBVar2 = (pFVar1->fields).bitArray;
    if (pBVar2 != (BitArray *)0x0) {
      pvVar3 = (void *)0x0;
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar2,index,1,(MethodInfo *)0x0);
      pFVar4 = TypeInfo__FirstTimeEventManager->static_fields;
      if (pFVar4->firstTimeStatePublisher !=
          (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *
          )0x0) {
        pAVar5 = pFVar4->firstTimeStatePublisher;
        pvVar3 = (pAVar5->fields)._._.method;
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,pFVar4->firstTimeState,index,pvVar3);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (pMVar8 = (pMVar7->fields).operationRequests,
         pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_8[0] = index;
        value = (Object *)FUN_?(uRam_?,aiStackX_8);
        if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar9 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_00,0xbf,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar3 >> 8),2),method_00)
          ;
          pPVar10 = (pMVar8->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar10 != (PhotonPeer *)0x0) {
            (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                      (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x54),this_00,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar10->klass->vtable).SendOperation.method);
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


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_Update
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatablePointerAvatarBody__OnShown__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerAvatarBody___Update_b__12_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TPose);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).showing != 0) {
    pAVar1 = (this->fields).bodyController;
    if ((pAVar1 == (AvatarEditModeBodyController *)0x0) ||
       (pMVar2 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                           (pAVar1,(MethodInfo *)0x0), pMVar2 == (MVBody *)0x0)) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar4 = (pMVar2->fields)._._._.gameObject;
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar4 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__FirstTimeActivatablePointerAvatarBody___Update_b__12_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        pAVar1 = (this->fields).bodyController;
        if ((((pAVar1 == (AvatarEditModeBodyController *)0x0) ||
             (pMVar2 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                                 (pAVar1,(MethodInfo *)0x0), pMVar2 == (MVBody *)0x0)) ||
            (pMVar5 = (pMVar2->fields).bodyObject, pMVar5 == (MVBodyObject *)0x0)) ||
           ((pBVar6 = (pMVar5->fields).boneAnimation, pBVar6 == (BoneAnimation *)0x0 ||
            (this_00 = (pBVar6->fields).avatarAnimation, this_00 == (Animation *)0x0))))
        goto DAT_?;
        bVar7 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_IsPlaying
                          (this_00,StringLiteral_TPose,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          this_02 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,
                     MethodInfo__FirstTimeActivatablePointerAvatarBody__OnShown__,(MethodInfo *)0x0)
          ;
          coroutine = WaitForFrames::WaitForFrames_WithCallback
                                (1,(UnityAction *)this_02,(MethodInfo *)0x0);
          Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void <Clear>b__16_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__Clear_b__16_0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (x == (TextBubbleController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  key = (this->fields).bubbleId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(x->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    this_01 = (x->fields).textBubbles;
    if ((this_01 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar3 != (Object *)0x0)) {
      *(float *)&pOVar3[1].klass = (x->fields).bubbleLifeTime;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnShow>b__13_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__OnShow_b__13_0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyController;
  if ((this_00 != (AvatarEditModeBodyController *)0x0) &&
     (pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                         (this_00,(MethodInfo *)0x0), pMVar1 != (MVBody *)0x0)) {
    puVar2 = (undefined8 *)
             (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                       (aVStack_3,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
    uVar4 = *puVar2;
    uVar5 = (this->fields).bubbleWorldSpaceOffset.x;
    fVar6 = (this->fields).bubbleWorldSpaceOffset.y;
    fVar7 = (this->fields).bubbleWorldSpaceOffset.z;
    fVar8 = *(float *)(puVar2 + 1);
    lifeTime = (this->fields).bubbleLifetimeWhileShown;
    content = (this->fields).bubbleContent;
    parentTransform =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                   ((Component *)this,(MethodInfo *)0x0);
    if (x != (TextBubbleController *)0x0) {
      offset.y = (this->fields).offset.y;
      offset.x = (this->fields).offset.x;
      aVStack_3[0].y = fVar6 + (float)((ulonglong)uVar4 >> 0x20);
      aVStack_3[0].x = (float)uVar5 + (float)uVar4;
      aVStack_3[0].z = fVar7 + fVar8;
      iVar9 = TextBubbleController::TextBubbleController_ShowBubble3D_1
                        (x,aVStack_3,lifeTime,content,parentTransform,offset,(MethodInfo *)0x0);
      (this->fields).bubbleId = iVar9;
      if (((this->fields).skipAllowed == 0) || ((this->fields).hasButtonBeenAdded != 0)) {
        return;
      }
      original = (this->fields).skipElement;
      (this->fields).hasButtonBeenAdded = 1;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                          );
      if (pOVar10 != (Object *)0x0) {
        this_01 = pOVar10[0x10].klass;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,(this->klass->vtable).SkipEvent.method,(MethodInfo *)0x0);
        if (this_01 != (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    ((UnityEvent *)this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Update>b__12_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__Update_b__12_0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  bubbleId = (this->fields).bubbleId;
  this_00 = (this->fields).bodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVBody *)0x0) {
      puVar2 = (undefined8 *)
               (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                         (aVStack_3,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
      uVar4 = (this->fields).bubbleWorldSpaceOffset.x;
      aVStack_3[0].x = (float)uVar4 + (float)*puVar2;
      aVStack_3[0].z = (this->fields).bubbleWorldSpaceOffset.z + *(float *)(puVar2 + 1);
      if (x != (TextBubbleController *)0x0) {
        aVStack_3[0].y =
             (this->fields).bubbleWorldSpaceOffset.y + (float)((ulonglong)*puVar2 >> 0x20);
        offset.y = (this->fields).offset.y;
        offset.x = (this->fields).offset.x;
        TextBubbleController::TextBubbleController_UpdatePosition3D
                  (x,bubbleId,aVStack_3,offset,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatablePointerAvatarBody() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__ctor
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).bubbleWorldSpaceOffset.x = (float)(int)(uVar2 << 0x20);
  (this->fields).bubbleWorldSpaceOffset.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).bubbleWorldSpaceOffset.z = 0.0;
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields).skipAllowed = 1;
  (this->fields).bubbleId = -1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar4 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar5 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar6 = ppMVar4;
  if (lVar5 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar5 = lRam_?;
  }
  else {
    do {
      uVar7 = (uint)ppMVar6;
      LOCK();
      bVar1 = uVar7 != uRam_?;
      uVar8 = uVar7;
      uVar9 = uVar7 + 1;
      if (bVar1) {
        uVar8 = uRam_?;
        uVar9 = uRam_?;
      }
      uRam_? = uVar9;
      UNLOCK();
    } while ((bVar1) && (ppMVar6 = (MethodInfo **)(ulonglong)uVar8, uVar7 = uVar8, uVar8 != 2)
            );
    while (uVar7 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar7 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar5;
  puVar10 = &(pOVar3->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar10 == 1;
  if (bVar1) {
    *(undefined4 *)puVar10 = 1;
  }
  uVar7 = uRam_?;
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
    if (uVar7 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar11 = &(pOVar3->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar11 == 1;
  if (bVar1) {
    *puVar11 = 1;
  }
  uVar7 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar7 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar7 = GetCurrentThreadId();
    psVar12 = &(pOVar3->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar7 == *psVar12;
    if (bVar1) {
      *psVar12 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar10 = &(pOVar3->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar10 == 1;
      if (bVar1) {
        *(undefined4 *)puVar10 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar5._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
      lVar5._4_4_ = (pOVar3->_1).cctor_started;
      if (lVar5 == 0) {
        (pOVar3->_1).initializationExceptionGCHandle = 0;
        (pOVar3->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar5 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar13._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
    lVar13._4_4_ = (pOVar3->_1).cctor_started;
    if (lVar13 == 0) {
      return;
    }
  }
  else {
    uVar7 = GetCurrentThreadId();
    LOCK();
    (pOVar3->_1).cctor_thread = (ulonglong)uVar7;
    UNLOCK();
    LOCK();
    (pOVar3->_1).cctor_finished_or_no_cctor = 1;
    uVar7 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar7 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar3->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar3);
      ppMVar6 = ppMVar4;
      pIVar14 = (Il2CppClass *)pOVar3;
code_?:
      do {
        if (ppMVar6 == (MethodInfo **)0x0) {
          FUN_?(pIVar14);
          if (pIVar14->field_count != 0) {
            ppMVar6 = pIVar14->methods;
            pMVar15 = *ppMVar6;
code_?:
            if (pMVar15 != (MethodInfo *)0x0) {
              if ((*pMVar15->name == '.') && ((pMVar15->flags & 0x800) != 0)) {
                ppMVar16 = ppMVar4;
                while (ppMVar17 = ppMVar16 + 0x30528cee,
                      ppMVar16 = (MethodInfo **)((longlong)ppMVar16 + 1),
                      *(char *)ppMVar17 == (pMVar15->name + -1)[(longlong)ppMVar16]) {
                  if (ppMVar16 == (MethodInfo **)0x7) {
                    FUN_?(pMVar15,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar6 = ppMVar6 + 1;
          if (ppMVar6 < pIVar14->methods + pIVar14->field_count) {
            pMVar15 = *ppMVar6;
            goto code_?;
          }
        }
        pIVar14 = pIVar14->parent;
        ppMVar6 = ppMVar4;
      } while (pIVar14 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar3->_1).cctor_thread = 0;
    uVar2 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar3->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar3->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar5 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar2;
      lVar13 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar5 != 0) {
        *(longlong *)(lVar13 + 0x28U) = lVar5;
        if (iRam_? != 0) {
          uVar7 = (uint)(lVar13 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar2 = *puVar23;
            if (uVar24 == uVar2) {
              *puVar23 = uVar24 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar2);
        }
      }
      FUN_?(pOVar3,lVar13);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar2 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar3->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

