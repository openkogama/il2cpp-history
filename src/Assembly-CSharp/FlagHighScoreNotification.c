
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::FlagHighScoreNotification::FlagHighScoreNotification_Initialize
               (FlagHighScoreNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FlagHighScoreNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  pOStackX_20 = (Object *)0x0;
  auStackX_10[0] = 9;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    key = *(int32_t *)&pOVar2[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar6->fields).players;
      if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_20,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                          );
        if (bVar7 == 0) {
          return;
        }
        pTVar8 = (this->fields).timeText;
        (this->fields)._.timeSinceStart = 0.0;
        auStackX_10[0] = 1;
        pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
        pAVar9 = (Action *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pTVar8 != (Text *)0x0) {
          pAVar10 = pAVar1;
          if (pAVar9 != (Action *)0x0) {
            if (pAVar9->klass == pARam0000000182dbdde0) {
              pAVar10 = pAVar9;
            }
            if (pAVar10 == (Action *)0x0) {
              FUN_?(pAVar9,pARam0000000182dbdde0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (*(pTVar8->klass->vtable).set_text.methodPtr)
                    (pTVar8,pAVar10,(pTVar8->klass->vtable).set_text.method);
          if (((pOStackX_20 != (Object *)0x0) && (pOStackX_20[7].klass != (Object__Class *)0x0)) &&
             (pTVar8 = (this->fields).userNameText, pTVar8 != (Text *)0x0)) {
            (*(pTVar8->klass->vtable).set_text.methodPtr)
                      (pTVar8,((pOStackX_20[7].klass)->_0).namespaze);
            pNVar11 = (this->fields).fader;
            if (pNVar11 != (NotificationFade *)0x0) {
              this_01 = (pNVar11->fields).group;
              (pNVar11->fields).playing = 1;
              (pNVar11->fields).pauseAt = (pNVar11->fields).duration;
              if (this_01 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_01,0.0,(MethodInfo *)0x0);
                (pNVar11->fields).currentTime = 0.0;
                pNVar11 = (this->fields).fader;
                if (pNVar11 != (NotificationFade *)0x0) {
                  pAVar9 = (pNVar11->fields).OnFinished;
                  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_02,(Object *)this,
                             MethodInfo__FlagHighScoreNotification__DestroyNotification__,
                             (MethodInfo *)0x0);
                  pAVar9 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar9,(Delegate *)this_02,(MethodInfo *)0x0);
                  if (pAVar9 == (Action *)0x0) {
                    (pNVar11->fields).OnFinished = (Action *)0x0;
                  }
                  else {
                    pAVar10 = pAVar1;
                    if (pAVar9->klass == TypeInfo__System__Action) {
                      pAVar10 = pAVar9;
                    }
                    if (pAVar10 == (Action *)0x0) {
                      FUN_?(pAVar9);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    (pNVar11->fields).OnFinished = pAVar10;
                    if (pAVar9->klass == TypeInfo__System__Action) {
                      pAVar1 = pAVar9;
                    }
                    if (pAVar1 == (Action *)0x0) {
                      FUN_?(pAVar9);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  if (iRam_? == 0) {
                    return;
                  }
                  uVar12 = (uint)((ulonglong)&(pNVar11->fields).OnFinished >> 0xc);
                  uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
                  do {
                    uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                    puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                    LOCK();
                    bVar16 = uVar14 == *puVar15;
                    if (bVar16) {
                      *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar16);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

