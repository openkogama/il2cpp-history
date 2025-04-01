
/* Vector3 GetBiased(Single, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AxisBias::AxisBias_GetBiased
                    (Vector3 *__return_storage_ptr__,AxisBias *this,float dotVal,
                    Vector3 normalizedInputVector,Vector3 biasVector,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  this_00 = (this->fields).horizontalBias;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,dotVal,(MethodInfo *)0x0);
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    __return_storage_ptr__->x =
         (biasVector.x - normalizedInputVector.x) * fVar1 + normalizedInputVector.x;
    __return_storage_ptr__->y =
         (biasVector.y - normalizedInputVector.y) * fVar1 + normalizedInputVector.y;
    __return_storage_ptr__->z =
         (biasVector.z - normalizedInputVector.z) * fVar1 + normalizedInputVector.z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (__return_storage_ptr__,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector3 GetBiasedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::AxisBias::AxisBias_GetBiasedVector
                    (Vector3 *__return_storage_ptr__,AxisBias *this,Vector3 inputVector,
                    MethodInfo *method)

{
  fVar1 = (float10)func_?();
  fStack_2 = (float)fVar1;
  puVar3 = (undefined8 *)func_?(&uStack_4);
  VStack_5._0_8_ = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  VStack_5.z = fVar6;
  VStack_7._0_8_ = VStack_5._0_8_;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar8->upVector).x;
  uStack_4._4_4_ = (pVVar8->upVector).y;
  fStack_9 = (pVVar8->upVector).z;
  VStack_7.z = VStack_5.y * (float)uStack_4._4_4_ + VStack_5.x * (float)(undefined4)uStack_4 +
                VStack_5.z * fStack_9;
  if (0.0 < VStack_7.z) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10 = (pVVar8->upVector).x;
    uVar11 = (pVVar8->upVector).y;
    fVar12 = (pVVar8->upVector).z;
    fVar13 = VStack_7.x;
    fVar14 = VStack_7.y;
    uVar15 = uVar10;
    uVar16 = uVar11;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar8->downVector).x;
    uStack_4._4_4_ = (pVVar8->downVector).y;
    fStack_9 = (pVVar8->downVector).z;
    VStack_7.z = VStack_5.y * (float)uStack_4._4_4_ + VStack_5.x * (float)(undefined4)uStack_4
                  + VStack_5.z * fStack_9;
    if (VStack_7.z <= 0.0) {
      __return_storage_ptr__->x = inputVector.x;
      __return_storage_ptr__->y = inputVector.y;
      __return_storage_ptr__->z = inputVector.z;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar8->downVector).x;
    uVar16 = (pVVar8->downVector).y;
    fVar12 = (pVVar8->downVector).z;
    fVar13 = VStack_7.x;
    fVar14 = VStack_7.y;
  }
  normalizedInputVector.y = fVar14;
  normalizedInputVector.x = fVar13;
  normalizedInputVector.z = fVar6;
  biasVector.y = (float)uVar16;
  biasVector.x = (float)uVar15;
  biasVector.z = fVar12;
  pVVar17 = AxisBias_GetBiased(&VStack_5,this,VStack_7.z,normalizedInputVector,biasVector,
                               (MethodInfo *)0x0);
  uVar18 = pVVar17->x;
  uVar19 = pVVar17->y;
  fVar6 = pVVar17->z;
  __return_storage_ptr__->x = (float)uVar18 * fStack_2;
  __return_storage_ptr__->y = (float)uVar19 * fStack_2;
  __return_storage_ptr__->z = fVar6 * fStack_2;
  return __return_storage_ptr__;
}

