
/* Void Awake() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_Awake
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 == (NotificationObjectPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pNVar1->fields).OnActiveInstancesChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    (pNVar1->fields).OnActiveInstancesChanged = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pNVar1->fields).OnActiveInstancesChanged = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pNVar1->fields).OnActiveInstancesChanged >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void CreateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_CreateNotification
               (NotificationAreaQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Notification_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.objectPool;
  if (this_00 == (NotificationObjectPool *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = NotificationObjectPool::NotificationObjectPool_GetPanel
                      (this_00,notificationType,(MethodInfo *)0x0);
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
  if (this_01 != (Notification *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_01->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields)._.contentHolderTransform,0,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(this_01->klass->vtable).Initialize.methodPtr)
                    (this_01,data,(this_01->klass->vtable).Initialize.method);
          return;
        }
      }
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar3 = StringLiteral_Notification_is_null;
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
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_InstantiateNotification
               (NotificationAreaQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  ppMVar1 = (MethodInfo **)this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationAreaQueue__EnqueuedNotification);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Enqueue_NotificationAreaQueue__EnqueuedNotification_
                 );
    LOCK();
    UNLOCK();
    ppMVar1 = &
               MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__GetEnumerator__
    ;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar2 = (this->fields)._.objectPool;
  if (pNVar2 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      ppMVar1 = &MethodInfo__System__Collections__Generic__List<Notification>__get_Count__;
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar3 = (pNVar2->fields).ActiveInstances;
    if (pLVar3 != (List_1_Notification_ *)0x0) {
      if ((pLVar3->fields)._size == 0) {
        NotificationAreaQueue_CreateNotification(this,notificationType,data,(MethodInfo *)0x0);
        return;
      }
      pQVar4 = (this->fields).enqueuedNotifications;
      if (pQVar4 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        uStack_11 = 0;
        QStack_12._version = (pQVar4->fields)._version;
        QStack_12._index = 0xffffffff;
        QStack_12._currentElement = (Object *)0x0;
        uStack_6 = 0;
        uStack_13 = &QStack_12;
        QStack_12._q = (Queue_1_System_Object_ *)pQVar4;
code_?:
        do {
          do {
            bVar14 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                    Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                              (&QStack_12,
                               MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__MoveNext__
                              );
            pOVar15 = QStack_12._currentElement;
            if (bVar14 == 0) {
              QStack_12._index = 0xfffffffe;
              QStack_12._currentElement = (Object *)0x0;
              pQVar4 = (this->fields).enqueuedNotifications;
              ppMVar1 = (MethodInfo **)TypeInfo__NotificationAreaQueue__EnqueuedNotification;
              pOVar15 = (Object *)FUN_?();
              *(NotificationType__Enum *)&pOVar15[1].klass = notificationType;
              pOVar15[1].monitor = (MonitorData *)data;
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)&pOVar15[1].monitor >> 0xc);
                ppMVar1 = (MethodInfo **)(ulonglong)((uVar5 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)((longlong)ppMVar1 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)((longlong)ppMVar1 * 8 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              if (pQVar4 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Enqueue
                          ((Queue_1_System_Object_ *)pQVar4,pOVar15,
                           MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Enqueue_NotificationAreaQueue__EnqueuedNotification_
                          );
                return;
              }
              goto code_?;
            }
            ppMVar1 = (MethodInfo **)
                       MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NotificationAreaQueue::EnqueuedNotification>__get_Current__
            ;
            if ((longlong)QStack_12._8_8_ < 0) goto code_?;
            if (QStack_12._currentElement == (Object *)0x0) goto code_?;
          } while (*(NotificationType__Enum *)&QStack_12._currentElement[1].klass !=
                   notificationType);
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)QStack_12._currentElement[1].monitor;
          auStack_16[0] = 1;
          ppMVar1 = (MethodInfo **)pNRam0000000182dbdd68;
          pOVar17 = (Object *)FUN_?(pNRam0000000182dbdd68,auStack_16);
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                            (this_00,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             ->klass->rgctx_data[0x21].method);
        } while (iVar18 < 0);
        this_01 = (Dictionary_2_System_Object_System_Object_ *)pOVar15[1].monitor;
        auStack_16[0] = 1;
        ppMVar1 = (MethodInfo **)pNRam0000000182dbdd68;
        pOVar15 = (Object *)FUN_?(pNRam0000000182dbdd68,auStack_16);
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_01,pOVar15,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          auStack_16[0] = 1;
          ppMVar1 = (MethodInfo **)pNRam0000000182dbdd68;
          pOVar17 = (Object *)FUN_?(pNRam0000000182dbdd68,auStack_16);
          if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  lVar7 = func_?((((NotificationAreaQueue_EnqueuedNotification__Class *)ppMVar1)->_0)
                               .byval_arg.data.dummy);
  uVar19 = func_?(*(undefined8 *)(lVar7 + 0xc0),4);
  FUN_?(&QStack_12,uVar19);
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,pOVar17,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pOVar15 == pOVar17) {
    return;
  }
  goto code_?;
}


/* Void OnActiveInstancesChanged() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_OnActiveInstancesChanged
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
      LOCK();
      UNLOCK();
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
                    (this,*(NotificationType__Enum *)&pOVar3[1].klass,
                     (Dictionary_2_System_Object_System_Object_ *)pOVar3[1].monitor,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_OnDestroy
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 == (NotificationObjectPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pNVar1->fields).OnActiveInstancesChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    (pNVar1->fields).OnActiveInstancesChanged = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pNVar1->fields).OnActiveInstancesChanged = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pNVar1->fields).OnActiveInstancesChanged >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* NotificationAreaQueue() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue__ctor
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>
                         );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Queue__
            );
  bVar1 = iRam_? != 0;
  (this->fields).enqueuedNotifications = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).enqueuedNotifications >> 0xc);
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

