
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
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pIVar4 = (Il2CppClass *)func_?();
  }
  else {
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar7 = (int32_t *)func_?(TVar5.m_Index);
    actorNr = *piVar7;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar8 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar8->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
    goto code_?;
    bVar9 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,actorNr,&pMStack_1,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      return;
    }
    pTVar10 = (this->fields).timeText;
    (this->fields)._.timeSinceStart = 0.0;
    uStack_2 = TypeInfo__System__Byte;
    pOVar3 = (Object *)func_?();
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar6 = CONCAT44(TypeInfo__System__String,TVar5.m_Index);
    if (pTVar10 == (Text *)0x0) goto code_?;
    TVar11.m_Index = 0;
    if (TVar5.m_Index != 0) {
      if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
        TVar11 = TVar5;
      }
      if (TVar11.m_Index == 0) goto code_?;
    }
    (*(code *)(pTVar10->klass->vtable).set_text.method)
              (pTVar10,TVar11.m_Index,
               (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if (((pMStack_1 == (MVPlayer *)0x0) ||
        (pUVar12 = (pMStack_1->fields)._UserProfileData_k__BackingField,
        pUVar12 == (UserProfileData *)0x0)) ||
       (pTVar10 = (this->fields).userNameText, pTVar10 == (Text *)0x0)) goto code_?;
    (*(code *)(pTVar10->klass->vtable).set_text.method)
              (pTVar10,(pUVar12->fields).UserName,
               (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).fader;
    if ((Action__Class *)data == (Action__Class *)0x0) goto code_?;
    (((Action__Class *)data)->_0).castClass =
         (Il2CppClass *)(((Action__Class *)data)->_0).this_arg.data;
    this_01 = (CanvasGroup *)(((Action__Class *)data)->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(((Action__Class *)data)->_0).this_arg.attrs = 1;
    if (this_01 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_01,0.0,(MethodInfo *)0x0);
    (((Action__Class *)data)->_0).element_class = (Il2CppClass *)0x0;
    pNVar13 = (this->fields).fader;
    if (pNVar13 == (NotificationFade *)0x0) goto code_?;
    a = (pNVar13->fields).OnFinished;
    pAVar14 = TypeInfo__System__Action;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__FlagHighScoreNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pIVar4 = (Il2CppClass *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    uVar6 = CONCAT44(TypeInfo__System__Action,pIVar4);
    if (pIVar4 == (Il2CppClass *)0x0) {
      ppIVar15 = &(pAVar14->_0).parent;
      *ppIVar15 = (Il2CppClass *)0x0;
      func_?(ppIVar15,0);
      return;
    }
    pIVar16 = (Il2CppClass *)0x0;
    if ((Action__Class *)pIVar4->image == TypeInfo__System__Action) {
      pIVar16 = pIVar4;
    }
    if (pIVar16 == (Il2CppClass *)0x0) goto code_?;
    ppIVar15 = &(pAVar14->_0).parent;
    *ppIVar15 = pIVar16;
    pIVar16 = (Il2CppClass *)0x0;
    if ((Action__Class *)pIVar4->image == TypeInfo__System__Action) {
      pIVar16 = pIVar4;
    }
    data = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Action;
    if (pIVar16 != (Il2CppClass *)0x0) {
      func_?(ppIVar15,pIVar16);
      return;
    }
  }
  uVar6 = func_?(pIVar4,data);
code_?:
  func_?(uVar6);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

