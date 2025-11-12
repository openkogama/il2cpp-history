
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
  cVar1 = cRam_?;
  if ((this->fields)._isActive != 0) {
    (this->fields)._isActive = 0;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._dragPoint.x = (float)uVar2;
    (this->fields)._dragPoint.y = (float)uVar3;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._dragDelta.x = (float)uVar4;
    (this->fields)._dragDelta.y = (float)uVar5;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this->fields)._accumDrag.x = (float)uVar6;
    (this->fields)._accumDrag.y = (float)uVar7;
  }
  return;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::RTG::InputDeviceScreenDragSession::InputDeviceScreenDragSession_Update
               (InputDeviceScreenDragSession *this,MethodInfo *method)

{
  if ((this->fields)._isActive == 0) {
    return 0;
  }
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
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  (this->fields)._dragDelta.y = (float)uVar7;
  (this->fields)._dragDelta.x = (float)uVar6;
  return 0;
}


/* Boolean UpdateDragPoint() */

bool Assembly-CSharp.dll::RTG::InputDeviceScreenDragSession::
     InputDeviceScreenDragSession_UpdateDragPoint
               (InputDeviceScreenDragSession *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._inputDevice != (IInputDevice *)0x0) {
    cVar1 = FUN_?(8,TypeInfo__RTG__IInputDevice);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((this->fields)._inputDevice != (IInputDevice *)0x0) {
      puVar2 = (undefined8 *)FUN_?(auStack_3,7,TypeInfo__RTG__IInputDevice);
      uVar4 = *puVar2;
      (this->fields)._dragPoint.x = (float)uVar4;
      (this->fields)._dragPoint.y = (float)((ulonglong)uVar4 >> 0x20);
      return 1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

