
/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_DisposeInternal(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(this,0);
  return;
}


/* Boolean Init(ActDetectorBase, String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_Init
               (ActDetectorBase *this,ActDetectorBase *instance,String *detectorName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)instance,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)instance,(Object_1 *)this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (instance == (ActDetectorBase *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        bVar1 = (*pcVar2)();
        return bVar1;
      }
      if ((instance->fields).keepAlive != 0) {
        pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral__ACTk__,pSVar3,
                            StringLiteral___self_destroying__other_instanc,(MethodInfo *)0x0);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                  ((Object *)pSVar3,(Object_1 *)pGVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)this,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
            ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  return 1;
}


/* Void OnApplicationQuit() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnApplicationQuit(ActDetectorBase *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).DisposeInternal.method)
            (this,(this->klass->vtable).DetectorHasAdditionalCallbacks.methodPtr);
  return;
}


/* Void OnCheatingDetected() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnCheatingDetected(ActDetectorBase *this,MethodInfo *method)

{
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).detectionAction;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    Assembly-CSharp.dll::AvatarMotor+OnActiveBounceDelegate::
    AvatarMotor_OnActiveBounceDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  if ((this->fields).detectionEventHasListener != 0) {
    this_01 = (this->fields).detectionEvent;
    if (this_01 == (UnityEvent *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
              (this_01,(MethodInfo *)0x0);
  }
  pAVar2 = this->klass;
  if ((this->fields).autoDispose == 0) {
    (*(code *)(pAVar2->vtable).__unknown_1.method)(this,(pAVar2->vtable).__unknown_2.methodPtr);
    return;
  }
  (*(code *)(pAVar2->vtable).DisposeInternal.method)
            (this,(pAVar2->vtable).DetectorHasAdditionalCallbacks.methodPtr);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnDestroy(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).__unknown_1.method)
            (this,(this->klass->vtable).__unknown_2.methodPtr);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (this_00,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)this,
                          UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                         );
      if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
      if ((int)pUVar2->max_length < 3) goto code_?;
    }
    a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                  ((Object_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this,
                        CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                       );
    if (pUVar2 != (UseInteratorVisualization__Array *)0x0) {
      if (1 < (int)pUVar2->max_length) {
        return;
      }
code_?:
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnDisable(ActDetectorBase *this,MethodInfo *method)

{
  if ((this->fields).started != 0) {
    (*(code *)(this->klass->vtable).__unknown_2.method)
              (this,(this->klass->vtable).__unknown_3.methodPtr);
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnEnable(ActDetectorBase *this,MethodInfo *method)

{
  if ((this->fields).started != 0) {
    if ((((this->fields).detectionEventHasListener == 0) &&
        ((this->fields).detectionAction == (UnityAction *)0x0)) &&
       (cVar1 = (*(code *)(this->klass->vtable).DetectorHasAdditionalCallbacks.method)
                          (this,(this->klass->vtable).OnCheatingDetected.methodPtr), cVar1 == '\0'))
    {
      return;
    }
    (*(code *)(this->klass->vtable).__unknown_3.method)(this,this->klass[1]._0.image);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_Start(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
           detectorsContainer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 == (GameObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                  ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer
           = pGVar1;
    }
  }
  if (((this->fields).autoStart != 0) && ((this->fields).started == 0)) {
    pIStack4 = (this->klass->vtable).__unknown_1.methodPtr;
    pAStack5 = this;
    (*(code *)(this->klass->vtable).__unknown.method)();
  }
  return;
}

