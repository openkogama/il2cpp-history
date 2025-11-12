
/* Void <OnModelScalePressed>b__0(IMaterialClicked, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c__DisplayClass7_0::
     CubeModelPopup_c_DisplayClass7_0__OnModelScalePressed_b__0
               (CubeModelPopup_c_DisplayClass7_0 *this,IMaterialClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).__4__this;
  if ((pCVar1 == (CubeModelPopup *)0x0) || (x == (IMaterialClicked *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = (pCVar1->fields).materialID;
  pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)bVar3;
  uVar5 = 0;
  pIVar6 = x->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    pIVar4 = pIVar6->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IMaterialClicked) {
        pIVar8 = &pIVar6->vtable + pIVar4[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pIVar8 = (IMaterialClicked__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IMaterialClicked,0,pIVar4,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar8->OnMaterialClicked).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (x,(ulonglong)bVar3,(pIVar8->OnMaterialClicked).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <OnModelScalePressed>b__1(ICreateNewPrototype, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c__DisplayClass7_0::
     CubeModelPopup_c_DisplayClass7_0__OnModelScalePressed_b__1
               (CubeModelPopup_c_DisplayClass7_0 *this,ICreateNewPrototype *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  fVar2 = (this->fields).scale;
  if (x == (ICreateNewPrototype *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype) {
        pIVar7 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  pIVar7 = (ICreateNewPrototype__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pIVar7->OnAddNewPrototype).methodPtr)(x,pSVar1,fVar2,(pIVar7->OnAddNewPrototype).method);
  return;
}


/* Void <OnModelScalePressed>b__2(IChangePrototypeScale, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c__DisplayClass7_0::
     CubeModelPopup_c_DisplayClass7_0__OnModelScalePressed_b__2
               (CubeModelPopup_c_DisplayClass7_0 *this,IChangePrototypeScale *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).__4__this;
  if (pCVar1 != (CubeModelPopup *)0x0) {
    uVar2 = (pCVar1->fields).woID;
    fVar3 = (this->fields).scale;
    if (x != (IChangePrototypeScale *)0x0) {
      pIVar4 = x->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale) {
            pIVar7 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar5].offset;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pIVar7 = (IChangePrototypeScale__VTable *)
               FUN_?(x,TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pIVar7->OnChangePrototypeScale).methodPtr)
                (x,(ulonglong)uVar2,fVar3,(pIVar7->OnChangePrototypeScale).method);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

