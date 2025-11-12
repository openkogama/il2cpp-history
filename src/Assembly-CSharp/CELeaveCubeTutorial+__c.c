
/* Void <Enter>b__0_0(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::CELeaveCubeTutorial+<>c::CELeaveCubeTutorial_c__Enter_b__0_0
               (CELeaveCubeTutorial_c *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IAvatarSetBodyGroup *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup) {
          pVVar4 = &(pIVar2->vtable).SetBodyGroup + (pIVar2->interfaceOffsets[uVar1].offset + 1);
          UNRECOVERED_JUMPTABLE = pVVar4->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(x,pVVar4->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
    puVar5 = (undefined8 *)FUN_?(x);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(x,puVar5[1],(code *)*puVar5);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CELeaveCubeTutorial+<>c() */

void Assembly-CSharp.dll::CELeaveCubeTutorial+<>c::CELeaveCubeTutorial_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CELeaveCubeTutorial____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CELeaveCubeTutorial_c *)FUN_?(TypeInfo__CELeaveCubeTutorial____c);
  TypeInfo__CELeaveCubeTutorial____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__CELeaveCubeTutorial____c->static_fields >> 0xc);
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

