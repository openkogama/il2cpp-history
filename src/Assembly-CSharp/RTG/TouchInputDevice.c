
/* Vector3 GetFrameDelta() */

Vector3 * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetFrameDelta
                    (Vector3 *__return_storage_ptr__,TouchInputDevice *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (iVar4 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).y;
    fVar7 = (pVVar5->zeroVector).z;
    __return_storage_ptr__->x = (pVVar5->zeroVector).x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(0,&uStack_9);
  __return_storage_ptr__->x = (float)uStack_12;
  __return_storage_ptr__->y = (float)uStack_13;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 GetPositionYAxisUp() */

Vector3 * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetPositionYAxisUp
                    (Vector3 *__return_storage_ptr__,TouchInputDevice *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (iVar4 != 0) {
    VVar5 = RTInput::RTInput_TouchPosition(0,(MethodInfo *)0x0);
    __return_storage_ptr__->x = VVar5.x;
    __return_storage_ptr__->y = VVar5.y;
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar8 = (pVVar6->zeroVector).z;
  __return_storage_ptr__->x = (pVVar6->zeroVector).x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar8;
  return __return_storage_ptr__;
}


/* Ray GetRay(Camera) */

Ray * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetRay
                (Ray *__return_storage_ptr__,TouchInputDevice *this,Camera *camera,
                MethodInfo *method)

{
  (__return_storage_ptr__->m_Origin).x = 0.0;
  (__return_storage_ptr__->m_Origin).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Origin).z = 0;
  (__return_storage_ptr__->m_Direction).y = 0.0;
  (__return_storage_ptr__->m_Direction).z = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar1->zeroVector).x;
  uStack_5._4_4_ = (pVVar1->zeroVector).y;
  (__return_storage_ptr__->m_Origin).x = fVar2;
  (__return_storage_ptr__->m_Origin).y = fVar3;
  (__return_storage_ptr__->m_Origin).z = fVar4;
  fVar4 = (pVVar1->zeroVector).z;
  fVar2 = (float)FUN_?();
  if (_UNK_? < fVar2) {
    fVar3 = (float)uStack_5 / fVar2;
    fVar6 = uStack_5._4_4_ / fVar2;
    fVar4 = fVar4 / fVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar1->zeroVector).x;
    fVar6 = (pVVar1->zeroVector).y;
    fVar4 = (pVVar1->zeroVector).z;
  }
  (__return_storage_ptr__->m_Direction).x = fVar3;
  (__return_storage_ptr__->m_Direction).y = fVar6;
  (__return_storage_ptr__->m_Direction).z = fVar4;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pRVar9 = (Ray *)(*pcVar7)();
    return pRVar9;
  }
  pcRam_? = pcVar7;
  iVar10 = (*pcRam_?)();
  if (iVar10 != 0) {
    VStackX_8 = RTInput::RTInput_TouchPosition(0,(MethodInfo *)0x0);
    if (camera == (Camera *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      pRVar9 = (Ray *)(*pcVar7)();
      return pRVar9;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_5 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    pvVar13 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pRVar9 = (Ray *)(*pcVar7)();
      return pRVar9;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      pRVar9 = (Ray *)(*pcVar7)();
      return pRVar9;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar13,&VStackX_8,2,&uStack_5);
    (__return_storage_ptr__->m_Origin).x = (float)uStack_5;
    (__return_storage_ptr__->m_Origin).y = uStack_5._4_4_;
    *(undefined8 *)&(__return_storage_ptr__->m_Origin).z = uStack_11;
    (__return_storage_ptr__->m_Direction).y = (float)(undefined4)uStack_12;
    (__return_storage_ptr__->m_Direction).z = (float)uStack_12._4_4_;
  }
  return __return_storage_ptr__;
}


/* Boolean HasPointer() */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_HasPointer
               (TouchInputDevice *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  return iVar4 != 0;
}


/* Boolean IsButtonPressed(Int32) */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_IsButtonPressed
               (TouchInputDevice *this,int32_t buttonIndex,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (iVar4 <= buttonIndex) {
    return 0;
  }
  return iVar4 <= (this->fields)._maxNumberOfTouches;
}


/* Boolean WasButtonPressedInCurrentFrame(Int32) */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_WasButtonPressedInCurrentFrame
               (TouchInputDevice *this,int32_t buttonIndex,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if ((buttonIndex < iVar4) && (iVar4 <= (this->fields)._maxNumberOfTouches)) {
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(buttonIndex,&uStack_6);
    return uStack_10._4_4_ == 0;
  }
  return 0;
}


/* Boolean WasButtonReleasedInCurrentFrame(Int32) */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_WasButtonReleasedInCurrentFrame
               (TouchInputDevice *this,int32_t buttonIndex,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if ((buttonIndex < iVar4) && (iVar4 <= (this->fields)._maxNumberOfTouches)) {
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(buttonIndex,&uStack_6);
    if (uStack_10._4_4_ != 3) {
      return uStack_10._4_4_ == 4;
    }
    return 1;
  }
  return 0;
}


/* Boolean WasMoved() */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_WasMoved
               (TouchInputDevice *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if ((iVar4 != 0) && (touchIndex = 0, 0 < iVar4)) {
    do {
      if ((this->fields)._maxNumberOfTouches <= touchIndex) {
        return 0;
      }
      bVar3 = RTInput::RTInput_TouchMoved(touchIndex,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 1;
      }
      touchIndex = touchIndex + 1;
    } while (touchIndex < iVar4);
  }
  return 0;
}


/* TouchInputDevice(Int32) */

void Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice__ctor
               (TouchInputDevice *this,int32_t maxNumberOfTouches,MethodInfo *method)

{
  InputDeviceBase::InputDeviceBase__ctor((InputDeviceBase *)this,(MethodInfo *)0x0);
  iVar1 = 1;
  if (0 < maxNumberOfTouches) {
    iVar1 = maxNumberOfTouches;
  }
  (this->fields)._maxNumberOfTouches = iVar1;
  return;
}

