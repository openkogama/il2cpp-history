
/* Void OnValidate() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_OnValidate
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    (*(code *)(this->klass->vtable).__unknown.method)
              (this,(this->klass->vtable).CurrentToggleState.methodPtr);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Reset
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (this->fields).button = pBVar1;
  func_?();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Start
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ToggleStatHandlerBase__Toggle__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).OnStartSetValue;
  if (pTVar1 == (ToggleStateHandlerOnStartSetValue *)0x0) {
    (*(code *)(this->klass->vtable).__unknown.method)
              (this,(this->klass->vtable).CurrentToggleState.methodPtr);
  }
  else {
    value = (*(pTVar1->fields)._._.invoke_impl)
                      ((pTVar1->fields)._._.method_code,(pTVar1->fields)._._.method);
    ToggleStatHandlerBase_set_ToggleState(this,value,(MethodInfo *)0x0);
  }
  pBVar2 = (this->fields).button;
  if (pBVar2 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar2->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__ToggleStatHandlerBase__Toggle__,(MethodInfo *)0x0)
    ;
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Toggle() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Toggle
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForToggleCallback == 0) {
    (*(code *)(this->klass->vtable).CurrentToggleState.method)(this,this->klass[1]._0.image);
    pTVar1 = (this->fields).toggleHandler;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).toggleHandler;
      (this->fields).waitingForToggleCallback = 1;
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_,
                 (MethodInfo *)0x0);
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
               (ToggleStatHandlerBase *this,bool newState,MethodInfo *method)

{
  (this->fields).toggleState = newState;
  (*(code *)(this->klass->vtable).__unknown.method)
            (this,(this->klass->vtable).CurrentToggleState.methodPtr);
  (this->fields).waitingForToggleCallback = 0;
  return;
}


/* Image get_CurrentImage() */

Image * Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_get_CurrentImage
                  (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if ((this->fields).usingImageComponent != 0) {
    return (this->fields).imageComponent;
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) {
    uVar2 = func_?(auStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    pIVar5 = (Image *)(*pcVar4)();
    return pIVar5;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar5 = (Image *)(pBVar1->fields)._.m_TargetGraphic;
  if (pIVar5 != (Image *)0x0) {
    bVar6 = (TypeInfo__UnityEngine__UI__Image->_1).naturalAligment;
    if ((bVar6 <= (pIVar5->klass->_1).naturalAligment) &&
       ((Image__Class *)(pIVar5->klass->_1).typeHierarchy[bVar6 - 1] ==
        TypeInfo__UnityEngine__UI__Image)) {
      return pIVar5;
    }
    return (Image *)0x0;
  }
  return (Image *)0x0;
}


/* Void set_ToggleState(Boolean) */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
               (ToggleStatHandlerBase *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Overriding_toggle_state_while_wa);
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForToggleCallback != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
  }
  (this->fields).toggleState = value;
  (*(code *)(this->klass->vtable).__unknown.method)
            (this,(this->klass->vtable).CurrentToggleState.methodPtr);
  return;
}

