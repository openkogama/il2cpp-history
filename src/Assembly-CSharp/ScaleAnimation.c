
/* Void Awake() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Awake
               (ScaleAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._.target;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pAVar3 = (this->fields).animationCurve;
    if (pAVar3 != (AnimationCurve *)0x0) {
      pKVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (pAVar3,(MethodInfo *)0x0);
      pAVar3 = (this->fields).animationCurve;
      if (pAVar3 != (AnimationCurve *)0x0) {
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                          (pAVar3,(MethodInfo *)0x0);
        if (pKVar4 != (Keyframe__Array *)0x0) {
          if (iVar5 - 1U < pKVar4->max_length) {
            fVar6 = (float10)func_?();
            (this->fields).doneTime = (float)fVar6;
            return;
          }
          goto code_?;
        }
      }
    }
  }
  else {
    pTVar1 = (this->fields)._.target;
    if (pTVar1 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
      fVar8 = pVVar7->y;
      fVar9 = pVVar7->z;
      (this->fields)._.originalScale.x = pVVar7->x;
      (this->fields)._.originalScale.y = fVar8;
      (this->fields)._.originalScale.z = fVar9;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Play
               (ScaleAnimation *this,float offsetTime,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).beginTime = fVar1 - offsetTime;
  (this->fields)._.state = 2;
  return;
}


/* Void Stopped(Single) */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Stopped
               (ScaleAnimation *this,float extraTime,MethodInfo *method)

{
  (this->fields)._.state = 1;
  this_00 = (UnityAction_1_System_Single_ *)(this->fields)._.OnScaleAnimationStopped;
  if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single__Invoke(this_00,extraTime,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Update
               (ScaleAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.testState == 2) {
    (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
    (this->fields)._.testState = 0;
  }
  if ((this->fields)._.state != 2) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).doneTime;
  this_00 = (this->fields)._.target;
  this_01 = (this->fields).animationCurve;
  fVar1 = fVar1 - (this->fields).beginTime;
  if (fVar2 < fVar1) {
    VVar3 = (this->fields)._.originalScale;
    if (this_01 != (AnimationCurve *)0x0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,fVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffe8,VVar3,fVar2,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        fVar2 = pVVar4->y;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_00,*pVVar4,(MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Single_ *)(this->fields)._.OnScaleAnimationStopped;
        (this->fields)._.state = 1;
        if (this_02 == (UnityAction_1_System_Single_ *)0x0) {
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single__Invoke
                  (this_02,fVar2 - (this->fields).doneTime,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    uVar5 = (this->fields)._.originalScale.x;
    uVar6 = (this->fields)._.originalScale.y;
    fVar2 = (this->fields)._.originalScale.z;
    if (this_01 != (AnimationCurve *)0x0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,fVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      VVar3.y = (float)uVar6;
      VVar3.x = (float)uVar5;
      VVar3.z = fVar2;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffe8,VVar3,fVar1,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_00,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

