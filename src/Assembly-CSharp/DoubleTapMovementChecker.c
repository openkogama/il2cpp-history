
/* Void FrameUpdate() */

void Assembly-CSharp.dll::DoubleTapMovementChecker::DoubleTapMovementChecker_FrameUpdate
               (DoubleTapMovementChecker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KVar1 = (this->fields).lastMovement;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar1,(MethodInfo *)0x0);
  if ((bVar2 != 0) &&
     (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0), fVar3 - (this->fields).timer < _UNK_?)) {
    (this->fields).doubleTap = 1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).timer = fVar3;
    return;
  }
  if ((this->fields).doubleTap == 0) {
    pKVar4 = (this->fields).movementControls;
    uVar5 = 0;
    if (pKVar4 == (KogamaControls__Enum__Array *)0x0) {
code_?:
      func_?(0);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pKVar8 = pKVar4->vector;
    for (; (int)uVar5 < (int)pKVar4->max_length; uVar5 = uVar5 + 1) {
      if (pKVar4->max_length <= uVar5) goto code_?;
      KVar1 = *pKVar8;
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        (this->fields).lastMovement = KVar1;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
        (this->fields).timer = fVar3;
        return;
      }
      pKVar8 = pKVar8 + 1;
    }
  }
  else {
    KVar1 = (this->fields).lastMovement;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).doubleTap = 0;
      uVar5 = 0;
      pKVar4 = (this->fields).movementControls;
      if (pKVar4 == (KogamaControls__Enum__Array *)0x0) goto code_?;
      pKVar8 = pKVar4->vector;
      for (; (int)uVar5 < (int)pKVar4->max_length; uVar5 = uVar5 + 1) {
        if (pKVar4->max_length <= uVar5) goto code_?;
        KVar1 = *pKVar8;
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          (this->fields).lastMovement = KVar1;
          (this->fields).doubleTap = 1;
          return;
        }
        pKVar8 = pKVar8 + 1;
      }
    }
  }
  return;
}


/* DoubleTapMovementChecker() */

void Assembly-CSharp.dll::DoubleTapMovementChecker::DoubleTapMovementChecker__ctor
               (DoubleTapMovementChecker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  array = (KogamaControls__Enum__Array *)func_?(TypeInfo__KogamaControls,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__field_EF3889166B5BE0E93965516E181CBA6F61F91F85_Field,(MethodInfo *)0x0
            );
  (this->fields).movementControls = array;
  return;
}

