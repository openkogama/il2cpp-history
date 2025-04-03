
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
    ppIVar3 = &(this->fields)._screenDragSession;
    *ppIVar3 = this_00;
    func_?(ppIVar3,this_00);
    if (*ppIVar3 != (InputDeviceScreenDragSession *)0x0) {
      if (bRam_? == '\0') {
        bRam_? = InputDeviceScreenDragSession::InputDeviceScreenDragSession_UpdateDragPoint
                                 ((InputDeviceScreenDragSession *)0x0,(MethodInfo *)0x0);
        return bRam_?;
      }
      return 0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoEndSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  ppIVar1 = &(this->fields)._screenDragSession;
  if (*ppIVar1 != (InputDeviceScreenDragSession *)0x0) {
    InputDeviceScreenDragSession::InputDeviceScreenDragSession_End(*ppIVar1,(MethodInfo *)0x0);
    *ppIVar1 = (InputDeviceScreenDragSession *)0x0;
    func_?(ppIVar1,0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      (this_00->fields)._dragDelta.x = fVar6;
      fVar8 = (this_00->fields)._accumDrag.x;
      (this_00->fields)._dragDelta.y = fVar7;
      fVar9 = (this_00->fields)._accumDrag.y;
      (this_00->fields)._accumDrag.x = fVar6 + fVar8;
      (this_00->fields)._accumDrag.y = fVar7 + fVar9;
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
  pIVar1 = (this->fields)._screenDragSession;
  if (pIVar1 == (InputDeviceScreenDragSession *)0x0) {
    return 0;
  }
  return (pIVar1->fields)._isActive;
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

