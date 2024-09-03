
/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationArea::NotificationArea_CanInstantiateNotificationType
               (NotificationArea *this,NotificationType__Enum notificationType,MethodInfo *method)

{
  pNVar1 = (this->fields).objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      in_stack_2 = &TypeInfo__System__Predicate<Notification>;
      func_?();
      func_?(&
                      MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
                     );
      func_?(&
                      MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                     );
      func_?(&TypeInfo__NotificationObjectPool____c__DisplayClass6_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__NotificationObjectPool____c__DisplayClass6_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_2);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)notificationType;
      pLVar3 = (pNVar1->fields).Instances;
      pPVar4 = (Predicate_1_Object_ *)func_?(TypeInfo__System__Predicate<Notification>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (pPVar4,value,
                 MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
                 ,(MethodInfo *)0x0);
      if (pLVar3 != (List_1_Notification_ *)0x0) {
        pOVar5 = (Object_1 *)
                 mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                 List_1_System_UInt32__Find
                           ((List_1_System_UInt32_ *)pLVar3,(Predicate_1_UInt32_ *)pPVar4,
                            MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          (pOVar5,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          pLVar3 = (pNVar1->fields).ActiveInstances;
          pPVar4 = (Predicate_1_Object_ *)func_?();
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (pPVar4,value,
                     MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                     ,(MethodInfo *)0x0);
          if (pLVar3 == (List_1_Notification_ *)0x0) goto code_?;
          pOVar5 = (Object_1 *)
                   mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                   List_1_System_UInt32__Find
                             ((List_1_System_UInt32_ *)pLVar3,(Predicate_1_UInt32_ *)pPVar4,
                              MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                             );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            (pOVar5,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
code_?:
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Notification_is_null);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).objectPool;
  if (this_00 != (NotificationObjectPool *)0x0) {
    this_01 = NotificationObjectPool::NotificationObjectPool_GetPanel
                        (this_00,notificationType,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
      return;
    }
    if (this_01 != (Notification *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields).contentHolderTransform,0,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar2,(MethodInfo *)0x0);
          pNStack3 = this_01;
          (*(code *)(this_01->klass->vtable).Initialize.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

