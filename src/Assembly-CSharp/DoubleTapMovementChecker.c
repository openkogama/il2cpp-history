
/* Void FrameUpdate() */

void Assembly-CSharp.dll::DoubleTapMovementChecker::DoubleTapMovementChecker_FrameUpdate
               (DoubleTapMovementChecker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KVar1 = (this->fields).lastMovement;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KVar1,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)();
    pcVar3 = pcRam_?;
    if (fVar5 - (this->fields).timer < _UNK_?) {
      (this->fields).doubleTap = 1;
      pcVar6 = pcRam_?;
      if ((pcVar3 == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar3, pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar6;
      fVar5 = (float)(*pcVar3)();
      (this->fields).timer = fVar5;
      return;
    }
  }
  if ((this->fields).doubleTap == 0) {
    pKVar7 = (this->fields).movementControls;
    uVar8 = 0;
    if (pKVar7 == (KogamaControls__Enum__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pKVar9 = pKVar7->vector;
    for (; (int)uVar8 < (int)pKVar7->max_length; uVar8 = uVar8 + 1) {
      if ((uint)pKVar7->max_length <= uVar8) goto DAT_?;
      KVar1 = *pKVar9;
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KVar1,KeyState__Enum_Down,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        (this->fields).lastMovement = KVar1;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
        (this->fields).timer = fVar5;
        return;
      }
      pKVar9 = pKVar9 + 1;
    }
  }
  else {
    KVar1 = (this->fields).lastMovement;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KVar1,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pKVar7 = (this->fields).movementControls;
      uVar8 = 0;
      (this->fields).doubleTap = 0;
      if (pKVar7 == (KogamaControls__Enum__Array *)0x0) goto code_?;
      pKVar9 = pKVar7->vector;
      for (; (int)uVar8 < (int)pKVar7->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pKVar7->max_length <= uVar8) {
DAT_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        KVar1 = *pKVar9;
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVInputWrapper);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KVar1,KeyState__Enum_Pressed,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          (this->fields).lastMovement = KVar1;
          (this->fields).doubleTap = 1;
          return;
        }
        pKVar9 = pKVar9 + 1;
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
    FUN_?(&TypeInfo__KogamaControls);
    LOCK();
    UNLOCK();
    FUN_?(&_22F9E13B351DD0E6242C73AA96EAE83BAF7713684B5E8493CCED630DF6E47F09_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  array = (KogamaControls__Enum__Array *)FUN_?(TypeInfo__KogamaControls,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__22F9E13B351DD0E6242C73AA96EAE83BAF7713684B5E8493CCED630DF6E47F09_Field
             ,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).movementControls = array;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

