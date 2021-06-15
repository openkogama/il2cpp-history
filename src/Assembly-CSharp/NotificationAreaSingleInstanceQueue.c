
/* Void Awake() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_Awake
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    pAVar2 = (pNVar1->fields).OnActiveInstancesChanged;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__NotificationAreaSingleInstanceQueue__OnActiveInstancesChanged__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pNVar1->fields).OnActiveInstancesChanged = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_InstantiateNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0x12;
  key = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  data_00 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)data,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 != 0) {
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x12,data._0_3_);
    key_00 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data_00,key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class) {
      func_?(pPVar3,TypeInfo__System__Boolean);
      goto code_?;
    }
    pcVar4 = (char *)func_?(pPVar3);
    if (*pcVar4 != '\0') {
      NotificationAreaSingleInstanceQueue_ShowNotification
                (this,notificationType,data_00,(MethodInfo *)0x0);
      return;
    }
  }
  pNVar5 = (this->fields)._.objectPool;
  if (pNVar5 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pNVar5->fields).ActiveInstances;
    if (this_00 != (List_1_Notification_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<Notification>__get_Count__)
      ;
      if ((int)pOVar6 < 1) {
        NotificationAreaSingleInstanceQueue_ShowNotification
                  (this,notificationType,data_00,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_01 = (this->fields).enqueuedNotifications;
      if (this_01 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        item.y = (float)data_00;
        item.x = (float)notificationType;
        item.z = fVar7;
        System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
        Queue_1_UnityEngine_Vector3__Enqueue
                  ((Queue_1_UnityEngine_Vector3_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
                  );
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnActiveInstancesChanged() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_OnActiveInstancesChanged
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).shouldSkipDequeueCallback != 0) {
    return;
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pNVar1->fields).ActiveInstances;
    if (this_00 != (List_1_Notification_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<Notification>__get_Count__)
      ;
      if (0 < (int)pOVar2) {
        return;
      }
      pQVar3 = (this->fields).enqueuedNotifications;
      if (pQVar3 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                            MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__get_Count__
                           );
        if (pIVar4 == (IKogamaSetting *)0x0) {
          return;
        }
        pQVar3 = (this->fields).enqueuedNotifications;
        while (pQVar3 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)
        {
          pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                              MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__get_Count__
                             );
          if ((int)pIVar4 < 1) {
            return;
          }
          pQVar3 = (this->fields).enqueuedNotifications;
          if (pQVar3 == (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0)
          break;
          pVVar5 = System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
                   Queue_1_UnityEngine_Vector3__Dequeue
                             ((Vector3 *)&stack0xffffffe4,(Queue_1_UnityEngine_Vector3_ *)pQVar3,
                              MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Dequeue__
                             );
          data = pVVar5->y;
          fVar6 = pVVar5->z;
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          if (fVar7 - fVar6 <= _UNK_?) {
            NotificationAreaSingleInstanceQueue_ShowNotification
                      (this,NotificationType__Enum_None,
                       (Dictionary_2_System_Object_System_Object_ *)data,(MethodInfo *)0x0);
          }
          pQVar3 = (this->fields).enqueuedNotifications;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void QueueNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_QueueNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).enqueuedNotifications;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    item.y = (float)data;
    item.x = (float)
             MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
    ;
    item.z = fVar1;
    System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
    Queue_1_UnityEngine_Vector3__Enqueue
              ((Queue_1_UnityEngine_Vector3_ *)this_00,item,
               MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Enqueue_NotificationAreaSingleInstanceQueue__NotificationQueueData_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue_ShowNotification
               (NotificationAreaSingleInstanceQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
        return;
      }
      if (this_00 != (Notification *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields)._.contentHolderTransform,0,
                     (MethodInfo *)0x0);
          (*(code *)(this_00->klass->vtable).Initialize.method)
                    (this_00,data,(this_00->klass->vtable).Update.methodPtr);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* NotificationAreaSingleInstanceQueue() */

void Assembly-CSharp.dll::NotificationAreaSingleInstanceQueue::
     NotificationAreaSingleInstanceQueue__ctor
               (NotificationAreaSingleInstanceQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<NotificationAreaSingleInstanceQueue::NotificationQueueData>__Queue__
            );
  (this->fields).enqueuedNotifications = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

