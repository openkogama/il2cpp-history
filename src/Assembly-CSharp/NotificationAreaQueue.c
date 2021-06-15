
/* Void Awake() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_Awake
               (NotificationAreaQueue *this,MethodInfo *method)

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
              (this_00,(Object *)this,MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__,
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


/* Void CreateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_CreateNotification
               (NotificationAreaQueue *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.objectPool;
  if (this_00 != (NotificationObjectPool *)0x0) {
    this_01 = NotificationObjectPool::NotificationObjectPool_GetPanel
                        (this_00,notificationType,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
      return;
    }
    if (this_01 != (Notification *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,(Transform *)(this->fields)._.contentHolderTransform,0,(MethodInfo *)0x0)
        ;
        (*(code *)(this_01->klass->vtable).Initialize.method)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  iStack_7 = 0;
  uStack_8 = 0;
  func_?();
  uStack_9 = 0xffffffff;
  pNVar10 = (this->fields)._.objectPool;
  piStack_11 = (int *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (pNVar10 != (NotificationObjectPool *)0x0) {
    piStack_11 = (int *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    if (cRam_? == '\0') {
      piStack_11 = (int *)&stack0xffffffb4;
      puStack_4 = &stack0xffffffb4;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pNVar10->fields).ActiveInstances;
    if (this_00 != (List_1_Notification_ *)0x0) {
      this_05 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<Notification>__get_Count__)
      ;
      if (pOVar12 == (Object *)0x0) {
        NotificationAreaQueue_CreateNotification(this,notificationType,data,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (this->fields).enqueuedNotifications;
      if (this_01 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
        pQVar13 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
                 Queue_1_System_Int32__GetEnumerator
                           (&QStack_14,(Queue_1_System_Int32_ *)this_01,
                            MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__GetEnumerator__
                           );
        uStack_8._0_4_ = pQVar13->q;
        uStack_8._4_4_ = pQVar13->idx;
        iStack_6 = pQVar13->ver;
        uStack_1 = 0;
        do {
          do {
            do {
              cVar15 = func_?();
              piVar16 = piStack_11;
              if (cVar15 == '\0') {
                *piStack_11 = 0x9e;
                goto code_?;
              }
              iVar17 = func_?();
              if (iVar17 == 0) goto code_?;
            } while (*(NotificationType__Enum *)(iVar17 + 8) != notificationType);
            this_05 = *(Dictionary_2_System_Object_System_Object_ **)(iVar17 + 0xc);
            uStack_18 = 1;
            key = (String *)func_?(TypeInfo__System__Byte,&uStack_18);
            if (this_05 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                *)this_05,key,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
          } while (bVar19 == 0);
          this_02 = *(Dictionary_2_System_Type_Pool_ **)(iVar17 + 0xc);
          uStack_18 = 1;
          pTVar20 = (Type *)func_?();
          if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
          pPVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              (this_02,pTVar20,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          uStack_22 = 1;
          pTVar20 = (Type *)func_?();
          if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          this_05 = data;
          pPVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)data,pTVar20,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          piVar16 = piStack_11;
        } while (pPVar21 != pPVar23);
        *piStack_11 = 0xb0;
code_?:
        uStack_1 = 0xffffffff;
        func_?();
        if (iStack_7 != 0) goto code_?;
        if (*piVar16 == 0xb0) goto code_?;
        this_03 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).enqueuedNotifications;
        this_04 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,(MethodInfo *)this_05);
        (this_04->fields)._._._._.m_CachedPtr = (void *)notificationType;
        (this_04->fields).state = (int32_t)data;
        if (this_03 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
          System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
          Queue_1_SmoothPhysicsMovement_Package__Enqueue
                    (this_03,(SmoothPhysicsMovement_Package *)this_04,
                     MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Enqueue_NotificationAreaQueue__EnqueuedNotification_
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnActiveInstancesChanged() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_OnActiveInstancesChanged
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
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
      this_01 = (this->fields).enqueuedNotifications;
      if (this_01 != (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)0x0) {
        pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                            MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__get_Count__
                           );
        if (pIVar3 == (IKogamaSetting *)0x0) {
          return;
        }
        this_02 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).enqueuedNotifications;
        if ((this_02 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) &&
           (pSVar4 = System.dll::System::Collections::Generic::
                     Queue`1[SmoothPhysicsMovement+Package]::
                     Queue_1_SmoothPhysicsMovement_Package__Dequeue
                               (this_02,
                                MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Dequeue__
                               ), pSVar4 != (SmoothPhysicsMovement_Package *)0x0)) {
          NotificationAreaQueue_CreateNotification
                    (this,(NotificationType__Enum)(pSVar4->fields).position.x,
                     (Dictionary_2_System_Object_System_Object_ *)(pSVar4->fields).position.y,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue_OnDestroy
               (NotificationAreaQueue *this,MethodInfo *method)

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
              (this_00,(Object *)this,MethodInfo__NotificationAreaQueue__OnActiveInstancesChanged__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
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


/* NotificationAreaQueue() */

void Assembly-CSharp.dll::NotificationAreaQueue::NotificationAreaQueue__ctor
               (NotificationAreaQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Queue<NotificationAreaQueue::EnqueuedNotification>__Queue__
            );
  (this->fields).enqueuedNotifications =
       (Queue_1_NotificationAreaQueue_EnqueuedNotification_ *)this_00;
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

