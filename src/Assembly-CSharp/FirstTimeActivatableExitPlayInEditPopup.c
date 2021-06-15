
/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPopup::
     FirstTimeActivatableExitPlayInEditPopup_OnDisable
               (FirstTimeActivatableExitPlayInEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsEventAllowedInMode
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
  }
  else {
    x = (this->fields)._.firstTimeEventMessage;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).setFirstTimeEventOnEnable = 1;
      return;
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPopup::
     FirstTimeActivatableExitPlayInEditPopup_OnEnable
               (FirstTimeActivatableExitPlayInEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.waitingForDelay != 0) {
    routine = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_ShowDelay
                        ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  if ((this->fields).setFirstTimeEventOnEnable != 0) {
    FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
              ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
    firstTimeEvent = (this->fields)._._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    (this->fields).setFirstTimeEventOnEnable = 0;
  }
  return;
}

