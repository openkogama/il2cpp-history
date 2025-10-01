
/* Void Activate(MVBuildModeAvatarLocal+AvatarBuildModes) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_Activate
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    func_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                   );
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                   );
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_Visible.method)
              (pMVar1,0,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
    pMVar1 = (this->fields)._.buildModeAvatar;
    if ((((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).avatarScriptObject, pAVar2 != (AvatarLocalBuildMode *)0x0)) &&
        (pAVar3 = (pAVar2->fields).avatarCamerasDesktop,
        pAVar3 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
       (this_00 = (pAVar3->fields).cameraController, this_00 != (MVCameraController *)0x0)) {
      MVCameraController::MVCameraController_SetCamera
                (this_00,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar4 != (GameEventManager *)0x0) {
        pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode;
        pUVar6 = (UnityAction_2_System_Int32_System_Int32_ *)
                 func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]
        ::UnityAction_2_System_Int32_System_Int32___ctor
                  (pUVar6,(Object *)this,
                   MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                   ,(MethodInfo *)0x0);
        if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_add_OnEnterBuildStateEvent
                    (pGVar5,(Action_2_EditorEvent_Object_ *)pUVar6,(MethodInfo *)0x0);
          pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (pGVar4 != (GameEventManager *)0x0) {
            pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode;
            pUVar6 = (UnityAction_2_System_Int32_System_Int32_ *)
                     func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
            Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                      (pUVar6,(Object *)this,
                       MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                       ,(MethodInfo *)0x0);
            if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
              GameEventManager+AvatarCommandsBuildModeManager::
              GameEventManager_AvatarCommandsBuildModeManager_add_OnExitBuildStateEvent
                        (pGVar5,(Action_2_EditorEvent_Object_ *)pUVar6,(MethodInfo *)0x0);
              pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if (pGVar4 != (GameEventManager *)0x0) {
                pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode;
                this_01 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
                          func_?(
                                         TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                         );
                mscorlib.dll::System::Action`2[UnityEngine::Vector3,UnityEngine::Quaternion]::
                Action_2_UnityEngine_Vector3_UnityEngine_Quaternion___ctor
                          (this_01,(Object *)this,
                           MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                           ,(MethodInfo *)0x0);
                if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                  GameEventManager+AvatarCommandsBuildModeManager::
                  GameEventManager_AvatarCommandsBuildModeManager_add_OnSetSpawn
                            (pGVar5,this_01,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AvatarCommandsBuildModeOnEnterBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnEnterBuildStateEvent
               (MVBuildModeAvatarLocal_EditMode *this,EditorEvent__Enum editorEvent,Object *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData);
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    cRam_? = '\x01';
  }
  pOVar1 = in_stack_2;
  if (editorEvent == EditorEvent__Enum_EditCubes) {
    if (data == (Object *)0x0) {
      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar3 = SCARRY4((int)&stack0xffffffcc,4);
    }
    else {
      unaff_EDI = data->klass;
      bVar4 = (unaff_EDI->_1).naturalAligment;
      bVar5 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData->_1).naturalAligment;
      uVar3 = SBORROW1(bVar4,bVar5);
      pMVar6 = (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData__Class *)
                TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData;
      if ((bVar4 < bVar5) ||
         (pIVar7 = (unaff_EDI->_1).typeHierarchy
                   [(TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData->_1).
                    naturalAligment - 1],
         uVar3 = SBORROW4((int)pIVar7,
                           (int)TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData),
         pIVar7 != (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData))
      goto code_?;
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar3 = false;
      if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
        pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar8,(int32_t)data[1].klass,(MethodInfo *)0x0);
        uVar3 = false;
        data = (Object *)0x0;
        if (pMVar9 != (MVWorldObject *)0x0) {
          puVar10 = (undefined8 *)(*(code *)(pMVar9->klass->vtable).get_Scale.method)();
          uVar11 = *puVar10;
          puVar10 = (undefined8 *)
                    (*(code *)(pMVar9->klass->vtable).get_Scale.method)(&stack0xffffffd8,pMVar9);
          pOVar12 = _UNK_?;
          uVar13 = *puVar10;
          pOVar14 = (Object__Class *)((float)uVar11 * _UNK_?);
          pOVar1 = _UNK_?;
          if ((float)pOVar14 <= (float)_UNK_?) {
            pOVar1 = pOVar14;
          }
          (this->fields)._XZMovementSpeedScale_k__BackingField = (float)pOVar1;
          pOVar1 = (Object__Class *)((float)uVar13 * _UNK_?);
          if ((float)pOVar1 <= (float)pOVar12) {
            pOVar12 = pOVar1;
          }
          (this->fields)._YMovementSpeedScale_k__BackingField = (float)pOVar12;
          return;
        }
      }
    }
    goto code_?;
  }
  switch(editorEvent) {
  case EditorEvent__Enum_CERoamUUI:
    if (data != (Object *)0x0) {
      unaff_EDI = data->klass;
      bVar4 = (unaff_EDI->_1).naturalAligment;
      bVar5 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData->_1).naturalAligment;
      uVar3 = SBORROW1(bVar4,bVar5);
      pMVar6 = (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData__Class *)
                TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData;
      if ((bVar5 <= bVar4) &&
         (pIVar7 = (unaff_EDI->_1).typeHierarchy
                   [(TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData->_1).
                    naturalAligment - 1],
         uVar3 = SBORROW4((int)pIVar7,
                           (int)TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData),
         pIVar7 == (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData))
      goto code_?;
      goto code_?;
    }
code_?:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarEditModeCamera);
      cRam_? = '\x01';
    }
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    uVar3 = false;
    if (pMVar15 == (MainCameraManager *)0x0) break;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar15,0,(MethodInfo *)0x0);
    uVar3 = false;
    if (data == (Object *)0x0) break;
    in_XMM0_Da = data[1].klass;
    pMVar16 = data[1].monitor;
    pOVar1 = data[2].klass;
    (this->fields).moveConstraintCenter.x = (float)in_XMM0_Da;
    (this->fields).moveConstraintCenter.y = (float)pMVar16;
    (this->fields).moveConstraintCenter.z = (float)pOVar1;
    pMVar17 = (this->fields)._.buildModeAvatar;
    (this->fields).moveConstraintSet = 1;
    (this->fields).moveConstraintRadius = 10.0;
    (this->fields)._XZMovementSpeedScale_k__BackingField = 0.8;
    (this->fields)._YMovementSpeedScale_k__BackingField = 0.25;
    uVar3 = false;
    if (pMVar17 == (MVBuildModeAvatarLocal *)0x0) break;
    pAVar18 = (pMVar17->fields).avatarScriptObject;
    uVar3 = false;
    if (pAVar18 == (AvatarLocalBuildMode *)0x0) break;
    pAVar19 = (pAVar18->fields).avatarCamerasDesktop;
    uVar3 = false;
    if (pAVar19 == (AvatarCamerasDesktopBuildMode *)0x0) break;
    pMVar20 = (pAVar19->fields).cameraController;
    uVar3 = false;
    if (pMVar20 == (MVCameraController *)0x0) break;
    MVCameraController::MVCameraController_SetCamera
              (pMVar20,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
    pOVar1 = (Object__Class *)
              MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    uVar3 = false;
    if (pOVar1 == (Object__Class *)0x0) break;
    unaff_EDI = (Object__Class *)
                MainCameraManager::MainCameraManager_get_CurrentCamera
                          ((MainCameraManager *)pOVar1,(MethodInfo *)0x0);
    uVar3 = false;
    in_stack_2 = pOVar1;
    if (unaff_EDI == (Object__Class *)0x0) break;
    pJVar21 = (JetPackCamera__Class *)(unaff_EDI->_0).image;
    bVar4 = (pJVar21->_1).naturalAligment;
    bVar5 = (TypeInfo__AvatarEditModeCamera->_1).naturalAligment;
    uVar3 = SBORROW1(bVar4,bVar5);
    pAVar22 = TypeInfo__AvatarEditModeCamera;
    if ((bVar5 <= bVar4) &&
       (pIVar7 = (pJVar21->_1).typeHierarchy
                 [(TypeInfo__AvatarEditModeCamera->_1).naturalAligment - 1],
       uVar3 = SBORROW4((int)pIVar7,(int)TypeInfo__AvatarEditModeCamera),
       pIVar7 == (Il2CppClass *)TypeInfo__AvatarEditModeCamera)) {
      in_XMM0_Da = (Object__Class *)data[2].monitor;
      in_stack_2 = in_XMM0_Da;
      JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
                ((JetPackCamera *)unaff_EDI,*(Vector3 *)&data[2].monitor,(MethodInfo *)0x0);
      pGVar23 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      uVar3 = false;
      if (pGVar23 != (GameEventManager *)0x0) {
        pGVar24 = (pGVar23->fields).AvatarCommandsBuildMode;
        uVar3 = false;
        if (pGVar24 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          this_00 = (pGVar24->fields).LaserCommands;
          uVar3 = false;
          if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
             ) {
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                      (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
            return;
          }
        }
      }
      break;
    }
    goto code_?;
  case EditorEvent__Enum_CEEditBodyUUI:
    if (data != (Object *)0x0) {
      unaff_EDI = data->klass;
      bVar4 = (unaff_EDI->_1).naturalAligment;
      bVar5 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData->_1).naturalAligment;
      uVar3 = SBORROW1(bVar4,bVar5);
      pMVar6 = TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData;
      if ((bVar4 < bVar5) ||
         (pIVar7 = (unaff_EDI->_1).typeHierarchy
                   [(TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData->_1).
                    naturalAligment - 1],
         uVar3 = SBORROW4((int)pIVar7,
                           (int)TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData),
         pIVar7 != (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData))
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__SharedCubeFunctions);
      cRam_? = '\x01';
    }
    pMVar17 = (this->fields)._.buildModeAvatar;
    uVar3 = false;
    unaff_EDI = (Object__Class *)this;
    if (pMVar17 != (MVBuildModeAvatarLocal *)0x0) {
      pAVar18 = (pMVar17->fields).avatarScriptObject;
      uVar3 = false;
      if (pAVar18 != (AvatarLocalBuildMode *)0x0) {
        pAVar19 = (pAVar18->fields).avatarCamerasDesktop;
        uVar3 = false;
        if (pAVar19 != (AvatarCamerasDesktopBuildMode *)0x0) {
          pMVar20 = (pAVar19->fields).cameraController;
          uVar3 = false;
          if (pMVar20 != (MVCameraController *)0x0) {
            MVCameraController::MVCameraController_SetCamera
                      (pMVar20,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            uVar3 = false;
            if (pMVar15 != (MainCameraManager *)0x0) {
              pMVar25 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                  (pMVar15,(MethodInfo *)0x0);
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              uVar3 = false;
              if ((data != (Object *)0x0) &&
                 (uVar3 = false, pMVar8 != (MVWorldObjectClientManager *)0x0)) {
                in_stack_2 = (Object__Class *)0x0;
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar8,(int32_t)data[1].klass,(MethodInfo *)0x0);
                data = (Object *)0x0;
                in_XMM0_Da = (Object__Class *)0x0;
                uVar3 = false;
                if (pMVar25 != (MVCameraBase *)0x0) {
                  in_stack_2 = (Object__Class *)0x0;
                  (*(code *)(pMVar25->klass->vtable).FocusOnObject.method)();
                  pMVar17 = (this->fields)._.buildModeAvatar;
                  uVar3 = false;
                  data = (Object *)0x0;
                  if (pMVar17 != (MVBuildModeAvatarLocal *)0x0) {
                    data = (Object *)(pMVar17->fields)._._._.transform;
                    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__SharedCubeFunctions);
                    }
                    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                              ((Transform *)data,0,(MethodInfo *)0x0);
                    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                        ((MethodInfo *)0x0);
                    uVar3 = false;
                    if (pMVar15 != (MainCameraManager *)0x0) {
                      MainCameraManager::MainCameraManager_set_BlueModeEnabled
                                (pMVar15,1,(MethodInfo *)0x0);
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
      }
    }
    break;
  default:
    return;
  case EditorEvent__Enum_ESEditCubeTutorial:
    if (data != (Object *)0x0) {
      unaff_EDI = data->klass;
      bVar4 = (unaff_EDI->_1).naturalAligment;
      bVar5 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData->_1).
              naturalAligment;
      uVar3 = SBORROW1(bVar4,bVar5);
      pMVar6 = (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData__Class *)
                TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData;
      if ((bVar4 < bVar5) ||
         (pIVar7 = (unaff_EDI->_1).typeHierarchy
                   [(TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData->_1).
                    naturalAligment - 1],
         uVar3 = SBORROW4((int)pIVar7,
                           (int)TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData),
         pIVar7 != (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData)
         ) goto code_?;
    }
    in_XMM0_Da = (Object__Class *)0x0;
    (this->fields).moveConstraintCenter.x = 0.0;
    (this->fields).moveConstraintCenter.y = 0.0;
    (this->fields).moveConstraintSet = 1;
    (this->fields).moveConstraintCenter.z = 0.0;
    (this->fields).moveConstraintRadius = 25.0;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    uVar3 = false;
    unaff_EDI = (Object__Class *)this;
    if ((data != (Object *)0x0) && (uVar3 = false, pMVar8 != (MVWorldObjectClientManager *)0x0)) {
      pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar8,(int32_t)data[1].klass,(MethodInfo *)0x0);
      uVar3 = false;
      data = (Object *)0x0;
      if (pMVar9 != (MVWorldObject *)0x0) {
        puVar10 = (undefined8 *)(*(code *)(pMVar9->klass->vtable).get_Scale.method)();
        pOVar1 = (Object__Class *)*puVar10;
        puVar26 = (undefined4 *)
                  (*(code *)(pMVar9->klass->vtable).get_Scale.method)(&stack0xffffffd8,pMVar9);
        in_XMM0_Da = (Object__Class *)*puVar26;
        goto code_?;
      }
    }
    break;
  case EditorEvent__Enum_ESLeaveCubeTutorial:
    pMVar17 = (this->fields)._.buildModeAvatar;
    uVar3 = false;
    data = (Object *)this;
    if (pMVar17 != (MVBuildModeAvatarLocal *)0x0) {
      MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn(pMVar17,(MethodInfo *)0x0);
      MVBuildModeAvatarLocal_EditMode_FocusOnPosition(this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pMVar6 = extraout_EDX;
  pOVar1 = in_stack_2;
code_?:
  func_?(data,pMVar6);
  pAVar22 = extraout_EDX_00;
code_?:
  pbVar27 = (byte *)func_?(unaff_EDI,pAVar22);
  this = (MVBuildModeAvatarLocal_EditMode *)unaff_EDI;
  if ((bool)uVar3) {
    *pbVar27 = *pbVar27 ^ extraout_DL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_?:
  pOVar12 = _UNK_?;
  if ((float)pOVar1 <= (float)_UNK_?) {
    pOVar12 = pOVar1;
  }
  pOVar1 = _UNK_?;
  if ((float)in_XMM0_Da <= (float)_UNK_?) {
    pOVar1 = in_XMM0_Da;
  }
  ((Vector3 *)&(((Object__Class *)this)->_0).properties)->x = (float)pOVar12;
  (((Object__Class *)this)->_0).events = (EventInfo *)pOVar1;
  return;
}


/* Void AvatarCommandsBuildModeOnExitBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnExitBuildStateEvent
               (MVBuildModeAvatarLocal_EditMode *this,EditorEvent__Enum editorEvent,Object *data,
               MethodInfo *method)

{
  if (editorEvent == EditorEvent__Enum_EditCubes) {
code_?:
    (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
    (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
    return;
  }
  switch(editorEvent) {
  case EditorEvent__Enum_CERoamUUI:
    goto code_?;
  case EditorEvent__Enum_CEEditBodyUUI:
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
        pGVar3[2].fields.OnChangeState = (Action_1_LaserPointerState_ *)0x3f800000;
        pGVar3[2].fields.OnCubeMaterialChanged = (Action_1_Byte__1 *)0x3f800000;
        return;
      }
    }
    break;
  default:
    return;
  case EditorEvent__Enum_ESEditCubeTutorial:
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
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
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
               (pMVar1->klass->vtable).get_IsTransformDefined.methodPtr);
    pMVar1 = (this->fields)._.buildModeAvatar;
    if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                ((MVWorldObjectClient *)pMVar1,rotation,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
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
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).avatarScriptObject, pAVar2 != (AvatarLocalBuildMode *)0x0)) &&
      (pAVar3 = (pAVar2->fields).avatarCamerasDesktop,
      pAVar3 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
     (this_00 = (pAVar3->fields).cameraController, this_00 != (MVCameraController *)0x0)) {
    MVCameraController::MVCameraController_SetCamera
              (this_00,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar4 != (MainCameraManager *)0x0) {
      pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((data != (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *)0x0) &&
         (this_01 != (MVWorldObjectClientManager *)0x0)) {
        pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,(data->fields).focusWoId,(MethodInfo *)0x0);
        if (pMVar5 != (MVCameraBase *)0x0) {
          (*(code *)(pMVar5->klass->vtable).FocusOnObject.method)(pMVar5,pMVar6,0x40000000);
          pMVar1 = (this->fields)._.buildModeAvatar;
          if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
            t = (pMVar1->fields)._._._.transform;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCubeFunctions);
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar4 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar4,1,(MethodInfo *)0x0);
              (this->fields)._XZMovementSpeedScale_k__BackingField = 0.25;
              (this->fields)._YMovementSpeedScale_k__BackingField = 0.25;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CEEditBodyUUIExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
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
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CERoamUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CERoamUUIEnterSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarEditModeCamera);
    cRam_? = '\x01';
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
      if ((((pMVar4 != (MVBuildModeAvatarLocal *)0x0) &&
           (pAVar5 = (pMVar4->fields).avatarScriptObject, pAVar5 != (AvatarLocalBuildMode *)0x0)) &&
          (pAVar6 = (pAVar5->fields).avatarCamerasDesktop,
          pAVar6 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
         (this_00 = (pAVar6->fields).cameraController, this_00 != (MVCameraController *)0x0)) {
        MVCameraController::MVCameraController_SetCamera
                  (this_00,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar1 != (MainCameraManager *)0x0) {
          this_01 = (JetPackCamera *)
                    MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0)
          ;
          if (this_01 != (JetPackCamera *)0x0) {
            if (((this_01->klass->_1).naturalAligment <
                 (TypeInfo__AvatarEditModeCamera->_1).naturalAligment) ||
               ((this_01->klass->_1).typeHierarchy
                [(TypeInfo__AvatarEditModeCamera->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__AvatarEditModeCamera)) goto code_?;
            JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
                      (this_01,(data->fields).lookAtPosition,(MethodInfo *)0x0);
            pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if ((pGVar7 != (GameEventManager *)0x0) &&
               ((pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
                pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
                ((pGVar8->fields).LaserCommands !=
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
              iVar9 = *(int *)(in_stack_10 + 0x10);
              if (iVar9 != 0) {
                uStack11 = *(undefined4 *)(iVar9 + 0x14);
                (**(code **)(iVar9 + 0xc))();
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    func_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                   );
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                   );
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_Visible.method)
              (pMVar1,1,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar2 != (GameEventManager *)0x0) {
      pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
      pUVar4 = (UnityAction_2_System_Int32_System_Int32_ *)
               func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                 ,(MethodInfo *)0x0);
      if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_remove_OnEnterBuildStateEvent
                  (pGVar3,(Action_2_EditorEvent_Object_ *)pUVar4,(MethodInfo *)0x0);
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (pGVar2 != (GameEventManager *)0x0) {
          pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
          pUVar4 = (UnityAction_2_System_Int32_System_Int32_ *)
                   func_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
          Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                     ,(MethodInfo *)0x0);
          if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_remove_OnExitBuildStateEvent
                      (pGVar3,(Action_2_EditorEvent_Object_ *)pUVar4,(MethodInfo *)0x0);
            pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (pGVar2 != (GameEventManager *)0x0) {
              pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode;
              this_00 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
                        func_?(
                                       TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                       );
              mscorlib.dll::System::Action`2[UnityEngine::Vector3,UnityEngine::Quaternion]::
              Action_2_UnityEngine_Vector3_UnityEngine_Quaternion___ctor
                        (this_00,(Object *)this,
                         MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                         ,(MethodInfo *)0x0);
              if (pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                GameEventManager+AvatarCommandsBuildModeManager::
                GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetSpawn
                          (pGVar3,this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ESEditCubeTutorialExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
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
    if (((this->fields)._.buildModeAvatar != (MVBuildModeAvatarLocal *)0x0) &&
       (this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                            ((MethodInfo *)0x0), this_01 != (MVWorldObjectClient *)0x0)) {
      (*(code *)(this_01->klass->vtable).get_WorldPosition_1.method)();
      (*(code *)(in_stack_3->klass->vtable).set_WorldPosition.method)(in_stack_3);
      pQVar4 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         ((Quaternion *)&stack0xfffffffc,this_01,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                (in_stack_3,*pQVar4,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_02 != (MainCameraManager *)0x0) &&
         (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0)
         , pMVar5 != (MVCameraBase *)0x0)) {
        (*(code *)(pMVar5->klass->vtable).Reset.method)();
        return;
      }
    }
  }
  uVar6 = func_?(&stack0xffffffe8);
  func_?(uVar6);
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
  uStack_1 = 0;
  (this->fields).moveConstraintCenter.x = 0.0;
  (this->fields).moveConstraintCenter.y = 0.0;
  (this->fields).moveConstraintSet = 1;
  (this->fields).moveConstraintCenter.z = 0.0;
  (this->fields).moveConstraintRadius = 25.0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((data != (MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialData *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(data->fields).focusWoId,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObject *)0x0) {
      pIStack_3 = (pMVar2->klass->vtable).set_Scale.methodPtr;
      pMStack_4 = pMVar2;
      puVar5 = (undefined8 *)(*(code *)(pMVar2->klass->vtable).get_Scale.method)(afStack_6);
      uStack_7 = *puVar5;
      puVar5 = (undefined8 *)
               (*(code *)(pMVar2->klass->vtable).get_Scale.method)
                         (&pMStack_4,pMVar2,(pMVar2->klass->vtable).set_Scale.methodPtr);
      fVar8 = _UNK_?;
      if ((float)uStack_7 <= _UNK_?) {
        fVar8 = (float)uStack_7;
      }
      afStack_6[0] = (float)*puVar5;
      fVar9 = _UNK_?;
      if (afStack_6[0] <= _UNK_?) {
        fVar9 = afStack_6[0];
      }
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar8;
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar9;
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((data != (MVBuildModeAvatarLocal_EditMode_EditCubesSetupData *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(data->fields).focusWoId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      puVar2 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_Scale.method)();
      uVar3 = *puVar2;
      puVar2 = (undefined8 *)
               (*(code *)(pMVar1->klass->vtable).get_Scale.method)
                         (&stack0xffffffd8,pMVar1,(pMVar1->klass->vtable).set_Scale.methodPtr);
      fVar4 = _UNK_?;
      uVar5 = *puVar2;
      fStack_6 = (float)uVar3;
      fVar7 = _UNK_?;
      if (fStack_6 * _UNK_? <= _UNK_?) {
        fVar7 = fStack_6 * _UNK_?;
      }
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar7;
      fStack_8 = (float)uVar5;
      if (fStack_8 * _UNK_? <= fVar4) {
        fVar4 = fStack_8 * _UNK_?;
      }
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar4;
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void FocusOnPosition() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_FocusOnPosition
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JetPackCamera);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = (JetPackCamera *)
              MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
      pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                          ((Vector3 *)&stack0xffffffe4,
                           (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar2->fields).position,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                          );
      fVar4 = pVVar3->x;
      fVar5 = pVVar3->y;
      puVar6 = (undefined *)pVVar3->z;
      if (cRam_? == '\0') {
        puVar6 = &UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar8 = (pVVar7->upVector).x;
      uVar9 = (pVVar7->upVector).y;
      fVar10 = (pVVar7->upVector).z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar11 = (pVVar7->upVector).x;
      uVar12 = (pVVar7->upVector).y;
      ppVStack_13 = (Vector3__Class **)((pVVar7->upVector).z + fVar10 + (float)puVar6);
      pMVar14 = (this->fields)._.buildModeAvatar;
      if ((pMVar14 != (MVBuildModeAvatarLocal *)0x0) &&
         (this_00 = (pMVar14->fields)._._._.transform, this_00 != (Transform *)0x0)) {
        pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
        fVar10 = pQVar15->x;
        fVar16 = pQVar15->y;
        fVar17 = pQVar15->z;
        fVar18 = pQVar15->w;
        if (cRam_? == '\0') {
          ppVStack_13 = &TypeInfo__UnityEngine__Vector3;
          func_?();
          cRam_? = '\x01';
        }
        rotation.y = fVar16;
        rotation.x = fVar10;
        rotation.z = fVar17;
        rotation.w = fVar18;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffffe4,rotation,
                             TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                             (MethodInfo *)0x0);
        uVar19 = pVVar3->x;
        uVar20 = pVVar3->y;
        if (this_02 != (JetPackCamera *)0x0) {
          if (((TypeInfo__JetPackCamera->_1).naturalAligment <= (this_02->klass->_1).naturalAligment
              ) && ((this_02->klass->_1).typeHierarchy
                    [(TypeInfo__JetPackCamera->_1).naturalAligment - 1] ==
                    (Il2CppClass *)TypeInfo__JetPackCamera)) {
            lookAtPosition.y = (float)uVar20 + (float)uVar12 + (float)uVar9 + fVar5;
            lookAtPosition.x = (float)uVar19 + (float)uVar11 + (float)uVar8 + fVar4;
            lookAtPosition.z = pVVar3->z + (float)ppVStack_13;
            JetPackCamera::JetPackCamera_FocusOnPosition
                      (this_02,lookAtPosition,0.0,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_FrameUpdate
               (MVBuildModeAvatarLocal_EditMode *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

{
  this_01 = this;
  this_00 = (this->fields).doubleTap;
  if (this_00 == (DoubleTapMovementChecker *)0x0) goto code_?;
  DoubleTapMovementChecker::DoubleTapMovementChecker_FrameUpdate(this_00,(MethodInfo *)0x0);
  pVVar1 = MVBuildModeAvatarLocal_EditMode_GetMovementVelocity
                     ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar6 = (float)uVar2 * fVar5;
  fVar4 = fVar4 * fVar5;
  VVar7.y = (float)uVar3 * fVar5;
  VVar7.x = fVar6;
  VVar7.z = fVar4;
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,VVar7,(MethodInfo *)0x0);
  if (_UNK_? < (double)(fVar6 * fVar6 + 0.0 + fVar4 * fVar4)) {
    pMVar8 = (this->fields)._.buildModeAvatar;
    if ((pMVar8 == (MVBuildModeAvatarLocal *)0x0) ||
       (pGVar9 = (pMVar8->fields)._._._.gameObject, pGVar9 == (GameObject *)0x0))
    goto code_?;
    puVar10 = &UNK_?;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar9,(MethodInfo *)0x0);
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffdc,
                         (Vector3)CONCAT48(puVar10,CONCAT44(0.0,fVar6)),(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar11,*pQVar12,(MethodInfo *)0x0);
  }
  pVVar1 = MVBuildModeAvatarLocal_EditMode_GetElevationVelocity
                     ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._YMovementSpeedScale_k__BackingField;
  uVar13 = pVVar1->x;
  uVar14 = pVVar1->y;
  this = (MVBuildModeAvatarLocal_EditMode *)(pVVar1->z * fVar4);
  puVar10 = (undefined *)((float)uVar14 * fVar4);
  fVar15 = (float)uVar13 * fVar4;
  VVar7 = (Vector3)CONCAT84(uVar16,fVar15);
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this_01,VVar7,(MethodInfo *)0x0);
  pMVar8 = (this_01->fields)._.buildModeAvatar;
  if ((pMVar8 != (MVBuildModeAvatarLocal *)0x0) &&
     (pGVar9 = (pMVar8->fields)._._._.gameObject, pGVar9 != (GameObject *)0x0)) {
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar9,(MethodInfo *)0x0);
    if (pTVar11 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         ((Vector3 *)&stack0xffffffe0,pTVar11,(MethodInfo *)0x0);
      uVar17 = pVVar1->x;
      fVar4 = pVVar1->z;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                             ((Vector3 *)&stack0xffffffe0,pTVar11,(MethodInfo *)0x0);
          pMVar8 = (this_01->fields)._.buildModeAvatar;
          euler.y = pVVar1->y * _UNK_?;
          euler.x = (float)uVar17 * _UNK_?;
          euler.z = fVar4 * _UNK_?;
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffffdc,euler,(MethodInfo *)0x0);
          if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                      ((MVWorldObjectClient *)pMVar8,*pQVar12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Vector3 GetDirection(Boolean) */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    bool freeFlight,MethodInfo *method)

