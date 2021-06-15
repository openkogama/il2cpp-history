
/* Void Enter(GhostEye) */

void Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Enter
               (GhostEye_LookAtTarget *this,GhostEye *ghostEye,MethodInfo *method)

{
  if (ghostEye != (GhostEye *)0x0) {
    (this->fields).maxPitch = (ghostEye->fields).maxPitch;
    (this->fields).maxYaw = (ghostEye->fields).maxYaw;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,
          Vector3 localTargetDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                    (*pVVar1,localTargetDirection,(MethodInfo *)0x0);
  pMVar4 = TypeInfo__UnityEngine__Mathf;
  fVar3 = fVar3 - _UNK_?;
  max = (Mathf__Class *)(this->fields).maxPitch;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
    max = pMVar4;
  }
  VStack_2.z = (float)&UNK_?;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar3,(float)((uint)max ^ _UNK_?),(float)max,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     (&VStack_2,(MethodInfo *)0x0);
  fVar5 = pVVar1->z;
  axis = *pVVar1;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  puStack6 = (undefined *)fVar5;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,fVar3,axis,(MethodInfo *)0x0);
  pvVar8 = (void *)pQVar7->y;
  pcVar9 = (char *)pQVar7->z;
  pcVar10 = (char *)pQVar7->w;
  (max->_0).image = (Il2CppImage *)pQVar7->x;
  (max->_0).gc_desc = pvVar8;
  (max->_0).name = pcVar9;
  (max->_0).namespaze = pcVar10;
  return (Quaternion *)max;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,
          Vector3 localTargetDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  uStack_2 = 0;
  func_?(&uStack_2,localTargetDirection.x,0,localTargetDirection.z,0);
  puVar3 = (undefined8 *)func_?(&stack0xffffffdc,&uStack_2,0);
  uVar4 = *puVar3;
  fVar5 = *(float *)(puVar3 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
  to.z = fVar5;
  to.x = (float)(int)uVar4;
  to.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                    (*pVVar6,to,(MethodInfo *)0x0);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
  lhs.z = fVar5;
  lhs.x = (float)(int)uVar4;
  lhs.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                    (lhs,*pVVar6,(MethodInfo *)0x0);
  if (fVar5 < 0.0) {
    fVar7 = (float)((uint)fVar7 ^ _UNK_?);
  }
  fVar5 = (this->fields).maxYaw;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
            (fVar7,(float)((uint)fVar5 ^ _UNK_?),fVar5,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar6->x;
  uVar4._4_4_ = pVVar6->y;
  fVar5 = pVVar6->z;
  fVar7 = extraout_ECX;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
    uVar4 = CONCAT44(&UNK_?,(undefined4)uVar4);
    fVar7 = extraout_ECX_00;
  }
  axis.z = fVar5;
  axis.x = (float)(int)uVar4;
  axis.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
            ((Quaternion *)&stack0xffffffc0,fVar7,axis,(MethodInfo *)0x0);
  return (Quaternion *)&stack0xffffffc0;
}


/* Single GetPitch(Vector3) */

float Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetPitch
                (GhostEye_LookAtTarget *this,Vector3 localTargetPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                    (*pVVar1,localTargetPosition,(MethodInfo *)0x0);
  return fVar2 - _UNK_?;
}


/* Single GetSignedYaw(Vector3) */

float Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetSignedYaw
                (GhostEye_LookAtTarget *this,Vector3 localTargetPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffe8,localTargetPosition.x,0,localTargetPosition.z,0);
  puVar1 = (undefined8 *)func_?(&localTargetPosition,&stack0xffffffe8,0);
  fVar2 = *(float *)(puVar1 + 1);
  uVar3 = (undefined4)*puVar1;
  uVar4 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     (&localTargetPosition,(MethodInfo *)0x0);
  to.y = (float)uVar4;
  to.x = (float)uVar3;
  to.z = fVar2;
  localTargetPosition.z =
       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle(*pVVar5,to,(MethodInfo *)0x0)
  ;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  lhs.y = (float)uVar7;
  lhs.x = (float)uVar6;
  lhs.z = fVar2;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                    (lhs,*pVVar5,(MethodInfo *)0x0);
  if (fVar2 < 0.0) {
    localTargetPosition.z = (float)((uint)localTargetPosition.z ^ _UNK_?);
  }
  return localTargetPosition.z;
}


/* Boolean TryGetLocalTargetDir(GhostEye, Vector3 ByRef) */

bool Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_TryGetLocalTargetDir
               (GhostEye_LookAtTarget *this,GhostEye *ghostEye,Vector3 *localTargetDir,
               MethodInfo *method)

{
  if (ghostEye != (GhostEye *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)ghostEye,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         ((Vector3 *)&stack0xfffffff0,this_00,(this->fields).target,
                          (MethodInfo *)0x0);
      fVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      localTargetDir->x = pVVar1->x;
      localTargetDir->y = fVar2;
      localTargetDir->z = fVar3;
      fVar4 = (float10)func_?(localTargetDir);
      if (_UNK_? <= (float)fVar4) {
        func_?();
        return 1;
      }
      return 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Update
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_4_ = 0.0;
  fStack_2 = 0.0;
  if (ghostEye != (GhostEye *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)ghostEye,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         (&VStack_5,pTVar3,(this->fields).target,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar4->x;
      uStack_1._4_4_ = pVVar4->y;
      fStack_2 = pVVar4->z;
      fVar6 = (float10)func_?(&uStack_1,0);
      if (_UNK_? <= (float)fVar6) {
        func_?(&uStack_1);
        fVar7 = fStack_2;
        VStack_5.y = (float)uStack_1;
        VStack_5.z = uStack_1._4_4_;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                           ((Vector3 *)(auStack_8 + 4),(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar4->x;
        uStack_9._4_4_ = pVVar4->y;
        fVar10 = pVVar4->z;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        forward.z = fVar7;
        forward.x = VStack_5.y;
        forward.y = VStack_5.z;
        upwards.z = fVar10;
        upwards.x = (float)(undefined4)uStack_9;
        upwards.y = (float)uStack_9._4_4_;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                           ((Quaternion *)auStack_8,forward,upwards,(MethodInfo *)0x0);
        fVar7 = pQVar11->y;
        fVar10 = pQVar11->z;
        fVar12 = pQVar11->w;
        __return_storage_ptr__->x = pQVar11->x;
        __return_storage_ptr__->y = fVar7;
        __return_storage_ptr__->z = fVar10;
        __return_storage_ptr__->w = fVar12;
        return __return_storage_ptr__;
      }
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)ghostEye,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)auStack_8,pTVar3,(MethodInfo *)0x0);
        fVar7 = pQVar11->y;
        fVar10 = pQVar11->z;
        fVar12 = pQVar11->w;
        __return_storage_ptr__->x = pQVar11->x;
        __return_storage_ptr__->y = fVar7;
        __return_storage_ptr__->z = fVar10;
        __return_storage_ptr__->w = fVar12;
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  pQVar11 = (Quaternion *)(*pcVar13)();
  return pQVar11;
}

