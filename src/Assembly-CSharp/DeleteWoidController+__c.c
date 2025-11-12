
/* Void <DeleteWorldObject>b__4_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController+<>c::DeleteWoidController_c__DeleteWorldObject_b__4_0
               (DeleteWoidController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0xc,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <DeleteWorldObject>b__4_2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController+<>c::DeleteWoidController_c__DeleteWorldObject_b__4_2
               (DeleteWoidController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Worldobject_deleted);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <DeleteWorldObject>b__4_3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController+<>c::DeleteWoidController_c__DeleteWorldObject_b__4_3
               (DeleteWoidController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x20,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* DeleteWoidController+<>c() */

void Assembly-CSharp.dll::DeleteWoidController+<>c::DeleteWoidController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeleteWoidController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DeleteWoidController_c *)FUN_?(TypeInfo__DeleteWoidController____c);
  TypeInfo__DeleteWoidController____c->static_fields->__9 = pDVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__DeleteWoidController____c->static_fields >> 0xc);
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

