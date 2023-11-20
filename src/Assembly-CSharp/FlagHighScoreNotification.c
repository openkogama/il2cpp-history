
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
  uStack_1 = (undefined *)CONCAT13(9,(undefined3)uStack_1);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar3.m_Index != 0)) {
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar4 = (int32_t *)func_?();
    actorNr = *piVar4;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      bVar6 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        (this_00,actorNr,(MVPlayer **)&stack0xfffffff4,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        return;
      }
      pMVar7 = unaff_EBX[3].monitor;
      unaff_EBX[3].klass = (Object__Class *)0x0;
      pOVar2 = (Object *)func_?();
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (pMVar7 != (MonitorData *)0x0) {
        TVar8.m_Index = 0;
        if (TVar3.m_Index != 0) {
          if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
            TVar8 = TVar3;
          }
          if (TVar8.m_Index == 0) goto code_?;
        }
        pMVar9 = *(MVPlayer **)(*(int *)pMVar7 + 0x31c);
        (**(code **)(*(int *)pMVar7 + 0x318))(pMVar7,TVar8.m_Index);
        if (((pMVar9 != (MVPlayer *)0x0) &&
            (pUVar10 = (pMVar9->fields)._UserProfileData_k__BackingField,
            pUVar10 != (UserProfileData *)0x0)) &&
           (pOVar11 = unaff_EBX[4].klass, pOVar11 != (Object__Class *)0x0)) {
          (*(code *)(pOVar11->_0).image[0x12].name)(pOVar11,(pUVar10->fields).UserName);
          pMVar7 = unaff_EBX[4].monitor;
          if (pMVar7 != (MonitorData *)0x0) {
            *(undefined4 *)(pMVar7 + 0x24) = *(undefined4 *)(pMVar7 + 0x18);
            pMVar7[0x1c] = (MonitorData)0x1;
            if (*(CanvasGroup **)(pMVar7 + 0x10) != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (*(CanvasGroup **)(pMVar7 + 0x10),0.0,(MethodInfo *)0x0);
              *(undefined4 *)(pMVar7 + 0x20) = 0;
              pMVar7 = unaff_EBX[4].monitor;
              if (pMVar7 != (MonitorData *)0x0) {
                pDVar12 = *(Delegate **)(pMVar7 + 0x2c);
                this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,unaff_EBX,
                           MethodInfo__FlagHighScoreNotification__DestroyNotification__,
                           (MethodInfo *)0x0);
                TVar3.m_Index =
                     (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar12,(Delegate *)this_01,(MethodInfo *)0x0);
                if ((Delegate *)TVar3.m_Index == (Delegate *)0x0) {
                  *(undefined4 *)(pMVar7 + 0x2c) = 0;
                  func_?(pMVar7 + 0x2c);
                  return;
                }
                pDVar12 = (Delegate *)0x0;
                if ((Action__Class *)((Delegate *)TVar3.m_Index)->klass == TypeInfo__System__Action)
                {
                  pDVar12 = (Delegate *)TVar3.m_Index;
                }
                if (pDVar12 != (Delegate *)0x0) {
                  *(Delegate **)(pMVar7 + 0x2c) = pDVar12;
                  pDVar12 = (Delegate *)0x0;
                  if ((Action__Class *)((Delegate *)TVar3.m_Index)->klass ==
                      TypeInfo__System__Action) {
                    pDVar12 = (Delegate *)TVar3.m_Index;
                  }
                  if (pDVar12 != (Delegate *)0x0) {
                    func_?(pMVar7 + 0x2c);
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
  TVar3.m_Index = func_?();
code_?:
  func_?(TVar3.m_Index);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

