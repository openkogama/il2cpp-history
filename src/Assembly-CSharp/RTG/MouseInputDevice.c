
/* Ray GetRay(Camera) */

Ray * Assembly-CSharp.dll::RTG::MouseInputDevice::MouseInputDevice_GetRay
                (Ray *__return_storage_ptr__,MouseInputDevice *this,Camera *camera,
                MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    pRVar5 = (Ray *)(*pcVar3)();
    return pRVar5;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&uStack_1);
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pRVar5 = (Ray *)(*pcVar3)();
    return pRVar5;
  }
  uStackX_8 = uStack_1;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  pvVar9 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pRVar5 = (Ray *)(*pcVar3)();
    return pRVar5;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    pRVar5 = (Ray *)(*pcVar3)();
    return pRVar5;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar9,&uStackX_8,2,&uStack_6);
  (__return_storage_ptr__->m_Origin).x = (float)(undefined4)uStack_6;
  (__return_storage_ptr__->m_Origin).y = (float)uStack_6._4_4_;
  *(undefined8 *)&(__return_storage_ptr__->m_Origin).z = uStack_7;
  (__return_storage_ptr__->m_Direction).y = (float)(undefined4)uStack_8;
  (__return_storage_ptr__->m_Direction).z = (float)uStack_8._4_4_;
  return __return_storage_ptr__;
}


/* Void UpateFrameDeltas() */

void Assembly-CSharp.dll::RTG::MouseInputDevice::MouseInputDevice_UpateFrameDeltas
               (MouseInputDevice *this,MethodInfo *method)

{
  uStack_1 = 0;
  fStack_2 = 0.0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&uStack_1);
  pcVar3 = pcRam_?;
  uVar5 = (this->fields)._mousePosInLastFrame.x;
  uVar6 = (this->fields)._mousePosInLastFrame.y;
  fVar7 = (this->fields)._mousePosInLastFrame.z;
  uStack_8 = 0;
  fStack_9 = 0.0;
  (this->fields)._frameDelta.x = (float)uStack_1 - (float)uVar5;
  (this->fields)._frameDelta.y = uStack_1._4_4_ - (float)uVar6;
  (this->fields)._frameDelta.z = fStack_2 - fVar7;
  pcVar10 = pcRam_?;
  if ((pcVar3 == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar10 = pcVar3, pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar10;
  (*pcVar3)(&uStack_8);
  (this->fields)._mousePosInLastFrame.x = (float)(undefined4)uStack_8;
  (this->fields)._mousePosInLastFrame.y = (float)uStack_8._4_4_;
  (this->fields)._mousePosInLastFrame.z = fStack_9;
  return;
}


/* MouseInputDevice() */

void Assembly-CSharp.dll::RTG::MouseInputDevice::MouseInputDevice__ctor
               (MouseInputDevice *this,MethodInfo *method)

{
  InputDeviceBase::InputDeviceBase__ctor((InputDeviceBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).z;
  fVar3 = (pVVar1->zeroVector).y;
  (this->fields)._frameDelta.x = (pVVar1->zeroVector).x;
  (this->fields)._frameDelta.y = fVar3;
  (this->fields)._frameDelta.z = fVar2;
  uStack_4 = 0;
  fStack_5 = 0.0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_4);
  (this->fields)._mousePosInLastFrame.x = (float)(undefined4)uStack_4;
  (this->fields)._mousePosInLastFrame.y = (float)uStack_4._4_4_;
  (this->fields)._mousePosInLastFrame.z = fStack_5;
  return;
}

