
/* Vector3 GetBiased(Single, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AxisBias::AxisBias_GetBiased
                    (Vector3 *__return_storage_ptr__,AxisBias *this,float dotVal,
                    Vector3 *normalizedInputVector,Vector3 *biasVector,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  obj = (this->fields).horizontalBias;
  if (obj == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pvVar3 = (obj->fields).m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pMVar4 = pMRam0000000182dc8ce8;
  if ((pMRam0000000182dc8ce8 == (MethodInfo *)0x0) &&
     (pMVar4 = (MethodInfo *)FUN_?(&UNK_?), pMVar4 == (MethodInfo *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pMRam0000000182dc8ce8 = pMVar4;
  uVar6 = biasVector->x;
  uVar7 = biasVector->y;
  fVar8 = biasVector->z;
  uVar9 = normalizedInputVector->x;
  uVar10 = normalizedInputVector->y;
  pMVar4 = pMRam0000000182dc8ce8;
  fVar11 = (float)(*(code *)pMRam0000000182dc8ce8)(pvVar3,dotVal);
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  else if (_UNK_? < fVar11) {
    fVar11 = _UNK_?;
  }
  fVar12 = normalizedInputVector->z;
  fVar13 = normalizedInputVector->z;
  __return_storage_ptr__->x = ((float)uVar6 - (float)uVar9) * fVar11 + (float)uVar9;
  __return_storage_ptr__->y = ((float)uVar7 - (float)uVar10) * fVar11 + (float)uVar10;
  __return_storage_ptr__->z = (fVar8 - fVar12) * fVar11 + fVar13;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (__return_storage_ptr__,pMVar4);
  return __return_storage_ptr__;
}


/* Vector3 GetBiasedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::AxisBias::AxisBias_GetBiasedVector
                    (Vector3 *__return_storage_ptr__,AxisBias *this,Vector3 *inputVector,
                    MethodInfo *method)

{
  method_00 = (MethodInfo *)inputVector;
  fVar1 = (float)FUN_?(inputVector);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (&VStack_3,inputVector,method_00);
  uVar4._0_4_ = pVVar2->x;
  uVar4._4_4_ = pVVar2->y;
  fVar5 = pVVar2->z;
  VStack_6._0_8_ = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar7->upVector).x;
  VStack_3.y = (pVVar7->upVector).y;
  fVar8 = VStack_6.y;
  fVar9 = VStack_6.x;
  dotVal = VStack_6.y * VStack_3.y + VStack_6.x * VStack_3.x + fVar5 * (pVVar7->upVector).z;
  if (0.0 < dotVal) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    pVVar2 = &VStack_6;
    VStack_3.x = (pVVar7->upVector).x;
    VStack_3.y = (pVVar7->upVector).y;
    VStack_3.z = (pVVar7->upVector).z;
    biasVector = &VStack_3;
    VStack_6._0_8_ = uVar4;
    VStack_6.z = fVar5;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar7->downVector).x;
    VStack_3.y = (pVVar7->downVector).y;
    dotVal = fVar8 * VStack_3.y + fVar9 * VStack_3.x + fVar5 * (pVVar7->downVector).z;
    if (dotVal <= 0.0) {
      fVar1 = inputVector->y;
      fVar5 = inputVector->z;
      __return_storage_ptr__->x = inputVector->x;
      __return_storage_ptr__->y = fVar1;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    pVVar2 = &VStack_3;
    VStack_6.x = (pVVar7->downVector).x;
    VStack_6.y = (pVVar7->downVector).y;
    biasVector = &VStack_6;
    VStack_6.z = (pVVar7->downVector).z;
    VStack_3._0_8_ = uVar4;
    VStack_3.z = fVar5;
  }
  pVVar2 = AxisBias_GetBiased(aVStack_10,this,dotVal,pVVar2,biasVector,(MethodInfo *)0x0);
  fVar5 = pVVar2->y;
  uVar11 = pVVar2->x;
  fVar9 = pVVar2->z;
  __return_storage_ptr__->x = (float)uVar11 * fVar1;
  __return_storage_ptr__->y = fVar5 * fVar1;
  __return_storage_ptr__->z = fVar9 * fVar1;
  return __return_storage_ptr__;
}

