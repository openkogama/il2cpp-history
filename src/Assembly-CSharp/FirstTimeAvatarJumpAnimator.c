
/* Void Update() */

void Assembly-CSharp.dll::FirstTimeAvatarJumpAnimator::FirstTimeAvatarJumpAnimator_Update
               (FirstTimeAvatarJumpAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_state);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
     (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
     pBVar3 != (BoneAnimation *)0x0)) {
    bVar4 = BoneAnimation::BoneAnimation_IsPlaying
                      (pBVar3,(this->fields).jumpAnimationName,(MethodInfo *)0x0);
    if ((bVar4 == 0) && (1 < (this->fields).jumps)) {
      pMVar1 = (this->fields).avatarLocal;
      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
          (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
         (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
         pBVar3 != (BoneAnimation *)0x0)) {
        BoneAnimation::BoneAnimation_Play(pBVar3,(this->fields).jumpAnimationName,(MethodInfo *)0x0)
        ;
        piVar5 = &(this->fields).jumps;
        *piVar5 = *piVar5 + -1;
        return;
      }
    }
    else {
      iVar6 = (this->fields).jumps;
      if (iVar6 == 1) {
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                     (Object *)StringLiteral_state,(Object *)StringLiteral_Walk,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar8,(MethodInfo *)0x0);
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                       (Object *)StringLiteral_timeStamp,pOVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pMVar1 = (this->fields).avatarLocal;
            if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
               (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
               pBVar3 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_ComputeBlendAnimation
                        (pBVar3,(Dictionary_2_System_Object_System_Object_ *)pDVar7,
                         (MethodInfo *)0x0);
              piVar5 = &(this->fields).jumps;
              *piVar5 = *piVar5 + -1;
              return;
            }
          }
        }
      }
      else {
        if (iVar6 != 0) {
          return;
        }
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                     (Object *)StringLiteral_state,(Object *)StringLiteral_Idle,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar8,(MethodInfo *)0x0);
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                       (Object *)StringLiteral_timeStamp,pOVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pMVar1 = (this->fields).avatarLocal;
            if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
               (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
               pBVar3 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_ComputeBlendAnimation
                        (pBVar3,(Dictionary_2_System_Object_System_Object_ *)pDVar7,
                         (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* FirstTimeAvatarJumpAnimator() */

void Assembly-CSharp.dll::FirstTimeAvatarJumpAnimator::FirstTimeAvatarJumpAnimator__ctor
               (FirstTimeAvatarJumpAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Jump);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).jumpAnimationName;
  (this->fields).jumps = 6;
  *ppSVar1 = StringLiteral_Jump;
  func_?(ppSVar1,StringLiteral_Jump);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

