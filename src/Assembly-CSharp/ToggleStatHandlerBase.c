
/* Void OnValidate() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_OnValidate
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Reset
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (this->fields).button = pBVar1;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Start
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  this_00 = (HoverCraftMotor *)(this->fields).button;
  if (this_00 != (HoverCraftMotor *)0x0) {
    this_01 = (UnityEvent *)
              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__ToggleStatHandlerBase__Toggle__,(MethodInfo *)0x0)
    ;
    if (this_01 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Toggle() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Toggle
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForToggleCallback == 0) {
    pTVar1 = (this->fields).toggleHandler;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).toggleHandler;
      (this->fields).waitingForToggleCallback = 1;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_,
                 MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                );
      if (pTVar1 == (ToggleHandler *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(pTVar1->klass->vtable).__unknown.method)(pTVar1);
    }
  }
  return;
}


/* Void ToggleCallback(Boolean) */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_ToggleCallback
               (ToggleStatHandlerBase *this,bool toggleState,MethodInfo *method)

{
  (this->fields).toggleState = toggleState;
  (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  (this->fields).waitingForToggleCallback = 0;
  return;
}


/* Void set_ToggleState(Boolean) */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
               (ToggleStatHandlerBase *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForToggleCallback != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
  }
  (this->fields).toggleState = value;
  (*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  return;
}

