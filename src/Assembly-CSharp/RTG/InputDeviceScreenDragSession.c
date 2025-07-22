
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
      fVar4 = (this->fields)._accumDrag.x;
      fVar5 = (this->fields)._accumDrag.y;
      (this->fields)._dragDelta.x = fVar1;
      (this->fields)._dragDelta.y = fVar2;
      (this->fields)._accumDrag.x = fVar4 + fVar1;
      (this->fields)._accumDrag.y = fVar5 + fVar2;
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
      puVar3 = (undefined8 *)func_?(auStack_4,7,TypeInfo__RTG__IInputDevice,pIVar1);
      uVar5 = *puVar3;
      fStack_6 = (float)uVar5;
      (this->fields)._dragPoint.x = fStack_6;
      fStack_7 = (float)((ulonglong)uVar5 >> 0x20);
      (this->fields)._dragPoint.y = fStack_7;
      return 1;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}

