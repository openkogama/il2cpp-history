
/* Void Awake() */

void Assembly-CSharp.dll::HealingIndicator::HealingIndicator_Awake
               (HealingIndicator *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(Transform *)0x0,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowHealing(Single, MVPlayer) */

void Assembly-CSharp.dll::HealingIndicator::HealingIndicator_ShowHealing
               (HealingIndicator *this,float healingAmount,MVPlayer *healer,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pAVar1 = (this->fields).curve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    pKVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                       (pAVar1,(MethodInfo *)0x0);
    pAVar1 = (this->fields).curve;
    if (pAVar1 != (AnimationCurve *)0x0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                        (pAVar1,(MethodInfo *)0x0);
      if (pKVar2 != (Keyframe__Array *)0x0) {
        if (iVar3 - 1U < pKVar2->max_length) {
          fVar4 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
                  Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                            ((KeyValuePair_2_System_Single_System_Single_ *)
                             (pKVar2->vector + iVar3 + -1),(MethodInfo *)0x0);
          (this->fields).targetTime = fVar4;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HealingIndicator::HealingIndicator_Update
               (HealingIndicator *this,MethodInfo *method)

{
  fVar1 = (this->fields).timer;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  this_00 = (this->fields).curve;
  (this->fields).timer = fVar2;
  if (this_00 != (AnimationCurve *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,fVar2,(MethodInfo *)0x0);
    pIVar3 = (this->fields).healthOverlay;
    if (pIVar3 != (Image *)0x0) {
      puVar4 = (undefined4 *)(*(code *)(pIVar3->klass->vtable).get_color.method)();
      pIVar3 = (this->fields).healthOverlay;
      if (pIVar3 != (Image *)0x0) {
        (*(code *)(pIVar3->klass->vtable).set_color.method)(pIVar3,*puVar4,puVar4[1]);
        if ((this->fields).targetTime <= (this->fields).timer) {
          (this->fields).timer = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

