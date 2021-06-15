
/* Vector3 Update(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                    (Vector3 *__return_storage_ptr__,CameraLerpToDesiredDistance *this,
                    Vector3 targetPosition,Vector3 cameraPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = cameraPosition.z;
  uVar2 = targetPosition._0_8_;
  b.y = cameraPosition.y;
  b.x = cameraPosition.x;
  b.z = cameraPosition.z;
  puVar3 = (undefined *)cameraPosition.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&cameraPosition,targetPosition,b,(MethodInfo *)0x0);
  fVar4 = (float10)func_?(&stack0xffffffe0,0);
  b_01 = (float)fVar4;
  fVar5 = (this->fields).newDistance;
  cameraPosition.z = b_01;
  if (fVar5 < b_01) {
    cameraPosition.z =
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    b_01 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                     (cameraPosition.z * _UNK_? + fVar5,b_01,(MethodInfo *)0x0);
  }
  (this->fields).newDistance = b_01;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    uVar2._4_4_ = (undefined4)(uVar2 >> 0x20);
    uVar2 = CONCAT44(uVar2._4_4_,TypeInfo__UnityEngine__Vector3);
    puVar3 = &UNK_?;
    func_?();
  }
  uVar6 = uVar2;
  uVar2 = uVar2 & 0xffffffff00000000;
  uVar7 = uVar2;
  a_00.y = (float)puVar3;
  a_00.x = (float)(int)(uVar6 >> 0x20);
  a_00.z = fVar1;
  b_00.z = targetPosition.z;
  uVar8 = (undefined4)uVar6;
  uVar2._4_4_ = (undefined4)(uVar6 >> 0x20);
  b_00.x = (float)uVar8;
  b_00.y = (float)uVar2._4_4_;
  uVar2 = uVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&cameraPosition,a_00,b_00,(MethodInfo *)0x0);
  uVar2 = uVar2 & 0xffffffff00000000;
  pVVar9 = (Vector3 *)func_?();
  uVar10 = pVVar9->x;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&cameraPosition,*pVVar9,(this->fields).newDistance,(MethodInfo *)0x0);
  uVar11 = pVVar9->x;
  fStack12 = pVVar9->z;
  cameraPosition.x = (float)(uVar2 >> 0x20);
  cameraPosition.y = targetPosition.z;
  a.z = targetPosition.z;
  uVar2._4_4_ = (undefined4)(uVar2 >> 0x20);
  a.x = (float)uVar8;
  a.y = (float)uVar2._4_4_;
  cameraPosition.z = (float)uVar11;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&cameraPosition,a,*pVVar9,(MethodInfo *)0x0);
  fVar5 = pVVar9->z;
  *(undefined8 *)uVar10 = *(undefined8 *)pVVar9;
  *(float *)(uVar10 + 8) = fVar5;
  return (Vector3 *)uVar10;
}


/* CameraLerpToDesiredDistance() */

void Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor
               (CameraLerpToDesiredDistance *this,MethodInfo *method)

{
  (this->fields).newDistance = INFINITY;
  return;
}

