
/* Void <OnModelScalePressed>b__0(IMaterialClicked, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c__DisplayClass7_0::
     CubeModelPopup_c_DisplayClass7_0__OnModelScalePressed_b__0
               (CubeModelPopup_c_DisplayClass7_0 *this,IMaterialClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IMaterialClicked);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).__4__this;
  if (pCVar1 != (CubeModelPopup *)0x0) {
    this = (CubeModelPopup_c_DisplayClass7_0 *)(uint)(pCVar1->fields).materialID;
    if (x != (IMaterialClicked *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IMaterialClicked) {
            iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
            (*(code *)(&x->klass->vtable)[iVar5].OnMaterialClicked.method)
                      (x,this,(&x->klass[1]._0.image)[iVar5 * 2]);
            return;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IMaterialClicked,0);
      (*(code *)*puVar6)(x,this,puVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <OnModelScalePressed>b__1(ICreateNewPrototype, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c__DisplayClass7_0::
     CubeModelPopup_c_DisplayClass7_0__OnModelScalePressed_b__1
               (CubeModelPopup_c_DisplayClass7_0 *this,ICreateNewPrototype *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  fVar2 = (this->fields).scale;
  if (x == (ICreateNewPrototype *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype) {
        ppMVar7 = &(&x->klass->vtable)[pIVar5->interfaceOffsets[uVar4].offset].OnAddNewPrototype.
                   method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype,0);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,fVar2,ppMVar7[1]);
  return;
}


/* Void <OnModelScalePressed>b__2(IChangePrototypeScale, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c__DisplayClass7_0::
     CubeModelPopup_c_DisplayClass7_0__OnModelScalePressed_b__2
               (CubeModelPopup_c_DisplayClass7_0 *this,IChangePrototypeScale *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).__4__this;
  if (pCVar1 != (CubeModelPopup *)0x0) {
    fVar2 = (this->fields).scale;
    iVar3 = (pCVar1->fields).woID;
    if (x != (IChangePrototypeScale *)0x0) {
      pIVar4 = x->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale) {
            ppMVar7 = &(&x->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].
                       OnChangePrototypeScale.method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale,0);
code_?:
      (*(code *)*ppMVar7)(x,iVar3,fVar2,ppMVar7[1]);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

