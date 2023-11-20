
/* Void Awake() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::InHouseAdController_Awake
               (InHouseAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
    cRam_? = '\x01';
  }
  this_01 = (InHouseAdManager *)
            MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (((this_01 != (InHouseAdManager *)0x0) &&
      ((TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment <=
       (this_01->klass->_1).naturalAligment)) &&
     ((this_01->klass->_1).typeHierarchy
      [(TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__AdIntegration__InHouse__InHouseAdManager)) {
    InHouseAdManager::InHouseAdManager_InitializeAdController(this_01,this,(MethodInfo *)0x0);
    return;
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (((pIVar1 != (IAdManager *)0x0) &&
      ((TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).naturalAligment <=
       (pIVar1->klass->_1).naturalAligment)) &&
     ((pIVar1->klass->_1).typeHierarchy
      [(TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
      cRam_? = '\x01';
    }
    this_00 = pIVar1[4].klass;
    if (((this_00 != (IAdManager__Class *)0x0) &&
        (pIVar2 = (InHouseAdManager__Class *)(this_00->_0).image,
        (TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment <=
        (pIVar2->_1).naturalAligment)) &&
       ((pIVar2->_1).typeHierarchy
        [(TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__AdIntegration__InHouse__InHouseAdManager)) {
      InHouseAdManager::InHouseAdManager_InitializeAdController
                ((InHouseAdManager *)this_00,this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize(Boolean, Int32) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::
     InHouseAdController_Initialize
               (InHouseAdController *this,bool timeoutEnabled,int32_t timeoutDelay,
               MethodInfo *method)

{
  (this->fields).timeoutAsEnabled = timeoutEnabled;
  (this->fields).timeoutSuccessDelay = timeoutDelay;
  return;
}


/* Void OnPromotionPopped() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::
     InHouseAdController_OnPromotionPopped(InHouseAdController *this,MethodInfo *method)

{
  pAVar1 = (this->fields).callback;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,1,(pAVar1->fields)._._.method);
  }
  (this->fields)._Showing_k__BackingField = 0;
  (this->fields).callback = (Action_1_Boolean_ *)0x0;
  func_?(&(this->fields).callback,0);
  (this->fields).generalPromotionAd = (GeneralPromotionAd *)0x0;
  func_?(&(this->fields).generalPromotionAd,0);
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::InHouseAdController_Pop
               (InHouseAdController *this,MethodInfo *method)

{
  this_00 = (Object__Class *)(this->fields).generalPromotionAd;
  if (this_00 != (Object__Class *)0x0) {
    if (*(char *)&this_00->interfaceOffsets == '\0') {
      bVar1 = cRam_? == '\0';
      *(undefined1 *)&this_00->interfaceOffsets = 1;
      if (bVar1) {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = this_00;
      func_?(value + 2,this_00);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowInHouseAd(Action`1[Boolean], Int32) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::
     InHouseAdController_ShowInHouseAd
               (InHouseAdController *this,Action_1_Boolean_ *onPromotionFinished,int32_t timeout,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdIntegration__InHouse__InHouseAdController___ShowInHouseAd_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).callback = onPromotionFinished;
  (this->fields)._Showing_k__BackingField = 1;
  func_?(&(this->fields).callback,onPromotionFinished);
  pGVar1 = (this->fields).generalPromotionAdPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GeneralPromotionAd *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                     );
  (this->fields).generalPromotionAd = pGVar1;
  func_?(&(this->fields).generalPromotionAd,pGVar1);
  iStack_2 = 0;
  uStack_3 = 0;
  bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar4 == 0) {
    pPStack_5 = (this->fields).registeredLooksData;
  }
  else {
    pPStack_5 = (this->fields).touristLooksData;
  }
  func_?(&pPStack_5,pPStack_5);
  pGVar1 = (this->fields).generalPromotionAd;
  iStack_2 = timeout;
  uStack_3 = uStack_3 & 0xffffff00;
  if (pGVar1 != (GeneralPromotionAd *)0x0) {
    GeneralPromotionAd::GeneralPromotionAd_Initialize
              (pGVar1,pPStack_5,GeneralPromotionType__Enum_BlockedWithTimer,0,(MethodInfo *)0x0);
    (pGVar1->fields).secondsToWait = (float)timeout;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__AdIntegration__InHouse__InHouseAdController___ShowInHouseAd_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowPromotionInterstitial(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::
     InHouseAdController_ShowPromotionInterstitial
               (InHouseAdController *this,Action_1_Boolean_ *onPromotionFinished,MethodInfo *method)

{
  InHouseAdController_ShowInHouseAd(this,onPromotionFinished,5,(MethodInfo *)0x0);
  return;
}


/* Void ShowPromotionRewarded(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::
     InHouseAdController_ShowPromotionRewarded
               (InHouseAdController *this,Action_1_Boolean_ *onPromotionFinished,MethodInfo *method)

{
  InHouseAdController_ShowInHouseAd
            (this,onPromotionFinished,(this->fields).timeoutSuccessDelay,(MethodInfo *)0x0);
  return;
}


/* Void <ShowInHouseAd>b__17_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::
     InHouseAdController__ShowInHouseAd_b__17_0
               (InHouseAdController *this,IUIStack *x,BaseEventData *_,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__AdIntegration__InHouse__InHouseAdController__OnPromotionPopped__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).generalPromotionAd;
  if (this_00 != (GeneralPromotionAd *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__AdIntegration__InHouse__InHouseAdController__OnPromotionPopped__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,1,this_01,0x20);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* InHouseAdController() */

void Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdController::InHouseAdController__ctor
               (InHouseAdController *this,MethodInfo *method)

{
  (this->fields).timeoutSuccessDelay = 0x1e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

