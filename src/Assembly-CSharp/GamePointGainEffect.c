
/* Void Initialize(UnityAction`1[System.Int32], Int32) */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_Initialize
               (GamePointGainEffect *this,UnityAction_1_System_Int32_ *onReachCallbackCallback,
               int32_t id,MethodInfo *method)

{
  (this->fields).onReachCallbackCallback = onReachCallbackCallback;
  func_?(&(this->fields).onReachCallbackCallback,onReachCallbackCallback);
  (this->fields).id = id;
  return;
}


/* Void StartEffect(Transform, Single, Single, Single, Single) */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_StartEffect
               (GamePointGainEffect *this,Transform *tr,float offsetDirectionXMin,
               float offsetDirectionXMax,float offsetDirectionYMin,float offsetDirectionYMax,
               MethodInfo *method)

{
  (this->fields).targetTransform = tr;
  func_?(&(this->fields).targetTransform,tr);
  (this->fields).targetSpeed = 0.0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    ((this->fields).randomOffsetMinSpeed,(this->fields).randomOffsetMaxSpeed,
                     (MethodInfo *)0x0);
  (this->fields).offsetSpeed = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (offsetDirectionXMin,offsetDirectionXMax,(MethodInfo *)0x0);
  (this->fields).offsetDirection.x = fVar1;
  if (0.0 < fVar1) {
    fVar1 = fVar1 + _UNK_?;
  }
  else {
    fVar1 = fVar1 - _UNK_?;
  }
  (this->fields).offsetDirection.x = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (offsetDirectionYMin,offsetDirectionYMax,(MethodInfo *)0x0);
  (this->fields).offsetDirection.y = fVar1;
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
  this_00 = this;
  pTVar1 = (this->fields).targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)auStack_3,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&uStack_5,pTVar1,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar2->x;
      uStack_5._4_4_ = pVVar2->y;
      fVar6 = pVVar2->z;
      fVar7 = fStack_8 - (float)uStack_5;
      fVar9 = fStack_10 - uStack_5._4_4_;
      fVar11 = (float)auStack_3._0_4_ - fVar6;
      this = (GamePointGainEffect *)0x0;
      method = (MethodInfo *)0x0;
      in_stack_12 = 0.0;
      register0x00001200 = CONCAT44(fVar9,fVar7);
      auStack_3._0_4_ = fVar11;
      fStack_13 = fVar11;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar14 = (double)(fVar9 * fVar9 + fVar7 * fVar7 + fVar11 * fVar11);
      if (dVar14 < 0.0) {
        func_?();
      }
      else {
        dVar14 = SQRT(dVar14);
      }
      if (_UNK_? < (float)dVar14) {
        auStack_3._0_4_ = fVar11 / (float)dVar14;
        method = (MethodInfo *)auStack_3._0_4_;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        auStack_3._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      }
      fVar9 = (float)auStack_3._0_4_ * (this_00->fields).targetSpeed;
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      auStack_3._4_4_ = fVar4 * fVar15;
      auStack_3._0_4_ = fVar9 * fVar15;
      in_stack_12 = fVar7 + (float)auStack_3._4_4_;
      value_00.y = fVar6 + (float)auStack_3._0_4_;
      value_00.x = uStack_5._4_4_ + fVar11 * fVar15;
      value_00.z = in_stack_12;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value_00,(MethodInfo *)0x0);
      auStack_3._0_4_ = (this_00->fields).targetSpeedAccelerationPerSec;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this_00->fields).targetSpeed = fVar6 * (float)auStack_3._4_4_ + (float)auStack_3._0_4_;
      fVar16 = (float10)func_?(&this,0);
      auStack_3._0_4_ = (undefined4)fVar16;
      fVar16 = (float10)func_?(&uStack_5,0);
      if ((float)fVar16 <= fVar4) {
        return;
      }
      pUVar17 = (this_00->fields).onReachCallbackCallback;
      if (pUVar17 != (UnityAction_1_System_Int32_ *)0x0) {
        (*(pUVar17->fields)._._.invoke_impl)
                  ((pUVar17->fields)._._.method_code,(this_00->fields).id,(pUVar17->fields)._._.method
                  );
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          value.y = fVar9;
          value.x = fVar15;
          value.z = fVar11;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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

