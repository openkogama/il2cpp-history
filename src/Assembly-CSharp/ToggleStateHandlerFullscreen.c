
/* Boolean CurrentToggleState() */

bool Assembly-CSharp.dll::ToggleStateHandlerFullscreen::
     ToggleStateHandlerFullscreen_CurrentToggleState
               (ToggleStateHandlerFullscreen *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = (this->fields)._._.toggleState;
  if (TypeInfo__FullScreenController->static_fields->fullScreen != bVar1) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FullScreenController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              ((ToggleStatHandlerBase *)this,
               TypeInfo__FullScreenController->static_fields->fullScreen,(MethodInfo *)0x0);
    bVar1 = (this->fields)._._.toggleState;
  }
  return bVar1;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ToggleStateHandlerFullscreen::ToggleStateHandlerFullscreen_OnPointerDown
               (ToggleStateHandlerFullscreen *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.waitingForToggleCallback == 0) {
    cVar1 = (*(this->klass->vtable).CurrentToggleState.methodPtr)
                      (this,(this->klass->vtable).CurrentToggleState.method);
    pTVar2 = (this->fields)._._.toggleHandler;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar2 != (ToggleHandler *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = (this->fields)._._.toggleHandler;
        (this->fields)._._.waitingForToggleCallback = 1;
        uVar3 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
        FUN_?(uVar3,this,MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_);
        if (pTVar2 == (ToggleHandler *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(pTVar2->klass->vtable).__unknown.methodPtr)
                  (pTVar2,(ulonglong)(cVar1 == '\0'),uVar3,(pTVar2->klass->vtable).__unknown.method)
        ;
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ToggleStateHandlerFullscreen::ToggleStateHandlerFullscreen_Start
               (ToggleStateHandlerFullscreen *this,MethodInfo *method)

{
  if ((this->fields)._._.OnStartSetValue == (ToggleStateHandlerOnStartSetValue *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).UpdateToggleState.methodPtr)
              (this,(this->klass->vtable).UpdateToggleState.method);
    return;
  }
  pTVar1 = (this->fields)._._.OnStartSetValue;
  if (pTVar1 != (ToggleStateHandlerOnStartSetValue *)0x0) {
    bVar2 = (*(pTVar1->fields)._._.invoke_impl)
                      ((pTVar1->fields)._._.method_code,(pTVar1->fields)._._.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,bVar2,0);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Overriding_toggle_state_while_wa);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields)._._.waitingForToggleCallback != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
    }
    pTVar3 = this->klass;
    (this->fields)._._.toggleState = bVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar3->vtable).UpdateToggleState.methodPtr)(this,(pTVar3->vtable).UpdateToggleState.method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

