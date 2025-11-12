
/* Void <CloneRoot>b__32_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__CloneRoot_b__32_0
               (GizmoMenuNg_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

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


/* Void <Clone>b__31_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__Clone_b__31_0
               (GizmoMenuNg_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

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


/* Void <DoGizmoAction>b__44_0(IGizmoHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__DoGizmoAction_b__44_0
               (GizmoMenuNg_c *this,IGizmoHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGizmoHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (IGizmoHandler *)0x0) {
    uVar1 = 0;
    pIVar2 = handler->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType == (Il2CppClass *)TypeInfo__IGizmoHandler)
        {
          pVVar4 = &(pIVar2->vtable).Handle + (pIVar2->interfaceOffsets[uVar1].offset + 1);
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


/* Void <Pop>b__28_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__Pop_b__28_0
               (GizmoMenuNg_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

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


/* Void <ResetRotation>b__45_0(IGizmoHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__ResetRotation_b__45_0
               (GizmoMenuNg_c *this,IGizmoHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGizmoHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (IGizmoHandler *)0x0) {
    uVar1 = 0;
    pIVar2 = handler->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType == (Il2CppClass *)TypeInfo__IGizmoHandler)
        {
          pVVar4 = &(pIVar2->vtable).Handle + (pIVar2->interfaceOffsets[uVar1].offset + 1);
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


/* Void <ResetRotation>b__45_1(IGizmoHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__ResetRotation_b__45_1
               (GizmoMenuNg_c *this,IGizmoHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IGizmoHandler *)0x0) {
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
      if (pIVar3->interfaceOffsets[uVar2].interfaceType == (Il2CppClass *)TypeInfo__IGizmoHandler) {
        pVVar5 = &(pIVar3->vtable).Handle + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,5,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* GizmoMenuNg+<>c() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c::
     GizmoMenuNg_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoMenuNg_c *)
           FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9 = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                   static_fields >> 0xc);
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

