
/* Vector3 GetBiased(Single, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AxisBias::AxisBias_GetBiased
                    (Vector3 *__return_storage_ptr__,AxisBias *this,float dotVal,
                    Vector3 normalizedInputVector,Vector3 biasVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).horizontalBias;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,dotVal,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                       ((Vector3 *)&stack0xffffffe4,normalizedInputVector,biasVector,fVar1,
                        (MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    fVar4 = pVVar2->y;
    fVar1 = pVVar2->z;
    func_?();
    __return_storage_ptr__->x = fVar3;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Vector3 GetBiasedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::AxisBias::AxisBias_GetBiasedVector
                    (Vector3 *__return_storage_ptr__,AxisBias *this,Vector3 inputVector,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&inputVector,0);
  puVar1 = (undefined8 *)func_?(&stack0xffffffe0,&inputVector,0);
  uVar2 = *puVar1;
  d = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  rhs.z = d;
  rhs.x = (float)(int)uVar2;
  rhs.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                    (*pVVar3,rhs,(MethodInfo *)0x0);
  if (0.0 < fVar4) {
    uVar5 = uVar2;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      uVar5 = uVar2;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                       ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    rhs_00.z = d;
    rhs_00.x = (float)(int)uVar2;
    rhs_00.y = (float)(int)((ulonglong)uVar2 >> 0x20);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                      (*pVVar3,rhs_00,(MethodInfo *)0x0);
    if (fVar4 <= 0.0) {
      uRam_?._0_4_ = inputVector.x;
      uRam_?._4_4_ = inputVector.y;
      fRam00000008 = inputVector.z;
      return (Vector3 *)0x0;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                       ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  }
  dotVal = pVVar3->x;
  normalizedInputVector.z = d;
  normalizedInputVector.x = (float)(int)uVar5;
  normalizedInputVector.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  pVVar3 = AxisBias_GetBiased((Vector3 *)&stack0xffffffe0,this,(float)dotVal,normalizedInputVector,
                              *pVVar3,(MethodInfo *)0x0);
  inputVector.z = (float)&UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe0,*pVVar3,d,(MethodInfo *)0x0);
  uRam_?._0_4_ = pVVar3->x;
  uRam_?._4_4_ = pVVar3->y;
  fRam00000008 = pVVar3->z;
  return (Vector3 *)0x0;
}

