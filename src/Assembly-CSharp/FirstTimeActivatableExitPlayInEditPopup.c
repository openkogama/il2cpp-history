
/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPopup::
     FirstTimeActivatableExitPlayInEditPopup_OnDisable
               (FirstTimeActivatableExitPlayInEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsEventAllowedInMode
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
  }
  else {
    x = (this->fields)._.firstTimeEventMessage;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
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
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnEnable
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if ((this->fields).setFirstTimeEventOnEnable != 0) {
    FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
              ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
    (this->fields).setFirstTimeEventOnEnable = 0;
  }
  return;
}

