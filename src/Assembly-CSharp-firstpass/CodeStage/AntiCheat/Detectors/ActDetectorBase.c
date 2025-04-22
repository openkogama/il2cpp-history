
/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_DisposeInternal(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__ACTk__);
    func_?(&StringLiteral___self_destroying__other_instanc);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)instance,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral__ACTk__,pSVar3,
                            StringLiteral___self_destroying__other_instanc,(MethodInfo *)0x0);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)pSVar3,(Object_1 *)pGVar4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)this,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  if ((this->fields).detectionAction != (UnityAction *)0x0) {
    pUVar1 = (this->fields).detectionAction;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  if ((this->fields).detectionEventHasListener != 0) {
    this_00 = (this->fields).detectionEvent;
    if (this_00 == (UnityEvent *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pAVar3 = this->klass;
  if ((this->fields).autoDispose == 0) {
    (*(code *)(pAVar3->vtable).__unknown_1.method)(this,(pAVar3->vtable).__unknown_2.methodPtr);
    return;
  }
  (*(code *)(pAVar3->vtable).DisposeInternal.method)
            (this,(pAVar3->vtable).DetectorHasAdditionalCallbacks.methodPtr);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnDestroy(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                   );
    func_?(&
                    UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).__unknown_1.method)
            (this,(this->klass->vtable).__unknown_2.methodPtr);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (this_00,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                         );
      if (pOVar2 == (Object__Array *)0x0) goto code_?;
      if ((int)pOVar2->max_length < 3) goto code_?;
    }
    a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                  ((Object_1 *)this,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                       );
    if (pOVar2 != (Object__Array *)0x0) {
      if (1 < (int)pOVar2->max_length) {
        return;
      }
code_?:
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
           detectorsContainer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 == (GameObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                  ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer
           = pGVar1;
      func_?();
    }
  }
  if (((this->fields).autoStart != 0) && ((this->fields).started == 0)) {
    (*(code *)(this->klass->vtable).__unknown.method)();
  }
  return;
}

