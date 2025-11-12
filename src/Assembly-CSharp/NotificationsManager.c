
/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_InstantiateNotification
               (NotificationsManager *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_a_notification_ar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).notificationAreas;
  uVar2 = 0;
  if (pNVar1 != (NotificationArea__Array *)0x0) {
    lVar3 = 0x20;
    do {
      if ((int)pNVar1->max_length <= (int)uVar2) {
        EStack_4.klass = (Enum__Class *)TypeInfo__MV__Common__NotificationType;
        EStack_4.monitor = (MonitorData *)0xffffffffffffffff;
        NStack_5 = notificationType;
        pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Could_not_find_a_notification_ar,pSVar6,(MethodInfo *)0x0)
        ;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      if (pNVar1 == (NotificationArea__Array *)0x0) break;
      if ((uint)pNVar1->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pNVar8 = *(NotificationArea **)((longlong)pNVar1->vector + lVar3 + -0x20);
      if (pNVar8 == (NotificationArea *)0x0) break;
      bVar9 = NotificationArea::NotificationArea_CanInstantiateNotificationType
                        (pNVar8,notificationType,(MethodInfo *)0x0);
      pNVar1 = (this->fields).notificationAreas;
      if (bVar9 != 0) {
        if (pNVar1 != (NotificationArea__Array *)0x0) {
          if ((uint)pNVar1->max_length <= uVar2) goto code_?;
          pNVar8 = pNVar1->vector[(int)uVar2];
          if (pNVar8 != (NotificationArea *)0x0) {
            (*(pNVar8->klass->vtable).InstantiateNotification.methodPtr)
                      (pNVar8,(ulonglong)notificationType,data,
                       (pNVar8->klass->vtable).InstantiateNotification.method);
            return;
          }
        }
        break;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pNVar1 != (NotificationArea__Array *)0x0);
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_OnDestroy
               (NotificationsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_activeInstance = (NotificationsManager *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__NotificationsManager->static_fields >> 0xc);
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
  pNVar5 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
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
  if (pNVar5 == (NotificationsManager *)0x0) {
    bVar6 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar6 = (pNVar5->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar6;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_OnEnable
               (NotificationsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_activeInstance = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__NotificationsManager->static_fields >> 0xc);
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
  pNVar5 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
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
  if (pNVar5 == (NotificationsManager *)0x0) {
    bVar6 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar6 = (pNVar5->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar6;
  return;
}


/* NotificationsManager get_ActiveInstance() */

NotificationsManager *
Assembly-CSharp.dll::NotificationsManager::NotificationsManager_get_ActiveInstance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_activeInstance;
}


/* Boolean get_Initialized() */

bool Assembly-CSharp.dll::NotificationsManager::NotificationsManager_get_Initialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField;
}


/* Void set_ActiveInstance(NotificationsManager) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_set_ActiveInstance
               (NotificationsManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_activeInstance = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__NotificationsManager->static_fields >> 0xc);
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
  pNVar5 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
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
  if (pNVar5 == (NotificationsManager *)0x0) {
    bVar6 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar6 = (pNVar5->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar6;
  return;
}


/* Void set_Initialized(Boolean) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_set_Initialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = value;
  return;
}

