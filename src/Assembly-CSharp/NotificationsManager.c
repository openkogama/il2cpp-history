
/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_InstantiateNotification
               (NotificationsManager *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).notificationAreas;
  uVar2 = 0;
  if (pNVar1 != (NotificationArea__Array *)0x0) {
    iStack_3 = 0x10;
    do {
      NVar4 = notificationType;
      if ((int)pNVar1->max_length <= (int)uVar2) {
        piVar5 = (int *)func_?(TypeInfo__MV__Common__NotificationType,&notificationType);
        if (piVar5 != (int *)0x0) {
          pSVar6 = (String *)(**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
          pNVar7 = (NotificationType__Enum *)func_?(piVar5);
          notificationType = *pNVar7;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar6 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Could_not_find_a_notification_ar,pSVar6,
                              (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (pNVar1 == (NotificationArea__Array *)0x0) break;
      if (pNVar1->max_length <= uVar2) goto code_?;
      iVar8 = *(int *)((int)pNVar1->vector + iStack_3 + -0x10);
      if ((iVar8 == 0) || (iVar8 = *(int *)(iVar8 + 0xc), iVar8 == 0)) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (ScaleAnimationBase *)
                func_?(
                               TypeInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0
                               );
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_9);
      if (this_00 == (ScaleAnimationBase *)0x0) break;
      (this_00->fields)._._._._.m_CachedPtr = (void *)NVar4;
      pLVar10 = *(List_1_UnityEngine_Color32_ **)(iVar8 + 0x10);
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Predicate<Notification>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)this_00,
                 MethodInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0____m__0_Notification_
                 ,MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
      if (pLVar10 == (List_1_UnityEngine_Color32_ *)0x0) break;
      CVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__Find
                         (pLVar10,(Predicate_1_UnityEngine_Color32_ *)pUVar11,
                          MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)CVar12.rgba,(MethodInfo *)0x0);
      if (bVar13 != 0) {
code_?:
        if (((this->fields).notificationAreas != (NotificationArea__Array *)0x0) &&
           (iVar8 = func_?(uVar2), iVar8 != 0)) {
          func_?(4,iVar8,notificationType,data);
          return;
        }
        break;
      }
      pLVar10 = *(List_1_UnityEngine_Color32_ **)(iVar8 + 0x14);
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Predicate<Notification>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)this_00,
                 MethodInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0____m__1_Notification_
                 ,MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
      if (pLVar10 == (List_1_UnityEngine_Color32_ *)0x0) break;
      CVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__Find
                         (pLVar10,(Predicate_1_UnityEngine_Color32_ *)pUVar11,
                          MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      in_stack_9 = (MethodInfo *)0x0;
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)CVar12.rgba,(MethodInfo *)0x0);
      if (bVar13 != 0) goto code_?;
      uVar2 = uVar2 + 1;
      iStack_3 = iStack_3 + 4;
      pNVar1 = (this->fields).notificationAreas;
    } while (pNVar1 != (NotificationArea__Array *)0x0);
  }
  func_?(0);
code_?:
  uVar14 = func_?(0,0);
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_OnDestroy
               (NotificationsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField =
       (NotificationsManager *)0x0;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::NotificationsManager::NotificationsManager_OnEnable
               (NotificationsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField = this;
  return;
}


/* NotificationsManager get_ActiveInstance() */

NotificationsManager *
Assembly-CSharp.dll::NotificationsManager::NotificationsManager_get_ActiveInstance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField;
}

