
/* Void Awake() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_Awake
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__NotificationAreaSingleInstanceQueue__OnActiveInstancesChanged__);
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
                 MethodInfo__NotificationAreaSingleInstanceQueue__OnActiveInstancesChanged__,
                 (MethodInfo *)0x0);
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


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_InstantiateNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  uStack_1 = 0x12;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  this_01 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)data,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 != 0) {
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x12,data._0_3_);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class) {
      func_?(pOVar2,TypeInfo__System__Boolean);
      goto code_?;
    }
    pcVar4 = (char *)func_?(pOVar2);
    if (*pcVar4 != '\0') {
      NotificationAreaSingleInstanceQueue_ShowNotification
                (this,notificationType,this_01,(MethodInfo *)0x0);
      return;
    }
  }
  pNVar5 = (this->fields)._.objectPool;
  if (pNVar5 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar6 = (pNVar5->fields).ActiveInstances;
    if (pLVar6 != (List_1_Notification_ *)0x0) {
      if ((pLVar6->fields)._size < 1) {
        NotificationAreaSingleInstanceQueue_ShowNotification
                  (this,notificationType,this_01,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
                       );
        cRam_? = '\x01';
      }
      fStack_7 = 0.0;
      pDStack_8 = this_01;
      func_?(&pDStack_8,this_01);
      fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_00 = (this->fields).enqueuedNotifications;
      if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        item.data = pDStack_8;
        item.notificationType = notificationType;
        item.startTime = fStack_7;
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Enqueue
                  (this_00,item,
                   MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnActiveInstancesChanged() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_OnActiveInstancesChanged
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).shouldSkipDequeueCallback != 0) {
    return;
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar2 = (pNVar1->fields).ActiveInstances;
    if (pLVar2 != (List_1_Notification_ *)0x0) {
      if (0 < (pLVar2->fields)._size) {
        return;
      }
      pQVar3 = (this->fields).enqueuedNotifications;
      if (pQVar3 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        if ((pQVar3->fields)._size == 0) {
          return;
        }
        do {
          if ((pQVar3->fields)._size < 1) {
            return;
          }
          pQVar3 = (this->fields).enqueuedNotifications;
          if (pQVar3 == (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)
          break;
          pNVar4 = mscorlib.dll::System::Collections::Generic::
                   Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
                   Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Dequeue
                             ((NotificationAreaSingleInstanceQueue_NotificationQueueData *)
                              &stack0xffffffe4,pQVar3,
                              MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Dequeue__
                             );
          notificationType = pNVar4->notificationType;
          data = pNVar4->data;
          fVar5 = pNVar4->startTime;
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          if (fVar6 - fVar5 <= _UNK_?) {
            NotificationAreaSingleInstanceQueue_ShowNotification
                      (this,notificationType,(Dictionary_2_System_Object_System_Object_ *)data,
                       (MethodInfo *)0x0);
          }
          pQVar3 = (this->fields).enqueuedNotifications;
        } while (pQVar3 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0
                );
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void QueueNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_QueueNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
                   );
    cRam_? = '\x01';
  }
  pDStack_1 = data;
  fStack_2 = 0.0;
  func_?(&pDStack_1,data,notificationType);
  fStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).enqueuedNotifications;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    item.data = pDStack_1;
    item.notificationType =
         (int32_t)
         MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
    ;
    item.startTime = fStack_2;
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Enqueue
              (this_00,item,
               MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_ShowNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Notification_is_null);
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
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
        return;
      }
      if (this_00 != (Notification *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar3,(Transform *)(this->fields)._.contentHolderTransform,0,(MethodInfo *)0x0
                    );
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
            (*(this_00->klass->vtable).Initialize.methodPtr)
                      (this_00,data,(this_00->klass->vtable).Initialize.method);
            return;
          }
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                      (pTVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* NotificationAreaSingleInstanceQueue() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue__ctor
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>
                           );
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Queue__
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

