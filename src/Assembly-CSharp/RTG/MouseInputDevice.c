
/* Ray GetRay(Camera) */

Ray * Assembly-CSharp.dll::RTG::MouseInputDevice::MouseInputDevice_GetRay
                (Ray *__return_storage_ptr__,MouseInputDevice *this,Camera *camera,
                MethodInfo *method)

{
  pVVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     (&VStack_2,(MethodInfo *)0x0);
  if (camera != (Camera *)0x0) {
    pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                       ((Ray *)&stack0xffffffe4,camera,*pVVar1,(MethodInfo *)0x0);
    fVar4 = (pRVar3->m_Origin).y;
    fVar5 = (pRVar3->m_Origin).z;
    fVar6 = (pRVar3->m_Direction).x;
    (__return_storage_ptr__->m_Origin).x = (pRVar3->m_Origin).x;
    (__return_storage_ptr__->m_Origin).y = fVar4;
    (__return_storage_ptr__->m_Origin).z = fVar5;
    (__return_storage_ptr__->m_Direction).x = fVar6;
    fVar4 = (pRVar3->m_Direction).z;
    (__return_storage_ptr__->m_Direction).y = (pRVar3->m_Direction).y;
    (__return_storage_ptr__->m_Direction).z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pRVar3 = (Ray *)(*pcVar7)();
  return pRVar3;
}


/* Void UpateFrameDeltas() */

void Assembly-CSharp.dll::RTG::MouseInputDevice::MouseInputDevice_UpateFrameDeltas
               (MouseInputDevice *this,MethodInfo *method)

{
  pVVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     (&VStack_2,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  VStack_2.x = (this->fields)._mousePosInLastFrame.x;
  VStack_2.y = (this->fields)._mousePosInLastFrame.y;
  VStack_2.z = fStack_4 - (this->fields)._mousePosInLastFrame.z;
  (this->fields)._frameDelta.x = (float)(undefined4)uStack_3 - VStack_2.x;
  (this->fields)._frameDelta.y = (float)uStack_3._4_4_ - VStack_2.y;
  (this->fields)._frameDelta.z = VStack_2.z;
  pVVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     (&VStack_2,(MethodInfo *)0x0);
  fVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  (this->fields)._mousePosInLastFrame.x = pVVar1->x;
  (this->fields)._mousePosInLastFrame.y = fVar5;
  (this->fields)._mousePosInLastFrame.z = fVar6;
  return;
}


/* MouseInputDevice() */

void Assembly-CSharp.dll::RTG::MouseInputDevice::MouseInputDevice__ctor
               (MouseInputDevice *this,MethodInfo *method)

{
  InputDeviceBase::InputDeviceBase__ctor((InputDeviceBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._frameDelta.x = (pVVar1->zeroVector).x;
  (this->fields)._frameDelta.y = fVar2;
  (this->fields)._frameDelta.z = fVar3;
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar4->y;
  fVar3 = pVVar4->z;
  (this->fields)._mousePosInLastFrame.x = pVVar4->x;
  (this->fields)._mousePosInLastFrame.y = fVar2;
  (this->fields)._mousePosInLastFrame.z = fVar3;
  return;
}

