
/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_InstantiateNotification
               (NotificationsManager *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__Common__NotificationType);
    func_?(&StringLiteral_Could_not_find_a_notification_ar);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pNVar2 = (this->fields).notificationAreas;
  if (pNVar2 != (NotificationArea__Array *)0x0) {
    iVar3 = 0x10;
    do {
      if ((int)pNVar2->max_length <= (int)uVar1) {
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Could_not_find_a_notification_ar,pSVar4,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return;
      }
      pNVar2 = (this->fields).notificationAreas;
      if (pNVar2 == (NotificationArea__Array *)0x0) break;
      if (pNVar2->max_length <= uVar1) goto code_?;
      this_00 = *(NotificationArea **)((int)pNVar2->vector + iVar3 + -0x10);
      if (this_00 == (NotificationArea *)0x0) break;
      bVar5 = NotificationArea::NotificationArea_CanInstantiateNotificationType
                        (this_00,notificationType,(MethodInfo *)0x0);
      pNVar2 = (this->fields).notificationAreas;
      if (bVar5 != 0) {
        if (pNVar2 != (NotificationArea__Array *)0x0) {
          if (pNVar2->max_length <= uVar1) goto code_?;
          if (pNVar2->vector[uVar1] != (NotificationArea *)0x0) {
            func_?(4,pNVar2->vector[uVar1],notificationType,data);
            return;
          }
        }
        break;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while (pNVar2 != (NotificationArea__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_OnDestroy
               (NotificationsManager *this,MethodInfo *method)

{
  NotificationsManager_set_ActiveInstance((NotificationsManager *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_OnEnable
               (NotificationsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_activeInstance = this;
  func_?(TypeInfo__NotificationsManager->static_fields,this);
  x = TypeInfo__NotificationsManager->static_fields->_activeInstance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = 1;
    TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar1;
    return;
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar1;
  return;
}


/* NotificationsManager get_ActiveInstance() */

NotificationsManager *
Assembly-CSharp.dll::NotificationsManager::NotificationsManager_get_ActiveInstance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_activeInstance;
}


/* Boolean get_Initialized() */

bool Assembly-CSharp.dll::NotificationsManager::NotificationsManager_get_Initialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField;
}


/* Void set_ActiveInstance(NotificationsManager) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_set_ActiveInstance
               (NotificationsManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_activeInstance = value;
  func_?(TypeInfo__NotificationsManager->static_fields,value);
  x = TypeInfo__NotificationsManager->static_fields->_activeInstance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = 1;
    TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar1;
    return;
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = bVar1;
  return;
}


/* Void set_Initialized(Boolean) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_set_Initialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField = value;
  return;
}

