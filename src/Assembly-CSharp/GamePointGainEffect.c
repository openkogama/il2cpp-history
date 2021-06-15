
/* Void Initialize(UnityAction`1[System.Int32], Int32) */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_Initialize
               (GamePointGainEffect *this,UnityAction_1_System_Int32_ *onReachCallbackCallback,
               int32_t id,MethodInfo *method)

{
  (this->fields).onReachCallbackCallback = onReachCallbackCallback;
  (this->fields).id = id;
  return;
}


/* Void StartEffect(Transform, Single, Single, Single, Single) */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_StartEffect
               (GamePointGainEffect *this,Transform *targetTransform,float offsetDirectionXMin,
               float offsetDirectionXMax,float offsetDirectionYMin,float offsetDirectionYMax,
               MethodInfo *method)

{
  (this->fields).targetTransform = targetTransform;
  (this->fields).targetSpeed = 0.0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    ((this->fields).randomOffsetMinSpeed,(this->fields).randomOffsetMaxSpeed,
                     (MethodInfo *)0x0);
  (this->fields).offsetSpeed = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (offsetDirectionXMin,offsetDirectionXMax,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    fVar1 = (this->fields).offsetSpeed;
    fVar2 = (this->fields).offsetDirection.z;
    uVar3._0_4_ = (this->fields).offsetDirection.x;
    uVar3._4_4_ = (this->fields).offsetDirection.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar2;
    a.x = (float)(int)uVar3;
    a.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffd4,a,fVar1,(MethodInfo *)0x0);
    fVar1 = pVVar4->x;
    uVar3._0_4_ = pVVar4->z;
    uVar3._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    fVar2 = 0.0;
    pVVar4 = (Vector3 *)&stack0xffffffd4;
    a_00.y = uVar3._4_4_;
    a_00.x = fVar1;
    a_00.z = (float)uVar3;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (pVVar4,a_00,uVar3._4_4_,(MethodInfo *)0x0);
    a_01.y = fVar1;
    a_01.x = (float)pVVar4;
    a_01.z = fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd4,a_01,*pVVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar4,(MethodInfo *)0x0);
    GamePointGainEffect_UpdateTargetSpeed(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateOffsetSpeed() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_UpdateOffsetSpeed
               (GamePointGainEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    fVar2 = (this->fields).offsetSpeed;
    fVar3 = pVVar1->z;
    fVar4 = (this->fields).offsetDirection.z;
    uVar5._0_4_ = (this->fields).offsetDirection.x;
    uVar5._4_4_ = (this->fields).offsetDirection.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar4;
    a.x = (float)(int)uVar5;
    a.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffd4,a,fVar2,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    uVar5._0_4_ = pVVar1->z;
    uVar5._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    pVVar1 = (Vector3 *)&stack0xffffffd4;
    a_00.y = uVar5._4_4_;
    a_00.x = fVar2;
    a_00.z = (float)uVar5;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (pVVar1,a_00,uVar5._4_4_,(MethodInfo *)0x0);
    a_01.y = fVar2;
    a_01.x = (float)pVVar1;
    a_01.z = fVar3;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd4,a_01,*pVVar6,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTargetSpeed() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_UpdateTargetSpeed
               (GamePointGainEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    VVar4 = *pVVar2;
    value = *pVVar2;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffbc,pTVar1,(MethodInfo *)0x0);
      VStack_3.y = pVVar2->x;
      VStack_3.z = pVVar2->y;
      fVar5 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b.z = fVar5;
      b.x = VStack_3.y;
      b.y = VStack_3.z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffbc,VVar4,b,(MethodInfo *)0x0);
      pVVar2 = (Vector3 *)func_?();
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffbc,*pVVar2,(this->fields).targetSpeed,
                          (MethodInfo *)0x0);
      VVar4 = *pVVar2;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffbc,VVar4,fVar5,(MethodInfo *)0x0);
      uVar6 = pVVar2->x;
      uVar7 = pVVar2->y;
      fVar5 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffbc,pTVar1,(MethodInfo *)0x0);
        VVar4.y = (float)uVar7;
        VVar4.x = (float)uVar6;
        VVar4.z = fVar5;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffbc,*pVVar2,VVar4,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,*pVVar2,(MethodInfo *)0x0);
        fVar5 = (this->fields).targetSpeedAccelerationPerSec;
        VStack_3.z = (this->fields).targetSpeed;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields).targetSpeed = fVar8 * fVar5 + VStack_3.z;
        fVar9 = (float10)func_?();
        VStack_3.z = (float)fVar9;
        fVar9 = (float10)func_?();
        if ((float)fVar9 <= VStack_3.z) {
          return;
        }
        this_00 = (Action_1_UIPushOption_ *)(this->fields).onReachCallbackCallback;
        if (this_00 != (Action_1_UIPushOption_ *)0x0) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,(this->fields).id,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GamePointGainEffect() */

void Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect__ctor
               (GamePointGainEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).targetSpeedAccelerationPerSec = 2.0;
  (this->fields).randomOffsetMaxSpeed = 10.0;
  (this->fields).randomOffsetMinSpeed = 2.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).offsetDirection.x = pVVar1->x;
  (this->fields).offsetDirection.y = fVar3;
  (this->fields).offsetDirection.z = fVar4;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_ID() */

int32_t Assembly-CSharp.dll::GamePointGainEffect::GamePointGainEffect_get_ID
                  (GamePointGainEffect *this,MethodInfo *method)

{
  return (this->fields).id;
}

