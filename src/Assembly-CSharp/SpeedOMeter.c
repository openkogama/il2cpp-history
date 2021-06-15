
/* Void Awake() */

void Assembly-CSharp.dll::SpeedOMeter::SpeedOMeter_Awake(SpeedOMeter *this,MethodInfo *method)

{
  this_00 = (this->fields).speedGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Fade() */

void Assembly-CSharp.dll::SpeedOMeter::SpeedOMeter_Fade(SpeedOMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).speedGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    if (0.0 < fVar2) {
      fVar2 = (this->fields).currFade;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar3 = fVar3 + fVar2;
      (this->fields).currFade = fVar3;
      if (fVar3 <= (this->fields).fadeTime) {
        pCVar1 = (this->fields).speedGroup;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (1.0,0.0,fVar3,(MethodInfo *)0x0);
        if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar1,fVar2,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::SpeedOMeter::SpeedOMeter_Show(SpeedOMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).speedGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    if (fVar2 < _UNK_?) {
      fVar2 = (this->fields).currFade;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar3 = fVar3 + fVar2;
      (this->fields).currFade = fVar3;
      if (fVar3 <= (this->fields).fadeTime) {
        pCVar1 = (this->fields).speedGroup;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (0.0,1.0,fVar3,(MethodInfo *)0x0);
        if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar1,fVar2,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpeedOMeter::SpeedOMeter_Update(SpeedOMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar4 == (MVWorldObjectClientManager *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar5 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pPVar5 == (PrefabPool *)0x0) ||
     (pMVar6 = (MVLocalObjectController *)
               PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar5,(MethodInfo *)0x0),
     pMVar6 == (MVLocalObjectController *)0x0)) goto code_?;
  pMVar7 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                     (pMVar6,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    uStack_1 = CONCAT44(TypeInfo__MVGameControllerBase,&UNK_?);
    func_?();
  }
  pPVar5 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pPVar5 == (PrefabPool *)0x0) ||
       (pMVar6 = (MVLocalObjectController *)
                 PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar5,(MethodInfo *)0x0),
       pMVar6 == (MVLocalObjectController *)0x0)) ||
      (pMVar7 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                          (pMVar6,(MethodInfo *)0x0), pMVar7 == (MVWorldObjectClient *)0x0)) ||
     (this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pMVar7,(MethodInfo *)0x0),
     this_00 == (CelestialParam *)0x0)) goto code_?;
  x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                ((GameObject *)this_00,
                 MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pCVar9 = (this->fields).speedGroup;
    if (pCVar9 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar9,0.0,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (x == (UseInteractorHandler *)0x0) goto code_?;
  puVar10 = (ulonglong *)(*(code *)x->klass[1]._0.namespaze)(&stack0xffffffd4,x);
  uStack_1 = *puVar10;
  uStack_2 = (undefined4)puVar10[1];
  fVar11 = (float10)func_?(&uStack_1,0);
  fStack_12 = (float)fVar11;
  fStack_13 = (this->fields).curSpeed;
  fStack_14 = fStack_12 * _UNK_?;
  fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  method_00 = (MethodInfo *)0x0;
  b = fStack_14;
  t = fStack_12;
  fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                        (fStack_13,fStack_14,fStack_12,(MethodInfo *)0x0);
  fVar15 = _UNK_?;
  bVar8 = (this->fields).prevFading;
  (this->fields).curSpeed = fStack_13;
  if (fVar15 < fStack_13) {
    (this->fields).fading = 0;
    if (bVar8 != 0) {
      (this->fields).currFade = 0.0;
      (this->fields).prevFading = 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pCVar9 = (this->fields).speedGroup;
    if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
    fStack_13 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                          (pCVar9,(MethodInfo *)0x0);
    if (fStack_13 < _UNK_?) {
      fStack_13 = (this->fields).currFade;
      fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
      fStack_12 = fStack_12 + fStack_13;
      (this->fields).currFade = fStack_12;
      if (fStack_12 <= (this->fields).fadeTime) {
        pCVar9 = (this->fields).speedGroup;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          uStack_1 = CONCAT44(uStack_1._4_4_,TypeInfo__UnityEngine__Mathf);
          func_?();
        }
        uStack_1 = uStack_1 & 0xffffffff00000000;
        fVar15 = 0.0;
        goto code_?;
      }
    }
  }
  else {
    (this->fields).fading = 1;
    if (bVar8 != 1) {
      (this->fields).currFade = 0.0;
      (this->fields).prevFading = 1;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pCVar9 = (this->fields).speedGroup;
    if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
    fStack_13 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                          (pCVar9,(MethodInfo *)0x0);
    if (0.0 < fStack_13) {
      fStack_13 = (this->fields).currFade;
      fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
      fStack_12 = fStack_12 + fStack_13;
      (this->fields).currFade = fStack_12;
      if (fStack_12 <= (this->fields).fadeTime) {
        pCVar9 = (this->fields).speedGroup;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          uStack_1 = CONCAT44(uStack_1._4_4_,TypeInfo__UnityEngine__Mathf);
          func_?();
        }
        method_00 = (MethodInfo *)0x0;
        b = 0.0;
        fVar15 = 1.0;
        t = fStack_12;
code_?:
        fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(fVar15,b,t,method_00)
        ;
        if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar9,fStack_13,(MethodInfo *)0x0);
      }
    }
  }
  iStack_3 = (int)(this->fields).curSpeed;
  pTVar16 = (this->fields).speedText;
  uStack_1 = uStack_1 & 0xffffffff00000000;
  pSVar17 = (String *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar17 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar17,StringLiteral__km_h,(MethodInfo *)0x0);
  if (pTVar16 != (Text *)0x0) {
    (*(code *)(pTVar16->klass->vtable).set_text.method)(pTVar16,pSVar17);
    return;
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* SpeedOMeter() */

void Assembly-CSharp.dll::SpeedOMeter::SpeedOMeter__ctor(SpeedOMeter *this,MethodInfo *method)

{
  (this->fields).fadeTime = 2.0;
  (this->fields).prevFading = 1;
  (this->fields).fading = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

