
/* Boolean DoBeginSession() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_DoBeginSession
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__InputDevicePlaneDragSession3D);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
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
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar1 != (Object *)0x0) {
      pCVar3 = (Camera *)pOVar1[4].monitor;
      pIVar4 = (InputDevicePlaneDragSession3D *)
                FUN_?(TypeInfo__RTG__InputDevicePlaneDragSession3D);
      iVar5 = iRam_?;
      (pIVar4->fields)._inputDevice = (IInputDevice *)pOVar2;
      if (iVar5 != 0) {
        uVar6 = (uint)((ulonglong)&(pIVar4->fields)._inputDevice >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
          iVar5 = iRam_?;
        } while (!bVar10);
      }
      (pIVar4->fields)._raycastCamera = pCVar3;
      iVar11 = 0;
      if (iVar5 != 0) {
        uVar6 = (uint)((ulonglong)&(pIVar4->fields)._raycastCamera >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
          iVar11 = iRam_?;
        } while (!bVar10);
      }
      (this->fields)._planeDragSession = pIVar4;
      if (iVar11 != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields)._planeDragSession >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pIVar4 = (this->fields)._planeDragSession;
      pfVar12 = (float *)(*(this->klass->vtable).__unknown_2.methodPtr)
                                   (auStack_13,this,(this->klass->vtable).__unknown_2.method);
      if (pIVar4 != (InputDevicePlaneDragSession3D *)0x0) {
        if ((pIVar4->fields)._isActive == 0) {
          fVar14 = pfVar12[1];
          fVar15 = pfVar12[2];
          fVar16 = pfVar12[3];
          (pIVar4->fields)._plane.m_Normal.x = *pfVar12;
          (pIVar4->fields)._plane.m_Normal.y = fVar14;
          (pIVar4->fields)._plane.m_Normal.z = fVar15;
          (pIVar4->fields)._plane.m_Distance = fVar16;
        }
        pIVar4 = (this->fields)._planeDragSession;
        if (pIVar4 != (InputDevicePlaneDragSession3D *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pIVar4->fields)._isActive == 0) {
            pCVar3 = (pIVar4->fields)._raycastCamera;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pCVar3 != (Camera *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pCVar3->fields)._._._.m_CachedPtr != (void *)0x0) {
                bVar17 = InputDevicePlaneDragSession3D::
                         InputDevicePlaneDragSession3D_UpdateDragPoint(pIVar4,(MethodInfo *)0x0);
                (pIVar4->fields)._isActive = bVar17;
                return bVar17;
              }
            }
          }
          return 0;
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar17 = (*pcVar18)();
  return bVar17;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_DoEndSession
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  cVar1 = cRam_?;
  pIVar2 = (this->fields)._planeDragSession;
  if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) {
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
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar4->zeroVector).y;
    fVar6 = (pVVar4->zeroVector).z;
    (pIVar2->fields)._dragPoint.x = (pVVar4->zeroVector).x;
    (pIVar2->fields)._dragPoint.y = fVar5;
    (pIVar2->fields)._dragPoint.z = fVar6;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar4->zeroVector).y;
    fVar6 = (pVVar4->zeroVector).z;
    (pIVar2->fields)._dragDelta.x = (pVVar4->zeroVector).x;
    (pIVar2->fields)._dragDelta.y = fVar5;
    (pIVar2->fields)._dragDelta.z = fVar6;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar4->zeroVector).y;
    fVar6 = (pVVar4->zeroVector).z;
    (pIVar2->fields)._accumDrag.x = (pVVar4->zeroVector).x;
    (pIVar2->fields)._accumDrag.y = fVar5;
    (pIVar2->fields)._accumDrag.z = fVar6;
    (pIVar2->fields)._plane.m_Normal.x = 0.0;
    (pIVar2->fields)._plane.m_Normal.y = 0.0;
    *(undefined8 *)&(pIVar2->fields)._plane.m_Normal.z = 0;
  }
  bVar7 = iRam_? != 0;
  (this->fields)._planeDragSession = (InputDevicePlaneDragSession3D *)0x0;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._planeDragSession >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}


/* Boolean DoUpdateSession() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneDrag3D::GizmoPlaneDrag3D_DoUpdateSession
               (GizmoPlaneDrag3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._planeDragSession;
  if (this_00 == (InputDevicePlaneDragSession3D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((this_00->fields)._isActive != 0) {
    uVar3 = (this_00->fields)._dragPoint.x;
    uVar4 = (this_00->fields)._dragPoint.y;
    fVar5 = (this_00->fields)._dragPoint.z;
    bVar2 = InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_UpdateDragPoint
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar6 = (this_00->fields)._dragPoint.x;
      fVar7 = (this_00->fields)._dragPoint.y - (float)uVar4;
      fVar5 = (this_00->fields)._dragPoint.z - fVar5;
      uVar8 = (this_00->fields)._accumDrag.x;
      uVar9 = (this_00->fields)._accumDrag.y;
      (this_00->fields)._dragDelta.x = (float)uVar6 - (float)uVar3;
      (this_00->fields)._dragDelta.y = fVar7;
      (this_00->fields)._dragDelta.z = fVar5;
      fVar10 = (this_00->fields)._accumDrag.z;
      (this_00->fields)._accumDrag.x = ((float)uVar6 - (float)uVar3) + (float)uVar8;
      (this_00->fields)._accumDrag.y = fVar7 + (float)uVar9;
      (this_00->fields)._accumDrag.z = fVar5 + fVar10;
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = (pVVar11->zeroVector).y;
    fVar5 = (pVVar11->zeroVector).z;
    (this_00->fields)._dragDelta.x = (pVVar11->zeroVector).x;
    (this_00->fields)._dragDelta.y = fVar10;
    (this_00->fields)._dragDelta.z = fVar5;
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

