
/* Void <OnScreenShotUploaded>b__6_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::
     UploadGameScreenshotHandler_c__OnScreenShotUploaded_b__6_0
               (UploadGameScreenshotHandler_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnScreenShotUploaded>b__6_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::
     UploadGameScreenshotHandler_c__OnScreenShotUploaded_b__6_1
               (UploadGameScreenshotHandler_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <UploadScreenshot>b__5_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::
     UploadGameScreenshotHandler_c__UploadScreenshot_b__5_0
               (UploadGameScreenshotHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* UploadGameScreenshotHandler+<>c() */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::UploadGameScreenshotHandler_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UploadGameScreenshotHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UploadGameScreenshotHandler_c *)
           FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
  TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9 = pUVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__UploadGameScreenshotHandler____c->static_fields >> 0xc);
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

