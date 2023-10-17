
/* Void Awake() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_Awake
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    pAVar2 = (pNVar1->fields).OnActiveInstancesChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__,(MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
      if (pAVar2 == (Action *)0x0) {
        (pNVar1->fields).OnActiveInstancesChanged = (Action *)0x0;
        ppAStack4 = &(pNVar1->fields).OnActiveInstancesChanged;
        pAStack5 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar6 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (Action *)0x0) {
        (pNVar1->fields).OnActiveInstancesChanged = pAVar6;
        uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
        pAStack5 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAStack5 = pAVar2;
        }
        if (pAStack5 != (Action *)0x0) {
          ppAStack4 = &(pNVar1->fields).OnActiveInstancesChanged;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack0000000c = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_CreateNotification
               (NotificationAreaQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Notification_is_null);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.objectPool;
  if (this_00 != (NotificationObjectPool *)0x0) {
    this_01 = NotificationObjectPool::NotificationObjectPool_GetPanel
                        (this_00,notificationType,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
      return;
    }
    if (this_01 != (Notification *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields)._.contentHolderTransform,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          (*(this_01->klass->vtable).Initialize.methodPtr)();
          return;
        }
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_InstantiateNotification
               (NotificationAreaQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__NotificationAreaQueue__EnqueuedNotification);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Enqueue_NotificationAreaQueue__EnqueuedNotification_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pNVar6 = (this->fields)._.objectPool;
  if (pNVar6 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar7 = (pNVar6->fields).ActiveInstances;
    if (pLVar7 != (List_1_Notification_ *)0x0) {
      if ((pLVar7->fields)._size == 0) {
        NotificationAreaQueue_CreateNotification(this,notificationType,data,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pQVar8 = (this->fields).enqueuedNotifications;
      if (pQVar8 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__GetEnumerator
                  (&QStack_9,(Queue_1_System_Object_ *)pQVar8,
                   MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__GetEnumerator__
                  );
        QStack_9._index = 0;
        uStack_1 = 1;
        QStack_9._currentElement = (Object *)&stack0xffffffc0;
        while( true ) {
          method_00 = (MethodInfo *)&UNK_?;
          bVar10 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]
                  ::Queue_1_T_Enumerator_System_Object__MoveNext
                            ((Queue_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__MoveNext__
                            );
          if (bVar10 == 0) break;
          pOVar11 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]
                   ::Queue_1_T_Enumerator_System_Object__get_Current
                             ((Queue_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                              MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__get_Current__
                             );
          if (pOVar11 == (Object *)0x0) goto code_?;
          if (pOVar11[1].klass == (Object__Class *)notificationType) {
            pDStack_12 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar11[1].monitor
            ;
            uStack_13 = 1;
            pOVar14 = (Object *)func_?();
            if (pDStack_12 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
            goto code_?;
            bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDStack_12,pOVar14,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar10 != 0) {
              this_00 = (Dictionary_2_System_Object_System_Object_ *)pOVar11[1].monitor;
              uStack_13 = 1;
              pOVar11 = (Object *)func_?();
              if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (this_00,pOVar11,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              uStack_15 = 1;
              pOVar14 = (Object *)func_?();
              if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
              pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (data,pOVar14,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar11 == pOVar14) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
                Queue_1_T_Enumerator_System_Object__Dispose
                          ((Queue_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__Dispose__
                          );
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
        Queue_1_T_Enumerator_System_Object__Dispose
                  ((Queue_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                   MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__Dispose__
                  );
        uStack_1 = 0xffffffff;
        pQVar8 = (this->fields).enqueuedNotifications;
        pOVar11 = (Object *)func_?();
        if (pOVar11 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar11,ExceptionArgument__Enum_obj,method_00);
          pOVar11[1].klass = (Object__Class *)notificationType;
          pOVar11[1].monitor = (MonitorData *)data;
          func_?(&pOVar11[1].monitor,data);
          if (pQVar8 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Enqueue
                      ((Queue_1_System_Object_ *)pQVar8,pOVar11,
                       MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Enqueue_NotificationAreaQueue__EnqueuedNotification_
                      );
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnActiveInstancesChanged() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_OnActiveInstancesChanged
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar2 = (pNVar1->fields).ActiveInstances;
    if (pLVar2 != (List_1_Notification_ *)0x0) {
      if ((pLVar2->fields)._size < 1) {
        this_00 = (this->fields).enqueuedNotifications;
        if (this_00 == (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0)
        goto code_?;
        if ((this_00->fields)._size != 0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                   Queue_1_System_Object__Dequeue
                             ((Queue_1_System_Object_ *)this_00,
                              MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Dequeue__
                             );
          if (pOVar3 == (Object *)0x0) goto code_?;
          NotificationAreaQueue_CreateNotification
                    (this,(NotificationType__Enum)pOVar3[1].klass,
                     (Dictionary_2_System_Object_System_Object_ *)pOVar3[1].monitor,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_OnDestroy
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    pAVar2 = (pNVar1->fields).OnActiveInstancesChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__,(MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
      if (pAVar2 == (Action *)0x0) {
        (pNVar1->fields).OnActiveInstancesChanged = (Action *)0x0;
        ppAStack4 = &(pNVar1->fields).OnActiveInstancesChanged;
        pAStack5 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar6 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (Action *)0x0) {
        (pNVar1->fields).OnActiveInstancesChanged = pAVar6;
        uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
        pAStack5 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAStack5 = pAVar2;
        }
        if (pAStack5 != (Action *)0x0) {
          ppAStack4 = &(pNVar1->fields).OnActiveInstancesChanged;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack0000000c = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* NotificationAreaQueue() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue__ctor
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>
                           );
  if (this_00 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Queue__
              );
    (this->fields).enqueuedNotifications = this_00;
    func_?(&(this->fields).enqueuedNotifications,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

