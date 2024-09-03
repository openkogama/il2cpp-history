
/* Boolean DoBeginSession() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_DoBeginSession
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDevicePlaneDragSession3D);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    inputDevice = pOVar1[2].klass;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar1 != (Object *)0x0) {
      raycastCamera = (Camera *)pOVar1[4].monitor;
      pIVar2 = (InputDevicePlaneDragSession3D *)
               func_?(TypeInfo__RTG__InputDevicePlaneDragSession3D);
      InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D__ctor
                (pIVar2,(IInputDevice *)inputDevice,raycastCamera,(MethodInfo *)0x0);
      (this->fields)._planeDragSession = pIVar2;
      func_?(&(this->fields)._planeDragSession,pIVar2);
      pIVar2 = (this->fields)._planeDragSession;
      pPVar3 = (Plane *)(*(code *)(this->klass->vtable).__unknown_2.method)
                                  (auStack_4,this,this->klass[1]._0.image);
      if (pIVar2 != (InputDevicePlaneDragSession3D *)0x0) {
        InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_set_Plane
                  (pIVar2,*pPVar3,(MethodInfo *)0x0);
        pIVar2 = (this->fields)._planeDragSession;
        if (pIVar2 != (InputDevicePlaneDragSession3D *)0x0) {
          bVar5 = InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_Begin
                            (pIVar2,(MethodInfo *)0x0);
          return bVar5;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_DoEndSession
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._planeDragSession;
  if (this_00 != (InputDevicePlaneDragSession3D *)0x0) {
    InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_End(this_00,(MethodInfo *)0x0);
    (this->fields)._planeDragSession = (InputDevicePlaneDragSession3D *)0x0;
    func_?(&(this->fields)._planeDragSession,0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean DoUpdateSession() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_DoUpdateSession
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  this_00 = (this->fields)._planeDragSession;
  if (this_00 == (InputDevicePlaneDragSession3D *)0x0) {
    uVar2 = func_?(&fStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((this_00->fields)._isActive != 0) {
    uVar6 = (this_00->fields)._dragPoint.x;
    uVar7 = (this_00->fields)._dragPoint.y;
    fVar8 = (this_00->fields)._dragPoint.z;
    bVar5 = InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_UpdateDragPoint
                       (this_00,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      uVar9 = (this_00->fields)._dragPoint.x;
      uVar10 = (this_00->fields)._dragPoint.y;
      fVar8 = (this_00->fields)._dragPoint.z - fVar8;
      (this_00->fields)._dragDelta.x = (float)uVar9 - (float)uVar6;
      (this_00->fields)._dragDelta.y = (float)uVar10 - (float)uVar7;
      uVar11 = (this_00->fields)._accumDrag.x;
      uVar12 = (this_00->fields)._accumDrag.y;
      (this_00->fields)._dragDelta.z = fVar8;
      fVar13 = (this_00->fields)._accumDrag.z;
      (this_00->fields)._accumDrag.x = ((float)uVar9 - (float)uVar6) + (float)uVar11;
      (this_00->fields)._accumDrag.y = ((float)uVar10 - (float)uVar7) + (float)uVar12;
      (this_00->fields)._accumDrag.z = fVar8 + fVar13;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = (pVVar14->zeroVector).y;
    fVar8 = (pVVar14->zeroVector).z;
    (this_00->fields)._dragDelta.x = (pVVar14->zeroVector).x;
    (this_00->fields)._dragDelta.y = fVar13;
    (this_00->fields)._dragDelta.z = fVar8;
  }
  return 0;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_get_IsActive
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  if ((this->fields)._planeDragSession == (InputDevicePlaneDragSession3D *)0x0) {
    return 0;
  }
  return (((this->fields)._planeDragSession)->fields)._isActive;
}

