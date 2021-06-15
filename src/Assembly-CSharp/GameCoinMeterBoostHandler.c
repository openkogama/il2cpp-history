
/* Void Start() */

void Assembly-CSharp.dll::GameCoinMeterBoostHandler::GameCoinMeterBoostHandler_Start
               (GameCoinMeterBoostHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pSVar3 = (SubscriptionRulesWrapper *)
               PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pMVar2,
                          (MethodInfo *)0x0);
      if (pSVar3 != (SubscriptionRulesWrapper *)0x0) {
        bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (pSVar3,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
        piVar5 = piRam_?;
        if (bVar4 == 0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)0x0,(MethodInfo *)0x0);
          if (this_00 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            return;
          }
        }
        else if (piRam_? != (int *)0x0) {
          (**(code **)(*piRam_? + 0x1b8))();
          (**(code **)(*piVar5 + 0x1c0))();
          piVar5 = piRam_?;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar2 != (MVLocalPlayer *)0x0) {
              pSVar3 = (SubscriptionRulesWrapper *)
                       PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                       PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                 ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pMVar2,
                                  (MethodInfo *)0x0);
              if (pSVar3 != (SubscriptionRulesWrapper *)0x0) {
                this_01 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                          ::SubscriptionRulesWrapper_GetRule_2
                                    (pSVar3,SubscriptionBenefit__Enum_GameCoinBoost,
                                     MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                                    );
                if (this_01 != (XpBooster *)0x0) {
                  MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::
                  GameCoinBooster::GameCoinBooster_GetBoostedGameCoins
                            ((GameCoinBooster *)this_01,1,(MethodInfo *)0x0);
                  str1 = (String *)func_?();
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?();
                  }
                  mscorlib.dll::System::String::String_Concat_2
                            (StringLiteral_x,str1,(MethodInfo *)0x0);
                  if (piVar5 != (int *)0x0) {
                    (**(code **)(*piVar5 + 0x308))();
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

