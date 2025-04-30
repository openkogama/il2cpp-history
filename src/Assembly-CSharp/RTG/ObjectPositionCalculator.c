
/* Vector3 CalculateRootPosition(GameObject, Vector3, Vector3, Quaternion) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectPositionCalculator::
          ObjectPositionCalculator_CalculateRootPosition
                    (Vector3 *__return_storage_ptr__,GameObject *root,Vector3 desiredOBBCenter,
                    Vector3 desiredWorldScale,Quaternion desiredWorldRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectPositionCalculator);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectPositionCalculator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectPositionCalculator);
  }
  pOVar1 = TypeInfo__RTG__ObjectPositionCalculator->static_fields;
  fStack_2 = (float)(pOVar1->_boundsQConfig).ObjectTypes;
  VStack_3.x = (pOVar1->_boundsQConfig).NoVolumeSize.x;
  VStack_3.y = (pOVar1->_boundsQConfig).NoVolumeSize.y;
  VStack_3.z = (pOVar1->_boundsQConfig).NoVolumeSize.z;
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  queryConfig.NoVolumeSize.x = VStack_3.x;
  queryConfig.ObjectTypes = (int32_t)fStack_2;
  queryConfig.NoVolumeSize.y = VStack_3.y;
  queryConfig.NoVolumeSize.z = VStack_3.z;
  pOVar4 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                      ((OBB *)&stack0xffffff64,root,queryConfig,(MethodInfo *)0x0);
  fVar5 = (pOVar4->_center).x;
  fVar6 = (pOVar4->_center).y;
  fVar7 = (pOVar4->_center).z;
  if (root != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (root,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9 = (pVVar8->zeroVector).x;
    uVar10 = (pVVar8->zeroVector).y;
    fVar11 = (pVVar8->zeroVector).z;
    if (this != (Transform *)0x0) {
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          (&QStack_13,this,(MethodInfo *)0x0);
      fStack_14 = pQVar12->x;
      fStack_15 = pQVar12->y;
      fStack_16 = pQVar12->z;
      fStack_17 = pQVar12->w;
      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                          (&VStack_3,this,(MethodInfo *)0x0);
      pos.y = (float)uVar10;
      pos.x = (float)uVar9;
      pos.z = fVar11;
      q.y = fStack_15;
      q.x = fStack_14;
      q.z = fStack_16;
      q.w = fStack_17;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                ((Matrix4x4 *)&stack0xffffff50,pos,q,*pVVar18,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff50,
                           TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           desiredWorldRotation,desiredWorldScale,(MethodInfo *)0x0);
      fStack_14 = pMVar19->m00;
      fStack_15 = pMVar19->m10;
      fStack_16 = pMVar19->m20;
      fStack_17 = pMVar19->m30;
      fStack_2 = pMVar19->m01;
      VStack_3.x = pMVar19->m11;
      VStack_3.y = pMVar19->m21;
      VStack_3.z = pMVar19->m31;
      fVar11 = pMVar19->m02;
      fVar20 = pMVar19->m12;
      fVar21 = pMVar19->m22;
      fVar22 = pMVar19->m32;
      QStack_13.x = pMVar19->m03;
      QStack_13.y = pMVar19->m13;
      QStack_13.z = pMVar19->m23;
      QStack_13.w = pMVar19->m33;
      pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                          ((Matrix4x4 *)&stack0xffffff50,(Matrix4x4 *)&stack0xffffff10,
                           (MethodInfo *)0x0);
      lhs.m10 = fStack_15;
      lhs.m00 = fStack_14;
      lhs.m20 = fStack_16;
      lhs.m30 = fStack_17;
      lhs.m01 = fStack_2;
      lhs.m11 = VStack_3.x;
      lhs.m21 = VStack_3.y;
      lhs.m31 = VStack_3.z;
      lhs.m02 = fVar11;
      lhs.m12 = fVar20;
      lhs.m22 = fVar21;
      lhs.m32 = fVar22;
      lhs.m03 = QStack_13.x;
      lhs.m13 = QStack_13.y;
      lhs.m23 = QStack_13.z;
      lhs.m33 = QStack_13.w;
      pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                          ((Matrix4x4 *)&stack0xffffff50,lhs,*pMVar19,(MethodInfo *)0x0);
      puStack_23 = (undefined *)pMVar19->m00;
      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_3,this,(MethodInfo *)0x0);
      uVar24 = pVVar18->x;
      uVar25 = pVVar18->y;
      VStack_3.z = (float)&UNK_?;
      vector.y = (float)uVar25 - fVar6;
      vector.x = (float)uVar24 - fVar5;
      vector.z = pVVar18->z - fVar7;
      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                          (&VStack_3,(Matrix4x4 *)&puStack_23,vector,(MethodInfo *)0x0);
      uVar26 = pVVar18->x;
      uVar27 = pVVar18->y;
      fVar5 = pVVar18->z;
      __return_storage_ptr__->x = desiredOBBCenter.x + (float)uVar26;
      __return_storage_ptr__->y = desiredOBBCenter.y + (float)uVar27;
      __return_storage_ptr__->z = desiredOBBCenter.z + fVar5;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar28 = (code *)swi(3);
  pVVar18 = (Vector3 *)(*pcVar28)();
  return pVVar18;
}


/* ObjectPositionCalculator() */

void Assembly-CSharp.dll::RTG::ObjectPositionCalculator::ObjectPositionCalculator__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&TypeInfo__RTG__ObjectPositionCalculator);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  pOVar4 = TypeInfo__RTG__ObjectPositionCalculator->static_fields;
  (pOVar4->_boundsQConfig).NoVolumeSize.x = (pVVar1->zeroVector).x;
  (pOVar4->_boundsQConfig).NoVolumeSize.y = fVar2;
  (pOVar4->_boundsQConfig).NoVolumeSize.z = fVar3;
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  (TypeInfo__RTG__ObjectPositionCalculator->static_fields->_boundsQConfig).ObjectTypes =
       TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  return;
}

