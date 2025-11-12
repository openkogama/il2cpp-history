
/* Void Initialize(String, Object, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
               (SpawnRoleSkillInfoButton *this,String *skillType,Object *skillValue,
               int32_t skillCost,SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  (this->fields).skillType = skillType;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).skillType >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).skillValue = skillValue;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).skillValue >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).skillDataManager = skillDataManager;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).skillDataManager >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  (this->fields).skillCost = skillCost;
  return;
}


/* Void ShowInfo() */

void Assembly-CSharp.dll::SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_ShowInfo
               (SpawnRoleSkillInfoButton *this,MethodInfo *method)

{
  this_00 = (this->fields).skillDataManager;
  pGVar1 = (this->fields).infoTextBubble;
  if (this_00 != (SpawnRolesSkillDataManager *)0x0) {
    pSVar2 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
                       (this_00,(this->fields).skillType,(this->fields).skillValue,
                        (this->fields).skillCost,(MethodInfo *)0x0);
    if (pGVar1 != (GamePassesTextBubble *)0x0) {
      pNVar3 = (pGVar1->fields).fader;
      if (pNVar3 != (NotificationFade *)0x0) {
        this_01 = (pNVar3->fields).group;
        (pNVar3->fields).playing = 1;
        (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
        if (this_01 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_01,0.0,(MethodInfo *)0x0);
          (pNVar3->fields).currentTime = 0.0;
          pTVar4 = (pGVar1->fields).text;
          if (pTVar4 != (Text *)0x0) {
            (*(pTVar4->klass->vtable).set_text.methodPtr)
                      (pTVar4,pSVar2,(pTVar4->klass->vtable).set_text.method);
            (pGVar1->fields).isActive = 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

