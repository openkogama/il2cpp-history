
/* Boolean CannotLeaveEditPlayMode() */

bool Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_CannotLeaveEditPlayMode
               (ModeControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       ((pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 != (SpawnRoleDataMediator *)0x0 &&
        (this_01 = (pSVar3->fields).SpawnRoleModeTypeWrapper,
        this_01 != (SpawnRoleModeTypeWrapper *)0x0)))) {
      bVar4 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                        (this_01,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        puStack_5 = (undefined *)0x7;
        bVar4 = func_?();
        return bVar4;
      }
    }
  }
  uVar6 = func_?(&puStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* IGUICrossHair GetCrossHair() */

IGUICrossHair *
Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_GetCrossHair
          (ModeControllerBase *this,MethodInfo *method)

{
  pIVar1 = (IGUICrossHair *)
           (*(code *)(this->klass->vtable).GetCrossHair_1.method)(this,this->klass[1]._0.image);
  return pIVar1;
}


/* Void HandleFpsShortcut() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_HandleFpsShortcut
               (ModeControllerBase *this,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                    (KeyCode__Enum_Alpha8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                      (KeyCode__Enum_Alpha9,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pOVar2 = (Object_1 *)unaff_ESI[2].monitor;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pOVar3 = (Object *)unaff_ESI[1].monitor;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (unaff_ESI,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           (pOVar3,parent,0,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                           );
        unaff_ESI[2].monitor = (MonitorData *)pOVar3;
        func_?();
        return;
      }
      pOVar2 = (Object_1 *)unaff_ESI[2].monitor;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar2,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_Initialize
               (ModeControllerBase *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_Init(this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleFps() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_ToggleFps
               (ModeControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).fpsCounter;
  ppGVar2 = &(this->fields).fpsCounter;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pGVar1 = (this->fields).fpsCounterPrefab;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar1 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar1,parent,0,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                       );
    *ppGVar2 = pGVar1;
    func_?(ppGVar2);
    return;
  }
  pGVar1 = *ppGVar2;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  return;
}


/* Void TogglePlayerIndicators() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_TogglePlayerIndicators
               (ModeControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    LocationIndicatorsManager_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicatorsManager>_LocationIndicatorsManager__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).locationIndicatorsManager;
  ppLVar2 = &(this->fields).locationIndicatorsManager;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pLVar1 = (this->fields).locationIndicatorsManagerPrefab;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar1 = (LocationIndicatorsManager *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pLVar1,parent,0,
                        LocationIndicatorsManager_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicatorsManager>_LocationIndicatorsManager__UnityEngine__Transform__bool_
                       );
    *ppLVar2 = pLVar1;
    func_?(ppLVar2);
    return;
  }
  if (*ppLVar2 != (LocationIndicatorsManager *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)*ppLVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

