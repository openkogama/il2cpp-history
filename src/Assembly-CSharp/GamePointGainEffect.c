
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
    value.y = fVar3 + (float)uVar6 * fVar7 * fVar9;
    value.x = fVar2 + (float)uVar5 * fVar7 * fVar9;
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
    fVar4 = pVVar2->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_5 + 4),pTVar1,(MethodInfo *)0x0);
      auStack_5._0_4_ = pVVar2->x;
      auStack_5._4_4_ = pVVar2->y;
      fStack_6 = pVVar2->z;
      fStack_7 = fStack_7 - (float)auStack_5._0_4_;
      fStack_8 = fStack_8 - (float)auStack_5._4_4_;
      VStack_3.z = fStack_9 - fStack_6;
      in_stack_10 = 0;
      uStack_11 = CONCAT44(fStack_8,fStack_7);
      VStack_3.x = (float)auStack_5._0_4_;
      VStack_3.y = (float)auStack_5._4_4_;
      fStack_12 = VStack_3.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar13 = (double)(fStack_8 * fStack_8 + fStack_7 * fStack_7 + VStack_3.z * VStack_3.z);
      if (dVar13 < 0.0) {
        func_?();
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      fVar14 = (float)dVar13;
      if (_UNK_? < fVar14) {
        fVar15 = VStack_3.z / fVar14;
        fVar14 = fStack_8 / fVar14;
        VStack_3.z = fVar15;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        fVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
        fVar15 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      }
      fVar16 = (this->fields).targetSpeed;
      fVar14 = fVar14 * fVar16;
      fVar15 = fVar15 * fVar16;
      VStack_3.z = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
      fStack_17 = fVar4 * VStack_3.z;
      VStack_3.y = fVar14 * VStack_3.z;
      VStack_3.z = fVar15 * VStack_3.z;
      fStack_18 = fStack_18 + fStack_17;
      value_00.y = fStack_6 + VStack_3.z;
      value_00.x = (float)auStack_5._4_4_ + VStack_3.y;
      value_00.z = fStack_18;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTStack_19,value_00,(MethodInfo *)0x0);
      fVar16 = (this->fields).targetSpeedAccelerationPerSec;
      fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields).targetSpeed = fVar20 * VStack_3.x + fVar16;
      func_?(&stack0x0000000c,0);
      fVar21 = (float10)func_?(&fStack_18,0);
      if ((float)fVar21 <= fStack_8) {
        return;
      }
      pUVar22 = (this->fields).onReachCallbackCallback;
      if (pUVar22 != (UnityAction_1_System_Int32_ *)0x0) {
        (*(pUVar22->fields)._._.invoke_impl)
                  ((pUVar22->fields)._._.method_code,(this->fields).id,(pUVar22->fields)._._.method);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          value.y = fVar15;
          value.x = fVar14;
          value.z = fVar4;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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

