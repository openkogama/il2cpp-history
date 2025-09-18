
/* IEnumerator AddNotification(Notification, Dictionary`2[System.Object,System.Object]) */

IEnumerator *
Assembly-CSharp.dll::NotificationArea::NotificationArea_AddNotification
          (NotificationArea *this,Notification *notification,
          Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationArea___AddNotification_d__4);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationArea___AddNotification_d__4;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[3].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 3,this);
  value[2].klass = (Object__Class *)notification;
  func_?(value + 2,notification);
  value[2].monitor = (MonitorData *)data;
  func_?(&value[2].monitor,data);
  return (IEnumerator *)value;
}


/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationArea::NotificationArea_CanInstantiateNotificationType
               (NotificationArea *this,NotificationType__Enum notificationType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Any<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                   );
    func_?(&TypeInfo__System__Func<Notification,_bool>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__NotificationArea____c__DisplayClass5_0___CanInstantiateNotificationType_b__0_Notification_
                   );
    func_?(&TypeInfo__NotificationArea____c__DisplayClass5_0);
    func_?(&StringLiteral_Notification_types___object_pool);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationArea____c__DisplayClass5_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)notificationType;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 0;
      }
      pNVar3 = (this->fields).objectPool;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pNVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((this->fields).allowedNotifications == (List_1_Notification_ *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Notification_types___object_pool,(MethodInfo *)0x0);
          return 0;
        }
        pLVar4 = (this->fields).allowedNotifications;
        this_01 = (Func_2_Object_Boolean_ *)func_?();
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,pOVar1,
                   MethodInfo__NotificationArea____c__DisplayClass5_0___CanInstantiateNotificationType_b__0_Notification_
                   ,(MethodInfo *)0x0);
        bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_5
                          ((IEnumerable_1_System_Object_ *)pLVar4,this_01,
                           bool_MethodInfo__System__Linq__Enumerable__Any<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                          );
        return bVar2;
      }
      pNVar3 = (this->fields).objectPool;
      pOVar5 = pOVar1[1].klass;
      if (pNVar3 != (NotificationObjectPool *)0x0) {
        notificationType = unaff_EDI;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          notificationType = (NotificationType__Enum)&TypeInfo__System__Predicate<Notification>;
          func_?();
          func_?();
          func_?();
          func_?(&TypeInfo__NotificationObjectPool____c__DisplayClass6_0);
          cRam_? = '\x01';
        }
        pOVar1 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)notificationType);
        if (pOVar1 != (Object *)0x0) {
          pOVar1[1].klass = pOVar5;
          pLVar4 = (pNVar3->fields).Instances;
          pPVar6 = (Predicate_1_Object_ *)func_?();
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (pPVar6,pOVar1,
                     MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
                     ,(MethodInfo *)0x0);
          if (pLVar4 != (List_1_Notification_ *)0x0) {
            pOVar7 = (Object_1 *)
                     mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                     List_1_System_UInt32__Find
                               ((List_1_System_UInt32_ *)pLVar4,(Predicate_1_UInt32_ *)pPVar6,
                                MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                               );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                              (pOVar7,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              pLVar4 = (pNVar3->fields).ActiveInstances;
              pPVar6 = (Predicate_1_Object_ *)func_?();
              mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                        (pPVar6,pOVar1,
                         MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                         ,(MethodInfo *)0x0);
              if (pLVar4 == (List_1_Notification_ *)0x0) goto code_?;
              pOVar7 = (Object_1 *)
                       mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                       List_1_System_UInt32__Find
                                 ((List_1_System_UInt32_ *)pLVar4,(Predicate_1_UInt32_ *)pPVar6,
                                  MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                                 );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                (pOVar7,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar2 = (*pcVar8)();
  return bVar2;
}


/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationArea::NotificationArea_InstantiateNotification
               (NotificationArea *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    Notification_MethodInfo__System__Linq__Enumerable__FirstOrDefault<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                   );
    func_?(&TypeInfo__System__Func<Notification,_bool>);
    func_?(&
                    Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__NotificationArea____c__DisplayClass3_0___InstantiateNotification_b__0_Notification_
                   );
    func_?(&TypeInfo__NotificationArea____c__DisplayClass3_0);
    func_?(&StringLiteral_Notification_is_null);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__NotificationArea____c__DisplayClass3_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)notificationType;
    pNVar2 = (this->fields).objectPool;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pNVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      source = (this->fields).allowedNotifications;
      this_00 = (Func_2_Object_Boolean_ *)func_?();
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,pOVar1,
                 MethodInfo__NotificationArea____c__DisplayClass3_0___InstantiateNotification_b__0_Notification_
                 ,(MethodInfo *)0x0);
      pOVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_3
                         ((IEnumerable_1_System_Object_ *)source,this_00,
                          Notification_MethodInfo__System__Linq__Enumerable__FirstOrDefault<Notification>_System__Collections__Generic__IEnumerable<Notification>__System__Func<Notification,_bool>_
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (NotificationArea *)
             Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_;
      x = (Object__Class *)
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                    (pOVar1,
                     Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                    );
    }
    else {
      pNVar2 = (this->fields).objectPool;
      if (pNVar2 == (NotificationObjectPool *)0x0) goto code_?;
      x = (Object__Class *)
          NotificationObjectPool::NotificationObjectPool_GetPanel
                    (pNVar2,(NotificationType__Enum)pOVar1[1].klass,(MethodInfo *)0x0);
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__NotificationArea___AddNotification_d__4;
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pOVar1[1].klass = (Object__Class *)0x0;
      pOVar1[3].klass = (Object__Class *)this;
      func_?();
      pOVar1[2].klass = x;
      func_?();
      pOVar1[2].monitor = (MonitorData *)x;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)pOVar1,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

