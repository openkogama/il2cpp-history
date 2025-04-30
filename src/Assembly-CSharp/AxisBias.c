
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (inputVector.y * inputVector.y + inputVector.x * inputVector.x + inputVector.z * inputVector.z
      < 0.0) {
    func_?();
  }
  pVVar1 = (Vector3 *)func_?();
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = pVVar1->z;
  normalizedInputVector = *pVVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = VStack_2.y * (float)uStack_4._4_4_ + VStack_2.x * (float)(undefined4)uStack_4 +
          VStack_2.z * fStack_5;
  if (0.0 < fVar6) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar3->upVector).x;
    uVar8 = (pVVar3->upVector).y;
    fVar9 = (pVVar3->upVector).z;
    uVar10 = uVar7;
    uVar11 = uVar8;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar3->downVector).x;
    uStack_4._4_4_ = (pVVar3->downVector).y;
    fStack_5 = (pVVar3->downVector).z;
    fVar6 = VStack_2.y * (float)uStack_4._4_4_ + VStack_2.x * (float)(undefined4)uStack_4 +
            VStack_2.z * fStack_5;
    if (fVar6 <= 0.0) {
      __return_storage_ptr__->x = (float)(int)inputVector._0_8_;
      __return_storage_ptr__->y = (float)(int)((ulonglong)inputVector._0_8_ >> 0x20);
      __return_storage_ptr__->z = inputVector.z;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10 = (pVVar3->downVector).x;
    uVar11 = (pVVar3->downVector).y;
    fVar9 = (pVVar3->downVector).z;
  }
  biasVector.y = (float)uVar11;
  biasVector.x = (float)uVar10;
  biasVector.z = fVar9;
  pVVar1 = AxisBias_GetBiased(&VStack_2,this,fVar6,normalizedInputVector,biasVector,
                              (MethodInfo *)0x0);
  uVar12 = pVVar1->x;
  uVar13 = pVVar1->y;
  fVar6 = pVVar1->z;
  __return_storage_ptr__->x = (float)uVar12 * fStack_5;
  __return_storage_ptr__->y = (float)uVar13 * fStack_5;
  __return_storage_ptr__->z = fVar6 * fStack_5;
  return __return_storage_ptr__;
}

