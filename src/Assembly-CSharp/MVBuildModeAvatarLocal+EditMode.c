
/* Void Activate(MVBuildModeAvatarLocal+AvatarBuildModes) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_Activate
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_Visible.method)
              (pMVar1,0,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
    pMVar1 = (this->fields)._.buildModeAvatar;
    if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
       (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)(pMVar1->fields).avatarScriptObject,
       this_00 !=
       (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
        *)0x0)) {
      this_01 = (AvatarCamerasDesktopBuildMode *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (AvatarCamerasDesktopBuildMode *)0x0) {
        AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
                  (this_01,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (pGVar2 != (GameEventManager *)0x0) {
          pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                     ,
                     MethodInfo__System__Action<EditorEvent,_System::Object>__Action_System__Object__void__
                    );
          if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_add_OnEnterBuildStateEvent
                      (pGVar3,(Action_2_EditorEvent_Object_ *)pUVar4,(MethodInfo *)0x0);
            pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (pGVar2 != (GameEventManager *)0x0) {
              pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this,
                         MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                         ,
                         MethodInfo__System__Action<EditorEvent,_System::Object>__Action_System__Object__void__
                        );
              if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                GameEventManager+AvatarCommandsBuildModeManager::
                GameEventManager_AvatarCommandsBuildModeManager_add_OnExitBuildStateEvent
                          (pGVar3,(Action_2_EditorEvent_Object_ *)pUVar4,(MethodInfo *)0x0);
                pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                   ((MethodInfo *)0x0);
                if (pGVar2 != (GameEventManager *)0x0) {
                  pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
                  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(
                                             TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                             );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar4,(Object *)this,
                             MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                             ,
                             MethodInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>__Action_System__Object__void__
                            );
                  if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                    GameEventManager+AvatarCommandsBuildModeManager::
                    GameEventManager_AvatarCommandsBuildModeManager_add_OnSetSpawn
                              (pGVar3,(Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)pUVar4
                               ,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AvatarCommandsBuildModeOnEnterBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnEnterBuildStateEvent
               (MVBuildModeAvatarLocal_EditMode *this,EditorEvent__Enum editorEvent,Object *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(editorEvent) {
  case EditorEvent__Enum_CERoamUUI:
    pMVar1 = (MethodInfo *)0x0;
    data_00 = (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)
              func_?(data,TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
    MVBuildModeAvatarLocal_EditMode_CERoamUUIEnterSetup(this,data_00,pMVar1);
    return;
  case EditorEvent__Enum_CEEditBodyUUI:
    pMVar1 = (MethodInfo *)0x0;
    data_01 = (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *)
              func_?(data,TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData);
    MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIEnterSetup(this,data_01,pMVar1);
    return;
  default:
    if (editorEvent == EditorEvent__Enum_EditCubes) {
      iVar2 = func_?(data,TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((iVar2 == 0) || (pMVar3 == (MVWorldObjectClientManager *)0x0)) ||
         (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar3,*(int32_t *)(iVar2 + 8),(MethodInfo *)0x0),
         pMVar4 == (MVWorldObject *)0x0)) break;
      puVar5 = (undefined8 *)
               (*(code *)(pMVar4->klass->vtable).get_Scale.method)
                         (&stack0xffffffd4,pMVar4,(pMVar4->klass->vtable).set_Scale.methodPtr);
      uVar6 = *puVar5;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fStack_7 = (float)uVar6;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,fStack_7 + fStack_7,(MethodInfo *)0x0);
      puVar5 = (undefined8 *)
               (*(code *)(pMVar4->klass->vtable).get_Scale.method)
                         (&stack0xffffffd4,pMVar4,(pMVar4->klass->vtable).set_Scale.methodPtr);
      fStack_7 = (float)*puVar5;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,fStack_7 * _UNK_?,(MethodInfo *)0x0);
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar8;
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar9;
    }
    return;
  case EditorEvent__Enum_ESEditCubeTutorial:
    iVar2 = func_?(data,TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fStack_10 = 0.0;
    uStack_11 = 0;
    func_?(&uStack_11,0,0,0,0);
    (this->fields).moveConstraintCenter.x = (float)(undefined4)uStack_11;
    (this->fields).moveConstraintCenter.y = (float)uStack_11._4_4_;
    (this->fields).moveConstraintSet = 1;
    (this->fields).moveConstraintCenter.z = fStack_10;
    (this->fields).moveConstraintRadius = 25.0;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((iVar2 != 0) && (pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar3,*(int32_t *)(iVar2 + 8),(MethodInfo *)0x0),
       pMVar4 != (MVWorldObject *)0x0)) {
      puVar5 = (undefined8 *)
               (*(code *)(pMVar4->klass->vtable).get_Scale.method)
                         (&stack0xffffffd4,pMVar4,(pMVar4->klass->vtable).set_Scale.methodPtr);
      uVar6 = *puVar5;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fStack_7 = (float)uVar6;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,fStack_7,(MethodInfo *)0x0);
      puVar5 = (undefined8 *)
               (*(code *)(pMVar4->klass->vtable).get_Scale.method)
                         (&stack0xffffffd4,pMVar4,(pMVar4->klass->vtable).set_Scale.methodPtr);
      fStack_7 = (float)*puVar5;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,fStack_7,(MethodInfo *)0x0);
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar8;
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar9;
      return;
    }
    break;
  case EditorEvent__Enum_ESLeaveCubeTutorial:
    this_00 = (this->fields)._.buildModeAvatar;
    if (this_00 != (MVBuildModeAvatarLocal *)0x0) {
      MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn(this_00,(MethodInfo *)0x0);
      MVBuildModeAvatarLocal_EditMode_FocusOnPosition(this,(MethodInfo *)0x0);
      return;
    }
  }
  bVar12 = func_?(0);
  in_AF = 9 < (bVar12 & 0xf) | in_AF;
  *extraout_ECX = *extraout_ECX + (char)extraout_ECX + in_AF;
  *(char *)(unaff_EBX + -0x43) =
       *(char *)(unaff_EBX + -0x43) + extraout_DL + (9 < (bVar12 + in_AF * -6 & 0xf) | in_AF);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void AvatarCommandsBuildModeOnExitBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnExitBuildStateEvent
               (MVBuildModeAvatarLocal_EditMode *this,EditorEvent__Enum editorEvent,Object *data,
               MethodInfo *method)

{
  switch(editorEvent) {
  case EditorEvent__Enum_CEEditBodyUUI:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,0,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar1 != (GameEventManager *)0x0) &&
          (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
          pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar3 = (pGVar2->fields).LaserCommands,
         pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (pGVar3,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
        uRam_? = 0x3f800000;
        uRam_? = 0x3f800000;
        return;
      }
    }
    break;
  default:
    if (editorEvent != EditorEvent__Enum_EditCubes) {
      return;
    }
  case EditorEvent__Enum_CERoamUUI:
    (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
    (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
    return;
  case EditorEvent__Enum_ESEditCubeTutorial:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar3 = (pGVar2->fields).LaserCommands,
       pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                (pGVar3,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
      (this->fields).moveConstraintSet = 0;
      (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
      (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
      this_00 = (this->fields)._.buildModeAvatar;
      if (this_00 != (MVBuildModeAvatarLocal *)0x0) {
        MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn(this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  *unaff_EDI = *unaff_EDI >> 0x10;
  *(char *)unaff_EDI = (char)*unaff_EDI >> 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void AvatarCommandsBuildModeOnOnSetSpawn(Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnOnSetSpawn
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_WorldPosition.method)
              (pMVar1,position.x,position.y,position.z,
               (pMVar1->klass->vtable).get_WorldRotation_1.methodPtr);
    pMVar1 = (this->fields)._.buildModeAvatar;
    if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                ((MVWorldObjectClient *)pMVar1,rotation,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CEEditBodyUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CEEditBodyUUIData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIEnterSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)(pMVar1->fields).avatarScriptObject,
     this_00 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    this_02 = (AvatarCamerasDesktopBuildMode *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_02 != (AvatarCamerasDesktopBuildMode *)0x0) {
      AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
                (this_02,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar2 != (MainCameraManager *)0x0) {
        pMVar3 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar2,(MethodInfo *)0x0);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((data != (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *)0x0) &&
           (this_03 != (MVWorldObjectClientManager *)0x0)) {
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_03,(data->fields).focusWoId,(MethodInfo *)0x0);
          if (pMVar3 != (MVCameraBase *)0x0) {
            (*(code *)(pMVar3->klass->vtable).FocusOnObject.method)
                      (pMVar3,pMVar4,0x40000000,0,0,0,0,(pMVar3->klass->vtable).Activate.methodPtr);
            this_01 = (PrefabPool *)(this->fields)._.buildModeAvatar;
            if (this_01 != (PrefabPool *)0x0) {
              t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                func_?(TypeInfo__SharedCubeFunctions);
              }
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                        ((Transform *)t,0,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (pMVar2 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar2,1,(MethodInfo *)0x0)
                ;
                (this->fields)._XZMovementSpeedScale_k__BackingField = 0.25;
                (this->fields)._YMovementSpeedScale_k__BackingField = 0.25;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CEEditBodyUUIExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,0,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_00 = (pGVar2->fields).LaserCommands,
       this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
      this_00[2].fields.OnChangeState = (Action_1_LaserPointerState_ *)0x3f800000;
      this_00[2].fields.OnCubeMaterialChanged = (Action_1_Byte__1 *)0x3f800000;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CERoamUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CERoamUUIEnterSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,0,(MethodInfo *)0x0);
    if (data != (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)0x0) {
      fVar2 = (data->fields).centerPos.y;
      fVar3 = (data->fields).centerPos.z;
      (this->fields).moveConstraintCenter.x = (data->fields).centerPos.x;
      (this->fields).moveConstraintCenter.y = fVar2;
      (this->fields).moveConstraintCenter.z = fVar3;
      pMVar4 = (this->fields)._.buildModeAvatar;
      (this->fields).moveConstraintSet = 1;
      (this->fields).moveConstraintRadius = 10.0;
      (this->fields)._XZMovementSpeedScale_k__BackingField = 0.8;
      (this->fields)._YMovementSpeedScale_k__BackingField = 0.25;
      if ((pMVar4 != (MVBuildModeAvatarLocal *)0x0) &&
         (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)(pMVar4->fields).avatarScriptObject,
         this_00 !=
         (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
          *)0x0)) {
        this_02 = (AvatarCamerasDesktopBuildMode *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            (this_00,(MethodInfo *)0x0);
        if (this_02 != (AvatarCamerasDesktopBuildMode *)0x0) {
          AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
                    (this_02,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar1 != (MainCameraManager *)0x0) {
            pJVar5 = (JetPackCamera *)
                      MainCameraManager::MainCameraManager_get_CurrentCamera
                                (pMVar1,(MethodInfo *)0x0);
            if (pJVar5 != (JetPackCamera *)0x0) {
              pJVar6 = pJVar5->klass;
              bVar7 = (TypeInfo__AvatarEditModeCamera->_1).naturalAligment;
              uVar8 = (uint)bVar7 << 8;
              if (((pJVar6->_1).naturalAligment < bVar7) ||
                 (uVar8 = CONCAT13(1,(int3)uVar8),
                 (pJVar6->_1).typeHierarchy[bVar7 - 1] !=
                 (Il2CppClass *)TypeInfo__AvatarEditModeCamera)) {
                uVar8 = uVar8 & 0xffffff;
              }
              pJVar9 = (JetPackCamera *)0x0;
              if ((char)(uVar8 >> 0x18) != '\0') {
                pJVar9 = pJVar5;
              }
              if (pJVar9 == (JetPackCamera *)0x0) goto code_?;
              if (((pJVar6->_1).naturalAligment < (byte)(uVar8 >> 8)) ||
                 ((pJVar6->_1).typeHierarchy[bVar7 - 1] !=
                  (Il2CppClass *)TypeInfo__AvatarEditModeCamera)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              pJVar9 = (JetPackCamera *)0x0;
              if (bVar10) {
                pJVar9 = pJVar5;
              }
              if (pJVar9 == (JetPackCamera *)0x0) goto code_?;
              JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
                        (pJVar9,(data->fields).lookAtPosition,(MethodInfo *)0x0);
              pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if (((pGVar11 != (GameEventManager *)0x0) &&
                  (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                  pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                 (this_01 = (pGVar12->fields).LaserCommands,
                 this_01 !=
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                          (this_01,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void CERoamUUIExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CERoamUUIExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
  (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
  return;
}


/* Void DeActivate(MVBuildModeAvatarLocal+AvatarBuildModes) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_DeActivate
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_Visible.method)
              (pMVar1,1,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar2 != (GameEventManager *)0x0) {
      pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                 ,
                 MethodInfo__System__Action<EditorEvent,_System::Object>__Action_System__Object__void__
                );
      if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_remove_OnEnterBuildStateEvent
                  (pGVar3,(Action_2_EditorEvent_Object_ *)pUVar4,(MethodInfo *)0x0);
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (pGVar2 != (GameEventManager *)0x0) {
          pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                     ,
                     MethodInfo__System__Action<EditorEvent,_System::Object>__Action_System__Object__void__
                    );
          if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_remove_OnExitBuildStateEvent
                      (pGVar3,(Action_2_EditorEvent_Object_ *)pUVar4,(MethodInfo *)0x0);
            pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (pGVar2 != (GameEventManager *)0x0) {
              pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(
                                         TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                         );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this,
                         MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                         ,
                         MethodInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>__Action_System__Object__void__
                        );
              if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                GameEventManager+AvatarCommandsBuildModeManager::
                GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetSpawn
                          (pGVar3,(Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)pUVar4,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ESEditCubeTutorialExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    (this->fields).moveConstraintSet = 0;
    (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
    (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
    if ((this->fields)._.buildModeAvatar != (MVBuildModeAvatarLocal *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                            (this_01,(MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClient *)0x0) {
          puVar3 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)();
          (*(code *)(in_stack_4->klass->vtable).set_WorldPosition.method)
                    (in_stack_4,*puVar3,*(undefined4 *)(puVar3 + 1));
          pQVar5 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                             ((Quaternion *)&stack0xfffffffc,this_02,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    (in_stack_4,*pQVar5,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_03 != (MainCameraManager *)0x0) {
            pMVar6 = MainCameraManager::MainCameraManager_get_CurrentCamera
                               (this_03,(MethodInfo *)0x0);
            if (pMVar6 != (MVCameraBase *)0x0) {
              (*(code *)(pMVar6->klass->vtable).Reset.method)(pMVar6);
              return;
            }
          }
        }
      }
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ESEditCubeTutorialSetup(MVBuildModeAvatarLocal+EditMode+ESEditCubeTutorialData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).moveConstraintCenter.x = (float)(undefined4)uStack_2;
  (this->fields).moveConstraintCenter.y = (float)uStack_2._4_4_;
  (this->fields).moveConstraintSet = 1;
  (this->fields).moveConstraintCenter.z = fStack_1;
  (this->fields).moveConstraintRadius = 25.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((data != (MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialData *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(data->fields).focusWoId,(MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObject *)0x0) {
      puVar4 = (undefined8 *)(*(code *)(pMVar3->klass->vtable).get_Scale.method)(&stack0xffffffd8);
      fVar5 = (float)*puVar4;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min(1.0,fVar5,(MethodInfo *)0x0)
      ;
      puVar4 = (undefined8 *)(*(code *)(pMVar3->klass->vtable).get_Scale.method)(&stack0xffffffd8);
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,(float)*puVar4,(MethodInfo *)((ulonglong)*puVar4 >> 0x20));
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar5;
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar6;
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ESLeaveCubeTutorialSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESLeaveCubeTutorialSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  this_00 = (this->fields)._.buildModeAvatar;
  if (this_00 != (MVBuildModeAvatarLocal *)0x0) {
    MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn(this_00,(MethodInfo *)0x0);
    MVBuildModeAvatarLocal_EditMode_FocusOnPosition(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EditCubesDataEnterSetup(MVBuildModeAvatarLocal+EditMode+EditCubesSetupData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_EditCubesDataEnterSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_EditCubesSetupData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((data != (MVBuildModeAvatarLocal_EditMode_EditCubesSetupData *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(data->fields).focusWoId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      puVar2 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_Scale.method)();
      fVar3 = (float)*puVar2;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,fVar3 + fVar3,(MethodInfo *)0x0);
      puVar2 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_Scale.method)();
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,(float)*puVar2 * _UNK_?,(MethodInfo *)0x0);
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar3;
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar4;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void FocusOnPosition() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_FocusOnPosition
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pJVar1 = (JetPackCamera *)
              MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
    pPVar2 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar2 != (PrefabPool *)0x0) {
      this_01 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar2,(MethodInfo *)0x0);
      if (this_01 != (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) {
        s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                      (this_01,(MethodInfo *)0x0);
        pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            ((Vector3 *)&stack0xffffffe0,s,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        puStack_4 = (undefined *)pVVar3->x;
        unique0x0000a404 = pVVar3->y;
        fVar5 = pVVar3->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                            ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
        a_00.z = fVar5;
        a_00.x = (float)puStack_4;
        a_00.y = stack0xfffffff4;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffe0,a_00,*pVVar3,(MethodInfo *)0x0);
        puStack_4 = (undefined *)pVVar3->x;
        unique0x0000a404 = pVVar3->y;
        fVar5 = pVVar3->z;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                            ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
        uVar6 = _puStack_10;
        uVar7 = pVVar3->x;
        stack0xfffffff4 = (float)&stack0xffffffec;
        uVar8 = _puStack_10;
        a_01.z = fVar5;
        puStack_4 = (undefined *)uVar6;
        stack0xfffffff4 = SUB84(uVar6,4);
        a_01.x = (float)puStack_4;
        a_01.y = stack0xfffffff4;
        _puStack_10 = uVar8;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffec,a_01,*pVVar3,(MethodInfo *)0x0);
        fVar5 = pVVar3->x;
        fVar9 = pVVar3->y;
        fVar10 = pVVar3->z;
        pPVar2 = (PrefabPool *)
                  (((MVBuildModeAvatarLocal_EditMode__Fields *)(uVar7 + 8))->_).buildModeAvatar;
        if (pPVar2 != (PrefabPool *)0x0) {
          this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
          if (this_02 != (MVPointLightObject *)0x0) {
            pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffc4,(Transform *)this_02,
                                 (MethodInfo *)0x0);
            fVar12 = pQVar11->x;
            fVar13 = pQVar11->y;
            fVar14 = pQVar11->z;
            fVar15 = pQVar11->w;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                                ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
            puStack_4 = (undefined *)pVVar3->x;
            unique0x0000a404 = pVVar3->y;
            fVar16 = pVVar3->z;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            rotation.y = fVar13;
            rotation.x = fVar12;
            rotation.z = fVar14;
            rotation.w = fVar15;
            point.z = fVar16;
            point.x = (float)puStack_4;
            point.y = stack0xfffffff4;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffd4,rotation,point,(MethodInfo *)0x0);
            a.y = fVar9;
            a.x = fVar5;
            a.z = fVar10;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffd4,a,*pVVar3,(MethodInfo *)0x0);
            stack0xfffffff4 = (float)pVVar3;
            if (pJVar1 != (JetPackCamera *)0x0) {
              pJVar17 = pJVar1->klass;
              bVar18 = (TypeInfo__JetPackCamera->_1).naturalAligment;
              bVar19 = (pJVar17->_1).naturalAligment;
              if ((bVar19 < bVar18) ||
                 ((pJVar17->_1).typeHierarchy[bVar18 - 1] != (Il2CppClass *)TypeInfo__JetPackCamera))
              {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              pJVar21 = (JetPackCamera *)0x0;
              if (bVar20) {
                pJVar21 = pJVar1;
              }
              if (pJVar21 != (JetPackCamera *)0x0) {
                if ((bVar19 < bVar18) ||
                   ((pJVar17->_1).typeHierarchy[bVar18 - 1] != (Il2CppClass *)TypeInfo__JetPackCamera)
                   ) {
                  bVar20 = false;
                }
                else {
                  bVar20 = true;
                }
                pJVar21 = (JetPackCamera *)0x0;
                if (bVar20) {
                  pJVar21 = pJVar1;
                }
                if (pJVar21 != (JetPackCamera *)0x0) {
                  JetPackCamera::JetPackCamera_FocusOnPosition
                            (pJVar21,*pVVar3,0.0,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_FrameUpdate
               (MVBuildModeAvatarLocal_EditMode *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).doubleTap;
  if (this_00 == (DoubleTapMovementChecker *)0x0) goto code_?;
  DoubleTapMovementChecker::DoubleTapMovementChecker_FrameUpdate(this_00,(MethodInfo *)0x0);
  pVVar1 = MVBuildModeAvatarLocal_EditMode_GetMovementVelocity
                     ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.y = (float)uVar3;
  a_00.x = (float)uVar2;
  a_00.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffd8,a_00,fVar5,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pVVar1->x;
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,*pVVar1,method_00);
  fVar4 = 0.0;
  puVar6 = &UNK_?;
  fVar7 = (float10)func_?();
  if (_UNK_? < (double)fVar7) {
    pMVar8 = (this->fields)._.buildModeAvatar;
    if (pMVar8 == (MVBuildModeAvatarLocal *)0x0) goto code_?;
    pCVar9 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)pMVar8,(MethodInfo *)0x0);
    if (pCVar9 == (CelestialParam *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)pCVar9,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    forward.y = fVar4;
    forward.x = (float)method_00;
    forward.z = (float)puVar6;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffd4,forward,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar10,*pQVar11,(MethodInfo *)0x0);
  }
  pVVar1 = MVBuildModeAvatarLocal_EditMode_GetElevationVelocity
                     ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._YMovementSpeedScale_k__BackingField;
  uVar12._0_4_ = pVVar1->x;
  uVar12._4_4_ = pVVar1->y;
  fVar5 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar5;
  a.x = (float)(int)uVar12;
  a.y = (float)(int)((ulonglong)uVar12 >> 0x20);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffd8,a,fVar4,(MethodInfo *)0x0);
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,*pVVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar8 = (this->fields)._.buildModeAvatar;
  if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
    pCVar9 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)pMVar8,(MethodInfo *)0x0);
    if (pCVar9 != (CelestialParam *)0x0) {
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pCVar9,(MethodInfo *)0x0);
      if (pTVar10 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
        uVar13 = pVVar1->x;
        fVar4 = pVVar1->z;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_01 != (MainCameraManager *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_01,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                               ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
            pMVar8 = (this->fields)._.buildModeAvatar;
            fVar5 = pVVar1->y;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
            }
            euler.y = fVar5;
            euler.x = (float)uVar13;
            euler.z = fVar4;
            pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                                ((Quaternion *)&stack0xffffffd4,euler,(MethodInfo *)0x0);
            if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
              MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                        ((MVWorldObjectClient *)pMVar8,*pQVar11,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Vector3 GetDirection(Boolean) */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    bool freeFlight,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)pQVar1->x;
      fVar2 = pQVar1->y;
      pVVar3 = MVBuildModeAvatarLocal_EditMode_GetInputDirection
                         ((Vector3 *)&stack0xffffffdc,method_00);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      point = *pVVar3;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      rotation.y = fVar2;
      rotation.x = (float)method_00;
      rotation.z = (float)uVar4;
      rotation.w = (float)uVar5;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffdc,rotation,point,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar3->x;
      uStack_6._4_4_ = pVVar3->y;
      fVar2 = pVVar3->z;
      if (freeFlight == 0) {
        uStack_6 = uStack_6 & 0xffffffff;
      }
      func_?();
      uRam_? = uStack_6;
      fRam00000008 = fVar2;
      return (Vector3 *)0x0;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Vector3 GetElevationVelocity() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetElevationVelocity
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveUp,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      fVar2 = (this->fields).keyVelocity;
      fVar3 = (this->fields).keyAcceleration;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar2 = fVar4 * fVar3 + fVar2;
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
    if (fVar2 == 0.0) {
      fVar2 = (this->fields).keyDamping;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (1.0,fVar3 * fVar2,(MethodInfo *)0x0);
      fVar2 = (_UNK_? - fVar2) * (this->fields).keyVelocity;
    }
    else {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      fVar3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                        (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
      fVar2 = _UNK_?;
      if (fVar3 <= 0.0) {
        fVar2 = _UNK_?;
      }
    }
  }
  else {
    fVar2 = (this->fields).keyVelocity;
    fVar3 = (this->fields).keyAcceleration;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar4 * fVar3;
  }
