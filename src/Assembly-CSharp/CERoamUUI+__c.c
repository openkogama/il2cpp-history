
/* Void <EnterObject>b__9_0(IAvatarEditAnimationState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__EnterObject_b__9_0
               (CERoamUUI_c *this,IAvatarEditAnimationState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_TPose;
  if (x == (IAvatarEditAnimationState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState) {
        pIVar6 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pIVar6 = (IAvatarEditAnimationState__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->Set).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pSVar1,(pIVar6->Set).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <Enter>b__4_0(IAvatarEditUIState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__Enter_b__4_0
               (CERoamUUI_c *this,IAvatarEditUIState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAvatarEditUIState *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarEditUIState) {
        pIVar5 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pIVar5 = (IAvatarEditUIState__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->Set).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,2,(pIVar5->Set).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <Enter>b__4_1(IAvatarEditAnimationState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__Enter_b__4_1
               (CERoamUUI_c *this,IAvatarEditAnimationState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Idle;
  if (x == (IAvatarEditAnimationState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState) {
        pIVar6 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pIVar6 = (IAvatarEditAnimationState__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->Set).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pSVar1,(pIVar6->Set).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* CERoamUUI+<>c() */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CERoamUUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CERoamUUI_c *)FUN_?(TypeInfo__CERoamUUI____c);
  TypeInfo__CERoamUUI____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__CERoamUUI____c->static_fields >> 0xc);
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

