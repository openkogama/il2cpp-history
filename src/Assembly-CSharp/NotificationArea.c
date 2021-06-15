
/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationArea::NotificationArea_CanInstantiateNotificationType
               (NotificationArea *this,NotificationType__Enum notificationType,MethodInfo *method)

{
  pNVar1 = (this->fields).objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)
              func_?(
                             TypeInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_2);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = (void *)notificationType;
      pLVar3 = (List_1_UnityEngine_Color32_ *)(pNVar1->fields).Instances;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Predicate<Notification>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this_00,
                 MethodInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0____m__0_Notification_
                 ,MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__);
      if (pLVar3 != (List_1_UnityEngine_Color32_ *)0x0) {
        CVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Find
                          (pLVar3,(Predicate_1_UnityEngine_Color32_ *)pUVar4,
                           MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                          );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)CVar5.rgba,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          pLVar3 = (List_1_UnityEngine_Color32_ *)(pNVar1->fields).ActiveInstances;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this_00,
                     MethodInfo__NotificationObjectPool___CanInstantiateNotificationType_c__AnonStorey0____m__1_Notification_
                     ,MethodInfo__System__Predicate<Notification>__Predicate_System__Object__void__)
          ;
          if (pLVar3 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
          CVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__Find
                            (pLVar3,(Predicate_1_UnityEngine_Color32_ *)pUVar4,
                             MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                            );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)CVar5.rgba,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationArea::NotificationArea_InstantiateNotification
               (NotificationArea *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).objectPool;
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
                  (this_02,(Transform *)(this->fields).contentHolderTransform,0,(MethodInfo *)0x0);
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