{
  this_00 = (this->fields).mainCamera;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&VStack_2.y,this_01,(MethodInfo *)0x0);
      uVar3 = pQVar1->z;
      uVar4 = pQVar1->w;
      rotation.y = (float)uVar4;
      rotation.x = (float)uVar3;
      pVVar5 = MVBuildModeAvatarLocal_EditMode_GetInputDirection(&VStack_2,(MethodInfo *)0x0);
      rotation.z = (float)_freeFlight;
      rotation.w = (float)method;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&VStack_2.z,rotation,*pVVar5,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fStack7 = pVVar5->z;
      __return_storage_ptr__->x = pVVar5->x;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fStack7;
      if (freeFlight == 0) {
        bVar8 = cRam_? == '\0';
        __return_storage_ptr__->y = 0.0;
        fStack9 = __return_storage_ptr__->x;
        fStack10 = __return_storage_ptr__->y;
        if (bVar8) {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        dVar11 = (double)(fStack10 * fStack10 + fStack9 * fStack9 +
                         fStack7 * fStack7);
        if (dVar11 < 0.0) {
          func_?();
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        fVar6 = (float)dVar11;
        if (fVar6 <= _UNK_?) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar13 = (pVVar12->zeroVector).y;
          fVar6 = (pVVar12->zeroVector).z;
          __return_storage_ptr__->x = (pVVar12->zeroVector).x;
          __return_storage_ptr__->y = fVar13;
          __return_storage_ptr__->z = fVar6;
          return __return_storage_ptr__;
        }
        uVar14 = __return_storage_ptr__->x;
        uVar15 = __return_storage_ptr__->y;
        fVar13 = __return_storage_ptr__->z;
        __return_storage_ptr__->x = (float)uVar14 / fVar6;
        __return_storage_ptr__->y = (float)uVar15 / fVar6;
        __return_storage_ptr__->z = fVar13 / fVar6;
      }
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar16)();
  return pVVar5;
}