code_?:
  (this->fields).keyVelocity = fVar2;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     ((Vector3 *)&stack0xffffffec,fVar3 * fVar2,*pVVar5,(MethodInfo *)0x0);
  uVar6 = pVVar5->y;
  fStack7 = pVVar5->z;
  uStack8 = uVar6;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffec,*pVVar5,(this->fields).heightAdjustSpeed,
                      (MethodInfo *)0x0);
  _UNK_? = pVVar5->x;
  _UNK_? = pVVar5->y;
  _UNK_? = pVVar5->z;
  return (Vector3 *)&UNK_?;
}


/* Vector3 GetInputDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetInputDirection
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->x;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  fVar5 = fVar2;
  fVar6 = fVar3;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
    fVar5 = fVar2;
    fVar6 = fVar3;
  }
  bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveForward,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    a.y = fVar6;
    a.x = fVar5;
    a.z = fVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd8,a,*pVVar1,(MethodInfo *)0x0);
    fVar5 = pVVar1->x;
    fVar6 = pVVar1->y;
    fVar4 = pVVar1->z;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveBackwards,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                       ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    a_00.y = fVar6;
    a_00.x = fVar5;
    a_00.z = fVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd8,a_00,*pVVar1,(MethodInfo *)0x0);
    fVar4 = pVVar1->z;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  fVar2 = 6.5861e-44;
  bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveLeft,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                       ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    a_01.y = 0.0;
    a_01.x = fVar2;
    a_01.z = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
              ((Vector3 *)&stack0xffffffd8,a_01,*pVVar1,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  fVar2 = 6.72623e-44;
  bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveRight,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    uVar8 = pVVar1->x;
    uVar9 = pVVar1->y;
    a_02.y = (float)uVar9;
    a_02.x = (float)uVar8;
    a_02.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
              ((Vector3 *)&stack0xffffffd8,a_02,*pVVar1,(MethodInfo *)0x0);
  }
  puVar10 = (undefined8 *)func_?();
  uVar11 = *puVar10;
  fVar2 = *(float *)(puVar10 + 1);
  __return_storage_ptr__->x = (float)(int)uVar11;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar11 >> 0x20);
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Vector3 GetMovementVelocity() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetMovementVelocity
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if ((this_00 == (Camera *)0x0) ||
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0), this_02 == (Transform *)0x0))
  {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                     ((Quaternion *)&stack0xffffffa4,this_02,(MethodInfo *)0x0);
  puVar5 = (undefined *)pQVar4->x;
  fVar6 = pQVar4->z;
  fVar7 = pQVar4->w;
  pVVar3 = MVBuildModeAvatarLocal_EditMode_GetInputDirection
                     ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
  VVar8 = *pVVar3;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    puVar5 = &UNK_?;
    func_?();
  }
  rotation.y = 0.0;
  rotation.x = (float)puVar5;
  rotation.z = fVar6;
  rotation.w = fVar7;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe8,rotation,VVar8,(MethodInfo *)0x0);
  uVar9 = pVVar3->y;
  fVar6 = pVVar3->z;
  if (bVar1 == 0) {
    uVar9 = 0;
  }
  uVar10 = 0;
  func_?();
  uVar11 = CONCAT44(uVar9,uVar10);
  fVar12 = (float10)func_?();
  (this->fields).targetSpeed = (this->fields).maxSpeed * (float)fVar12;
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveFast,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_01 = (ThemeAttribute_1_System_Boolean_ *)(this->fields).doubleTap;
    if (this_01 == (ThemeAttribute_1_System_Boolean_ *)0x0) goto code_?;
    bVar1 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
            ThemeAttribute_1_System_Boolean__get_Value(this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      fVar7 = (this->fields).targetSpeed;
      goto code_?;
    }
  }
  fVar7 = (this->fields).speedModifier * (this->fields).targetSpeed;
  (this->fields).targetSpeed = fVar7;
code_?:
  a = (this->fields).speed;
  fVar13 = (this->fields).speedSmoothingTime;
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                     (a,fVar7,fVar14 * fVar13,(MethodInfo *)0x0);
  (this->fields).speed = fVar7;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  VVar8.z = fVar6;
  VVar8.x = (float)(int)uVar11;
  VVar8.y = (float)(int)((ulonglong)uVar11 >> 0x20);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffc4,VVar8,fVar7,(MethodInfo *)0x0);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffc4,*pVVar3,(this->fields).speedModifier,
                      (MethodInfo *)0x0);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffc4,*pVVar3,
                      (this->fields)._XZMovementSpeedScale_k__BackingField,(MethodInfo *)0x0);
  fVar7 = pVVar3->y;
  fVar6 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Void ModifySpeed(Single, Single) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ModifySpeed
               (MVBuildModeAvatarLocal_EditMode *this,float xz,float y,MethodInfo *method)

{
  (this->fields)._XZMovementSpeedScale_k__BackingField = xz;
  (this->fields)._YMovementSpeedScale_k__BackingField = y;
  return;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_Move
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe0,velocity,fVar1,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar2->x;
  uVar3._4_4_ = pVVar2->y;
  fVar1 = pVVar2->z;
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,*pVVar2,(MethodInfo *)0x0);
  uVar3 = uVar3 & 0xffffffff;
  fVar4 = (float10)func_?();
  if ((double)fVar4 <= _UNK_?) {
    return;
  }
  this_00 = (this->fields)._.buildModeAvatar;
  if ((this_00 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this_00,(MethodInfo *)0x0),
     this_01 != (CelestialParam *)0x0)) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_01,(MethodInfo *)0x0);
    pQVar5 = TypeInfo__UnityEngine__Quaternion;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
      uVar3 = CONCAT44(pQVar5,&UNK_?);
    }
    forward.z = fVar1;
    forward.x = (float)(int)uVar3;
    forward.y = (float)(int)(uVar3 >> 0x20);
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffdc,forward,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      fStack7 = pQVar6->y;
      fStack8 = pQVar6->z;
      puStack9 = (undefined *)pQVar6->w;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar6,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void MoveCharacter(Vector3) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_MoveCharacter
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 moveDelta,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).moveConstraintSet != 0) {
    pMVar2 = (this->fields)._.buildModeAvatar;
    if (pMVar2 == (MVBuildModeAvatarLocal *)0x0) goto code_?;
    this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
    if (this_00 == (CelestialParam *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    if (this_01 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
    fVar4 = moveDelta.z;
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    uVar6._0_4_ = pVVar3->z;
    fVar7 = moveDelta.x;
    fVar8 = moveDelta.y;
    uVar9 = moveDelta._0_8_;
    uVar6._4_4_ = (float)uVar5;
    fVar10 = uVar5._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      uVar9._4_4_ = fVar8;
      uVar9._0_4_ = fVar7;
    }
    a_02.z = (float)uVar6;
    a_02.x = (float)(int)uVar5;
    a_02.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    b_01.z = fVar4;
    b_01.x = (float)uVar9;
    b_01.y = SUB84(uVar9,4);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xfffffff0,a_02,b_01,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar3->z;
    b_02.y = fVar10;
    b_02.x = uVar6._4_4_;
    b_02.z = (float)uVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffd8,(this->fields).moveConstraintCenter,b_02,
               (MethodInfo *)0x0);
    puVar11 = (undefined8 *)func_?();
    fVar4 = 0.0;
    uVar5._4_4_ = *(float *)(puVar11 + 1);
    pVVar3 = &moveDelta;
    uVar6._0_4_ = (float)*puVar11;
    puVar12 = &UNK_?;
    pVVar13 = (Vector3 *)func_?();
    rhs.y = (float)puVar12;
    rhs.x = (float)uVar6;
    rhs.z = uVar5._4_4_;
    uVar5._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                            (*pVVar13,rhs,(MethodInfo *)0x0);
    if (uVar5._4_4_ <= _UNK_?) {
      uVar6._0_4_ = (this->fields).moveConstraintCenter.x;
      uVar6._4_4_ = (this->fields).moveConstraintCenter.y;
      uVar5._4_4_ = (this->fields).moveConstraintCenter.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      b.y = fVar4;
      b.x = (float)pVVar3;
      a.z = uVar5._4_4_;
      a.x = (float)(int)uVar6;
      a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      b.z = (float)uVar5;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                         (a,b,(MethodInfo *)0x0);
      uVar5._4_4_ = moveDelta.z;
      uVar5._0_4_ = (this->fields).moveConstraintRadius;
      uVar6._0_4_ = (float)uVar5 * _UNK_?;
      if ((float)uVar6 < fVar4) {
        uVar5._0_4_ = (float)uVar5 * _UNK_?;
        fVar4 = fVar4 - (float)uVar6;
        this = (MVBuildModeAvatarLocal_EditMode *)0x0;
        if (fVar4 < (float)uVar5) {
          this = (MVBuildModeAvatarLocal_EditMode *)(_UNK_? - fVar4 / (float)uVar5);
        }
        uVar5._0_4_ = moveDelta.x;
        uVar6._0_4_ = moveDelta.y;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_00.y = (float)uVar6;
        a_00.x = (float)uVar5;
        a_00.z = uVar5._4_4_;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffd8,a_00,(float)this * (float)this,
                            (MethodInfo *)0x0);
        moveDelta.x = pVVar3->x;
        moveDelta.y = pVVar3->y;
        moveDelta.z = pVVar3->z;
      }
    }
  }
  pMVar2 = (pMVar1->fields)._.buildModeAvatar;
  if (pMVar2 != (MVBuildModeAvatarLocal *)0x0) {
    puVar11 = (undefined8 *)
             (*(code *)(pMVar2->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffe4,pMVar2,(pMVar2->klass->vtable).set_WorldPosition.methodPtr)
    ;
    uVar5._4_4_ = moveDelta.z;
    uVar9 = *puVar11;
    uVar5._0_4_ = *(float *)(puVar11 + 1);
    uVar6._0_4_ = (float)uVar9;
    fVar4 = (float)((ulonglong)uVar9 >> 0x20);
    uVar6._4_4_ = moveDelta.x;
    fVar10 = moveDelta.y;
    uVar14 = moveDelta._0_8_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
      uVar9 = CONCAT44(fVar4,(float)uVar6);
      uVar14._4_4_ = fVar10;
      uVar14._0_4_ = uVar6._4_4_;
    }
    a_01.z = (float)uVar5;
    a_01.x = (float)(int)uVar9;
    a_01.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    b_00.z = uVar5._4_4_;
    b_00.x = (float)uVar14;
    b_00.y = SUB84(uVar14,4);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
              ((Vector3 *)&stack0xffffffd8,a_01,b_00,(MethodInfo *)0x0);
    (*(code *)(pMVar2->klass->vtable).set_WorldPosition.method)();
    return;
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_SetCamera
               (MVBuildModeAvatarLocal_EditMode *this,CameraType__Enum cameraType,MethodInfo *method
               )

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)(pMVar1->fields).avatarScriptObject,
     this_00 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    cameraController = pMRam00000010;
    if (pOVar2 != (Object *)0x0) {
      if (pMRam00000010 == (MVCameraController *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack4 = 0;
      this_01 = (pMRam00000010->fields).cameraStack;
      if (this_01 != (MVCameraController_CameraStack *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_02 = (this_01->fields).cameras;
        if (this_02 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
          newCamera = (MVCameraBase *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                      Object]::Dictionary_2_CameraType_System_Object__get_Item
                                ((Dictionary_2_CameraType_System_Object_ *)this_02,in_stack_5
                                 ,
                                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                                );
          MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                    (this_01,newCamera,cameraController,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMoveConstraint(Vector3, Single) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_SetMoveConstraint
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 center,float radius,MethodInfo *method
               )

{
  (this->fields).moveConstraintCenter.x = center.x;
  (this->fields).moveConstraintCenter.y = center.y;
  (this->fields).moveConstraintSet = 1;
  (this->fields).moveConstraintCenter.z = center.z;
  (this->fields).moveConstraintRadius = radius;
  return;
}


/* Void SetToEditMode() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_SetToEditMode
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateRotationToCamera() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_UpdateRotationToCamera
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (CelestialParam *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_00,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           (&VStack_4,pTVar2,(MethodInfo *)0x0);
        uVar5 = pVVar3->x;
        fVar6 = pVVar3->z;
        pMStack_7 = (MVGameControllerBase__Class *)uVar5;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          pMStack_7 = TypeInfo__MVGameControllerBase;
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_01 != (MainCameraManager *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_01,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                               ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.buildModeAvatar;
            uVar8._0_4_ = pVVar3->x;
            uVar8._4_4_ = pVVar3->y;
            VStack_4._0_8_ = uVar8;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
            }
            euler.y = uVar8._4_4_;
            euler.x = (float)pMStack_7;
            euler.z = fVar6;
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                               ((Quaternion *)&stack0xffffffd4,euler,(MethodInfo *)0x0);
            if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
              MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                        ((MVWorldObjectClient *)pMVar1,*pQVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVBuildModeAvatarLocal+EditMode(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode__ctor
               (MVBuildModeAvatarLocal_EditMode *this,MVBuildModeAvatarLocal *buildModeAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._avatarBuildModeRuntimeState = 1;
  (this->fields).maxSpeed = 1.75;
  (this->fields).speedModifier = 5.0;
  (this->fields).speedSmoothingTime = 10.0;
  method_00 = TypeInfo__DoubleTapMovementChecker;
  this_00 = (DoubleTapMovementChecker *)func_?();
  DoubleTapMovementChecker::DoubleTapMovementChecker__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).doubleTap = this_00;
  (this->fields).keyAcceleration = 20.0;
  (this->fields).keyDamping = 10.0;
  (this->fields).heightAdjustSpeed = 5.0;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._.buildModeAvatar = buildModeAvatar;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
  (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
  return;
}


/* Boolean get_MovementConstrained() */

