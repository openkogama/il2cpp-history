
/* Void Awake() */

void Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice_Awake
               (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__MouseInputDevice);
    cRam_? = '\x01';
  }
  this_00 = (InputDeviceBase *)func_?(TypeInfo__RTG__MouseInputDevice);
  InputDeviceBase::InputDeviceBase__ctor(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  pIVar3 = (InputDeviceDoubleTapHandler *)(pVVar1->zeroVector).z;
  this_00[1].klass = (InputDeviceBase__Class *)(pVVar1->zeroVector).x;
  this_00[1].monitor = (MonitorData *)fVar2;
  this_00[1].fields.DoubleTap = pIVar3;
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  fVar2 = pVVar4->z;
  this_00[1].fields._doubleTapDelay = pVVar4->x;
  this_00[1].fields._lastTapTime = fVar5;
  *(float *)&this_00[1].fields._didDoubleTap = fVar2;
  ppIVar6 = &(this->fields)._inputDevice;
  *ppIVar6 = (IInputDevice *)this_00;
  func_?(ppIVar6);
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice_Update_SystemCall
               (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IInputDevice *)&TypeInfo__RTG__IInputDevice;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = (this->fields)._inputDevice;
  if (pIStack_1 != (IInputDevice *)0x0) {
    pIStack_2 = TypeInfo__RTG__IInputDevice;
    uStack_3 = 0x11;
    func_?();
    return;
  }
  pIStack_1 = (IInputDevice *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RTInputDevice() */

void Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice__ctor
               (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor
            ((Singleton_1_System_Object_ *)this,
             MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__MonoSingleton__);
  return;
}


/* InputDeviceType get_DeviceType() */

InputDeviceType__Enum
Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice_get_DeviceType
          (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._inputDevice;
  if (pIVar1 != (IInputDevice *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          IVar6 = (*(code *)(&(pIVar1->klass->vtable).get_DeviceType)[iVar5].method)
                            (pIVar1,(&(pIVar1->klass->vtable).GetRay)[iVar5].methodPtr);
          return IVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)func_?(pIVar1,TypeInfo__RTG__IInputDevice,5);
    IVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1]);
    return IVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  IVar6 = (*pcVar8)();
  return IVar6;
}

