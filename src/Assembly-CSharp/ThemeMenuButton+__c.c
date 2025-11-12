
/* Void <OnClick>b__6_0(ThemeMenuButton+IClickHandler, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuButton+<>c::ThemeMenuButton_c__OnClick_b__6_0
               (ThemeMenuButton_c *this,ThemeMenuButton_IClickHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (ThemeMenuButton_IClickHandler *)0x0) {
    uVar1 = 0;
    pTVar2 = handler->klass;
    uVar3._0_1_ = (pTVar2->_1).rank;
    uVar3._1_1_ = (pTVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pTVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__ThemeMenuButton__IClickHandler) {
          UNRECOVERED_JUMPTABLE =
               (&pTVar2->vtable)[pTVar2->interfaceOffsets[uVar1].offset].OpenThemesMenu.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (handler,(&pTVar2->vtable)[pTVar2->interfaceOffsets[uVar1].offset].
                             OpenThemesMenu.method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
    puVar4 = (undefined8 *)FUN_?(handler);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(handler,puVar4[1],(code *)*puVar4);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ThemeMenuButton+<>c() */

void Assembly-CSharp.dll::ThemeMenuButton+<>c::ThemeMenuButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeMenuButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (ThemeMenuButton_c *)FUN_?(TypeInfo__ThemeMenuButton____c);
  TypeInfo__ThemeMenuButton____c->static_fields->__9 = pTVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ThemeMenuButton____c->static_fields >> 0xc);
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

