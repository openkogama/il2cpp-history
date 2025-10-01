
/* Void Awake() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Awake
               (ScaleAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._.target;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
            fVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System
                    ::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                              ((KeyValuePair_2_System_Single_System_Single_ *)
                               (pKVar4->vector + iVar5 + -1),(MethodInfo *)0x0);
            (this->fields).doneTime = fVar6;
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
      fVar6 = pVVar7->z;
      (this->fields)._.originalScale.x = pVVar7->x;
      (this->fields)._.originalScale.y = fVar8;
      (this->fields)._.originalScale.z = fVar6;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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


/* Void Stop() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Stop
               (ScaleAnimation *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).beginTime;
  fVar2 = (this->fields)._.originalScale.z;
  this_00 = (this->fields)._.target;
  this_01 = (this->fields).animationCurve;
  fVar3 = (this->fields)._.originalScale.x;
  fVar4 = (this->fields)._.originalScale.y;
  if (this_01 != (AnimationCurve *)0x0) {
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_01,(this->fields).doneTime,(MethodInfo *)0x0);
    fVar2 = fVar2 * fVar5;
    if (this_00 != (Transform *)0x0) {
      value.y = fVar4 * fVar5;
      value.x = fVar3 * fVar5;
      value.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,value,(MethodInfo *)0x0);
      pSVar6 = (this->fields)._.OnScaleAnimationStopped;
      (this->fields)._.state = 1;
      if (pSVar6 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (*(pSVar6->fields)._._.invoke_impl)((pSVar6->fields)._._.method_code);
      }
      return;
    }
  }
  func_?(fVar2,fVar1);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Stopped(Single) */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Stopped
               (ScaleAnimation *this,float extraTime,MethodInfo *method)

{
  (this->fields)._.state = 1;
  pSVar1 = (this->fields)._.OnScaleAnimationStopped;
  if (pSVar1 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,extraTime,(pSVar1->fields)._._.method);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Update
               (ScaleAnimation *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
    (this->fields)._.testState = 0;
  }
  if ((this->fields)._.state != 2) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields)._.target;
  this_01 = (this->fields).animationCurve;
  fVar1 = fVar1 - (this->fields).beginTime;
  pfVar2 = &(this->fields).doneTime;
  fVar3 = (this->fields)._.originalScale.z;
  fVar4 = (this->fields)._.originalScale.x;
  fVar5 = (this->fields)._.originalScale.y;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    if (this_01 != (AnimationCurve *)0x0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,(this->fields).doneTime,(MethodInfo *)0x0);
      fVar3 = fVar3 * fVar6;
      if (this_00 != (Transform *)0x0) {
        value_00.y = fVar5 * fVar6;
        value_00.x = fVar4 * fVar6;
        value_00.z = fVar3;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_00,value_00,(MethodInfo *)0x0);
        pSVar7 = (this->fields)._.OnScaleAnimationStopped;
        (this->fields)._.state = 1;
        if (pSVar7 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          return;
        }
        (*(pSVar7->fields)._._.invoke_impl)((pSVar7->fields)._._.method_code);
        return;
      }
    }
  }
  else if (this_01 != (AnimationCurve *)0x0) {
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_01,fVar1,(MethodInfo *)0x0);
    fVar3 = fVar3 * fVar6;
    if (this_00 != (Transform *)0x0) {
      value.y = fVar5 * fVar6;
      value.x = fVar4 * fVar6;
      value.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(fVar3,fVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

