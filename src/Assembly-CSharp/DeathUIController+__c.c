
/* Void <ReboostNotClicked>b__20_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c::DeathUIController_c__ReboostNotClicked_b__20_0
               (DeathUIController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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
  (*pVVar5->methodPtr)(x,6,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ReviveNotClicked>b__21_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c::DeathUIController_c__ReviveNotClicked_b__21_0
               (DeathUIController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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
  (*pVVar5->methodPtr)(x,6,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ShowDeadmodeUI>b__30_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c::DeathUIController_c__ShowDeadmodeUI_b__30_0
               (DeathUIController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <ShowReviveMenu>b__19_1() */

void Assembly-CSharp.dll::DeathUIController+<>c::DeathUIController_c__ShowReviveMenu_b__19_1
               (DeathUIController_c *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_Revive_Closed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  pSVar2 = StringLiteral_Revive_Closed;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar3 = StringLiteral__0__u__1_;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_4,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)pSVar2,(MethodInfo *)0x0);
    PStack_1._arg0 = PStack_4._arg0;
    PStack_1._arg1 = PStack_4._arg1;
    PStack_1._arg2 = PStack_4._arg2;
    PStack_1._args = PStack_4._args;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_1,(MethodInfo *)0x0);
    pSVar3 = StringLiteral__0__u_standalone__1_;
    PStack_1._arg0 = (Object *)0x0;
    PStack_1._arg1 = (Object *)0x0;
    PStack_1._arg2 = (Object *)0x0;
    PStack_1._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_1,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)pSVar2,(MethodInfo *)0x0);
    PStack_6._arg0 = PStack_1._arg0;
    PStack_6._arg1 = PStack_1._arg1;
    PStack_6._arg2 = PStack_1._arg2;
    PStack_6._args = PStack_1._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
    StatHatWrapper::StatHatWrapper_Count_1(pSVar5,pSVar3,1,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar3 = StringLiteral__0__u_fts__1_;
      PStack_1._arg0 = (Object *)0x0;
      PStack_1._arg1 = (Object *)0x0;
      PStack_1._arg2 = (Object *)0x0;
      PStack_1._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_1,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)pSVar2,(MethodInfo *)0x0);
      PStack_6._arg0 = PStack_1._arg0;
      PStack_6._arg1 = PStack_1._arg1;
      PStack_6._arg2 = PStack_1._arg2;
      PStack_6._args = PStack_1._args;
      pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
      pSVar3 = StringLiteral__0__u_fts_standalone__1_;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_4,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)pSVar2,(MethodInfo *)0x0);
      PStack_6._arg0 = PStack_4._arg0;
      PStack_6._arg1 = PStack_4._arg1;
      PStack_6._arg2 = PStack_4._arg2;
      PStack_6._args = PStack_4._args;
      pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count_1(pSVar5,pSVar2,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* DeathUIController+<>c() */

void Assembly-CSharp.dll::DeathUIController+<>c::DeathUIController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeathUIController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DeathUIController_c *)FUN_?(TypeInfo__DeathUIController____c);
  TypeInfo__DeathUIController____c->static_fields->__9 = pDVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__DeathUIController____c->static_fields >> 0xc);
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

