
/* Quaternion GetLerpRotation(Quaternion) */

Quaternion *
Assembly-CSharp.dll::TargetRotation::TargetRotation_GetLerpRotation
          (Quaternion *__return_storage_ptr__,TargetRotation *this,Quaternion from,
          MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(&stack0xffffffdc,&from,0);
  fVar2 = (float)*puVar1;
  a = (float)((ulonglong)*puVar1 >> 0x20);
  fVar3 = (this->fields).eulerAngles.x;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_LerpAngle
                    (fVar2,fVar3,fVar4 * (this->fields).lerpSpeedX,(MethodInfo *)0x0);
  fVar3 = (this->fields).eulerAngles.y;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_LerpAngle
                    (a,fVar3,fVar2 * (this->fields).lerpSpeedY,(MethodInfo *)0x0);
  euler.y = fVar3 * _UNK_?;
  euler.x = fVar4 * _UNK_?;
  euler.z = 0.0;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&puStack_6,euler,(MethodInfo *)0x0);
  fVar3 = pQVar5->y;
  fVar4 = pQVar5->z;
  fVar2 = pQVar5->w;
  __return_storage_ptr__->x = pQVar5->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar2;
  return __return_storage_ptr__;
}


/* Void SetTargetRotation(Single, Single) */

void Assembly-CSharp.dll::TargetRotation::TargetRotation_SetTargetRotation_1
               (TargetRotation *this,float pitch,float yaw,MethodInfo *method)

{
  (this->fields).eulerAngles.x = pitch;
  (this->fields).eulerAngles.y = yaw;
  (this->fields).eulerAngles.z = 0.0;
  return;
}


/* Void SetTargetRotation(Quaternion) */

void Assembly-CSharp.dll::TargetRotation::TargetRotation_SetTargetRotation_2
               (TargetRotation *this,Quaternion q,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&q,0);
  uVar3 = *puVar1;
  (this->fields).eulerAngles.x = (float)(int)uVar3;
  (this->fields).eulerAngles.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  (this->fields).eulerAngles.z = 0.0;
  return;
}


/* TargetRotation() */

void Assembly-CSharp.dll::TargetRotation::TargetRotation__ctor
               (TargetRotation *this,MethodInfo *method)

{
  (this->fields).lerpSpeedX = 15.0;
  (this->fields).lerpSpeedY = 15.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

