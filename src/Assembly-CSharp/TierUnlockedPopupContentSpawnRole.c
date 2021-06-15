
/* Void AddSpawnRoleRewardInfo(GamePassesSpawnRoleRewardInfo) */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::
     TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo
               (TierUnlockedPopupContentSpawnRole *this,GamePassesSpawnRoleRewardInfo *spawnRoleInfo
               ,MethodInfo *method)

{
  if (spawnRoleInfo != (GamePassesSpawnRoleRewardInfo *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)spawnRoleInfo,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)(this->fields)._.mainContent,0,(MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)spawnRoleInfo,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,1,(MethodInfo *)0x0);
        this_00 = (this->fields).contentCuller;
        if (this_00 != (GamePassesShopContentCuller *)0x0) {
          GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
                    (this_00,(IGamePassShopContent *)spawnRoleInfo,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleDisplaying() */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::
     TierUnlockedPopupContentSpawnRole_HandleDisplaying
               (TierUnlockedPopupContentSpawnRole *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields)._.titleOriginalYPosition;
  fVar1 = (fVar1 - (this->fields)._.slideInStartTime) / _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
            (fVar2 - _UNK_?,fVar2,fVar1,(MethodInfo *)0x0);
  pTVar3 = (this->fields)._.titleText;
  if (pTVar3 != (Text *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar3,(MethodInfo *)0x0);
    pTVar3 = (this->fields)._.titleText;
    if ((pTVar3 != (Text *)0x0) &&
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar3,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
      fVar2 = pVVar6->x;
      pTVar3 = (this->fields)._.titleText;
      if ((pTVar3 != (Text *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar3,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
        puVar8 = &stack0xffffffe8;
        puVar9 = &UNK_?;
        func_?();
        if (pTVar4 != (Transform *)0x0) {
          value.y = (float)puVar8;
          value.x = (float)puVar9;
          value.z = fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar4,value,(MethodInfo *)0x0);
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          fVar2 = (fVar2 - (this->fields)._.slideOutStartTime) / _UNK_?;
          if (fVar2 <= _UNK_?) {
            return;
          }
          fVar1 = (this->fields)._.titleOriginalYPosition;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar1,fVar1 + _UNK_?,fVar2,(MethodInfo *)0x0);
          pTVar3 = (this->fields)._.titleText;
          if (pTVar3 != (Text *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pTVar3,(MethodInfo *)0x0);
            pTVar3 = (this->fields)._.titleText;
            if ((pTVar3 != (Text *)0x0) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pTVar3,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
              fVar1 = pVVar6->x;
              pTVar3 = (this->fields)._.titleText;
              if (pTVar3 != (Text *)0x0) {
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pTVar3,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
                  puVar8 = &stack0xffffffe8;
                  puVar9 = &UNK_?;
                  func_?();
                  if (pTVar4 != (Transform *)0x0) {
                    value_00.y = (float)puVar8;
                    value_00.x = (float)puVar9;
                    value_00.z = fVar1;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar4,value_00,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::
     TierUnlockedPopupContentSpawnRole_Initialize
               (TierUnlockedPopupContentSpawnRole *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  this_00 = (this->fields).contentCuller;
  if (this_00 != (GamePassesShopContentCuller *)0x0) {
    GamePassesShopContentCuller::GamePassesShopContentCuller_Initialize(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnContinuePressed() */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::
     TierUnlockedPopupContentSpawnRole_OnContinuePressed
               (TierUnlockedPopupContentSpawnRole *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._.onDisplayDoneCallback;
  if (pUVar1 == (UnityAction *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(pUVar1->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pcVar2 = (pUVar1->fields)._._.method_ptr;
  this_01 = (pUVar1->fields)._._.method;
  pOVar3 = (pUVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pUVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar6 = func_?(pOVar5);
    if (cVar4 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3);
      return;
    }
    if (cVar6 != '\0') {
      pOVar3 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar3);
      return;
    }
    func_?(this_01->flags,pOVar3);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}

