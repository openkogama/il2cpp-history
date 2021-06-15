
/* Void <>m__0(IMaterialClicked, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<OnModelScalePressed>c__AnonStorey0::
     CubeModelPopup_OnModelScalePressed_c_AnonStorey0___m__0
               (CubeModelPopup_OnModelScalePressed_c_AnonStorey0 *this,IMaterialClicked *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._this;
  if ((pCVar1 != (CubeModelPopup *)0x0) && (x != (IMaterialClicked *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IMaterialClicked,x,
                    (pCVar1->fields).materialID);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1(ICreateNewPrototype, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<OnModelScalePressed>c__AnonStorey0::
     CubeModelPopup_OnModelScalePressed_c_AnonStorey0___m__1
               (CubeModelPopup_OnModelScalePressed_c_AnonStorey0 *this,ICreateNewPrototype *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  fVar2 = (this->fields).scale;
  if (x == (ICreateNewPrototype *)0x0) {
    func_?(0);
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
        ppMVar7 = &(&x->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].OnAddNewPrototype.
                   method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__ICreateNewPrototype,0);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,fVar2,ppMVar7[1]);
  return;
}

