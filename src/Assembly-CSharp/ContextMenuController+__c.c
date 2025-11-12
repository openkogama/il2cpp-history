
/* Void <AddToInventory>b__38_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__AddToInventory_b__38_0
               (ContextMenuController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          pVVar4 = &(pIVar1->vtable).Create + (pIVar1->interfaceOffsets[uVar2].offset + 2);
          UNRECOVERED_JUMPTABLE = pVVar4->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(x,pVVar4->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined8 *)
             FUN_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2,uVar3,
                           unaff_RBX);
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


/* Void <AddToInventory>b__38_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__AddToInventory_b__38_1
               (ContextMenuController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
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


/* Void <CloneRoot>b__37_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__CloneRoot_b__37_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <Clone>b__36_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__Clone_b__36_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <DeleteLink>b__19_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__DeleteLink_b__19_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,0x12,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <Delete>b__43_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__Delete_b__43_1
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

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


/* Void <EnterPlay>b__39_0(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__EnterPlay_b__39_0
               (ContextMenuController_c *this,IEditModeController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IEditModeController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IEditModeController) {
          pVVar4 = &(pIVar2->vtable).DeleteWoid + (pIVar2->interfaceOffsets[uVar1].offset + 2);
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


/* Void <OnClosedStandaloneError>b__40_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__OnClosedStandaloneError_b__40_0
               (ContextMenuController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
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


/* Void <OnFailedToAddItem>b__42_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__OnFailedToAddItem_b__42_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 4);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,0x80,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <PopGizmos>b__18_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__PopGizmos_b__18_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,0x12,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ResetLogic>b__35_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__ResetLogic_b__35_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowChangeScaleDialog>b__34_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowChangeScaleDialog_b__34_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowGameCoinsDialog>b__26_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowGameCoinsDialog_b__26_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowGamePointsDialog>b__22_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowGamePointsDialog_b__22_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowGameRankDialog>b__21_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowGameRankDialog_b__21_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowGlobalSoundsDialog>b__31_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowGlobalSoundsDialog_b__31_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowLevelsDialog>b__27_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowLevelsDialog_b__27_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowMinorGamePointsDialog>b__23_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowMinorGamePointsDialog_b__23_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowRespawnDialog>b__24_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowRespawnDialog_b__24_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowRewardedAdDialog>b__28_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowRewardedAdDialog_b__28_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowSettingsDialog>b__29_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowSettingsDialog_b__29_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowSoundsDialog>b__30_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowSoundsDialog_b__30_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowStarsDialog>b__20_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::
     ContextMenuController_c__ShowStarsDialog_b__20_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowTeamDialog>b__25_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__ShowTeamDialog_b__25_0
               (ContextMenuController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
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
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,2,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* ContextMenuController+<>c() */

void Assembly-CSharp.dll::ContextMenuController+<>c::ContextMenuController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ContextMenuController_c *)FUN_?(TypeInfo__ContextMenuController____c);
  TypeInfo__ContextMenuController____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ContextMenuController____c->static_fields >> 0xc);
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

