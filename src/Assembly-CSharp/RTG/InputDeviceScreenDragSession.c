
/* Boolean Begin() */

bool Assembly-CSharp.dll::RTG::InputDeviceScreenDragSession::InputDeviceScreenDragSession_Begin
               (InputDeviceScreenDragSession *this,MethodInfo *method)

{
  if ((this->fields)._isActive == 0) {
    bVar1 = InputDeviceScreenDragSession_UpdateDragPoint(this,(MethodInfo *)0x0);
    (this->fields)._isActive = bVar1;
    return bVar1;
  }
  return 0;
}


/* Void End() */

void Assembly-CSharp.dll::RTG::InputDeviceScreenDragSession::InputDeviceScreenDragSession_End
               (InputDeviceScreenDragSession *this,MethodInfo *method)

{
  if ((this->fields)._isActive != 0) {
    (this->fields)._isActive = 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._dragPoint.x = (float)uVar1;
    (this->fields)._dragPoint.y = (float)uVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._dragDelta.x = (float)uVar3;
    (this->fields)._dragDelta.y = (float)uVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._accumDrag.x = (float)uVar5;
    (this->fields)._accumDrag.y = (float)uVar6;
  }
  return;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::RTG::InputDeviceScreenDragSession::InputDeviceScreenDragSession_Update
               (InputDeviceScreenDragSession *this,MethodInfo *method)

{
  if ((this->fields)._isActive != 0) {
    fVar1 = (this->fields)._dragPoint.x;
    fVar2 = (this->fields)._dragPoint.y;
    bVar3 = InputDeviceScreenDragSession_UpdateDragPoint(this,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      fVar1 = (this->fields)._dragPoint.x - fVar1;
      fVar2 = (this->fields)._dragPoint.y - fVar2;
      (this->fields)._dragDelta.x = fVar1;
      fVar4 = (this->fields)._accumDrag.x;
      (this->fields)._dragDelta.y = fVar2;
      fVar5 = (this->fields)._accumDrag.y;
      (this->fields)._accumDrag.x = fVar1 + fVar4;
      (this->fields)._accumDrag.y = fVar2 + fVar5;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._dragDelta.x = (float)uVar6;
    (this->fields)._dragDelta.y = (float)uVar7;
  }
  return 0;
}


/* Boolean UpdateDragPoint() */

bool Assembly-CSharp.dll::RTG::InputDeviceScreenDragSession::
     InputDeviceScreenDragSession_UpdateDragPoint
               (InputDeviceScreenDragSession *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._inputDevice;
  if (pIVar1 != (IInputDevice *)0x0) {
    cVar2 = func_?(8,TypeInfo__RTG__IInputDevice,pIVar1);
    if (cVar2 == '\0') {
      return 0;
    }
    pIVar1 = (this->fields)._inputDevice;
    if (pIVar1 != (IInputDevice *)0x0) {
      pIVar3 = pIVar1->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
            ppMVar6 = &(&(pIVar1->klass->vtable).GetPositionYAxisUp)
                       [pIVar3->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)func_?(pIVar1,TypeInfo__RTG__IInputDevice,7);
code_?:
      puVar7 = (undefined8 *)(*(code *)*ppMVar6)(auStack_8,pIVar1,ppMVar6[1]);
      uVar9 = *puVar7;
      fStack_10 = (float)uVar9;
      (this->fields)._dragPoint.x = fStack_10;
      fStack_11 = (float)((ulonglong)uVar9 >> 0x20);
      (this->fields)._dragPoint.y = fStack_11;
      return 1;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}

