
/* Boolean DoBeginSession() */

bool Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoBeginSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__InputDeviceScreenDragSession);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    info = pOVar1[2].klass;
    pIVar2 = TypeInfo__RTG__InputDeviceScreenDragSession;
    this_00 = (InputDeviceScreenDragSession *)func_?();
    System.dll::System::Collections::Specialized::OrderedDictionary::OrderedDictionary__ctor_3
              ((OrderedDictionary *)this_00,(SerializationInfo *)info,
               (StreamingContext)(ZEXT48(pIVar2) << 0x20),unaff_EDI);
    (this->fields)._screenDragSession = this_00;
    func_?(&(this->fields)._screenDragSession,this_00);
    if ((this->fields)._screenDragSession != (InputDeviceScreenDragSession *)0x0) {
      if (bRam_? == '\0') {
        bRam_? = InputDeviceScreenDragSession::InputDeviceScreenDragSession_UpdateDragPoint
                                 ((InputDeviceScreenDragSession *)0x0,(MethodInfo *)0x0);
        return bRam_?;
      }
      return 0;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoEndSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  this_00 = (this->fields)._screenDragSession;
  if (this_00 != (InputDeviceScreenDragSession *)0x0) {
    InputDeviceScreenDragSession::InputDeviceScreenDragSession_End(this_00,(MethodInfo *)0x0);
    (this->fields)._screenDragSession = (InputDeviceScreenDragSession *)0x0;
    func_?(&(this->fields)._screenDragSession,0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean DoUpdateSession() */

bool Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoUpdateSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  this_00 = (this->fields)._screenDragSession;
  if (this_00 == (InputDeviceScreenDragSession *)0x0) {
    uVar2 = func_?((float *)((int)register0x00000010 + -0x10));
    afStack_3[0] = (float)uVar2;
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((this_00->fields)._isActive != 0) {
    fVar6 = (this_00->fields)._dragPoint.x;
    puStack_1 = (undefined1 *)(this_00->fields)._dragPoint.y;
    bVar5 = InputDeviceScreenDragSession::InputDeviceScreenDragSession_UpdateDragPoint
                      (this_00,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      fVar6 = (this_00->fields)._dragPoint.x - fVar6;
      fVar7 = (this_00->fields)._dragPoint.y - (float)puStack_1;
      fVar8 = (this_00->fields)._accumDrag.x;
      fVar9 = (this_00->fields)._accumDrag.y;
      (this_00->fields)._dragDelta.x = fVar6;
      (this_00->fields)._dragDelta.y = fVar7;
      (this_00->fields)._accumDrag.x = fVar8 + fVar6;
      (this_00->fields)._accumDrag.y = fVar9 + fVar7;
      return 1;
    }
    if (cRam_? == '\0') {
      afStack_3[0] = (float)&TypeInfo__UnityEngine__Vector3;
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar10 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar11 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this_00->fields)._dragDelta.x = (float)uVar10;
    (this_00->fields)._dragDelta.y = (float)uVar11;
  }
  return 0;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_get_IsActive
               (GizmoScreenDrag *this,MethodInfo *method)

{
  if ((this->fields)._screenDragSession == (InputDeviceScreenDragSession *)0x0) {
    return 0;
  }
  return (((this->fields)._screenDragSession)->fields)._isActive;
}


/* Void set_Sensitivity(Single) */

void Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
               (GizmoScreenDrag *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._sensitivity = fVar1;
  return;
}

