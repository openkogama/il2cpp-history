
/* Quaternion GetLerpRotation(Quaternion) */

Quaternion *
Assembly-CSharp.dll::TargetRotation::TargetRotation_GetLerpRotation
          (Quaternion *__return_storage_ptr__,TargetRotation *this,Quaternion from,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&stack0xffffffdc,&from,0);
  uVar2 = *puVar1;
  fVar3 = (this->fields).eulerAngles.x;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar5 = (this->fields).lerpSpeedX;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_LerpAngle
            ((float)uVar2,fVar3,fVar5 * fVar4,(MethodInfo *)0x0);
  fVar4 = (float)((ulonglong)uVar2 >> 0x20);
  fVar3 = (this->fields).eulerAngles.y;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_LerpAngle
                    (fVar4,fVar3,(this->fields).lerpSpeedY * fVar5,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&puStack_7,0.0,fVar3,0.0,(MethodInfo *)0x0);
  fVar3 = pQVar6->y;
  fVar5 = pQVar6->z;
  fVar4 = pQVar6->w;
  __return_storage_ptr__->x = pQVar6->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar4;
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
  (this->fields).eulerAngles.x = 0.0;
  (this->fields).eulerAngles.y = 0.0;
  (this->fields).eulerAngles.z = 0.0;
  (this->fields).lerpSpeedX = 15.0;
  (this->fields).lerpSpeedY = 15.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

