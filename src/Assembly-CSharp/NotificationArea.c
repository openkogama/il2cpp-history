
/* IEnumerator AddNotification(Notification, Dictionary`2[System.Object,System.Object]) */

IEnumerator *
Assembly-CSharp.dll::NotificationArea::NotificationArea_AddNotification
          (NotificationArea *this,Notification *notification,
          Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationArea___AddNotification_d__4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__NotificationArea___AddNotification_d__4);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[3].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 3) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].klass = (IEnumerator__Class *)notification;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  pIVar1[2].monitor = (MonitorData *)data;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationArea::NotificationArea_CanInstantiateNotificationType
               (NotificationArea *this,NotificationType__Enum notificationType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Any<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<Notification,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationArea____c__DisplayClass5_0___CanInstantiateNotificationType_b__0_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationArea____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Notification_types___object_pool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__NotificationArea____c__DisplayClass5_0);
  if (object != (Object *)0x0) {
    *(NotificationType__Enum *)&object[1].klass = notificationType;
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
      pvVar1 = (obj->fields)._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      pcRam_? = pcVar2;
      cVar5 = (*pcRam_?)(pvVar1);
      if (cVar5 != '\0') {
        pNVar6 = (this->fields).objectPool;
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
        if (pNVar6 != (NotificationObjectPool *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pNVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pNVar6 = (this->fields).objectPool;
            if (pNVar6 != (NotificationObjectPool *)0x0) {
              bVar3 = NotificationObjectPool::NotificationObjectPool_CanInstantiateNotificationType
                                (pNVar6,*(NotificationType__Enum *)&object[1].klass,
                                 (MethodInfo *)0x0);
              return bVar3;
            }
            goto code_?;
          }
        }
        if ((this->fields).allowedNotifications != (List_1_Notification_ *)0x0) {
          source = (this->fields).allowedNotifications;
          this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<Notification,_bool>)
          ;
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_00,object,
                     MethodInfo__NotificationArea____c__DisplayClass5_0___CanInstantiateNotificationType_b__0_Notification_
                     ,(MethodInfo *)0x0);
          bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_5
                            ((IEnumerable_1_System_Object_ *)source,
                             (Func_2_Object_Boolean_ *)this_00,
                             bool_MethodInfo__System__Linq__Enumerable__Any<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                            );
          return bVar3;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Notification_types___object_pool,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationArea::NotificationArea_InstantiateNotification
               (NotificationArea *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Notification_MethodInfo__System__Linq__Enumerable__FirstOrDefault<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<Notification,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationArea____c__DisplayClass3_0___InstantiateNotification_b__0_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationArea____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Notification_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__NotificationArea____c__DisplayClass3_0);
  if (pOVar1 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(NotificationType__Enum *)&pOVar1[1].klass = notificationType;
  pNVar3 = (this->fields).objectPool;
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
  if (pNVar3 != (NotificationObjectPool *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pNVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pNVar3 = (this->fields).objectPool;
      if (pNVar3 == (NotificationObjectPool *)0x0) goto code_?;
      pIVar4 = (IEnumerator__Class *)
               NotificationObjectPool::NotificationObjectPool_GetPanel
                         (pNVar3,*(NotificationType__Enum *)&pOVar1[1].klass,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  source = (this->fields).allowedNotifications;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<Notification,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,pOVar1,
             MethodInfo__NotificationArea____c__DisplayClass3_0___InstantiateNotification_b__0_Notification_
             ,(MethodInfo *)0x0);
  pOVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_3
                     ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                      Notification_MethodInfo__System__Linq__Enumerable__FirstOrDefault<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                     );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = (IEnumerator__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     (pOVar1,
                      Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                     );
code_?:
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
  if (pIVar4 != (IEnumerator__Class *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((((Notification__Fields *)&(pIVar4->_0).name)->_)._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationArea___AddNotification_d__4);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      routine = (IEnumerator *)FUN_?(TypeInfo__NotificationArea___AddNotification_d__4);
      *(undefined4 *)&routine[1].klass = 0;
      routine[3].klass = (IEnumerator__Class *)this;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)(routine + 3) >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      iVar10 = iRam_?;
      routine[2].klass = pIVar4;
      if (iVar10 != 0) {
        uVar5 = (uint)((ulonglong)(routine + 2) >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar10 = iRam_?;
        } while (!bVar9);
      }
      routine[2].monitor = (MonitorData *)data;
      if (iVar10 != 0) {
        uVar5 = (uint)((ulonglong)&routine[2].monitor >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
  return;
}

