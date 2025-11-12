
/* Void Start() */

void Assembly-CSharp.dll::GameCoinMeterBoostHandler::GameCoinMeterBoostHandler_Start
               (GameCoinMeterBoostHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (pSVar5 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
      pSVar5 != (SubscriptionRulesWrapper *)0x0)))) {
    bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (pSVar5,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if (obj != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pvVar8 = (obj->fields)._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar8,0);
        return;
      }
    }
    else {
      pLVar10 = (this->fields).elementToExpand;
      if (pLVar10 != (LayoutElement *)0x0) {
        fVar11 = (float)(*(pLVar10->klass->vtable).get_minWidth_1.methodPtr)(pLVar10);
        (*(pLVar10->klass->vtable).set_minWidth.methodPtr)
                  (pLVar10,fVar11 + (this->fields).ExpandAmount,
                   (pLVar10->klass->vtable).set_minWidth.method);
        pTVar12 = (this->fields).boostAmountText;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
            (((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVLocalPlayer *)0x0 &&
              (pSVar5 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
              pSVar5 != (SubscriptionRulesWrapper *)0x0)) &&
             (pOVar13 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_GetRule
                                  (pSVar5,SubscriptionBenefit__Enum_GameCoinBoost,
                                   MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                                  ), pOVar13 != (Object *)0x0)))))) {
          fVar11 = (float)*(int *)&pOVar13[1].klass / _UNK_?;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_14[0]._pointer._value = (void *)0x0;
          aRStack_14[0]._length = 0;
          aRStack_14[0]._12_4_ = 0;
          pSVar15 = mscorlib.dll::System::Number::Number_FormatInt32
                              ((int)fVar11 + 1,aRStack_14,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar15 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_x,pSVar15,(MethodInfo *)0x0);
          if (pTVar12 != (Text *)0x0) {
            UNRECOVERED_JUMPTABLE = (pTVar12->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pTVar12,pSVar15,(pTVar12->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE)
            ;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

