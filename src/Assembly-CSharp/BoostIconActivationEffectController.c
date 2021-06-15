
/* Void Activate() */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Activate
               (BoostIconActivationEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    this_03 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_02,(MethodInfo *)0x0)
    ;
    if (this_03 != (ObjectiveArrow *)0x0) {
      bVar1 = BoostController::BoostController_IsBoostActive
                        ((BoostController *)this_03,(this->fields).boostType,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).startNewEffect;
        if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
          AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                    (this_00,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        this_01 = (this->fields).canvasGroup;
        if (this_01 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_01,1.0,(MethodInfo *)0x0);
          (this->fields).currentState = 1;
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this->fields).stateStartTime = fVar2;
          (this->fields).haveStartedNewEffect = 0;
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffc4,pTVar3,(MethodInfo *)0x0);
              uVar4 = 0;
              uVar5 = 0;
              fVar2 = 0.0;
              func_?();
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                value.y = (float)uVar5;
                value.x = (float)uVar4;
                value.z = fVar2;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar3,value,(MethodInfo *)0x0);
                if (this_04 != (Transform *)0x0) {
                  value_00.y = (float)uVar5;
                  value_00.x = (float)uVar4;
                  value_00.z = fVar2;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (this_04,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(BoostType, UnityAction) */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Initialize
               (BoostIconActivationEffectController *this,BoostType__Enum type,
               UnityAction *startNewEffect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).boosterIcons;
  do {
    if (pLVar1 == (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
        uVar5 = pVVar4->y;
        (this->fields).boostType = type;
        (this->fields).originalYPosition = (float)uVar5;
        (this->fields).startNewEffect = startNewEffect;
        return;
      }
      goto code_?;
    }
    pLVar1 = (this->fields).boosterIcons;
    if (pLVar1 == (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0)
    goto code_?;
    BVar6 = mscorlib.dll::System::Collections::Generic::
            List`1[BoostIconActivationEffectController+BoosterIcons]::
            List_1_BoostIconActivationEffectController_BoosterIcons__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                      );
    pLVar1 = (this->fields).boosterIcons;
    if (pLVar1 == (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0)
    goto code_?;
    BVar7 = mscorlib.dll::System::Collections::Generic::
            List`1[BoostIconActivationEffectController+BoosterIcons]::
            List_1_BoostIconActivationEffectController_BoosterIcons__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                      );
    if (BVar7.icon == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (BVar7.icon,BVar6.type == type,(MethodInfo *)0x0);
    pLVar1 = (this->fields).boosterIcons;
    index = index + 1;
  } while( true );
}


/* Void SetState(BoostIconActivationEffectController+EffectState) */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_SetState
               (BoostIconActivationEffectController *this,
               BoostIconActivationEffectController_EffectState__Enum newState,MethodInfo *method)

{
  (this->fields).currentState = newState;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Update
               (BoostIconActivationEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentState;
  if (iVar1 == 1) {
    fStack_2 = (this->fields).showingDuration + (this->fields).stateStartTime;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fStack_2 <= fVar3) {
      (this->fields).currentState = 2;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_02 = (this->fields).fader;
      (this->fields).stateStartTime = fVar3;
      if (this_02 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_Activate(this_02,(MethodInfo *)0x0);
    }
    return;
  }
  if (iVar1 == 2) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fStack_2 = (this->fields).originalYPosition;
    fStack_4 = (this->fields).fadingSlideAmount;
    fVar3 = (fVar3 - (this->fields).stateStartTime) / (this->fields).fadingDuration;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         (fStack_2,fStack_4 + fStack_2,fVar3,(MethodInfo *)0x0);
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_7,pTVar5,(MethodInfo *)0x0);
      uStack_8._0_4_ = pVVar6->x;
      uStack_8._4_4_ = pVVar6->y;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_9,pTVar5,(MethodInfo *)0x0);
        VStack_7.x = pVVar6->x;
        VStack_7.y = pVVar6->y;
        VStack_7.z = pVVar6->z;
        VStack_9.x = 0.0;
        uStack_10 = 0;
        fStack_11 = 0.0;
        func_?(&uStack_10,(undefined4)uStack_8,fStack_2,VStack_7.z);
        if (this_03 != (Transform *)0x0) {
          value.z = fStack_11;
          value.x = (float)(undefined4)uStack_10;
          value.y = (float)uStack_10._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_03,value,(MethodInfo *)0x0);
          fStack_4 = (this->fields).startNewEffectDelay + (this->fields).stateStartTime;
          fStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
          if ((fStack_4 <= fStack_2) && ((this->fields).haveStartedNewEffect == 0)) {
            this_01 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).startNewEffect;
            if (this_01 == (AvatarMotor_OnActiveBounceDelegate *)0x0) goto code_?;
            AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                      (this_01,(MethodInfo *)0x0);
            (this->fields).haveStartedNewEffect = 1;
          }
          if (fVar3 < _UNK_?) {
            return;
          }
          (this->fields).currentState = 0;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this->fields).stateStartTime = fVar3;
          return;
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    this_00 = (this->fields).canvasGroup;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

