
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_Clear
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

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
                  MethodInfo__FirstTimeActivatableCubeTutorialPointer___Clear_b__7_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._.button;
  if (pBVar1 != (Button *)0x0) {
    pBVar2 = (pBVar1->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      targetObj = (this_01->fields)._._.m_target;
      method_1 = (MethodInfo_1 *)
                 (*(this_01->klass->vtable).GetMethodImpl.methodPtr)
                           (this_01,(this_01->klass->vtable).GetMethodImpl.method);
      this_00 = (pBVar2->fields)._._.m_Calls;
      if (this_00 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(this_00,targetObj,method_1,(MethodInfo *)0x0);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__FirstTimeActivatableCubeTutorialPointer___Clear_b__7_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        if ((this->fields).skipRequested == 0) {
          return;
        }
        pBVar1 = (this->fields)._.button;
        if ((pBVar1 != (Button *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pBVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateBubble() */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_CreateBubble
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

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
                  MethodInfo__FirstTimeActivatableCubeTutorialPointer___CreateBubble_b__5_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__FirstTimeActivatableCubeTutorialPointer___CreateBubble_b__5_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_OnDestroy
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

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
                  MethodInfo__FirstTimeActivatableCubeTutorialPointer___Clear_b__7_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._.button;
  if (pBVar1 != (Button *)0x0) {
    pBVar2 = (pBVar1->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if ((pBVar2 != (Button_ButtonClickedEvent *)0x0) &&
       (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
      targetObj = (this_01->fields)._._.m_target;
      method_1 = (MethodInfo_1 *)
                 (*(this_01->klass->vtable).GetMethodImpl.methodPtr)
                           (this_01,(this_01->klass->vtable).GetMethodImpl.method);
      this_00 = (pBVar2->fields)._._.m_Calls;
      if (this_00 != (InvokableCallList *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCallList::
        InvokableCallList_RemoveListener(this_00,targetObj,method_1,(MethodInfo *)0x0);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__FirstTimeActivatableCubeTutorialPointer___Clear_b__7_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        if ((this->fields).skipRequested != 0) {
          pBVar1 = (this->fields)._.button;
          if ((pBVar1 == (Button *)0x0) ||
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pBVar1,(MethodInfo *)0x0),
             pGVar3 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
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
        this_03 = (UnityAction_2_System_Object_System_Int32_ *)
                  FUN_?(
                               TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]
        ::UnityAction_2_System_Object_System_Int32___ctor
                  (this_03,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,
                   (MethodInfo *)0x0);
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
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)
                            TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                            (Delegate *)this_03,(MethodInfo *)0x0);
        pAVar5 = 
        TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
        ;
        if (pDVar4 == (Delegate *)0x0) {
          TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
               (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)0x0;
        }
        else {
          pAVar6 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                     *)FUN_?(pDVar4,
                                     TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                                    );
          if (pAVar6 ==
              (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
               *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar6;
          pAVar5 = 
          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
          ;
          lVar8 = FUN_?(pDVar4,
                                 TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                                );
          if (lVar8 == 0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
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
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_OnShow
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._.button;
  (this->fields).skipRequested = 0;
  if (pBVar1 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,(this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
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
                      MethodInfo__FirstTimeActivatableCubeTutorialPointer___CreateBubble_b__5_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,(Object *)this,
                 MethodInfo__FirstTimeActivatableCubeTutorialPointer___CreateBubble_b__5_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar3 = 
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
        if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar3);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar4 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar5 = (longlong)(pLVar4->fields)._size;
        uVar6 = 0;
        if (0 < lVar5) {
          lVar7 = 0;
          lVar8 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar4 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar4->fields)._size <= uVar6) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar10 = (pLVar4->fields)._items;
            if (pTVar10 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar10->max_length <= uVar6) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar10->vector + lVar8 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_01,(MethodInfo *)0x0);
            bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,this_03,
                               (pMVar3->field7_0x38).rgctx_data[1].method);
            if (bVar11 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 8;
          } while (lVar7 < lVar5);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSkipPressed() */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_OnSkipPressed
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableCubeTutorialPointer___OnSkipPressed_b__8_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).skipRequested = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatableCubeTutorialPointer___OnSkipPressed_b__8_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
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


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_Start
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (this_00 = (pFVar1->fields).bitArray, this_00 != (BitArray *)0x0)) {
    if (((this_00->fields).m_length < 0x92) ||
       (bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (this_00,0x91,(MethodInfo *)0x0), bVar2 == 0)) {
      this_01 = (this->fields)._.button;
      if ((this_01 == (Button *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = FirstTimeActivatableElementBase::
            FirstTimeActivatableElementBase_get_IsEventAllowedInMode
                      ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    if (bVar2 == 0) {
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      CVar3._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
      if (this != (FirstTimeActivatableCubeTutorialPointer *)0x0) {
        CVar3._.m_CachedPtr = (this->fields)._._._._._._._;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(CVar3._.m_CachedPtr,0);
      return;
    }
    this_03 = (UnityAction_2_System_Object_System_Int32_ *)
              FUN_?(
                           TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
    if (this == (FirstTimeActivatableCubeTutorialPointer *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
    UnityAction_2_System_Object_System_Int32___ctor
              (this_03,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,
               (MethodInfo *)0x0);
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
    if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeState != (FirstTimeState *)0x0) {
      if (this_03 == (UnityAction_2_System_Object_System_Int32_ *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*(this_03->fields)._._.invoke_impl)
                ((this_03->fields)._._.method_code,
                 TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,0xffffffff,
                 (this_03->fields)._._.method,unaff_RBX);
    }
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)
                        TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                        (Delegate *)this_03,(MethodInfo *)0x0);
    pAVar7 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    if (pDVar6 == (Delegate *)0x0) {
      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
           (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)0x0;
    }
    else {
      pAVar8 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)FUN_?(pDVar6,
                                TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                               );
      if (pAVar8 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                     *)0x0) {
        FUN_?(pDVar6,pAVar7);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar8;
      pAVar7 = 
      TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
      ;
      lVar9 = FUN_?(pDVar6,
                            TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
      if (lVar9 == 0) {
        FUN_?(pDVar6,pAVar7);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <CreateBubble>b__5_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer__CreateBubble_b__5_0
               (FirstTimeActivatableCubeTutorialPointer *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__FirstTimeActivatableCubeTutorialPointer__OnSkipPressed__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                 );
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
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.pointToTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    pRVar1 = (this->fields)._.pointToTransform;
    if (pRVar1 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      fVar5 = (this->fields)._.pointerBodyDirectionOffset.x + 0.0;
      fVar6 = (this->fields)._.pointerBodyDirectionOffset.y + 0.0;
      lifeTime = (this->fields)._.bubbleLifetimeWhileShown;
      content = (this->fields)._.bubbleContent;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (x != (TextBubbleController *)0x0) {
        element = (Transform *)0x0;
        targetCenterPoint.y = fVar6 + fVar6;
        targetCenterPoint.x = fVar5 + fVar5;
        iVar8 = TextBubbleController::TextBubbleController_ShowBubble2D
                          (x,(Vector2)0x0,targetCenterPoint,lifeTime,content,pTVar7,
                           (MethodInfo *)0x0);
        (this->fields)._.bubbleId = iVar8;
        if ((this->fields)._.skipAllowed == 0) {
          return;
        }
        original = (this->fields)._.skipElement;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_01 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                            );
        if (this_01 != (Component *)0x0) {
          this_00 = this_01[10].fields._.m_CachedPtr;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,
                     MethodInfo__FirstTimeActivatableCubeTutorialPointer__OnSkipPressed__,
                     (MethodInfo *)0x0);
          if (this_00 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
            iVar8 = (this->fields)._.bubbleId;
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_01,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                element = pTVar7;
              }
              if (element == (Transform *)0x0) {
                FUN_?(pTVar7);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            TextBubbleController::TextBubbleController_AddFirstElement
                      (x,iVar8,(RectTransform *)element,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OnSkipPressed>b__8_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer__OnSkipPressed_b__8_0
               (FirstTimeActivatableCubeTutorialPointer *this,IFirstTimeElementActivator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableCubeTutorialPointer::
     FirstTimeActivatableCubeTutorialPointer_get_CanShow
               (FirstTimeActivatableCubeTutorialPointer *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (obj->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    pcRam_? = pcVar3;
    bVar5 = (*pcRam_?)(pvVar2);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar6 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar6 != (FirstTimeState *)0x0) &&
       (this_00 = (pFVar6->fields).bitArray, this_00 != (BitArray *)0x0)) {
      if ((this_00->fields).m_length < 0x92) {
        bVar7 = 0;
      }
      else {
        bVar7 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (this_00,0x91,(MethodInfo *)0x0);
      }
      return (bVar7 ^ 1) & (bVar1 ^ 1) & bVar5;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}