bool Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_get_MovementConstrained
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  return (this->fields).moveConstraintSet;
}


/* Single get_XZMovementSpeedScale() */

float Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
      MVBuildModeAvatarLocal_EditMode_get_XZMovementSpeedScale
                (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  return (this->fields)._XZMovementSpeedScale_k__BackingField;
}


/* Single get_YMovementSpeedScale() */

float Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
      MVBuildModeAvatarLocal_EditMode_get_YMovementSpeedScale
                (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  return (this->fields)._YMovementSpeedScale_k__BackingField;
}


/* Void set_MovementConstrained(Boolean) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_set_MovementConstrained
               (MVBuildModeAvatarLocal_EditMode *this,bool value,MethodInfo *method)

{
  (this->fields).moveConstraintSet = value;
  return;
}


/* Void set_XZMovementSpeedScale(Single) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_set_XZMovementSpeedScale
               (MVBuildModeAvatarLocal_EditMode *this,float value,MethodInfo *method)

{
  (this->fields)._XZMovementSpeedScale_k__BackingField = value;
  return;
}


/* Void set_YMovementSpeedScale(Single) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_set_YMovementSpeedScale
               (MVBuildModeAvatarLocal_EditMode *this,float value,MethodInfo *method)

{
  (this->fields)._YMovementSpeedScale_k__BackingField = value;
  return;
}

