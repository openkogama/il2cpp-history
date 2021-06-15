
/* Void AddToActiveInstances(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_AddToActiveInstances
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ActiveInstances;
  if (this_00 != (List_1_Notification_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)notification,
               MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
    this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnActiveInstancesChanged;
    if (this_01 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_Awake
               (NotificationObjectPool *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).Elements;
  puStack_7 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?(0);
    func_?(unaff_ESI,0,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                      MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__GetEnumerator__
                     );
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
  CStack_6.monitor = (MonitorData *)pLVar9->next;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
  CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
  uStack_1 = 0;
  do {
    cVar11 = func_?(&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__MoveNext__
                           );
    if (cVar11 == '\0') {
      *puStack_7 = 0x8b;
      uStack_1 = 0xffffffff;
      func_?(&CStack_6,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__Dispose__
                     );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pOStack_12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__get_Current__
                           );
    iStack_13 = 0;
    while( true ) {
      if (pOStack_12 == (Object *)0x0) goto code_?;
      if ((int)pOStack_12[1].monitor <= iStack_13) break;
      original = pOStack_12[1].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)original,
                             Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                            );
      if (unaff_ESI == (XpBoostParticlePreviewer *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)unaff_ESI,in_stack_14);
      in_stack_14 = (MethodInfo *)&UNK_?;
      p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                    ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                (this_02,p,in_stack_15);
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)unaff_ESI,(MethodInfo *)0x0);
      if (this_03 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_03,0,(MethodInfo *)0x0);
      (unaff_ESI->fields).previewCam = (Camera *)this;
      this_01 = (this->fields).Instances;
      if (this_01 == (List_1_Notification_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)unaff_ESI,
                 MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
      iStack_13 = iStack_13 + 1;
    }
  } while( true );
}


/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationObjectPool::
     NotificationObjectPool_CanInstantiateNotificationType
               (NotificationObjectPool *this,NotificationType__Enum notificationType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)notificationType;
    pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).Instances;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Predicate<Notification>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0____m__0_Notification_
               ,MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
    if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
      CVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Find
                        (pLVar1,(Predicate_1_UnityEngine_Color32_ *)pUVar2,
                         MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                        );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)CVar3.rgba,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).ActiveInstances;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this_00,
                   MethodInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0____m__1_Notification_
                   ,MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
        if (pLVar1 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        CVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Find
                          (pLVar1,(Predicate_1_UnityEngine_Color32_ *)pUVar2,
                           MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                          );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)CVar3.rgba,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Notification CreateTempPanel(NotificationType) */

Notification *
Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_CreateTempPanel
          (NotificationObjectPool *this,NotificationType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationObjectPool___CreateTempPanel_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)type;
    source = (this->fields).Elements;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<NotificationObjectPoolElement,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__NotificationObjectPool___CreateTempPanel_c__AnonStorey2____m__0_NotificationObjectPoolElement_
               ,
               MethodInfo__System__Func<NotificationObjectPoolElement,_bool>__Func_System__Object__void__
              );
    KVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Single_3
                      ((IEnumerable_1_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)source,
                       (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_
                        *)this_01,
                       NotificationObjectPoolElement_MethodInfo__System__Linq__Enumerable__First<NotificationObjectPoolElement>_System__Collections__Generic__IEnumerable<NotificationObjectPoolElement>__System__Func<NotificationObjectPoolElement,_bool>_
                      );
    if (KVar1.key != (Object *)0x0) {
      original = KVar1.key[1].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      notification = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)original,
                                Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                               );
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)notification,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        type = (NotificationType__Enum)(this_00->fields)._._._._.m_CachedPtr;
        arg1 = (Object *)func_?(TypeInfo__MV__Common__NotificationType,&type);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_Couldn_t_find_temp_panel_type_,arg1,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return (Notification *)0x0;
      }
      if (notification != (XpBoostParticlePreviewer *)0x0) {
        (notification->fields).previewCam = (Camera *)this;
        NotificationObjectPool_AddToActiveInstances
                  (this,(Notification *)notification,(MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)notification,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,1,(MethodInfo *)0x0);
          return (Notification *)notification;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pNVar4 = (Notification *)(*pcVar3)();
  return pNVar4;
}


/* Notification GetPanel(NotificationType) */

