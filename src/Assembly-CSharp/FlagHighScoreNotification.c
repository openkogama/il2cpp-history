
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::FlagHighScoreNotification::FlagHighScoreNotification_Initialize
               (FlagHighScoreNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&MethodInfo__FlagHighScoreNotification__DestroyNotification__);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVPlayer *)0x0;
  uStack_2 = (Byte__Class *)CONCAT13(9,(undefined3)uStack_2);
  pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_2 + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar5 = (int32_t *)func_?(pOVar3);
      actorNr = *piVar5;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        bVar7 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                          (this_00,actorNr,&pMStack_1,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          return;
        }
        pTVar8 = (this->fields).timeText;
        (this->fields)._.timeSinceStart = 0.0;
        uStack_2 = TypeInfo__System__Byte;
        pOVar3 = (Object *)func_?();
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar4 = CONCAT44(TypeInfo__System__String,pOVar3);
        if (pTVar8 != (Text *)0x0) {
          pOVar9 = (Object *)0x0;
          if (pOVar3 != (Object *)0x0) {
            if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
              pOVar9 = pOVar3;
            }
            if (pOVar9 == (Object *)0x0) goto code_?;
          }
          (*(pTVar8->klass->vtable).set_text.methodPtr)
                    (pTVar8,pOVar9,(pTVar8->klass->vtable).set_text.method);
          if (((pMStack_1 != (MVPlayer *)0x0) &&
              (pUVar10 = (pMStack_1->fields)._UserProfileData_k__BackingField,
              pUVar10 != (UserProfileData *)0x0)) &&
             (pTVar8 = (this->fields).userNameText, pTVar8 != (Text *)0x0)) {
            (*(pTVar8->klass->vtable).set_text.methodPtr)
                      (pTVar8,(pUVar10->fields).UserName,(pTVar8->klass->vtable).set_text.method);
            pNVar11 = (this->fields).fader;
            if (pNVar11 != (NotificationFade *)0x0) {
              (pNVar11->fields).pauseAt = (pNVar11->fields).duration;
              this_01 = (pNVar11->fields).group;
              (pNVar11->fields).playing = 1;
              if (this_01 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_01,0.0,(MethodInfo *)0x0);
                (pNVar11->fields).currentTime = 0.0;
                pNVar11 = (this->fields).fader;
                if (pNVar11 != (NotificationFade *)0x0) {
                  pAVar12 = (pNVar11->fields).OnFinished;
                  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_02,(Object *)this,
                               MethodInfo__FlagHighScoreNotification__DestroyNotification__,
                               (MethodInfo *)0x0);
                    pAVar12 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar12,(Delegate *)this_02,(MethodInfo *)0x0);
                    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar12);
                    if (pAVar12 == (Action *)0x0) {
                      (pNVar11->fields).OnFinished = (Action *)0x0;
                      func_?(&(pNVar11->fields).OnFinished,0);
                      return;
                    }
                    pAVar13 = (Action *)0x0;
                    if (pAVar12->klass == TypeInfo__System__Action) {
                      pAVar13 = pAVar12;
                    }
                    if (pAVar13 != (Action *)0x0) {
                      (pNVar11->fields).OnFinished = pAVar13;
                      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar12);
                      pAVar13 = (Action *)0x0;
                      if (pAVar12->klass == TypeInfo__System__Action) {
                        pAVar13 = pAVar12;
                      }
                      if (pAVar13 != (Action *)0x0) {
                        func_?(&(pNVar11->fields).OnFinished,pAVar13);
                        return;
                      }
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

