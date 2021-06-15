
/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_FixedUpdate
               (MVAvatarLocal_AvatarLocalModes *this,IInputToPlayerMovement *movementMap,
               MethodInfo *method)

{
  pMVar1 = (this->fields).currentMode;
  if (pMVar1 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
              (pMVar1,movementMap,(pMVar1->klass->vtable).__unknown_2.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_FrameUpdate
               (MVAvatarLocal_AvatarLocalModes *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

{
  pMVar1 = (this->fields).currentMode;
  if (pMVar1 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
              (pMVar1,interactionMap,(pMVar1->klass->vtable).Activate.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarRuntimeState GetStartState() */

AvatarRuntimeState__Enum
Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
          (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pOVar2 = (Object *)func_?(3,TypeInfo__IPlayModeUI);
    if ((char)pOVar2 != '\0') {
code_?:
      return (uint)pOVar2 & 0xffffff00;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
      if (this_01 !=
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) {
        pOVar2 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (this_01,(MethodInfo *)0x0);
        if (pOVar2 != (Object *)0x2) {
          return CONCAT31((int3)((uint)pOVar2 >> 8),1);
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  AVar4 = (*pcVar3)();
  return AVar4;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
               (MVAvatarLocal_AvatarLocalModes *this,AvatarRuntimeState__Enum mode,
               MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).currentMode;
  this = (MVAvatarLocal_AvatarLocalModes *)(uint)(this->fields).currentState;
  if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(code *)(pMVar2->klass->vtable).__unknown.method)
              (pMVar2,mode,(pMVar2->klass->vtable).__unknown_1.methodPtr);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar2 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::
               Object]::Dictionary_2_AvatarRuntimeState_System_Object__get_Item
                         ((Dictionary_2_AvatarRuntimeState_System_Object_ *)this_00,mode,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      (pMVar1->fields).currentState = (uint8_t)mode;
      (pMVar1->fields).currentMode = pMVar2;
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(code *)(pMVar2->klass->vtable).Activate.method)
                  (pMVar2,this,(Il2CppClass *)pMVar2->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetToStartMode() */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::
     MVAvatarLocal_AvatarLocalModes_SetToStartMode
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  AVar1 = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),(char)AVar1);
  MVAvatarLocal_AvatarLocalModes_SetMode(this,uStack_2,(MethodInfo *)0x0);
  return;
}


/* MVAvatarLocal+AvatarLocalModes(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
               (MVAvatarLocal_AvatarLocalModes *this,MVAvatarLocal *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>;
  pDVar1 = (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
            );
  (this->fields).avatarModes = pDVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  pDVar1 = (this->fields).avatarModes;
  this_00 = (MVAvatarLocal_WalkMode *)func_?(TypeInfo__MVAvatarLocal__WalkMode);
  MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor(this_00,avatar,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::Object]::
    Dictionary_2_AvatarRuntimeState_System_Object__Add
              ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
               AvatarRuntimeState__Enum_Playing,(Object *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
              );
    pDVar1 = (this->fields).avatarModes;
    this_01 = (MVAvatarLocal_DeadMode *)func_?();
    MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor(this_01,avatar,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::Object]::
      Dictionary_2_AvatarRuntimeState_System_Object__Add
                ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                 AvatarRuntimeState__Enum_Dead,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                );
      pDVar1 = (this->fields).avatarModes;
      pSVar2 = (ScaleAnimationBase *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      (pSVar2->fields).originalScale.y = 10.0;
      this_02 = (ScaleAnimationBase *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&stack0xffffffe8,(MethodInfo *)0x0);
      fVar4 = pQVar3->y;
      fVar5 = pQVar3->z;
      fVar6 = pQVar3->w;
      (this_02->fields)._._._._.m_CachedPtr = (void *)pQVar3->x;
      (this_02->fields).state = (int32_t)fVar4;
      (this_02->fields).originalScale.x = fVar5;
      (this_02->fields).originalScale.y = fVar6;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,unaff_ESI);
      method_01 = (MethodInfo *)0x0;
      (pSVar2->fields).target = (Transform *)this_02;
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,unaff_ESI);
      (pSVar2->fields)._._._._.m_CachedPtr = avatar;
      (pSVar2->fields).state = 2;
      if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::Object]
        ::Dictionary_2_AvatarRuntimeState_System_Object__Add
                  ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                   AvatarRuntimeState__Enum_Revive,(Object *)pSVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                  );
        pDVar1 = (this->fields).avatarModes;
        pSVar2 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,method_01);
        (pSVar2->fields)._._._._.m_CachedPtr = avatar;
        (pSVar2->fields).state = 4;
        if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::
          Object]::Dictionary_2_AvatarRuntimeState_System_Object__Add
                    ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                     AvatarRuntimeState__Enum_ReviveWait,(Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                    );
          pDVar1 = (this->fields).avatarModes;
          pSVar2 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,method_01);
          (pSVar2->fields)._._._._.m_CachedPtr = avatar;
          (pSVar2->fields).state = 4;
          if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::
            Object]::Dictionary_2_AvatarRuntimeState_System_Object__Add
                      ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                       AvatarRuntimeState__Enum_Hidden,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                      );
            pDVar1 = (this->fields).avatarModes;
            pSVar2 = (ScaleAnimationBase *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffe8,(MethodInfo *)0x0);
            fVar4 = pQVar3->y;
            pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pQVar3->z;
            pSVar8 = (ScaleAnimationBase__Class *)pQVar3->w;
            (pSVar2->fields).target = (Transform *)pQVar3->x;
            (pSVar2->fields).testState = (int32_t)fVar4;
            (pSVar2->fields).OnScaleAnimationStopped = pSVar7;
            pSVar2[1].klass = pSVar8;
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)avatar);
            (pSVar2->fields)._._._._.m_CachedPtr = avatar;
            bVar9 = cRam_? == '\0';
            (pSVar2->fields).state = 1;
            if (bVar9) {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            pAVar10 = (AvatarInputController *)func_?();
            AvatarInputController::AvatarInputController__ctor(pAVar10,(MethodInfo *)0x0);
            pARam00000010 = pAVar10;
            if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::
              Object]::Dictionary_2_AvatarRuntimeState_System_Object__Add
                        ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                         AvatarRuntimeState__Enum_TimeAttackFlagDebriefing,(Object *)0x0,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                        );
              pDVar1 = (this->fields).avatarModes;
              method_02 = TypeInfo__MVAvatarLocal__WaitMode;
              pSVar2 = (ScaleAnimationBase *)func_?();
              ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_02);
              bVar9 = cRam_? == '\0';
              (pSVar2->fields)._._._._.m_CachedPtr = avatar;
              (pSVar2->fields).state = 4;
              if (bVar9) {
                func_?();
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              pAVar10 = (AvatarInputController *)func_?();
              AvatarInputController::AvatarInputController__ctor(pAVar10,(MethodInfo *)0x0);
              (pSVar2->fields).originalScale.x = (float)pAVar10;
              if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::
                Object]::Dictionary_2_AvatarRuntimeState_System_Object__Add
                          ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                           AvatarRuntimeState__Enum_Wait,(Object *)pSVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                          );
                pDVar1 = (this->fields).avatarModes;
                method_03 = TypeInfo__MVAvatarLocal__GhostMode;
                pSVar2 = (ScaleAnimationBase *)func_?();
                ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_03);
                bVar9 = cRam_? == '\0';
                (pSVar2->fields)._._._._.m_CachedPtr = &UNK_?;
                (pSVar2->fields).state = 4;
                if (bVar9) {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                pAVar10 = (AvatarInputController *)func_?();
                AvatarInputController::AvatarInputController__ctor(pAVar10,(MethodInfo *)0x0);
                if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System
                  ::Object]::Dictionary_2_AvatarRuntimeState_System_Object__Add
                            ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                             AvatarRuntimeState__Enum_Ghost,(Object *)pSVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                            );
                  key = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
                  pDVar1 = (this->fields).avatarModes;
                  (this->fields).currentState = (uint8_t)key;
                  if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
                    pMVar11 = (MVAvatarLocal_AvatarMode *)
                              mscorlib.dll::System::Collections::Generic::
                              Dictionary`2[AvatarRuntimeState,System::Object]::
                              Dictionary_2_AvatarRuntimeState_System_Object__get_Item
                                        ((Dictionary_2_AvatarRuntimeState_System_Object_ *)pDVar1,
                                         key,
                                         MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                                        );
                    (this->fields).currentMode = pMVar11;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

