
/* Void <OpenAvatarShop>b__20_0(IActivateUIElement, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::
     AvatarSelectionController_c__OpenAvatarShop_b__20_0
               (AvatarSelectionController_c *this,IActivateUIElement *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IActivateUIElement *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IActivateUIElement) {
        pIVar5 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pIVar5 = (IActivateUIElement__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->Activate).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,3,(pIVar5->Activate).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <SellCurrentAvatar>b__17_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::
     AvatarSelectionController_c__SellCurrentAvatar_b__17_0
               (AvatarSelectionController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_cannot_sell_your_avatar_thro);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_You_cannot_sell_your_avatar_thro,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,
                  StringLiteral_Error);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <SetStateToRoam>b__15_1(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::
     AvatarSelectionController_c__SetStateToRoam_b__15_1
               (AvatarSelectionController_c *this,IEditStateCommands *x,BaseEventData *y,
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
  (*pVVar5->methodPtr)(x,0x34,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* AvatarSelectionController+<>c() */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::AvatarSelectionController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarSelectionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarSelectionController_c *)FUN_?(TypeInfo__AvatarSelectionController____c);
  TypeInfo__AvatarSelectionController____c->static_fields->__9 = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarSelectionController____c->static_fields >> 0xc);
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