Notification *
Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_GetPanel
          (NotificationObjectPool *this,NotificationType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationObjectPool___GetPanel_c__AnonStorey1;
  this_03 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)method_00);
  if (this_03 != (ScaleAnimationBase *)0x0) {
    (this_03->fields)._._._._.m_CachedPtr = (void *)type;
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).Instances;
    type = func_?(TypeInfo__System__Predicate<Notification>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )type,(Object *)this_03,
               MethodInfo__NotificationObjectPool___GetPanel_c__AnonStorey1____m__0_Notification_,
               MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      CVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Find
                        (this_00,(Predicate_1_UnityEngine_Color32_ *)type,
                         MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                        );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)CVar1.rgba,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        type = (NotificationType__Enum)&type;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          type = (NotificationType__Enum)TypeInfo__System__String;
          func_?();
        }
        type = NotificationType__Enum_None;
        message = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_Could_not_find_notification_type,arg1,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        method = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)message,(MethodInfo *)0x0);
        method = (MethodInfo *)this;
        type = (NotificationType__Enum)&UNK_?;
        pNVar3 = NotificationObjectPool_CreateTempPanel
                           (this,(NotificationType__Enum)(this_03->fields)._._._._.m_CachedPtr,
                            (MethodInfo *)0x0);
        return pNVar3;
      }
      type = (NotificationType__Enum)TypeInfo__System__Predicate<Notification>;
      this_01 = (List_1_VoxelHit_ *)(this->fields).Instances;
      type = func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)type,(Object *)this_03,
                 MethodInfo__NotificationObjectPool___GetPanel_c__AnonStorey1____m__1_Notification_,
                 MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
      if (this_01 != (List_1_VoxelHit_ *)0x0) {
        index = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                List_1_VoxelHit__FindIndex
                          (this_01,(Predicate_1_VoxelHit_ *)type,
                           MethodInfo__System__Collections__Generic__List<Notification>__FindIndex_System__Predicate<Notification>_
                          );
        pLVar4 = (this->fields).Instances;
        if (pLVar4 != (List_1_Notification_ *)0x0) {
          pNVar3 = (Notification *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_
                             );
          if (pNVar3 != (Notification *)0x0) {
            (pNVar3->fields).pool = this;
            this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pNVar3,(MethodInfo *)0x0);
            if (this_04 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_04,1,(MethodInfo *)0x0);
              pLVar4 = (this->fields).Instances;
              if (pLVar4 != (List_1_Notification_ *)0x0) {
                notification = (Notification *)
                               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               EventSystems::IEventSystemHandler]::
                               List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                          pLVar4,index,
                                          MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_
                                         );
                NotificationObjectPool_AddToActiveInstances(this,notification,(MethodInfo *)0x0);
                this_02 = (List_1_MVPlayer_ *)(this->fields).Instances;
                if (this_02 != (List_1_MVPlayer_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
                  List_1_MVPlayer__RemoveAt
                            (this_02,index,
                             MethodInfo__System__Collections__Generic__List<Notification>__RemoveAt_int_
                            );
                  return pNVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pNVar3 = (Notification *)(*pcVar5)();
  return pNVar3;
}


/* Void RemoveFromActiveInstances(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_RemoveFromActiveInstances
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).ActiveInstances;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_;
    item.rgba = (int32_t)notification;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__Remove(this_00,item,unaff_ESI);
    this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnActiveInstancesChanged;
    if (this_01 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Return(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_Return
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (notification != (Notification *)0x0) {
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)notification,(MethodInfo *)0x0);
    if (this_03 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_03,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        this = (NotificationObjectPool *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)notification,(MethodInfo *)0x0);
        if (this == (NotificationObjectPool *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this,0,(MethodInfo *)0x0);
      }
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)notification,(MethodInfo *)0x0);
      p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                    ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_04 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                  (this_04,p,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).ActiveInstances;
        if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
          item._4_4_ = 
          MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_;
          item.rgba = (int32_t)notification;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
          List_1_UnityEngine_Color32__Remove(this_00,item,in_stack_2);
          this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnActiveInstancesChanged;
          if (this_01 != (JumpState_OnWallJumpDelegate *)0x0) {
            JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                      (this_01,(MethodInfo *)0x0);
          }
          this_02 = (this->fields).Instances;
          if (this_02 != (List_1_Notification_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)notification,
                       MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReturnAllExistingNotifications() */

void Assembly-CSharp.dll::NotificationObjectPool::
     NotificationObjectPool_ReturnAllExistingNotifications
               (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ActiveInstances;
  if (pLVar1 != (List_1_Notification_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                       MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
    while( true ) {
      index = (Object *)((int)&index[-1].monitor + 3);
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).ActiveInstances;
      if (pLVar1 == (List_1_Notification_ *)0x0) break;
      notification = (Notification *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_
                               );
      NotificationObjectPool_Return(this,notification,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* NotificationObjectPool() */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool__ctor
               (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<NotificationObjectPoolElement>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,
             MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__List__);
  (this->fields).Elements = (List_1_NotificationObjectPoolElement_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Notification>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Notification>__List__);
  (this->fields).Instances = (List_1_Notification_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Notification>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<Notification>__List__);
  (this->fields).ActiveInstances = (List_1_Notification_ *)pLVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_ActivateInstancesCount() */

int32_t Assembly-CSharp.dll::NotificationObjectPool::
        NotificationObjectPool_get_ActivateInstancesCount
                  (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ActiveInstances;
  if (this_00 != (List_1_Notification_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

