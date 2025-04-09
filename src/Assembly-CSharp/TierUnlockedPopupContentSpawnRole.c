
/* Void AddSpawnRoleRewardInfo(GamePassesSpawnRoleRewardInfo) */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::
     TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo
               (TierUnlockedPopupContentSpawnRole *this,GamePassesSpawnRoleRewardInfo *spawnRoleInfo
               ,MethodInfo *method)

{
  if (spawnRoleInfo != (GamePassesSpawnRoleRewardInfo *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)spawnRoleInfo,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)(this->fields)._.mainContent,0,(MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)spawnRoleInfo,(MethodInfo *)0x0);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleDisplaying() */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::
     TierUnlockedPopupContentSpawnRole_HandleDisplaying
               (TierUnlockedPopupContentSpawnRole *this,MethodInfo *method)

{
  pTVar1 = this;
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields)._.titleText;
  if (pTVar2 != (Text *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._.titleText;
    if ((pTVar2 != (Text *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
      puVar7 = (undefined *)pVVar5->x;
      pTVar2 = (this->fields)._.titleText;
      if (pTVar2 != (Text *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          puVar8 = &UNK_?;
          puStack_6 = puVar7;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value_00.y = (float)puVar8;
            value_00.x = (float)puStack_6;
            value_00.z = pVVar5->z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,value_00,(MethodInfo *)0x0);
            fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            pTVar10 = (TierUnlockedPopupContentSpawnRole *)
                     ((fVar9 - (this->fields)._.slideOutStartTime) / _UNK_?);
            if ((float)pTVar10 <= _UNK_?) {
              return;
            }
            fVar9 = (this->fields)._.titleOriginalYPosition;
            fVar11 = fVar9 + _UNK_?;
            this = pTVar10;
            if ((float)_UNK_? < (float)pTVar10) {
              this = _UNK_?;
            }
            pTVar2 = (pTVar1->fields)._.titleText;
            if (pTVar2 != (Text *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar2,(MethodInfo *)0x0);
              pTVar2 = (pTVar1->fields)._.titleText;
              if ((pTVar2 != (Text *)0x0) &&
                 (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0),
                 pTVar4 != (Transform *)0x0)) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                puVar7 = (undefined *)pVVar5->x;
                pTVar2 = (pTVar1->fields)._.titleText;
                if ((pTVar2 != (Text *)0x0) &&
                   (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0),
                   pTVar4 != (Transform *)0x0)) {
                  fVar9 = (fVar11 - fVar9) * (float)this + fVar9;
                  puStack_6 = puVar7;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localPosition
                                     ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    value.y = fVar9;
                    value.x = (float)puStack_6;
                    value.z = pVVar5->z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar3,value,(MethodInfo *)0x0);
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
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields)._.onDisplayDoneCallback;
  if (pUVar2 != (UnityAction *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    pvStack_3 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

