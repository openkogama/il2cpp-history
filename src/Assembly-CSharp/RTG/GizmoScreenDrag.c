
/* Boolean DoBeginSession() */

bool Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoBeginSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__InputDeviceScreenDragSession);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    pIVar3 = (InputDeviceScreenDragSession *)
             FUN_?(TypeInfo__RTG__InputDeviceScreenDragSession);
    iVar4 = iRam_?;
    (pIVar3->fields)._inputDevice = (IInputDevice *)pOVar2;
    if (iVar4 != 0) {
      uVar5 = (uint)((ulonglong)&(pIVar3->fields)._inputDevice >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
        iVar4 = iRam_?;
      } while (!bVar9);
    }
    (this->fields)._screenDragSession = pIVar3;
    if (iVar4 != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields)._screenDragSession >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pIVar3 = (this->fields)._screenDragSession;
    if (pIVar3 != (InputDeviceScreenDragSession *)0x0) {
      if ((pIVar3->fields)._isActive != 0) {
        return 0;
      }
      bVar10 = InputDeviceScreenDragSession::InputDeviceScreenDragSession_UpdateDragPoint
                        (pIVar3,(MethodInfo *)0x0);
      (pIVar3->fields)._isActive = bVar10;
      return bVar10;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoEndSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  cVar1 = cRam_?;
  pIVar2 = (this->fields)._screenDragSession;
  if (pIVar2 == (InputDeviceScreenDragSession *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pIVar2->fields)._isActive != 0) {
    (pIVar2->fields)._isActive = 0;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (pIVar2->fields)._dragPoint.x = (float)uVar4;
    (pIVar2->fields)._dragPoint.y = (float)uVar5;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (pIVar2->fields)._dragDelta.x = (float)uVar6;
    (pIVar2->fields)._dragDelta.y = (float)uVar7;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar8 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar9 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (pIVar2->fields)._accumDrag.x = (float)uVar8;
    (pIVar2->fields)._accumDrag.y = (float)uVar9;
  }
  bVar10 = iRam_? != 0;
  (this->fields)._screenDragSession = (InputDeviceScreenDragSession *)0x0;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&(this->fields)._screenDragSession >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* Boolean DoUpdateSession() */

bool Assembly-CSharp.dll::RTG::GizmoScreenDrag::GizmoScreenDrag_DoUpdateSession
               (GizmoScreenDrag *this,MethodInfo *method)

{
  this_00 = (this->fields)._screenDragSession;
  if (this_00 == (InputDeviceScreenDragSession *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((this_00->fields)._isActive != 0) {
    fVar3 = (this_00->fields)._dragPoint.x;
    fVar4 = (this_00->fields)._dragPoint.y;
    bVar2 = InputDeviceScreenDragSession::InputDeviceScreenDragSession_UpdateDragPoint
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this_00->fields)._dragPoint.x - fVar3;
      fVar4 = (this_00->fields)._dragPoint.y - fVar4;
      (this_00->fields)._dragDelta.x = fVar3;
      fVar5 = (this_00->fields)._accumDrag.x;
      (this_00->fields)._dragDelta.y = fVar4;
      fVar6 = (this_00->fields)._accumDrag.y;
      (this_00->fields)._accumDrag.x = fVar3 + fVar5;
      (this_00->fields)._accumDrag.y = fVar4 + fVar6;
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar8 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    (this_00->fields)._dragDelta.x = (float)uVar7;
    (this_00->fields)._dragDelta.y = (float)uVar8;
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

