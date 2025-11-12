
/* Void Awake() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_Awake
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__NotificationAreaSingleInstanceQueue__OnActiveInstancesChanged__);
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
            (this_00,(Object *)this,
             MethodInfo__NotificationAreaSingleInstanceQueue__OnActiveInstancesChanged__,
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


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_InstantiateNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apOStack_1[0] = (Object *)0x0;
  auStackX_18[0] = 0x12;
  key = (Object *)FUN_?(uRam_?,auStackX_18);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,key,apOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      if (apOStack_1[0] == (Object *)0x0) goto code_?;
      if ((apOStack_1[0]->klass->_0).element_class !=
          *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(apOStack_1[0]);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)&apOStack_1[0][1].klass != '\0') goto code_?;
    }
    pNVar4 = (this->fields)._.objectPool;
    if (pNVar4 != (NotificationObjectPool *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar5 = (pNVar4->fields).ActiveInstances;
      if (pLVar5 != (List_1_Notification_ *)0x0) {
        if (0 < (pLVar5->fields)._size) {
          NotificationAreaSingleInstanceQueue_QueueNotification
                    (this,notificationType,data,(MethodInfo *)0x0);
          return;
        }
code_?:
        NotificationAreaSingleInstanceQueue_ShowNotification
                  (this,notificationType,data,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnActiveInstancesChanged() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_OnActiveInstancesChanged
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).shouldSkipDequeueCallback != 0) {
    return;
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar2 = _UNK_?;
    pLVar3 = (pNVar1->fields).ActiveInstances;
    if (pLVar3 != (List_1_Notification_ *)0x0) {
      if (0 < (pLVar3->fields)._size) {
        return;
      }
      pQVar4 = (this->fields).enqueuedNotifications;
      if (pQVar4 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        if ((pQVar4->fields)._size == 0) {
          return;
        }
        do {
          if ((pQVar4->fields)._size < 1) {
            return;
          }
          pQVar4 = (this->fields).enqueuedNotifications;
          if (pQVar4 == (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)
          break;
          if ((pQVar4->fields)._size == 0) {
            uVar5 = func_?(MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Dequeue__
                                         ->klass->rgctx_data,0xb);
            FUN_?(pQVar4,uVar5);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pNVar7 = (pQVar4->fields)._array;
          if (pNVar7 == (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)0x0)
          break;
          uVar8 = (pQVar4->fields)._head;
          if ((uint)pNVar7->max_length <= uVar8) {
code_?:
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar5 = *(undefined8 *)&pNVar7->vector[(int)uVar8].startTime;
          uVar9 = *(undefined8 *)(pNVar7->vector + (int)uVar8);
          data = pNVar7->vector[(int)uVar8].data;
          if ((uint)pNVar7->max_length <= uVar8) goto code_?;
          bVar10 = iRam_? != 0;
          *(undefined8 *)(pNVar7->vector + (int)uVar8) = 0;
          pNVar7->vector[(int)uVar8].data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          *(undefined8 *)&pNVar7->vector[(int)uVar8].startTime = 0;
          if (bVar10) {
            uVar8 = (uint)((ulonglong)&pNVar7->vector[(int)uVar8].data >> 0xc);
            uVar11 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
              puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar12 == *puVar13;
              if (bVar10) {
                *puVar13 = uVar12 | 1L << (ulonglong)(uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pNVar7 = (pQVar4->fields)._array;
          if (pNVar7 == (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)0x0)
          break;
          iVar14 = (pQVar4->fields)._head + 1;
          iVar15 = 0;
          if (iVar14 != (int)pNVar7->max_length) {
            iVar15 = iVar14;
          }
          (pQVar4->fields)._head = iVar15;
          piVar16 = &(pQVar4->fields)._size;
          *piVar16 = *piVar16 + -1;
          piVar16 = &(pQVar4->fields)._version;
          *piVar16 = *piVar16 + 1;
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          fVar17 = (float)(*pcRam_?)();
          fStack_18 = (float)uVar5;
          if (fVar17 - fStack_18 <= fVar2) {
            NotificationAreaSingleInstanceQueue_ShowNotification
                      (this,(NotificationType__Enum)uVar9,data,(MethodInfo *)0x0);
          }
          pQVar4 = (this->fields).enqueuedNotifications;
        } while (pQVar4 !=
                 (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0);
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void QueueNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_QueueNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
    uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pcVar8 = pcRam_?;
  pDStack_3 = data;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  uVar10 = (*pcRam_?)();
  pDVar11 = pDStack_3;
  pQVar12 = (this->fields).enqueuedNotifications;
  uVar13 = uStack_1._4_4_;
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar10);
  uVar14 = uStack_15;
  if ((pQVar12 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) &&
     (pNVar16 = (pQVar12->fields)._array,
     pNVar16 != (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)0x0)) {
    if ((pQVar12->fields)._size == (int)pNVar16->max_length) {
      pNVar16 = (pQVar12->fields)._array;
      iVar17 = (int)pNVar16->max_length * 2;
      if (iVar17 < (int)pNVar16->max_length + 4) {
        iVar17 = (int)pNVar16->max_length + 4;
      }
      FUN_?(pQVar12,iVar17,
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
                    ->klass->rgctx_data[5].rgctxDataDummy);
    }
    pNVar16 = (pQVar12->fields)._array;
    uStack_15 = 0;
    uStack_18 = pDVar11;
    uStack_19 = uVar13;
    NStack_20 = notificationType;
    uVar14 = 0;
    uStack_21 = uVar10;
    if (pNVar16 != (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)0x0) {
      uVar2 = (pQVar12->fields)._tail;
      if ((uint)pNVar16->max_length <= uVar2) {
        uStack_15 = 0;
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar7 = iRam_? != 0;
      uStack_18._0_4_ = SUB84(pDVar11,0);
      uStack_18._4_4_ = (undefined4)((ulonglong)pDVar11 >> 0x20);
      pNVar22 = pNVar16->vector + (int)uVar2;
      pNVar22->notificationType = notificationType;
      *(undefined4 *)&pNVar22->field_0x4 = 0;
      *(undefined4 *)&pNVar22->data = (undefined4)uStack_18;
      *(undefined4 *)((longlong)&pNVar22->data + 4) = uStack_18._4_4_;
      *(ulonglong *)&pNVar16->vector[(int)uVar2].startTime = CONCAT44(uVar13,uVar10);
      if (bVar7) {
        uVar2 = (uint)((ulonglong)&pNVar16->vector[(int)uVar2].data >> 0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pNVar16 = (pQVar12->fields)._array;
      uVar14 = uStack_15;
      if (pNVar16 != (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)0x0) {
        iVar23 = (pQVar12->fields)._tail + 1;
        iVar17 = 0;
        if (iVar23 != (int)pNVar16->max_length) {
          iVar17 = iVar23;
        }
        (pQVar12->fields)._tail = iVar17;
        piVar24 = &(pQVar12->fields)._size;
        *piVar24 = *piVar24 + 1;
        piVar24 = &(pQVar12->fields)._version;
        *piVar24 = *piVar24 + 1;
        return;
      }
    }
  }
  uStack_15 = uVar14;
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_ShowNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
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
  pNVar1 = (this->fields)._.objectPool;
  (this->fields).shouldSkipDequeueCallback = 1;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    NotificationObjectPool::NotificationObjectPool_ReturnAllExistingNotifications
              (pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields)._.objectPool;
    (this->fields).shouldSkipDequeueCallback = 0;
    if (pNVar1 != (NotificationObjectPool *)0x0) {
      this_00 = NotificationObjectPool::NotificationObjectPool_GetPanel
                          (pNVar1,notificationType,(MethodInfo *)0x0);
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
      if (this_00 != (Notification *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar2,(Transform *)(this->fields)._.contentHolderTransform,0,
                       (MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                        (pTVar2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(this_00->klass->vtable).Initialize.methodPtr)
                        (this_00,data,(this_00->klass->vtable).Initialize.method);
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
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* NotificationAreaSingleInstanceQueue() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue__ctor
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>
                        );
  pNVar2 = (NotificationAreaSingleInstanceQueue_NotificationQueueData__Array *)
           FUN_?(MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Queue__
                         ->klass->rgctx_data->rgctxDataDummy);
  iVar3 = iRam_?;
  (pQVar1->fields)._array = pNVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pQVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).enqueuedNotifications = pQVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).enqueuedNotifications >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
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

