
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BestFlagTimeNotification::BestFlagTimeNotification_Initialize
               (BestFlagTimeNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BestFlagTimeNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeText;
  pAVar2 = (Action *)0x0;
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 1;
  key = (Object *)FUN_?(uRam_?,auStackX_8);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pAVar3 = (Action *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pTVar1 != (Text *)0x0)) {
    if (pAVar3 != (Action *)0x0) {
      pAVar4 = pAVar2;
      if (pAVar3->klass == pARam0000000182dbdde0) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?(pAVar3,pARam0000000182dbdde0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1);
    pNVar6 = (this->fields).fader;
    if (pNVar6 != (NotificationFade *)0x0) {
      this_00 = (pNVar6->fields).group;
      (pNVar6->fields).playing = 1;
      (pNVar6->fields).pauseAt = (pNVar6->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pNVar6->fields).currentTime = 0.0;
        pNVar6 = (this->fields).fader;
        if (pNVar6 != (NotificationFade *)0x0) {
          pAVar3 = (pNVar6->fields).OnFinished;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,
                     MethodInfo__BestFlagTimeNotification__DestroyNotification__,(MethodInfo *)0x0);
          pAVar3 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pAVar3 == (Action *)0x0) {
            (pNVar6->fields).OnFinished = (Action *)0x0;
          }
          else {
            pAVar4 = pAVar2;
            if (pAVar3->klass == TypeInfo__System__Action) {
              pAVar4 = pAVar3;
            }
            if (pAVar4 == (Action *)0x0) {
              FUN_?(pAVar3);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (pNVar6->fields).OnFinished = pAVar4;
            if (pAVar3->klass == TypeInfo__System__Action) {
              pAVar2 = pAVar3;
            }
            if (pAVar2 == (Action *)0x0) {
              FUN_?(pAVar3);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&(pNVar6->fields).OnFinished >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

