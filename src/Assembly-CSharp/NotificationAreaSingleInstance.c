
/* Void InstantiateNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationAreaSingleInstance::
     NotificationAreaSingleInstance_InstantiateNotification
               (NotificationAreaSingleInstance *this,NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Notification_is_null);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.objectPool;
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    NotificationObjectPool::NotificationObjectPool_ReturnAllExistingNotifications
              (pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields)._.objectPool;
    if (pNVar1 != (NotificationObjectPool *)0x0) {
      this_00 = NotificationObjectPool::NotificationObjectPool_GetPanel
                          (pNVar1,notificationType,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Notification_is_null,(MethodInfo *)0x0);
        return;
      }
      if (this_00 != (Notification *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar3,(Transform *)(this->fields)._.contentHolderTransform,0,(MethodInfo *)0x0
                    );
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                      (pTVar3,(MethodInfo *)0x0);
            (*(code *)(this_00->klass->vtable).Initialize.method)
                      (this_00,data,(this_00->klass->vtable).Update.methodPtr);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

