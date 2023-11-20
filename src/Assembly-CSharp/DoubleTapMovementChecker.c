
/* Void FrameUpdate() */

void Assembly-CSharp.dll::DoubleTapMovementChecker::DoubleTapMovementChecker_FrameUpdate
               (DoubleTapMovementChecker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  KVar1 = (this->fields).lastMovement;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KVar1,KeyState__Enum_Down,(MethodInfo *)0x0);
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
      func_?();
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pKVar7 = pKVar4->vector;
    for (; (int)uVar5 < (int)pKVar4->max_length; uVar5 = uVar5 + 1) {
      if (pKVar4->max_length <= uVar5) goto code_?;
      KVar1 = *pKVar7;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pKVar4 = (KogamaControls__Enum__Array *)0x0;
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KVar1,KeyState__Enum_Down,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        (this->fields).lastMovement = KVar1;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
        (this->fields).timer = fVar3;
        return;
      }
      pKVar7 = pKVar7 + 1;
    }
  }
  else {
    KVar1 = (this->fields).lastMovement;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVInputWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KVar1,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pKVar4 = (this->fields).movementControls;
      uVar5 = 0;
      (this->fields).doubleTap = 0;
      if (pKVar4 == (KogamaControls__Enum__Array *)0x0) goto code_?;
      pKVar7 = pKVar4->vector;
      for (; (int)uVar5 < (int)pKVar4->max_length; uVar5 = uVar5 + 1) {
        if (pKVar4->max_length <= uVar5) goto code_?;
        KVar1 = *pKVar7;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVInputWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        pKVar4 = (KogamaControls__Enum__Array *)0x0;
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KVar1,KeyState__Enum_Pressed,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          (this->fields).lastMovement = KVar1;
          (this->fields).doubleTap = 1;
          return;
        }
        pKVar7 = pKVar7 + 1;
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
    func_?(&TypeInfo__KogamaControls);
    func_?(&::_22F9E13B351DD0E6242C73AA96EAE83BAF7713684B5E8493CCED630DF6E47F09_Field);
    cRam_? = '\x01';
  }
  array = (KogamaControls__Enum__Array *)func_?(TypeInfo__KogamaControls,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__22F9E13B351DD0E6242C73AA96EAE83BAF7713684B5E8493CCED630DF6E47F09_Field
             ,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).movementControls = array;
  func_?(method_00,array);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

