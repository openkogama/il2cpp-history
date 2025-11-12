
/* Void <OnClick>b__0_0(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::EnterCubeModelTutorial+<>c::EnterCubeModelTutorial_c__OnClick_b__0_0
               (EnterCubeModelTutorial_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IEditStateCommands *)0x0) {
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
          (Il2CppClass *)TypeInfo__IEditStateCommands) {
        pVVar5 = &(pIVar3->vtable).SetState + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x37,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* EnterCubeModelTutorial+<>c() */

void Assembly-CSharp.dll::EnterCubeModelTutorial+<>c::EnterCubeModelTutorial_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EnterCubeModelTutorial____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (EnterCubeModelTutorial_c *)FUN_?(TypeInfo__EnterCubeModelTutorial____c);
  TypeInfo__EnterCubeModelTutorial____c->static_fields->__9 = pEVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__EnterCubeModelTutorial____c->static_fields >> 0xc);
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

