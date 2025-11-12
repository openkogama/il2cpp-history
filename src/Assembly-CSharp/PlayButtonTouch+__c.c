
/* Void <StartPlaying>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonTouch+<>c::PlayButtonTouch_c__StartPlaying_b__10_0
               (PlayButtonTouch_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    uVar1 = 0;
    pIVar2 = handler->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          pVVar4 = &(pIVar2->vtable).get_StackReady + (pIVar2->interfaceOffsets[uVar1].offset + 2);
          UNRECOVERED_JUMPTABLE = pVVar4->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(handler,pVVar4->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
    puVar5 = (undefined8 *)FUN_?(handler);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(handler,puVar5[1],(code *)*puVar5);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PlayButtonTouch+<>c() */

void Assembly-CSharp.dll::PlayButtonTouch+<>c::PlayButtonTouch_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayButtonTouch____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PlayButtonTouch_c *)FUN_?(TypeInfo__PlayButtonTouch____c);
  TypeInfo__PlayButtonTouch____c->static_fields->__9 = pPVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__PlayButtonTouch____c->static_fields >> 0xc);
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

