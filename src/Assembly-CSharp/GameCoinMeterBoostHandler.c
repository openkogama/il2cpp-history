
/* Void Start() */

void Assembly-CSharp.dll::GameCoinMeterBoostHandler::GameCoinMeterBoostHandler_Start
               (GameCoinMeterBoostHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
    func_?(&StringLiteral_x);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (pSVar3 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
       pSVar3 != (SubscriptionRulesWrapper *)0x0)) {
      bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
              SubscriptionRulesWrapper_HasBenefit
                        (pSVar3,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        piVar5 = *(int **)(unaff_EDI + 0x14);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x1b8))();
          (**(code **)(*piVar5 + 0x1c0))();
          piVar5 = *(int **)(unaff_EDI + 0x18);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if ((pMVar2 != (MVLocalPlayer *)0x0) &&
               (pSVar3 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
               pSVar3 != (SubscriptionRulesWrapper *)0x0)) {
              this_01 = (GameCoinBooster *)
                        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_GetRule
                                  (pSVar3,SubscriptionBenefit__Enum_GameCoinBoost,
                                   MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                                  );
              if (this_01 != (GameCoinBooster *)0x0) {
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster
                ::GameCoinBooster_GetBoostedGameCoins(this_01,1,(MethodInfo *)0x0);
                str1 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
                mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_x,str1,(MethodInfo *)0x0);
                if (piVar5 != (int *)0x0) {
                  (**(code **)(*piVar5 + 0x318))();
                  return;
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

