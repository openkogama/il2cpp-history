
/* Void <AttachToBody>b__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c__DisplayClass41_0::
     AccessoryShopController_c_DisplayClass41_0__AttachToBody_b__0
               (AccessoryShopController_c_DisplayClass41_0 *this,IGetCurrentBody *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__1_MVBody_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)(this->fields).__9__1;
  if (this_00 == (UnityAction_1_System_Object_ *)0x0) {
    this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<MVBody>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__1_MVBody_
               ,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).__9__1 = (Action_1_MVBody_ *)this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).__9__1 >> 0xc);
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
  }
  if (x == (IGetCurrentBody *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar7 = x->klass;
  uVar8 = 0;
  uVar9._0_1_ = (pIVar7->_1).rank;
  uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar10 = &pIVar7->vtable + pIVar7->interfaceOffsets[uVar8].offset;
        goto code_?;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  pIVar10 = (IGetCurrentBody__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar10->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar10->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <AttachToBody>b__1(MVBody) */

void Assembly-CSharp.dll::AccessoryShopController+<>c__DisplayClass41_0::
     AccessoryShopController_c_DisplayClass41_0__AttachToBody_b__1
               (AccessoryShopController_c_DisplayClass41_0 *this,MVBody *body,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 != (AccessoryShopController *)0x0) {
    AccessoryShopController::AccessoryShopController_Attach
              (this_00,body,(this->fields).offset,(this->fields).scale,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

