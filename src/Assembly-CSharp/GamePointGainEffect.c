
/* Void Initialize(UnityAction`1[System.Int32], Int32) */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_Initialize
               (GamePointGainEffect *this,UnityAction_1_System_Int32_ *onReachCallbackCallback,
               int32_t id,MethodInfo *method)

{
  ppUVar1 = &(this->fields).onReachCallbackCallback;
  *ppUVar1 = onReachCallbackCallback;
  func_?(ppUVar1,onReachCallbackCallback);
  (this->fields).id = id;
  return;
}


/* Void StartEffect(Transform, Single, Single, Single, Single) */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_StartEffect
               (GamePointGainEffect *this,Transform *tr,float offsetDirectionXMin,
               float offsetDirectionXMax,float offsetDirectionYMin,float offsetDirectionYMax,
               MethodInfo *method)

{
  ppTVar1 = &(this->fields).targetTransform;
  *ppTVar1 = tr;
  func_?(ppTVar1,tr);
  (this->fields).targetSpeed = 0.0;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    ((this->fields).randomOffsetMinSpeed,(this->fields).randomOffsetMaxSpeed,
                     (MethodInfo *)0x0);
  (this->fields).offsetSpeed = fVar2;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (offsetDirectionXMin,offsetDirectionXMax,(MethodInfo *)0x0);
  if (0.0 < fVar2) {
    fVar2 = fVar2 + _UNK_?;
  }
  else {
    fVar2 = fVar2 - _UNK_?;
  }
  (this->fields).offsetDirection.x = fVar2;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (offsetDirectionYMin,offsetDirectionYMax,(MethodInfo *)0x0);
  (this->fields).offsetDirection.y = fVar2;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_Update
               (GamePointGainEffect *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    uVar5 = (this->fields).offsetDirection.x;
    uVar6 = (this->fields).offsetDirection.y;
    fVar7 = (this->fields).offsetSpeed;
    fVar8 = (this->fields).offsetDirection.z;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    value.y = fVar3 + fVar9 * (float)uVar6 * fVar7;
    value.x = fVar2 + fVar9 * (float)uVar5 * fVar7;
    value.z = fVar4 + fVar8 * fVar7 * fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    GamePointGainEffect_UpdateTargetSpeed(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateOffsetSpeed() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_UpdateOffsetSpeed
               (GamePointGainEffect *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    uVar5 = (this->fields).offsetDirection.x;
    uVar6 = (this->fields).offsetDirection.y;
    fVar7 = (this->fields).offsetSpeed;
    fVar8 = (this->fields).offsetDirection.z;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    value.y = fVar3 + (float)uVar6 * fVar7 * fVar9;
    value.x = fVar2 + (float)uVar5 * fVar7 * fVar9;
    value.z = fVar4 + fVar8 * fVar7 * fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateTargetSpeed() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_UpdateTargetSpeed
               (GamePointGainEffect *this,MethodInfo *method)

{
  pTVar1 = (this->fields).targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)((int)&uStack_5 + 4),pTVar1,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar2->x;
      uStack_6._4_4_ = pVVar2->y;
      fStack_7 = pVVar2->z;
      fVar8 = VStack_3.x - (float)(undefined4)uStack_6;
      fVar9 = VStack_3.y - (float)uStack_6._4_4_;
      fVar10 = VStack_3.z - fStack_7;
      uStack_5 = uStack_6;
      fStack_11 = fStack_7;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar12 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
      if (dVar12 < 0.0) {
        func_?();
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      fVar13 = (float)dVar12;
      if (_UNK_? < fVar13) {
        VStack_3.z = fVar10 / fVar13;
        VStack_3.x = fVar8 / fVar13;
        VStack_3.y = fVar9 / fVar13;
        fStack_7 = VStack_3.z;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_3.x = (pVVar14->zeroVector).x;
        VStack_3.y = (pVVar14->zeroVector).y;
        VStack_3.z = (pVVar14->zeroVector).z;
      }
      fVar8 = (this->fields).targetSpeed;
      fVar9 = VStack_3.x * fVar8;
      fVar8 = VStack_3.z * fVar8;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      value.y = fStack_11 + fVar9 * fVar10;
      value.x = uStack_5._4_4_ + fVar8 * fVar10;
      value.z = unaff_EBP + fVar4 * fVar10;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value,(MethodInfo *)0x0);
      VStack_3.y = (this->fields).targetSpeed;
      VStack_3.x = (this->fields).targetSpeedAccelerationPerSec;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      (this->fields).targetSpeed = fVar4 * VStack_3.y + VStack_3.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar12 = (double)(fStack_15 * fStack_15 + fStack_16 * fStack_16 + VStack_3.x * VStack_3.x);
      if (dVar12 < 0.0) {
        func_?();
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      if ((float)dVar12 <= fStack_17) {
        return;
      }
      pUVar18 = (this->fields).onReachCallbackCallback;
      if (pUVar18 != (UnityAction_1_System_Int32_ *)0x0) {
        (*(pUVar18->fields)._._.invoke_impl)
                  ((pUVar18->fields)._._.method_code,(this->fields).id,(pUVar18->fields)._._.method);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          value_00.z = fStack_19;
          value_00.x = (float)(undefined4)uStack_6;
          value_00.y = (float)uStack_6._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar1,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* GamePointGainEffect() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect__ctor
               (GamePointGainEffect *this,MethodInfo *method)

{
  (this->fields).targetSpeedAccelerationPerSec = 2.0;
  (this->fields).randomOffsetMaxSpeed = 10.0;
  (this->fields).randomOffsetMinSpeed = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).offsetDirection.x = (pVVar1->zeroVector).x;
  (this->fields).offsetDirection.y = fVar2;
  (this->fields).offsetDirection.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

