
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index != 0)) {
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar3 = (int32_t *)func_?();
    actorNr = *piVar3;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      bVar5 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        (this_00,actorNr,(MVPlayer **)&stack0xfffffff4,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      Notification::Notification_Initialize(unaff_EBX,data,(MethodInfo *)0x0);
      pNVar6 = unaff_EBX[1].klass;
      pOVar1 = (Object *)func_?();
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (pNVar6 != (Notification__Class *)0x0) {
        TVar7.m_Index = 0;
        if (TVar2.m_Index != 0) {
          if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
            TVar7 = TVar2;
          }
          if (TVar7.m_Index == 0) goto code_?;
        }
        pIVar8 = (pNVar6->_0).image;
        pMVar9 = (MVPlayer *)pIVar8[0x12].nameNoExt;
        (*(code *)pIVar8[0x12].name)(pNVar6,TVar7.m_Index);
        if (((pMVar9 != (MVPlayer *)0x0) &&
            (pUVar10 = (pMVar9->fields)._UserProfileData_k__BackingField,
            pUVar10 != (UserProfileData *)0x0)) &&
           (pMVar11 = unaff_EBX[1].monitor, pMVar11 != (MonitorData *)0x0)) {
          (**(code **)(*(int *)pMVar11 + 0x318))(pMVar11,(pUVar10->fields).UserName);
          pvVar12 = unaff_EBX[1].fields._._._._.m_CachedPtr;
          if (pvVar12 != (void *)0x0) {
            *(undefined4 *)((int)pvVar12 + 0x24) = *(undefined4 *)((int)pvVar12 + 0x18);
            *(undefined1 *)((int)pvVar12 + 0x1c) = 1;
            if (*(CanvasGroup **)((int)pvVar12 + 0x10) != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (*(CanvasGroup **)((int)pvVar12 + 0x10),0.0,(MethodInfo *)0x0);
              *(undefined4 *)((int)pvVar12 + 0x20) = 0;
              pvVar12 = unaff_EBX[1].fields._._._._.m_CachedPtr;
              if (pvVar12 != (void *)0x0) {
                pDVar13 = *(Delegate **)((int)pvVar12 + 0x2c);
                this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)unaff_EBX,
                           MethodInfo__FlagHighScoreNotification__DestroyNotification__,
                           (MethodInfo *)0x0);
                TVar2.m_Index =
                     (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar13,(Delegate *)this_01,(MethodInfo *)0x0);
                if ((Delegate *)TVar2.m_Index == (Delegate *)0x0) {
                  *(undefined4 *)((int)pvVar12 + 0x2c) = 0;
                  func_?((int)pvVar12 + 0x2c);
                  return;
                }
                pDVar13 = (Delegate *)0x0;
                if ((Action__Class *)((Delegate *)TVar2.m_Index)->klass == TypeInfo__System__Action)
                {
                  pDVar13 = (Delegate *)TVar2.m_Index;
                }
                if (pDVar13 != (Delegate *)0x0) {
                  *(Delegate **)((int)pvVar12 + 0x2c) = pDVar13;
                  pDVar13 = (Delegate *)0x0;
                  if ((Action__Class *)((Delegate *)TVar2.m_Index)->klass ==
                      TypeInfo__System__Action) {
                    pDVar13 = (Delegate *)TVar2.m_Index;
                  }
                  if (pDVar13 != (Delegate *)0x0) {
                    func_?((int)pvVar12 + 0x2c);
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
  TVar2.m_Index = func_?();
code_?:
  func_?(TVar2.m_Index);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

