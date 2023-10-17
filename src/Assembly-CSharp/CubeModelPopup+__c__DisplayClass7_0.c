
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
    this = (CubeModelPopup_c_DisplayClass7_0 *)CONCAT31(this._1_3_,(pCVar1->fields).materialID);
    if (x != (IMaterialClicked *)0x0) {
      uVar2 = 0;
      uVar3 = (x->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IMaterialClicked) {
            pIVar4 = &x->klass->vtable + x->klass->interfaceOffsets[uVar2].offset;
            (*(pIVar4->OnMaterialClicked).methodPtr)(x,this,(pIVar4->OnMaterialClicked).method);
            return;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      puVar5 = (undefined4 *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IMaterialClicked,0);
      (*(code *)*puVar5)(x,this,puVar5[1]);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  uVar5 = (x->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype) {
        pIVar6 = &x->klass->vtable + x->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (ICreateNewPrototype__VTable *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype,0);
code_?:
  (*(pIVar6->OnAddNewPrototype).methodPtr)(x,pSVar1,fVar2,(pIVar6->OnAddNewPrototype).method);
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
      uVar4 = 0;
      uVar5 = (x->klass->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale) {
            pIVar6 = &x->klass->vtable + x->klass->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pIVar6 = (IChangePrototypeScale__VTable *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IChangePrototypeScale,0);
code_?:
      (*(pIVar6->OnChangePrototypeScale).methodPtr)
                (x,iVar3,fVar2,(pIVar6->OnChangePrototypeScale).method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

