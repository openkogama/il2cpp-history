
/* Void Initialize(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementStateHold::PlayerElementStateHold_Initialize
               (PlayerElementStateHold *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    bVar1 = MVPlayer::MVPlayer_get_IsTourist(player,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      bVar1 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar3,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      if ((friend_1 != (Friend *)0x0) && ((friend_1->fields).status == 1)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 == (MVNetworkGame *)0x0) ||
            (this_00 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                 ((CloudyThemeBase *)pMVar2,(MethodInfo *)0x0),
            this_00 == (ThemeSkybox *)0x0)) ||
           (this_01 = (Dictionary_2_WinningConditionType_System_Object_ *)
                      System.Core.dll::System::Linq::
                      Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                 this_00,(MethodInfo *)0x0),
           this_01 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0))
        goto code_?;
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__ContainsValue
                          (this_01,(Object *)friend_1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        if (bVar1 != 0) {
          pIVar4 = (this->fields).pendingFriendship;
          if ((pIVar4 == (Image *)0x0) ||
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pIVar4,(MethodInfo *)0x0),
             pGVar5 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
        }
      }
      pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)player,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar3,
                            (MethodInfo *)0x0);
        if (pOVar6 != pOVar7) {
          return;
        }
        pIVar4 = (this->fields).localPlayerImage;
        if ((pIVar4 != (Image *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIVar4,(MethodInfo *)0x0),
           pGVar5 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

