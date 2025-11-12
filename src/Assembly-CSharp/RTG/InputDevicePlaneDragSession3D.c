
/* Boolean Begin() */

bool Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_Begin
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isActive == 0) {
    pCVar1 = (this->fields)._raycastCamera;
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
    if (pCVar1 != (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
        bVar2 = InputDevicePlaneDragSession3D_UpdateDragPoint(this,(MethodInfo *)0x0);
        (this->fields)._isActive = bVar2;
        return bVar2;
      }
    }
  }
  return 0;
}


/* Void End() */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_End
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

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
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (this->fields)._dragPoint.x = (pVVar2->zeroVector).x;
    (this->fields)._dragPoint.y = fVar3;
    (this->fields)._dragPoint.z = fVar4;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (this->fields)._dragDelta.x = (pVVar2->zeroVector).x;
    (this->fields)._dragDelta.y = fVar3;
    (this->fields)._dragDelta.z = fVar4;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (this->fields)._accumDrag.x = (pVVar2->zeroVector).x;
    (this->fields)._accumDrag.y = fVar3;
    (this->fields)._accumDrag.z = fVar4;
    (this->fields)._plane.m_Normal.x = 0.0;
    (this->fields)._plane.m_Normal.y = 0.0;
    *(undefined8 *)&(this->fields)._plane.m_Normal.z = 0;
  }
  return;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_Update
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if ((this->fields)._isActive == 0) {
    return 0;
  }
  uVar1 = (this->fields)._dragPoint.x;
  uVar2 = (this->fields)._dragPoint.y;
  fVar3 = (this->fields)._dragPoint.z;
  bVar4 = InputDevicePlaneDragSession3D_UpdateDragPoint(this,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    uVar5 = (this->fields)._dragPoint.x;
    fVar6 = (this->fields)._dragPoint.y - (float)uVar2;
    fVar3 = (this->fields)._dragPoint.z - fVar3;
    uVar7 = (this->fields)._accumDrag.x;
    uVar8 = (this->fields)._accumDrag.y;
    (this->fields)._dragDelta.x = (float)uVar5 - (float)uVar1;
    (this->fields)._dragDelta.y = fVar6;
    (this->fields)._dragDelta.z = fVar3;
    fVar9 = (this->fields)._accumDrag.z;
    (this->fields)._accumDrag.x = ((float)uVar5 - (float)uVar1) + (float)uVar7;
    (this->fields)._accumDrag.y = fVar6 + (float)uVar8;
    (this->fields)._accumDrag.z = fVar3 + fVar9;
    return 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar10->zeroVector).z;
  fVar9 = (pVVar10->zeroVector).y;
  (this->fields)._dragDelta.x = (pVVar10->zeroVector).x;
  (this->fields)._dragDelta.y = fVar9;
  (this->fields)._dragDelta.z = fVar3;
  return 0;
}


/* Boolean UpdateDragPoint() */

bool Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::
     InputDevicePlaneDragSession3D_UpdateDragPoint
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields)._inputDevice;
  afStackX_8[0] = 0.0;
  if (method_00 != (MethodInfo *)0x0) {
    pfVar1 = (float *)FUN_?(auStack_2);
    aRStack_3[0].m_Direction.y = pfVar1[4];
    aRStack_3[0].m_Direction.z = pfVar1[5];
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar7 = pfVar1[3];
    aRStack_3[0].m_Origin.x = fVar4;
    aRStack_3[0].m_Origin.y = fVar5;
    aRStack_3[0].m_Origin.z = fVar6;
    aRStack_3[0].m_Direction.x = fVar7;
    _fStack_38 = aRStack_3[0].m_Direction._4_8_;
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                      (&(this->fields)._plane,aRStack_3,afStackX_8,method_00);
    if (bVar8 != 0) {
      (this->fields)._dragPoint.x = fVar7 * afStackX_8[0] + fVar4;
      (this->fields)._dragPoint.y = fStack_9 * afStackX_8[0] + fVar5;
      (this->fields)._dragPoint.z = fStack_10 * afStackX_8[0] + fVar6;
      return 1;
    }
    return 0;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar8 = (*pcVar11)();
  return bVar8;
}


/* InputDevicePlaneDragSession3D(IInputDevice, Camera) */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D__ctor
               (InputDevicePlaneDragSession3D *this,IInputDevice *inputDevice,Camera *raycastCamera,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields)._inputDevice = inputDevice;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._inputDevice >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._raycastCamera = raycastCamera;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._raycastCamera >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void set_Plane(Plane) */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::
     InputDevicePlaneDragSession3D_set_Plane
               (InputDevicePlaneDragSession3D *this,Plane *value,MethodInfo *method)

{
  if ((this->fields)._isActive == 0) {
    fVar1 = (value->m_Normal).y;
    uVar2 = *(undefined8 *)&(value->m_Normal).z;
    (this->fields)._plane.m_Normal.x = (value->m_Normal).x;
    (this->fields)._plane.m_Normal.y = fVar1;
    *(undefined8 *)&(this->fields)._plane.m_Normal.z = uVar2;
  }
  return;
}


/* Void set_RaycastCamera(Camera) */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::
     InputDevicePlaneDragSession3D_set_RaycastCamera
               (InputDevicePlaneDragSession3D *this,Camera *value,MethodInfo *method)

{
  if (((this->fields)._isActive == 0) &&
     (bVar1 = iRam_? != 0, (this->fields)._raycastCamera = value, bVar1)) {
    uVar2 = (uint)((ulonglong)&(this->fields)._raycastCamera >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