/* Vector3 GetElevationVelocity() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetElevationVelocity
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveUp,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                        (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
      if (fVar2 == 0.0) {
        fVar2 = (this->fields).keyDamping;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        fVar3 = fVar3 * fVar2;
        fVar2 = _UNK_?;
        if (fVar3 <= _UNK_?) {
          fVar2 = fVar3;
        }
        (this->fields).keyVelocity = (_UNK_? - fVar2) * (this->fields).keyVelocity;
      }
      else {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                          (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
        if (0.0 < fVar2) {
          (this->fields).keyVelocity = 3.0;
        }
        else {
          (this->fields).keyVelocity = -3.0;
        }
      }
      goto code_?;
    }
    fVar2 = (this->fields).keyVelocity;
    fVar3 = (this->fields).keyAcceleration;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar4 * fVar3;
  }
  else {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    fVar2 = (this->fields).keyVelocity;
    fVar3 = (this->fields).keyAcceleration;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar4 * fVar3 + fVar2;
  }
  (this->fields).keyVelocity = fVar2;
code_?:
  method_00 = (MethodInfo *)(this->fields).keyVelocity;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
  if (cRam_? == '\0') {
    method_00 = (MethodInfo *)&UNK_?;
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->upVector).x;
  uVar7 = (pVVar5->upVector).y;
  fVar4 = (pVVar5->upVector).z;
  fVar2 = fVar2 * (float)method_00;
  fVar3 = (this->fields).heightAdjustSpeed;
  __return_storage_ptr__->x = (float)uVar6 * fVar2 * fVar3;
  __return_storage_ptr__->y = (float)uVar7 * fVar2 * fVar3;
  __return_storage_ptr__->z = fVar4 * fVar2 * fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetInputDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetInputDirection
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveForward,(MethodInfo *)0x0);
    if ((bVar1 != 0) && (cRam_? == '\0')) {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveBackwards,(MethodInfo *)0x0);
    if ((bVar1 != 0) && (cRam_? == '\0')) {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveLeft,(MethodInfo *)0x0);
    if ((bVar1 != 0) && (cRam_? == '\0')) {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_EditMoveRight,(MethodInfo *)0x0);
    if ((bVar1 != 0) && (cRam_? == '\0')) {
      func_?();
      cRam_? = '\x01';
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVInputWrapper);
      func_?(&StringLiteral_Vertical);
      func_?(&StringLiteral_Horizontal);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
    MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
  }
  puVar2 = (undefined8 *)func_?();
  uVar3 = *puVar2;
  fVar4 = *(float *)(puVar2 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 GetMovementVelocity() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetMovementVelocity
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_GetBooleanControl
            (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  pMVar1 = this;
  this_00 = (this->fields).mainCamera;
  if ((this_00 == (Camera *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0)) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                     ((Quaternion *)&puStack_5,this_01,(MethodInfo *)0x0);
  puStack_5 = (undefined8 *)pQVar4->y;
  pMStack_6 = (Math__Class *)pQVar4->z;
  fStack_7 = pQVar4->w;
  pVVar3 = MVBuildModeAvatarLocal_EditMode_GetInputDirection
                     ((Vector3 *)&stack0xfffffffc,(MethodInfo *)0x0);
  rotation.y = fStack_7;
  rotation.x = (float)pMStack_6;
  rotation.z = (float)unaff_EBP;
  rotation.w = unaff_retaddr;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&__return_storage_ptr__,rotation,*pVVar3,(MethodInfo *)0x0);
  in_stack_8._0_4_ = pVVar3->x;
  in_stack_8._4_4_ = pVVar3->y;
  in_stack_9 = pVVar3->z;
  if (this._3_1_ == '\0') {
    if (cRam_? == '\0') {
      pMStack_6 = (Math__Class *)&TypeInfo__System__Math;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      pMStack_6 = TypeInfo__System__Math;
      func_?();
    }
    _fStack00000028 = in_stack_8 & 0xffffffff;
    in_stack_10 = 0.0;
    in_stack_11 = 0;
    dVar12 = (double)((float)in_stack_8 * (float)in_stack_8 + _UNK_? +
                     in_stack_9 * in_stack_9);
    if (dVar12 < 0.0) {
      func_?();
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    fVar13 = (float)dVar12;
    if (_UNK_? < fVar13) {
      in_stack_9 = in_stack_9 / fVar13;
      in_stack_8 = CONCAT44(0.0 / fVar13,fStack14 / fVar13);
    }
    else {
      if (cRam_? == '\0') {
        pMStack_6 = (Math__Class *)&TypeInfo__UnityEngine__Vector3;
        func_?();
        cRam_? = '\x01';
      }
      pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
      in_stack_8._0_4_ = (pVVar15->zeroVector).x;
      in_stack_8._4_4_ = (pVVar15->zeroVector).y;
      in_stack_9 = (pVVar15->zeroVector).z;
    }
  }
  puStack_5 = (undefined8 *)&stack0x00000028;
  pMStack_6 = (Math__Class *)0x0;
  _fStack00000028 = in_stack_8;
  in_stack_10 = in_stack_9;
  fVar16 = (float10)func_?();
  (pMVar1->fields).targetSpeed = (float)fVar16 * (pMVar1->fields).maxSpeed;
  bVar17 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_EditMoveFast,(MethodInfo *)0x0);
  if (bVar17 == 0) {
    pDVar18 = (pMVar1->fields).doubleTap;
    if (pDVar18 == (DoubleTapMovementChecker *)0x0) goto code_?;
    if ((pDVar18->fields).doubleTap == 0) goto code_?;
  }
  (pMVar1->fields).targetSpeed = (pMVar1->fields).targetSpeed * (pMVar1->fields).speedModifier;
code_?:
  fVar13 = (pMVar1->fields).speed;
  fVar19 = (pMVar1->fields).targetSpeed;
  fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar20 = fVar20 * fVar19;
  if (fVar20 < 0.0) {
    fVar20 = 0.0;
  }
  else if (_UNK_? < fVar20) {
    fVar20 = _UNK_?;
  }
  fVar20 = (fVar13 - fStack_21) * fVar20 + fStack_21;
  (pMVar1->fields).speed = fVar20;
  fVar13 = (pMVar1->fields).speedModifier;
  fVar19 = (pMVar1->fields)._XZMovementSpeedScale_k__BackingField;
  __return_storage_ptr__->x = fStack_22 * fVar20 * fVar13 * fVar19;
  __return_storage_ptr__->y = fStack_23 * fVar20 * fVar13 * fVar19;
  __return_storage_ptr__->z = fVar20 * 3.4840217e-29 * fVar13 * fVar19;
  return __return_storage_ptr__;
}


/* Vector3 GetTouchInputDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetTouchInputDirection
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Vertical);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  __return_storage_ptr__->x = (pVVar2->zeroVector).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar4 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  axis = StringLiteral_Vertical;
  __return_storage_ptr__->x = fVar4;
  fVar4 = MVInputWrapper::MVInputWrapper_GetAxis(axis,(MethodInfo *)0x0);
  __return_storage_ptr__->z = fVar4;
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
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  puStack_2 = (undefined *)(velocity.x * fVar1);
  fVar3 = velocity.z * fVar1;
  moveDelta.y = velocity.y * fVar1;
  moveDelta.x = (float)puStack_2;
  moveDelta.z = fVar3;
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,moveDelta,(MethodInfo *)0x0);
  if ((double)((float)puStack_2 * (float)puStack_2 + 0.0 + fVar3 * fVar3) <= _UNK_?) {
    return;
  }
  pMVar4 = (this->fields)._.buildModeAvatar;
  if ((pMVar4 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_01 = (pMVar4->fields)._._._.gameObject, this_01 != (GameObject *)0x0)) {
    puVar5 = &UNK_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
    puVar6 = puStack_2;
    forward.y = (float)puVar5;
    forward.x = (float)puVar6;
    forward.z = (float)this_01;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffe8,forward,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_00,*pQVar7,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void MoveCharacter(Vector3) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_MoveCharacter
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 moveDelta,MethodInfo *method)

{
  if ((this->fields).moveConstraintSet == 0) {
code_?:
    fStack_1 = moveDelta.x;
    fStack_2 = moveDelta.z;
    fStack_3 = moveDelta.y;
  }
  else {
    pMVar4 = (this->fields)._.buildModeAvatar;
    if (((pMVar4 == (MVBuildModeAvatarLocal *)0x0) ||
        (this_00 = (pMVar4->fields)._._._.gameObject, this_00 == (GameObject *)0x0)) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
    goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_6,this_01,(MethodInfo *)0x0);
    fStack_1 = moveDelta.x;
    uVar7 = pVVar5->x;
    uVar8 = pVVar5->y;
    fStack_3 = moveDelta.y;
    fStack_2 = moveDelta.z;
    fStack_9 = moveDelta.z + pVVar5->z;
    uStack_10._0_4_ = (this->fields).moveConstraintCenter.x;
    uStack_10._4_4_ = (this->fields).moveConstraintCenter.y;
    uVar11 = pVVar5->x;
    uVar12 = pVVar5->y;
    fStack_13 = (this->fields).moveConstraintCenter.z - pVVar5->z;
    uStack_14 = CONCAT44(moveDelta.y + (float)uVar8,moveDelta.x + (float)uVar7);
    uStack_15 = CONCAT44(uStack_10._4_4_ - (float)uVar12,(float)uStack_10 - (float)uVar11);
    fStack_16 = fStack_13;
    puVar17 = (undefined8 *)func_?();
    uStack_15 = *puVar17;
    fStack_13 = *(float *)(puVar17 + 1);
    puVar17 = (undefined8 *)func_?();
    uVar18 = *puVar17;
    fStack_16 = *(float *)(puVar17 + 1);
    uStack_10._0_4_ = (float)uVar18;
    fVar19 = (float)uStack_15 * (float)uStack_10;
    uStack_10._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
    fVar20 = uStack_15._4_4_ * uStack_10._4_4_;
    uStack_10 = uVar18;
    if (fVar20 + fVar19 + fStack_13 * fStack_16 <= _UNK_?) {
      uVar18._0_4_ = (this->fields).moveConstraintCenter.x;
      uVar18._4_4_ = (this->fields).moveConstraintCenter.y;
      fVar21 = (float10)func_?(uVar18,(this->fields).moveConstraintCenter.z,uStack_14,
                                        fStack_9,0);
      fVar19 = (this->fields).moveConstraintRadius * _UNK_?;
      fStack_22 = (float)fVar21;
      if (fVar19 < fStack_22) {
        fVar19 = fStack_22 - fVar19;
        fVar23 = (this->fields).moveConstraintRadius * _UNK_?;
        fVar20 = 0.0;
        if (fVar19 < fVar23) {
          fVar20 = _UNK_? - fVar19 / fVar23;
        }
        fVar20 = fVar20 * fVar20;
        moveDelta.z = moveDelta.z * fVar20;
        moveDelta.x = moveDelta.x * fVar20;
        moveDelta.y = moveDelta.y * fVar20;
        fStack_9 = moveDelta.z;
        goto code_?;
      }
    }
  }
  pMVar4 = (this->fields)._.buildModeAvatar;
  if (pMVar4 != (MVBuildModeAvatarLocal *)0x0) {
    puVar17 = (undefined8 *)(*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)();
    uVar18 = *puVar17;
    fStack_9 = fStack_2 + *(float *)(puVar17 + 1);
    uStack_14._0_4_ = (float)uVar18;
    fStack_1 = fStack_1 + (float)uStack_14;
    uStack_14._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
    fVar19 = fStack_3 + uStack_14._4_4_;
    uStack_14 = uVar18;
    (*(code *)(pMVar4->klass->vtable).set_WorldPosition.method)
              (pMVar4,CONCAT44(fVar19,fStack_1),fStack_9,
               (pMVar4->klass->vtable).get_IsTransformDefined.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_SetCamera
               (MVBuildModeAvatarLocal_EditMode *this,CameraType__Enum cameraType,MethodInfo *method
               )

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).avatarScriptObject, pAVar2 != (AvatarLocalBuildMode *)0x0)) &&
      (pAVar3 = (pAVar2->fields).avatarCamerasDesktop,
      pAVar3 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
     ((cameraController = (pAVar3->fields).cameraController,
      cameraController != (MVCameraController *)0x0 &&
      (this_00 = (cameraController->fields).cameraStack,
      this_00 != (MVCameraController_CameraStack *)0x0)))) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      newCamera = (MVCameraBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                            );
      MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                (this_00,newCamera,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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


/* Void TouchRotationToCamera() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_TouchRotationToCamera
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_Mouse_X;
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      MathFunctions::MathFunctions_NormalizeAngle
                (fVar2 * _UNK_? + (float)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateRotationToCamera() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_UpdateRotationToCamera
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          fVar3 = 0.0;
          __return_storage_ptr__ = (Vector3 *)&stack0xffffffe4;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                             (__return_storage_ptr__,pTVar2,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.buildModeAvatar;
          euler.y = pVVar4->y * _UNK_?;
          euler.x = (float)__return_storage_ptr__ * _UNK_?;
          euler.z = fVar3 * _UNK_?;
          pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                   Quaternion_Internal_FromEulerRad
                             ((Quaternion *)&stack0xffffffe0,euler,(MethodInfo *)0x0);
          if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
            fStack6 = pQVar5->y;
            fStack7 = pQVar5->z;
            fStack8 = pQVar5->w;
            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                      ((MVWorldObjectClient *)pMVar1,*pQVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVBuildModeAvatarLocal+EditMode(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode__ctor
               (MVBuildModeAvatarLocal_EditMode *this,MVBuildModeAvatarLocal *buildModeAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DoubleTapMovementChecker);
    cRam_? = '\x01';
  }
  (this->fields)._avatarBuildModeRuntimeState = 1;
  (this->fields).maxSpeed = 1.75;
  (this->fields).speedModifier = 5.0;
  (this->fields).speedSmoothingTime = 10.0;
  this_00 = (DoubleTapMovementChecker *)func_?(TypeInfo__DoubleTapMovementChecker);
  DoubleTapMovementChecker::DoubleTapMovementChecker__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).doubleTap;
  (this->fields).doubleTap = this_00;
  func_?(method_00,this_00);
  (this->fields).keyAcceleration = 20.0;
  (this->fields).keyDamping = 10.0;
  (this->fields).heightAdjustSpeed = 5.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.buildModeAvatar = buildModeAvatar;
  func_?(&this->fields,buildModeAvatar);
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  func_?(&(this->fields).mainCamera,pCVar1);
  (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
  (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
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

