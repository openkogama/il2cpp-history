
/* Void Activate(MVBuildModeAvatarLocal+AvatarBuildModes) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_Activate
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    (*(pMVar1->klass->vtable).set_Visible.methodPtr)(pMVar1,0);
    pMVar1 = (this->fields)._.buildModeAvatar;
    if ((((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).avatarScriptObject, pAVar2 != (AvatarLocalBuildMode *)0x0)) &&
        (pAVar3 = (pAVar2->fields).avatarCamerasDesktop,
        pAVar3 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
       (this_00 = (pAVar3->fields).cameraController, this_00 != (MVCameraController *)0x0)) {
      MVCameraController::MVCameraController_SetCamera
                (this_00,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 != (MVGameControllerBase *)0x0) &&
          (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
         (pGVar6 = (pMVar5->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0)) {
        pGVar7 = (pGVar6->fields).AvatarCommandsBuildMode;
        pAVar8 = (Action_2_Int32Enum_Object_ *)
                  FUN_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (pAVar8,(Object *)this,
                   MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                   ,(MethodInfo *)0x0);
        if (pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar9 = &pGVar7->fields;
          pAVar10 = (pGVar7->fields).OnEnterBuildStateEvent;
          do {
            pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar10,(Delegate *)pAVar8,(MethodInfo *)0x0);
            pAVar12 = TypeInfo__System__Action<EditorEvent,_System::Object>;
            if (pDVar11 == (Delegate *)0x0) {
              pAVar13 = (Action_2_EditorEvent_Object_ *)0x0;
            }
            else {
              pAVar13 = (Action_2_EditorEvent_Object_ *)
                        FUN_?(pDVar11,TypeInfo__System__Action<EditorEvent,_System::Object>)
              ;
              if (pAVar13 == (Action_2_EditorEvent_Object_ *)0x0) {
                FUN_?(pDVar11,pAVar12);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
            }
            LOCK();
            pAVar15 = pGVar9->OnEnterBuildStateEvent;
            bVar16 = pAVar10 == pAVar15;
            if (bVar16) {
              pGVar9->OnEnterBuildStateEvent = pAVar13;
              pAVar15 = pAVar10;
            }
            UNLOCK();
            pAVar13 = pAVar10;
            if (!bVar16) {
              pAVar13 = pAVar15;
            }
            if (iRam_? != 0) {
              uVar17 = (uint)((ulonglong)pGVar9 >> 0xc);
              lVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
              do {
                uVar19 = *(ulonglong *)(lVar18 + 0xADDR);
                puVar20 = (ulonglong *)(lVar18 + 0xADDR);
                LOCK();
                bVar16 = uVar19 == *puVar20;
                if (bVar16) {
                  *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            bVar16 = pAVar13 != pAVar10;
            pAVar10 = pAVar13;
          } while (bVar16);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar4 != (MVGameControllerBase *)0x0) &&
              (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
             (pGVar6 = (pMVar5->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0)) {
            pGVar7 = (pGVar6->fields).AvatarCommandsBuildMode;
            pAVar8 = (Action_2_Int32Enum_Object_ *)
                      FUN_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
            mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                      (pAVar8,(Object *)this,
                       MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                       ,(MethodInfo *)0x0);
            if (pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppAVar21 = &(pGVar7->fields).OnExitBuildStateEvent;
              pAVar10 = (pGVar7->fields).OnExitBuildStateEvent;
              do {
                pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar10,(Delegate *)pAVar8,(MethodInfo *)0x0);
                pAVar12 = TypeInfo__System__Action<EditorEvent,_System::Object>;
                if (pDVar11 == (Delegate *)0x0) {
                  pAVar13 = (Action_2_EditorEvent_Object_ *)0x0;
                }
                else {
                  pAVar13 = (Action_2_EditorEvent_Object_ *)
                            FUN_?(pDVar11,
                                          TypeInfo__System__Action<EditorEvent,_System::Object>);
                  if (pAVar13 == (Action_2_EditorEvent_Object_ *)0x0) {
                    FUN_?(pDVar11,pAVar12);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                LOCK();
                pAVar15 = *ppAVar21;
                bVar16 = pAVar10 == pAVar15;
                if (bVar16) {
                  *ppAVar21 = pAVar13;
                  pAVar15 = pAVar10;
                }
                UNLOCK();
                pAVar13 = pAVar10;
                if (!bVar16) {
                  pAVar13 = pAVar15;
                }
                if (iRam_? != 0) {
                  uVar17 = (uint)((ulonglong)ppAVar21 >> 0xc);
                  lVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar19 = *(ulonglong *)(lVar18 + 0xADDR);
                    puVar20 = (ulonglong *)(lVar18 + 0xADDR);
                    LOCK();
                    bVar16 = uVar19 == *puVar20;
                    if (bVar16) {
                      *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar16);
                }
                bVar16 = pAVar13 != pAVar10;
                pAVar10 = pAVar13;
              } while (bVar16);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar4 != (MVGameControllerBase *)0x0) &&
                  (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
                 (pGVar6 = (pMVar5->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0))
              {
                pGVar7 = (pGVar6->fields).AvatarCommandsBuildMode;
                pDVar11 = (Delegate *)
                          FUN_?(
                                       TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                       );
                FUN_?(pDVar11,this);
                if (pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  ppAVar22 = &(pGVar7->fields).OnSetSpawn;
                  a = (pGVar7->fields).OnSetSpawn;
                  do {
                    pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)a,pDVar11,(MethodInfo *)0x0);
                    pAVar24 = 
                    TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>;
                    if (pDVar23 == (Delegate *)0x0) {
                      pAVar25 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0;
                    }
                    else {
                      pAVar25 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
                                FUN_?(pDVar23,
                                              TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                             );
                      if (pAVar25 == (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
                        FUN_?(pDVar23,pAVar24);
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    LOCK();
                    pAVar26 = *ppAVar22;
                    bVar16 = a == pAVar26;
                    if (bVar16) {
                      *ppAVar22 = pAVar25;
                      pAVar26 = a;
                    }
                    UNLOCK();
                    pAVar25 = a;
                    if (!bVar16) {
                      pAVar25 = pAVar26;
                    }
                    if (iRam_? != 0) {
                      uVar17 = (uint)((ulonglong)ppAVar22 >> 0xc);
                      lVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar19 = *(ulonglong *)(lVar18 + 0xADDR);
                        puVar20 = (ulonglong *)(lVar18 + 0xADDR);
                        LOCK();
                        bVar16 = uVar19 == *puVar20;
                        if (bVar16) {
                          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar16);
                    }
                    bVar16 = pAVar25 != a;
                    a = pAVar25;
                  } while (bVar16);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void AvatarCommandsBuildModeOnEnterBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnEnterBuildStateEvent
               (MVBuildModeAvatarLocal_EditMode *this,EditorEvent__Enum editorEvent,Object *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (editorEvent == EditorEvent__Enum_EditCubes) {
    if (data == (Object *)0x0) {
      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData->_1).naturalAligment;
    if (((data->klass->_1).naturalAligment < bVar2) ||
       ((data->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData)) {
      FUN_?(data);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar3,*(int32_t *)&data[1].klass,(MethodInfo *)0x0),
       pMVar4 == (MVWorldObjectClient *)0x0)) goto code_?;
    puVar5 = (undefined8 *)
             (*(pMVar4->klass->vtable).get_Scale.methodPtr)
                       (auStack_6,pMVar4,(pMVar4->klass->vtable).get_Scale.method);
    uVar7 = *puVar5;
    uStack_8 = *(undefined4 *)(puVar5 + 1);
    puVar5 = (undefined8 *)
             (*(pMVar4->klass->vtable).get_Scale.methodPtr)
                       (auStack_6,pMVar4,(pMVar4->klass->vtable).get_Scale.method);
    fVar9 = (float)uVar7 + (float)uVar7;
    fVar10 = (float)*puVar5 + (float)*puVar5;
    fVar11 = _UNK_?;
    if (fVar9 <= _UNK_?) {
      fVar11 = fVar9;
    }
    fVar9 = _UNK_?;
    if (fVar10 <= _UNK_?) {
      fVar9 = fVar10;
    }
    (this->fields)._XZMovementSpeedScale_k__BackingField = fVar11;
code_?:
    (this->fields)._YMovementSpeedScale_k__BackingField = fVar9;
  }
  else {
    switch(editorEvent) {
    case EditorEvent__Enum_CERoamUUI:
      if (data == (Object *)0x0) {
        MVBuildModeAvatarLocal_EditMode_CERoamUUIEnterSetup
                  (this,(MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)0x0,(MethodInfo *)0x0)
        ;
      }
      else {
        bVar2 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData->_1).naturalAligment;
        if (((data->klass->_1).naturalAligment < bVar2) ||
           ((data->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData)) {
          FUN_?(data);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        MVBuildModeAvatarLocal_EditMode_CERoamUUIEnterSetup
                  (this,(MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)data,(MethodInfo *)0x0
                  );
      }
      break;
    case EditorEvent__Enum_CEEditBodyUUI:
      if (data == (Object *)0x0) {
        MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIEnterSetup
                  (this,(MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *)0x0,(MethodInfo *)0x0);
      }
      else {
        bVar2 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData->_1).naturalAligment;
        if (((data->klass->_1).naturalAligment < bVar2) ||
           ((data->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData)) {
          FUN_?(data);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIEnterSetup
                  (this,(MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *)data,(MethodInfo *)0x0)
        ;
      }
      break;
    case EditorEvent__Enum_ESEditCubeTutorial:
      if (data != (Object *)0x0) {
        bVar2 = (TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData->_1).
                naturalAligment;
        if (((data->klass->_1).naturalAligment < bVar2) ||
           ((data->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData)) {
          FUN_?(data);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->fields).moveConstraintSet = 1;
      (this->fields).moveConstraintRadius = 25.0;
      (this->fields).moveConstraintCenter.x = 0.0;
      (this->fields).moveConstraintCenter.y = 0.0;
      (this->fields).moveConstraintCenter.z = 0.0;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((data == (Object *)0x0) || (pMVar3 == (MVWorldObjectClientManager *)0x0)) ||
         (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar3,*(int32_t *)&data[1].klass,(MethodInfo *)0x0),
         pMVar4 == (MVWorldObjectClient *)0x0)) goto code_?;
      puVar5 = (undefined8 *)
               (*(pMVar4->klass->vtable).get_Scale.methodPtr)
                         (auStack_6,pMVar4,(pMVar4->klass->vtable).get_Scale.method);
      uVar7 = *puVar5;
      uStack_8 = *(undefined4 *)(puVar5 + 1);
      puVar5 = (undefined8 *)
               (*(pMVar4->klass->vtable).get_Scale.methodPtr)
                         (auStack_6,pMVar4,(pMVar4->klass->vtable).get_Scale.method);
      fVar9 = _UNK_?;
      if ((float)*puVar5 <= _UNK_?) {
        fVar9 = (float)*puVar5;
      }
      fVar11 = _UNK_?;
      if ((float)uVar7 <= _UNK_?) {
        fVar11 = (float)uVar7;
      }
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar11;
      goto code_?;
    case EditorEvent__Enum_ESLeaveCubeTutorial:
      this_00 = (this->fields)._.buildModeAvatar;
      if (this_00 == (MVBuildModeAvatarLocal *)0x0) goto code_?;
      MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn(this_00,(MethodInfo *)0x0);
      MVBuildModeAvatarLocal_EditMode_FocusOnPosition(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void AvatarCommandsBuildModeOnExitBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnExitBuildStateEvent
               (MVBuildModeAvatarLocal_EditMode *this,EditorEvent__Enum editorEvent,Object *data,
               MethodInfo *method)

{
  if (editorEvent == EditorEvent__Enum_EditCubes) {
    (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
    (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
    return;
  }
  if (editorEvent == EditorEvent__Enum_CERoamUUI) {
code_?:
    (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
    (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
    return;
  }
  if (editorEvent == EditorEvent__Enum_CEEditBodyUUI) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
          (pGVar4 = (pMVar3->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0)) &&
         ((pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
          pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
          (pGVar6 = (pGVar5->fields).LaserCommands,
          pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
      {
        pAVar7 = (pGVar6->fields).OnChangeState;
        if (pAVar7 != (Action_1_LaserPointerState_ *)0x0) {
          (*(pAVar7->fields)._._.invoke_impl)
                    ((pAVar7->fields)._._.method_code,0,(pAVar7->fields)._._.method);
        }
        goto code_?;
      }
    }
  }
  else {
    if (editorEvent == EditorEvent__Enum_CEAvatarAccessoryUUI) {
      return;
    }
    if (editorEvent == EditorEvent__Enum_ESEnterCubeTutorial) {
      return;
    }
    if (editorEvent != EditorEvent__Enum_ESEditCubeTutorial) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
        (pGVar4 = (pMVar3->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0)) &&
       ((pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
        pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
        (pGVar6 = (pGVar5->fields).LaserCommands,
        pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
      pAVar7 = (pGVar6->fields).OnChangeState;
      if (pAVar7 != (Action_1_LaserPointerState_ *)0x0) {
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,0,(pAVar7->fields)._._.method);
      }
      this_01 = (this->fields)._.buildModeAvatar;
      (this->fields).moveConstraintSet = 0;
      (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
      (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
      if (this_01 != (MVBuildModeAvatarLocal *)0x0) {
        this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                            ((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClient *)0x0) {
          puVar8 = (undefined8 *)
                   (*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)
                             (&QStack_9,this_02,(this_02->klass->vtable).get_WorldPosition_1.method
                             );
          uStack_10 = *puVar8;
          uStack_11 = *(undefined4 *)(puVar8 + 1);
          (*(this_01->klass->vtable).set_WorldPosition.methodPtr)(this_01,&uStack_10);
          pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                              (&QStack_9,this_02,(MethodInfo *)0x0);
          QStack_9.x = pQVar12->x;
          QStack_9.y = pQVar12->y;
          QStack_9.z = pQVar12->z;
          QStack_9.w = pQVar12->w;
          MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                    ((MVWorldObjectClient *)this_01,&QStack_9,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (((pMVar1 != (MainCameraManager *)0x0) &&
              (pMVar13 = (pMVar1->fields).cameraController, pMVar13 != (MVCameraController *)0x0)) &&
             ((this_00 = (pMVar13->fields).cameraStack,
              this_00 != (MVCameraController_CameraStack *)0x0 &&
              (pMVar14 = MVCameraController+CameraStack::
                         MVCameraController_CameraStack_get_CurCamera(this_00,(MethodInfo *)0x0),
              pMVar14 != (MVCameraBase *)0x0)))) {
            UNRECOVERED_JUMPTABLE = (pMVar14->klass->vtable).Reset.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pMVar14,(pMVar14->klass->vtable).Reset.method,UNRECOVERED_JUMPTABLE);
            return;
          }
        }
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void AvatarCommandsBuildModeOnOnSetSpawn(Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_AvatarCommandsBuildModeOnOnSetSpawn
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 *position,Quaternion *rotation,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    QStack_2.x = position->x;
    QStack_2.y = position->y;
    QStack_2.z = position->z;
    (*(pMVar1->klass->vtable).set_WorldPosition.methodPtr)(pMVar1,&QStack_2);
    pMVar1 = (this->fields)._.buildModeAvatar;
    if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
      QStack_2.x = rotation->x;
      QStack_2.y = rotation->y;
      QStack_2.z = rotation->z;
      QStack_2.w = rotation->w;
      MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                ((MVWorldObjectClient *)pMVar1,&QStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CEEditBodyUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CEEditBodyUUIData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIEnterSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).avatarScriptObject, pAVar2 != (AvatarLocalBuildMode *)0x0)) &&
      (pAVar3 = (pAVar2->fields).avatarCamerasDesktop,
      pAVar3 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
     (pMVar4 = (pAVar3->fields).cameraController, pMVar4 != (MVCameraController *)0x0)) {
    MVCameraController::MVCameraController_SetCamera
              (pMVar4,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar5 != (MainCameraManager *)0x0) &&
        (pMVar4 = (pMVar5->fields).cameraController, pMVar4 != (MVCameraController *)0x0)) &&
       (this_00 = (pMVar4->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
      pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (this_00,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((data != (MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIData *)0x0) &&
         (this_01 != (MVWorldObjectClientManager *)0x0)) {
        pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_01,(data->fields).focusWoId,(MethodInfo *)0x0);
        uStack_8 = 0;
        if (pMVar6 != (MVCameraBase *)0x0) {
          uStack_9 = 0;
          uStack_10 = 0;
          uStack_11 = 0;
          uStack_8 = 0;
          (*(pMVar6->klass->vtable).FocusOnObject.methodPtr)
                    (pMVar6,pMVar7,TypeRef__System__Activator__T._0_4_,&uStack_8,&uStack_11,
                     (pMVar6->klass->vtable).FocusOnObject.method);
          pMVar1 = (this->fields)._.buildModeAvatar;
          if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
            t = (pMVar1->fields)._._._.transform;
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar5 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar5,1,(MethodInfo *)0x0);
              (this->fields)._XZMovementSpeedScale_k__BackingField = 0.25;
              (this->fields)._YMovementSpeedScale_k__BackingField = 0.25;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CEEditBodyUUIExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CEEditBodyUUIExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
       ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
        (pGVar5 = (pGVar4->fields).LaserCommands,
        pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
      pAVar6 = (pGVar5->fields).OnChangeState;
      if (pAVar6 != (Action_1_LaserPointerState_ *)0x0) {
        (*(pAVar6->fields)._._.invoke_impl)
                  ((pAVar6->fields)._._.method_code,0,(pAVar6->fields)._._.method);
      }
      (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
      (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CERoamUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_CERoamUUIEnterSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,0,(MethodInfo *)0x0);
    if (data != (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)0x0) {
      fVar2 = (data->fields).centerPos.z;
      fVar3 = (data->fields).centerPos.y;
      (this->fields).moveConstraintCenter.x = (data->fields).centerPos.x;
      (this->fields).moveConstraintCenter.y = fVar3;
      (this->fields).moveConstraintCenter.z = fVar2;
      pMVar4 = (this->fields)._.buildModeAvatar;
      (this->fields).moveConstraintSet = 1;
      (this->fields).moveConstraintRadius = 10.0;
      (this->fields)._XZMovementSpeedScale_k__BackingField = 0.8;
      (this->fields)._YMovementSpeedScale_k__BackingField = 0.25;
      if ((((pMVar4 != (MVBuildModeAvatarLocal *)0x0) &&
           (pAVar5 = (pMVar4->fields).avatarScriptObject, pAVar5 != (AvatarLocalBuildMode *)0x0)) &&
          (pAVar6 = (pAVar5->fields).avatarCamerasDesktop,
          pAVar6 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
         (pMVar7 = (pAVar6->fields).cameraController, pMVar7 != (MVCameraController *)0x0)) {
        MVCameraController::MVCameraController_SetCamera
                  (pMVar7,CameraType__Enum_AvatarEditModeCamera,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (((pMVar1 != (MainCameraManager *)0x0) &&
            (pMVar7 = (pMVar1->fields).cameraController, pMVar7 != (MVCameraController *)0x0)) &&
           (this_00 = (pMVar7->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0
           )) {
          this_01 = (JetPackCamera *)
                    MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                              (this_00,(MethodInfo *)0x0);
          if (this_01 != (JetPackCamera *)0x0) {
            pJVar8 = this_01->klass;
            bVar9 = (TypeInfo__AvatarEditModeCamera->_1).naturalAligment;
            if (((pJVar8->_1).naturalAligment < bVar9) ||
               ((pJVar8->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarEditModeCamera)) {
              FUN_?(this_01,TypeInfo__AvatarEditModeCamera);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            VStack_11.z = (data->fields).lookAtPosition.z;
            VStack_11.x = (data->fields).lookAtPosition.x;
            VStack_11.y = (data->fields).lookAtPosition.y;
            bVar9 = (TypeInfo__AvatarEditModeCamera->_1).naturalAligment;
            if (((pJVar8->_1).naturalAligment < bVar9) ||
               ((pJVar8->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarEditModeCamera)) {
              FUN_?(this_01,TypeInfo__AvatarEditModeCamera);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
                      (this_01,&VStack_11,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
                 (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                (pGVar14 = (pMVar13->fields).GameEventManager, pGVar14 != (GameEventManager *)0x0))
               && ((pGVar15 = (pGVar14->fields).AvatarCommandsBuildMode,
                   pGVar15 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
                   (pGVar16 = (pGVar15->fields).LaserCommands,
                   pGVar16 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
              pAVar17 = (pGVar16->fields).OnChangeState;
              if (pAVar17 != (Action_1_LaserPointerState_ *)0x0) {
                (*(pAVar17->fields)._._.invoke_impl)
                          ((pAVar17->fields)._._.method_code,0,(pAVar17->fields)._._.method);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  uVar1 = CONCAT44(in_register_00000014,toMode);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnOnSetSpawn_UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._.buildModeAvatar;
  if (pMVar2 != (MVBuildModeAvatarLocal *)0x0) {
    (*(pMVar2->klass->vtable).set_Visible.methodPtr)
              (pMVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
               (pMVar2->klass->vtable).set_Visible.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
      pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode;
      pAVar7 = (Action_2_Int32Enum_Object_ *)
                FUN_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (pAVar7,(Object *)this,
                 MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnEnterBuildStateEvent_EditorEvent__System__Object_
                 ,(MethodInfo *)0x0);
      if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar8 = &pGVar6->fields;
        pAVar9 = (pGVar6->fields).OnEnterBuildStateEvent;
        do {
          pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar9,(Delegate *)pAVar7,(MethodInfo *)0x0);
          pAVar11 = TypeInfo__System__Action<EditorEvent,_System::Object>;
          if (pDVar10 == (Delegate *)0x0) {
            pAVar12 = (Action_2_EditorEvent_Object_ *)0x0;
          }
          else {
            pAVar12 = (Action_2_EditorEvent_Object_ *)
                      FUN_?(pDVar10,TypeInfo__System__Action<EditorEvent,_System::Object>);
            if (pAVar12 == (Action_2_EditorEvent_Object_ *)0x0) {
              FUN_?(pDVar10,pAVar11);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          LOCK();
          pAVar14 = pGVar8->OnEnterBuildStateEvent;
          bVar15 = pAVar9 == pAVar14;
          if (bVar15) {
            pGVar8->OnEnterBuildStateEvent = pAVar12;
            pAVar14 = pAVar9;
          }
          UNLOCK();
          pAVar12 = pAVar9;
          if (!bVar15) {
            pAVar12 = pAVar14;
          }
          if (iRam_? != 0) {
            uVar16 = (uint)((ulonglong)pGVar8 >> 0xc);
            lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
            do {
              uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
              puVar19 = (ulonglong *)(lVar17 + 0xADDR);
              LOCK();
              bVar15 = uVar18 == *puVar19;
              if (bVar15) {
                *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          bVar15 = pAVar12 != pAVar9;
          pAVar9 = pAVar12;
        } while (bVar15);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
          pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode;
          pAVar7 = (Action_2_Int32Enum_Object_ *)
                    FUN_?(TypeInfo__System__Action<EditorEvent,_System::Object>);
          mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                    (pAVar7,(Object *)this,
                     MethodInfo__MVBuildModeAvatarLocal__EditMode__AvatarCommandsBuildModeOnExitBuildStateEvent_EditorEvent__System__Object_
                     ,(MethodInfo *)0x0);
          if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            ppAVar20 = &(pGVar6->fields).OnExitBuildStateEvent;
            pAVar9 = (pGVar6->fields).OnExitBuildStateEvent;
            do {
              pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)pAVar9,(Delegate *)pAVar7,(MethodInfo *)0x0);
              pAVar11 = TypeInfo__System__Action<EditorEvent,_System::Object>;
              if (pDVar10 == (Delegate *)0x0) {
                pAVar12 = (Action_2_EditorEvent_Object_ *)0x0;
              }
              else {
                pAVar12 = (Action_2_EditorEvent_Object_ *)
                          FUN_?(pDVar10,
                                        TypeInfo__System__Action<EditorEvent,_System::Object>);
                if (pAVar12 == (Action_2_EditorEvent_Object_ *)0x0) {
                  FUN_?(pDVar10,pAVar11);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              LOCK();
              pAVar14 = *ppAVar20;
              bVar15 = pAVar9 == pAVar14;
              if (bVar15) {
                *ppAVar20 = pAVar12;
                pAVar14 = pAVar9;
              }
              UNLOCK();
              pAVar12 = pAVar9;
              if (!bVar15) {
                pAVar12 = pAVar14;
              }
              if (iRam_? != 0) {
                uVar16 = (uint)((ulonglong)ppAVar20 >> 0xc);
                lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                do {
                  uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                  puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                  LOCK();
                  bVar15 = uVar18 == *puVar19;
                  if (bVar15) {
                    *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              bVar15 = pAVar12 != pAVar9;
              pAVar9 = pAVar12;
            } while (bVar15);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar3 != (MVGameControllerBase *)0x0) &&
                (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
               (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
              pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode;
              pDVar10 = (Delegate *)
                        FUN_?(
                                     TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                     );
              FUN_?(pDVar10,this);
              if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppAVar21 = &(pGVar6->fields).OnSetSpawn;
                source = (pGVar6->fields).OnSetSpawn;
                do {
                  pDVar22 = mscorlib.dll::System::Delegate::Delegate_Remove
                                      ((Delegate *)source,pDVar10,(MethodInfo *)0x0);
                  pAVar23 = TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>;
                  if (pDVar22 == (Delegate *)0x0) {
                    pAVar24 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0;
                  }
                  else {
                    pAVar24 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
                              FUN_?(pDVar22,
                                            TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                                           );
                    if (pAVar24 == (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
                      FUN_?(pDVar22,pAVar23);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  LOCK();
                  pAVar25 = *ppAVar21;
                  bVar15 = source == pAVar25;
                  if (bVar15) {
                    *ppAVar21 = pAVar24;
                    pAVar25 = source;
                  }
                  UNLOCK();
                  pAVar24 = source;
                  if (!bVar15) {
                    pAVar24 = pAVar25;
                  }
                  if (iRam_? != 0) {
                    uVar16 = (uint)((ulonglong)ppAVar21 >> 0xc);
                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                      puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                      LOCK();
                      bVar15 = uVar18 == *puVar19;
                      if (bVar15) {
                        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar15);
                  }
                  bVar15 = pAVar24 != source;
                  source = pAVar24;
                } while (bVar15);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ESEditCubeTutorialExitSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialExitSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
      (pGVar5 = (pGVar4->fields).LaserCommands,
      pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar6 = (pGVar5->fields).OnChangeState;
    if (pAVar6 != (Action_1_LaserPointerState_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,0,(pAVar6->fields)._._.method);
    }
    this_01 = (this->fields)._.buildModeAvatar;
    (this->fields).moveConstraintSet = 0;
    (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
    (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
    if (this_01 != (MVBuildModeAvatarLocal *)0x0) {
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                          ((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClient *)0x0) {
        puVar7 = (undefined8 *)
                 (*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)
                           (&QStack_8,this_02,(this_02->klass->vtable).get_WorldPosition_1.method);
        uStack_9 = *puVar7;
        uStack_10 = *(undefined4 *)(puVar7 + 1);
        (*(this_01->klass->vtable).set_WorldPosition.methodPtr)(this_01,&uStack_9);
        pQVar11 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                            (&QStack_8,this_02,(MethodInfo *)0x0);
        QStack_8.x = pQVar11->x;
        QStack_8.y = pQVar11->y;
        QStack_8.z = pQVar11->z;
        QStack_8.w = pQVar11->w;
        MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                  ((MVWorldObjectClient *)this_01,&QStack_8,(MethodInfo *)0x0);
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (((pMVar12 != (MainCameraManager *)0x0) &&
            (pMVar13 = (pMVar12->fields).cameraController, pMVar13 != (MVCameraController *)0x0)) &&
           (this_00 = (pMVar13->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0
           )) {
          pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                              (this_00,(MethodInfo *)0x0);
          if (pMVar14 != (MVCameraBase *)0x0) {
            UNRECOVERED_JUMPTABLE = (pMVar14->klass->vtable).Reset.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pMVar14,(pMVar14->klass->vtable).Reset.method,UNRECOVERED_JUMPTABLE);
            return;
          }
        }
      }
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ESEditCubeTutorialSetup(MVBuildModeAvatarLocal+EditMode+ESEditCubeTutorialData) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialSetup
               (MVBuildModeAvatarLocal_EditMode *this,
               MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialData *data,MethodInfo *method)

{
  (this->fields).moveConstraintSet = 1;
  (this->fields).moveConstraintRadius = 25.0;
  (this->fields).moveConstraintCenter.x = 0.0;
  (this->fields).moveConstraintCenter.y = 0.0;
  (this->fields).moveConstraintCenter.z = 0.0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((data != (MVBuildModeAvatarLocal_EditMode_ESEditCubeTutorialData *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(data->fields).focusWoId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      puVar2 = (undefined8 *)
               (*(pMVar1->klass->vtable).get_Scale.methodPtr)
                         (auStack_3,pMVar1,(pMVar1->klass->vtable).get_Scale.method);
      uVar4 = *puVar2;
      uStack_5 = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)
               (*(pMVar1->klass->vtable).get_Scale.methodPtr)
                         (auStack_3,pMVar1,(pMVar1->klass->vtable).get_Scale.method);
      fVar6 = _UNK_?;
      if ((float)*puVar2 <= _UNK_?) {
        fVar6 = (float)*puVar2;
      }
      fVar7 = _UNK_?;
      if ((float)uVar4 <= _UNK_?) {
        fVar7 = (float)uVar4;
      }
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar6;
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar7;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ESLeaveCubeTutorialSetup() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_ESLeaveCubeTutorialSetup
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 == (MVBuildModeAvatarLocal *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn(pMVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JetPackCamera);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar3 != (MainCameraManager *)0x0) &&
      (pMVar4 = (pMVar3->fields).cameraController, pMVar4 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar4->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    player = (MVPlayer *)0x0;
    this_01 = (JetPackCamera *)
              MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                        (this_00,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
       ((lVar5 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x70), lVar5 != 0 &&
        (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 != 0)))) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      auStack_6._0_8_ = *(undefined8 *)(lVar5 + 0x10);
      fVar7 = *(float *)(lVar5 + 0x18);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar9._0_4_ = (pVVar8->upVector).x;
      uVar9._4_4_ = (pVVar8->upVector).y;
      fVar10 = (pVVar8->upVector).z;
      fVar11 = (float)auStack_6._0_4_ + (float)uVar9;
      fVar12 = (float)auStack_6._4_4_ + uVar9._4_4_;
      if (cRam_? == '\0') {
        auStack_6._0_8_ = uVar9;
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_6._0_4_ = (pVVar8->upVector).x;
      auStack_6._4_4_ = (pVVar8->upVector).y;
      fVar13 = (pVVar8->upVector).z;
      fVar11 = fVar11 + (float)auStack_6._0_4_;
      fVar12 = fVar12 + (float)auStack_6._4_4_;
      pMVar1 = (this->fields)._.buildModeAvatar;
      if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
         (obj = (pMVar1->fields)._._._.transform, obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_6._0_4_ = 0.0;
        auStack_6._4_4_ = 0.0;
        stack0xffffffffffffff50 = 0;
        pvVar14 = (obj->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        uStack_15 = (undefined *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
        (*pcRam_?)(pvVar14,auStack_6);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar16 = (float)auStack_6._8_4_ + (float)auStack_6._8_4_;
        fVar17 = (float)auStack_6._4_4_ + (float)auStack_6._4_4_;
        pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar18 = ((float)auStack_6._0_4_ + (float)auStack_6._0_4_) * (float)auStack_6._0_4_;
        uVar19._0_4_ = (pVVar8->forwardVector).x;
        uVar19._4_4_ = (pVVar8->forwardVector).y;
        fVar20 = fVar16 * (float)auStack_6._0_4_;
        fVar21 = fVar17 * (float)auStack_6._4_4_;
        fVar22 = fVar17 * (float)auStack_6._0_4_;
        fVar23 = fVar16 * (float)auStack_6._4_4_;
        fVar24 = ((float)auStack_6._0_4_ + (float)auStack_6._0_4_) * fStack_25;
        fVar26 = (pVVar8->forwardVector).z;
        auStack_6._0_8_ = uVar19;
        if (this_01 != (JetPackCamera *)0x0) {
          pJVar27 = this_01->klass;
          bVar28 = (TypeInfo__JetPackCamera->_1).naturalAligment;
          if (((pJVar27->_1).naturalAligment < bVar28) ||
             ((pJVar27->_1).typeHierarchy[(ulonglong)bVar28 - 1] !=
              (Il2CppClass *)TypeInfo__JetPackCamera)) {
            FUN_?(this_01);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar28 = (TypeInfo__JetPackCamera->_1).naturalAligment;
          auStack_6._4_4_ =
               (_UNK_? - (fVar16 * (float)auStack_6._8_4_ + fVar18)) * uVar19._4_4_ +
               (fVar16 * fStack_25 + fVar22) * (float)uVar19 + (fVar23 - fVar24) * fVar26 + fVar12;
          auStack_6._0_4_ =
               (_UNK_? - (fVar16 * (float)auStack_6._8_4_ + fVar21)) * (float)uVar19 +
               (fVar22 - fVar16 * fStack_25) * uVar19._4_4_ + (fVar17 * fStack_25 + fVar20) * fVar26 +
               fVar11;
          stack0xffffffffffffff50 =
               CONCAT44(fStack_25,
                        (fVar20 - fVar17 * fStack_25) * (float)uVar19 +
                        (fVar24 + fVar23) * uVar19._4_4_ +
                        (_UNK_? - (fVar21 + fVar18)) * fVar26 + fVar7 + fVar10 + fVar13);
          if ((bVar28 <= (pJVar27->_1).naturalAligment) &&
             ((pJVar27->_1).typeHierarchy[(ulonglong)bVar28 - 1] ==
              (Il2CppClass *)TypeInfo__JetPackCamera)) {
            JetPackCamera::JetPackCamera_FocusOnPosition
                      (this_01,(Vector3 *)auStack_6,0.0,(MethodInfo *)0x0);
            return;
          }
          FUN_?(this_01);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(data->fields).focusWoId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      puVar2 = (undefined8 *)
               (*(pMVar1->klass->vtable).get_Scale.methodPtr)
                         (auStack_3,pMVar1,(pMVar1->klass->vtable).get_Scale.method);
      uVar4 = *puVar2;
      uStack_5 = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)
               (*(pMVar1->klass->vtable).get_Scale.methodPtr)
                         (auStack_3,pMVar1,(pMVar1->klass->vtable).get_Scale.method);
      fVar6 = (float)uVar4 + (float)uVar4;
      fVar7 = (float)*puVar2 + (float)*puVar2;
      fVar8 = _UNK_?;
      if (fVar6 <= _UNK_?) {
        fVar8 = fVar6;
      }
      fVar6 = _UNK_?;
      if (fVar7 <= _UNK_?) {
        fVar6 = fVar7;
      }
      (this->fields)._XZMovementSpeedScale_k__BackingField = fVar8;
      (this->fields)._YMovementSpeedScale_k__BackingField = fVar6;
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__JetPackCamera);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar2->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    player = (MVPlayer *)0x0;
    this_01 = (JetPackCamera *)
              MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                        (this_00,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
       ((lVar3 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x70), lVar3 != 0 &&
        (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0)))) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      auStack_4._0_8_ = *(undefined8 *)(lVar3 + 0x10);
      fVar5 = *(float *)(lVar3 + 0x18);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar7._0_4_ = (pVVar6->upVector).x;
      uVar7._4_4_ = (pVVar6->upVector).y;
      fVar8 = (pVVar6->upVector).z;
      fVar9 = (float)auStack_4._0_4_ + (float)uVar7;
      fVar10 = (float)auStack_4._4_4_ + uVar7._4_4_;
      if (cRam_? == '\0') {
        auStack_4._0_8_ = uVar7;
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_4._0_4_ = (pVVar6->upVector).x;
      auStack_4._4_4_ = (pVVar6->upVector).y;
      fVar11 = (pVVar6->upVector).z;
      fVar9 = fVar9 + (float)auStack_4._0_4_;
      fVar10 = fVar10 + (float)auStack_4._4_4_;
      pMVar12 = (this->fields)._.buildModeAvatar;
      if ((pMVar12 != (MVBuildModeAvatarLocal *)0x0) &&
         (obj = (pMVar12->fields)._._._.transform, obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_4._0_4_ = 0.0;
        auStack_4._4_4_ = 0.0;
        stack0xffffffffffffff50 = 0;
        pvVar13 = (obj->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcRam_? = pcVar14;
        (*pcRam_?)(pvVar13,auStack_4);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar15 = (float)auStack_4._8_4_ + (float)auStack_4._8_4_;
        fVar16 = (float)auStack_4._4_4_ + (float)auStack_4._4_4_;
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar17 = ((float)auStack_4._0_4_ + (float)auStack_4._0_4_) * (float)auStack_4._0_4_;
        uVar18._0_4_ = (pVVar6->forwardVector).x;
        uVar18._4_4_ = (pVVar6->forwardVector).y;
        fVar19 = fVar15 * (float)auStack_4._0_4_;
        fVar20 = fVar16 * (float)auStack_4._4_4_;
        fVar21 = fVar16 * (float)auStack_4._0_4_;
        fVar22 = fVar15 * (float)auStack_4._4_4_;
        fVar23 = ((float)auStack_4._0_4_ + (float)auStack_4._0_4_) * fStack_24;
        fVar25 = (pVVar6->forwardVector).z;
        auStack_4._0_8_ = uVar18;
        if (this_01 != (JetPackCamera *)0x0) {
          pJVar26 = this_01->klass;
          bVar27 = (TypeInfo__JetPackCamera->_1).naturalAligment;
          if (((pJVar26->_1).naturalAligment < bVar27) ||
             ((pJVar26->_1).typeHierarchy[(ulonglong)bVar27 - 1] !=
              (Il2CppClass *)TypeInfo__JetPackCamera)) {
            FUN_?(this_01);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          bVar27 = (TypeInfo__JetPackCamera->_1).naturalAligment;
          auStack_4._4_4_ =
               (_UNK_? - (fVar15 * (float)auStack_4._8_4_ + fVar17)) * uVar18._4_4_ +
               (fVar15 * fStack_24 + fVar21) * (float)uVar18 + (fVar22 - fVar23) * fVar25 + fVar10;
          auStack_4._0_4_ =
               (_UNK_? - (fVar15 * (float)auStack_4._8_4_ + fVar20)) * (float)uVar18 +
               (fVar21 - fVar15 * fStack_24) * uVar18._4_4_ + (fVar16 * fStack_24 + fVar19) * fVar25 +
               fVar9;
          stack0xffffffffffffff50 =
               CONCAT44(fStack_24,
                        (fVar19 - fVar16 * fStack_24) * (float)uVar18 +
                        (fVar23 + fVar22) * uVar18._4_4_ +
                        (_UNK_? - (fVar20 + fVar17)) * fVar25 + fVar5 + fVar8 + fVar11);
          if ((bVar27 <= (pJVar26->_1).naturalAligment) &&
             ((pJVar26->_1).typeHierarchy[(ulonglong)bVar27 - 1] ==
              (Il2CppClass *)TypeInfo__JetPackCamera)) {
            JetPackCamera::JetPackCamera_FocusOnPosition
                      (this_01,(Vector3 *)auStack_4,0.0,(MethodInfo *)0x0);
            return;
          }
          FUN_?(this_01);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_FrameUpdate
               (MVBuildModeAvatarLocal_EditMode *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

{
  this_00 = (this->fields).doubleTap;
  if (this_00 != (DoubleTapMovementChecker *)0x0) {
    DoubleTapMovementChecker::DoubleTapMovementChecker_FrameUpdate(this_00,(MethodInfo *)0x0);
    pVVar1 = MVBuildModeAvatarLocal_EditMode_GetMovementVelocity(&VStack_2,this,(MethodInfo *)0x0);
    VStack_3.x = pVVar1->x;
    VStack_3.y = pVVar1->y;
    VStack_3.z = pVVar1->z;
    MVBuildModeAvatarLocal_EditMode_Move(this,&VStack_3,(MethodInfo *)0x0);
    pVVar1 = MVBuildModeAvatarLocal_EditMode_GetElevationVelocity(&VStack_2,this,(MethodInfo *)0x0)
    ;
    fVar4 = (this->fields)._YMovementSpeedScale_k__BackingField;
    uVar5 = pVVar1->x;
    uVar6 = pVVar1->y;
    VStack_3.z = fVar4 * pVVar1->z;
    VStack_3.y = fVar4 * (float)uVar6;
    VStack_3.x = fVar4 * (float)uVar5;
    MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,&VStack_3,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._.buildModeAvatar;
    if (((pMVar7 != (MVBuildModeAvatarLocal *)0x0) &&
        (this_01 = (pMVar7->fields)._._._.gameObject, this_01 != (GameObject *)0x0)) &&
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_01,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         (&VStack_2,pTVar8,(MethodInfo *)0x0);
      VStack_3.x = pVVar1->x;
      VStack_3.y = pVVar1->y;
      fVar4 = pVVar1->z;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_02 != (MainCameraManager *)0x0) &&
         (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_02,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0))
      {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           (&VStack_2,pTVar8,(MethodInfo *)0x0);
        pMVar7 = (this->fields)._.buildModeAvatar;
        VStack_3.z = fVar4 * _UNK_?;
        VStack_3.y = pVVar1->y * _UNK_?;
        VStack_3.x = VStack_3.x * _UNK_?;
        QStack_9.x = 0.0;
        QStack_9.y = 0.0;
        QStack_9.z = 0.0;
        QStack_9.w = 0.0;
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(&VStack_3,&QStack_9);
        if (pMVar7 != (MVBuildModeAvatarLocal *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                    ((MVWorldObjectClient *)pMVar7,&QStack_9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 GetDirection(Boolean) */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    bool freeFlight,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  this_00 = (this->fields).mainCamera;
  if ((this_00 == (Camera *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3);
  method_00 = (MethodInfo *)0x0;
  pVVar2 = MVBuildModeAvatarLocal_EditMode_GetInputDirection(aVStack_5,(MethodInfo *)0x0);
  uVar6 = pVVar2->x;
  uVar7 = pVVar2->y;
  fVar8 = pVVar2->z;
  fVar9 = _UNK_? - 0.0;
  fVar10 = _UNK_? - 0.0;
  __return_storage_ptr__->x =
       (_UNK_? - 0.0) * (float)uVar6 + (float)uVar7 * 0.0 + fVar8 * 0.0;
  __return_storage_ptr__->y = fVar9 * (float)uVar7 + (float)uVar6 * 0.0 + fVar8 * 0.0;
  __return_storage_ptr__->z = (float)uVar6 * 0.0 + (float)uVar7 * 0.0 + fVar10 * fVar8;
  if (freeFlight == 0) {
    __return_storage_ptr__->y = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (__return_storage_ptr__,method_00);
  }
  return __return_storage_ptr__;
}


/* Vector3 GetElevationVelocity() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetElevationVelocity
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_ScrollWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveUp,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_EditMoveDown,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      fVar2 = (this->fields).keyVelocity;
      fVar3 = (this->fields).keyAcceleration;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar4)();
        return pVVar6;
      }
      pcRam_? = pcVar4;
      fVar7 = (float)(*pcRam_?)();
      (this->fields).keyVelocity = fVar7 * fVar3 + fVar2;
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveDown,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
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
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
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
  }
  else {
    fVar2 = (this->fields).keyVelocity;
    fVar3 = (this->fields).keyAcceleration;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar4)();
      return pVVar6;
    }
    pcRam_? = pcVar4;
    fVar7 = (float)(*pcRam_?)();
    (this->fields).keyVelocity = fVar2 - fVar7 * fVar3;
  }
code_?:
  fVar2 = (this->fields).keyVelocity;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar4)();
    return pVVar6;
  }
  pcRam_? = pcVar4;
  fVar3 = (float)(*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar3 = fVar3 * fVar2;
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar8->upVector).x;
  uVar10 = (pVVar8->upVector).y;
  fVar2 = (this->fields).heightAdjustSpeed;
  fVar7 = (pVVar8->upVector).z;
  __return_storage_ptr__->x = fVar3 * (float)uVar9 * fVar2;
  __return_storage_ptr__->y = fVar3 * (float)uVar10 * fVar2;
  __return_storage_ptr__->z = fVar3 * fVar7 * fVar2;
  return __return_storage_ptr__;
}


/* Vector3 GetInputDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetInputDirection
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->zeroVector).x;
  uVar2._4_4_ = (pVVar1->zeroVector).y;
  fStack_3 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_EditMoveForward,KeyState__Enum_Pressed,(MethodInfo *)0x0
                      );
    uStack_5 = uVar2;
    if (bVar4 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_6._0_4_ = (pVVar1->forwardVector).x;
      uStack_6._4_4_ = (pVVar1->forwardVector).y;
      fStack_3 = fStack_3 + (pVVar1->forwardVector).z;
      uVar2._0_4_ = (float)uVar2 + (float)(undefined4)uStack_6;
      uVar2._4_4_ = uVar2._4_4_ + (float)uStack_6._4_4_;
      uStack_5 = CONCAT44(uVar2._4_4_,(float)uVar2);
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_EditMoveBackwards,KeyState__Enum_Pressed,
                       (MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_6._0_4_ = (pVVar1->backVector).x;
      uStack_6._4_4_ = (pVVar1->backVector).y;
      fStack_3 = fStack_3 + (pVVar1->backVector).z;
      uVar2._0_4_ = (float)uStack_5 + (float)(undefined4)uStack_6;
      uVar2._4_4_ = uStack_5._4_4_ + (float)uStack_6._4_4_;
      uStack_5 = CONCAT44(uVar2._4_4_,(float)uVar2);
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_EditMoveLeft,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_6._0_4_ = (pVVar1->leftVector).x;
      uStack_6._4_4_ = (pVVar1->leftVector).y;
      fStack_3 = fStack_3 + (pVVar1->leftVector).z;
      uVar2._0_4_ = (float)uStack_5 + (float)(undefined4)uStack_6;
      uVar2._4_4_ = uStack_5._4_4_ + (float)uStack_6._4_4_;
      uStack_5 = CONCAT44(uVar2._4_4_,(float)uVar2);
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_EditMoveRight,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar7 = (pVVar1->rightVector).x;
      uVar8 = (pVVar1->rightVector).y;
      fStack_3 = fStack_3 + (pVVar1->rightVector).z;
      uVar2._0_4_ = (float)uStack_5 + (float)uVar7;
      uVar2._4_4_ = uStack_5._4_4_ + (float)uVar8;
      uStack_5 = CONCAT44(uVar2._4_4_,(float)uVar2);
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Vertical);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Horizontal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar1->zeroVector).x;
    uStack_6._4_4_ = (pVVar1->zeroVector).y;
    fStack_9 = (pVVar1->zeroVector).z;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2._0_4_ = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0)
    ;
    fStack_3 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
    uVar2._4_4_ = (float)((ulonglong)uStack_6 >> 0x20);
    uStack_5 = CONCAT44(uVar2._4_4_,(float)uVar2);
  }
  uStack_6 = CONCAT44(uVar2._4_4_,(float)uVar2);
  fStack_9 = fStack_3;
  uVar2._0_4_ = (float)FUN_?(&uStack_6);
  if (_UNK_? < (float)uVar2) {
    fVar10 = (float)uStack_5 / (float)uVar2;
    fVar11 = uStack_5._4_4_ / (float)uVar2;
    fStack_3 = fStack_3 / (float)uVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = (pVVar1->zeroVector).x;
    fVar11 = (pVVar1->zeroVector).y;
    fStack_3 = (pVVar1->zeroVector).z;
  }
  __return_storage_ptr__->x = fVar10;
  __return_storage_ptr__->y = fVar11;
  __return_storage_ptr__->z = fStack_3;
  return __return_storage_ptr__;
}


/* Vector3 GetMovementVelocity() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetMovementVelocity
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal_EditMode *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Pressed,(MethodInfo *)0x0)
  ;
  pVVar2 = MVBuildModeAvatarLocal_EditMode_GetDirection(aVStack_3,this,bVar1,(MethodInfo *)0x0);
  uStack_4._0_4_ = pVVar2->x;
  uStack_4._4_4_ = pVVar2->y;
  fVar5 = pVVar2->z;
  fStack_6 = fVar5;
  fVar7 = (float)FUN_?(&uStack_4);
  bVar8 = cRam_? == '\0';
  (this->fields).targetSpeed = fVar7 * (this->fields).maxSpeed;
  if (bVar8) {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveFast,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pDVar9 = (this->fields).doubleTap;
    if (pDVar9 == (DoubleTapMovementChecker *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar10)();
      return pVVar2;
    }
    if ((pDVar9->fields).doubleTap == 0) goto code_?;
  }
  (this->fields).targetSpeed = (this->fields).targetSpeed * (this->fields).speedModifier;
code_?:
  fVar7 = (this->fields).targetSpeed;
  fVar11 = (this->fields).speedSmoothingTime;
  fVar12 = (this->fields).speed;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar10 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar10)();
    return pVVar2;
  }
  pcRam_? = pcVar10;
  fVar14 = (float)(*pcRam_?)();
  fVar14 = fVar14 * fVar11;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  else if (_UNK_? < fVar14) {
    fVar14 = _UNK_?;
  }
  fVar12 = (fVar7 - fVar12) * fVar14 + fVar12;
  (this->fields).speed = fVar12;
  fVar7 = (this->fields).speedModifier;
  fVar11 = (this->fields)._XZMovementSpeedScale_k__BackingField;
  __return_storage_ptr__->x = fVar12 * (float)uStack_4 * fVar7 * fVar11;
  __return_storage_ptr__->y = fVar12 * uStack_4._4_4_ * fVar7 * fVar11;
  __return_storage_ptr__->z = fVar12 * fVar5 * fVar7 * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 GetTouchInputDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
          MVBuildModeAvatarLocal_EditMode_GetTouchInputDirection
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vertical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  iVar3 = *(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c;
  fVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  __return_storage_ptr__->x = (pVVar2->zeroVector).x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  if (iVar3 == 0) {
    FUN_?();
  }
  fVar5 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  axis = StringLiteral_Vertical;
  __return_storage_ptr__->x = fVar5;
  fVar5 = MVInputWrapper::MVInputWrapper_GetAxis(axis,(MethodInfo *)0x0);
  __return_storage_ptr__->z = fVar5;
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
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 *velocity,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  uStack_4._0_4_ = velocity->x;
  uStack_4._4_4_ = velocity->y;
  fVar5 = (float)(undefined4)uStack_4 * fVar3;
  fVar6 = velocity->z * fVar3;
  VStack_7.y = (float)uStack_4._4_4_ * fVar3;
  VStack_7.x = fVar5;
  VStack_7.z = fVar6;
  MVBuildModeAvatarLocal_EditMode_MoveCharacter(this,&VStack_7,(MethodInfo *)0x0);
  if (_UNK_? < (double)(fVar5 * fVar5 + 0.0 + fVar6 * fVar6)) {
    pMVar8 = (this->fields)._.buildModeAvatar;
    if ((pMVar8 == (MVBuildModeAvatarLocal *)0x0) ||
       (this_00 = (pMVar8->fields)._._._.gameObject, this_00 == (GameObject *)0x0)) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_7.x = (pVVar9->upVector).x;
    VStack_7.y = (pVVar9->upVector).y;
    VStack_7.z = (pVVar9->upVector).z;
    uStack_4 = (ulonglong)(uint)fVar5;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar1 = pcRam_?;
    fStack_12 = fVar6;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(&uStack_4,&VStack_7,&uStack_10);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_13 = (undefined4)uStack_10;
    uStack_14 = uStack_10._4_4_;
    uStack_15 = (undefined4)uStack_11;
    uStack_16 = uStack_11._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (obj->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar17,&uStack_13);
  }
  return;
}


/* Void MoveCharacter(Vector3) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_MoveCharacter
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 *moveDelta,MethodInfo *method)

{
  if ((this->fields).moveConstraintSet != 0) {
    pMVar1 = (this->fields)._.buildModeAvatar;
    if (((pMVar1 == (MVBuildModeAvatarLocal *)0x0) ||
        (this_00 = (pMVar1->fields)._._._.gameObject, this_00 == (GameObject *)0x0)) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    fStack_3 = 0.0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    uVar7 = moveDelta->x;
    uVar8 = moveDelta->y;
    fVar9 = (float)uStack_2 + (float)uVar7;
    fVar10 = fStack_3 + moveDelta->z;
    fVar11 = uStack_2._4_4_ + (float)uVar8;
    aVStack_12[0].x = (this->fields).moveConstraintCenter.x;
    aVStack_12[0].y = (this->fields).moveConstraintCenter.y;
    fVar13 = (this->fields).moveConstraintCenter.z - fStack_3;
    fVar14 = aVStack_12[0].y - uStack_2._4_4_;
    fVar15 = aVStack_12[0].x - (float)uStack_2;
    uStack_2 = CONCAT44(fVar14,fVar15);
    fStack_3 = fVar13;
    fVar16 = (float)FUN_?(&uStack_2);
    if (_UNK_? < fVar16) {
      fVar13 = fVar13 / fVar16;
      uStack_2 = CONCAT44(fVar14 / fVar16,fVar15 / fVar16);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_2._0_4_ = (pVVar17->zeroVector).x;
      uStack_2._4_4_ = (pVVar17->zeroVector).y;
      fVar13 = (pVVar17->zeroVector).z;
    }
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                       (aVStack_12,moveDelta,method);
    uVar6._0_4_ = pVVar18->x;
    uVar6._4_4_ = pVVar18->y;
    fVar16 = (float)uStack_2 * (float)(undefined4)uVar6;
    fVar14 = uStack_2._4_4_ * (float)uVar6._4_4_;
    uStack_2 = uVar6;
    if (fVar14 + fVar16 + fVar13 * pVVar18->z <= _UNK_?) {
      uStack_2._0_4_ = (this->fields).moveConstraintCenter.x;
      uStack_2._4_4_ = (this->fields).moveConstraintCenter.y;
      fVar13 = (this->fields).moveConstraintCenter.z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Math);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar9 = (float)uStack_2 - fVar9;
      fVar11 = uStack_2._4_4_ - fVar11;
      fVar13 = fVar13 - fVar10;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      dVar19 = (double)(fVar11 * fVar11 + fVar9 * fVar9 + fVar13 * fVar13);
      if (dVar19 < 0.0) {
        dVar19 = (double)FUN_?();
      }
      else {
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar19;
        auVar20 = sqrtpd(ZEXT816(0),auVar20);
        dVar19 = auVar20._0_8_;
      }
      fVar13 = (this->fields).moveConstraintRadius * _UNK_?;
      if (fVar13 < (float)dVar19) {
        fVar13 = (float)dVar19 - fVar13;
        fVar14 = 0.0;
        fVar16 = (this->fields).moveConstraintRadius * _UNK_?;
        if (fVar13 < fVar16) {
          fVar14 = _UNK_? - fVar13 / fVar16;
        }
        aVStack_12[0].x = moveDelta->x;
        aVStack_12[0].y = moveDelta->y;
        fVar14 = fVar14 * fVar14;
        moveDelta->x = aVStack_12[0].x * fVar14;
        moveDelta->y = aVStack_12[0].y * fVar14;
        moveDelta->z = moveDelta->z * fVar14;
      }
    }
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    puVar21 = (undefined8 *)
              (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                        (aVStack_12,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
    uVar22 = moveDelta->x;
    uVar23 = moveDelta->y;
    fStack_3 = moveDelta->z + *(float *)(puVar21 + 1);
    uStack_2 = CONCAT44((float)uVar23 + (float)((ulonglong)*puVar21 >> 0x20),
                         (float)uVar22 + (float)*puVar21);
    (*(pMVar1->klass->vtable).set_WorldPosition.methodPtr)
              (pMVar1,&uStack_2,(pMVar1->klass->vtable).set_WorldPosition.method);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_SetCamera
               (MVBuildModeAvatarLocal_EditMode *this,CameraType__Enum cameraType,MethodInfo *method
               )

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((((pMVar1 == (MVBuildModeAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarScriptObject, pAVar2 == (AvatarLocalBuildMode *)0x0)) ||
      (pAVar3 = (pAVar2->fields).avatarCamerasDesktop,
      pAVar3 == (AvatarCamerasDesktopBuildMode *)0x0)) ||
     (pMVar4 = (pAVar3->fields).cameraController, pMVar4 == (MVCameraController *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pMVar6 = (pMVar4->fields).cameraStack;
  if (pMVar6 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                  ,CONCAT44(in_register_00000014,cameraType),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar6->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__get_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,cameraType,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
            );
  MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
            (pMVar6,pMVar4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar6->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar6,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar8,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar9 = &(pMVar7->fields).OnIgnoreInputTypes;
  a = (pMVar7->fields).OnIgnoreInputTypes;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar11 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar10 == (Delegate *)0x0) {
      pEVar12 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar12 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar10);
      if (pEVar12 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar10,pEVar11);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar13 = *ppEVar9;
    bVar14 = a == pEVar13;
    if (bVar14) {
      *ppEVar9 = pEVar12;
      pEVar13 = a;
    }
    UNLOCK();
    pEVar12 = a;
    if (!bVar14) {
      pEVar12 = pEVar13;
    }
    if (iRam_? != 0) {
      uVar15 = (uint)((ulonglong)ppEVar9 >> 0xc);
      uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
      do {
        uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
        puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar17 == *puVar18;
        if (bVar14) {
          *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    bVar14 = pEVar12 != a;
    a = pEVar12;
  } while (bVar14);
  pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar6,(MethodInfo *)0x0);
  if (pMVar8 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar8->klass->vtable).Enter.methodPtr)();
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
  pMVar4 = (pMVar7->fields).cameraController;
  if (pMVar4 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = (pMVar4->fields).cameraStack;
  if (pMVar6 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar6,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar8 == (MVCameraBase *)0x0) {
code_?:
    bVar14 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar8->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar6 = (pMVar4->fields).cameraStack;
    if ((pMVar6 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar6,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0))
    goto code_?;
    uVar15 = (*(pMVar8->klass->vtable).__unknown.methodPtr)
                       (pMVar8,(pMVar8->klass->vtable).__unknown.method);
    if ((uVar15 < 0x15) && ((0x100441U >> (uVar15 & 0x1f) & 1) != 0)) {
      bVar14 = true;
    }
    else {
      bVar14 = uVar15 == 0x13;
    }
  }
  this_00 = (pMVar7->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar14 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar14 ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_03 != (MVLocalPlayer *)0x0) {
      pMVar19 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_03,(MethodInfo *)0x0);
      if (pMVar19 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar20 = (pMVar19->fields)._.avatar;
      if (pAVar20 != (Avatar *)0x0) {
        bVar21 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar20->klass->_1).naturalAligment < bVar21) ||
           ((pAVar20->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar20);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = pAVar20[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMoveConstraint(Vector3, Single) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_SetMoveConstraint
               (MVBuildModeAvatarLocal_EditMode *this,Vector3 *center,float radius,
               MethodInfo *method)

{
  fVar1 = center->y;
  fVar2 = center->z;
  (this->fields).moveConstraintCenter.x = center->x;
  (this->fields).moveConstraintCenter.y = fVar1;
  (this->fields).moveConstraintCenter.z = fVar2;
  (this->fields).moveConstraintRadius = radius;
  (this->fields).moveConstraintSet = 1;
  return;
}


/* Void TouchRotationToCamera() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_TouchRotationToCamera
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.buildModeAvatar;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                (&VStack_2,this_01,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateRotationToCamera() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode::
     MVBuildModeAvatarLocal_EditMode_UpdateRotationToCamera
               (MVBuildModeAvatarLocal_EditMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.buildModeAvatar;
  if (((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
      (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_01 != (MainCameraManager *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.buildModeAvatar;
      fStack_7 = fVar6 * _UNK_?;
      uStack_5 = CONCAT44(pVVar3->y * _UNK_?,(float)uStack_5 * _UNK_?);
      QStack_8.x = 0.0;
      QStack_8.y = 0.0;
      QStack_8.z = 0.0;
      QStack_8.w = 0.0;
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&uStack_5,&QStack_8);
      if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                  ((MVWorldObjectClient *)pMVar1,&QStack_8,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__DoubleTapMovementChecker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._avatarBuildModeRuntimeState = 1;
  (this->fields).maxSpeed = 1.75;
  (this->fields).speedModifier = 5.0;
  (this->fields).speedSmoothingTime = 10.0;
  pDVar1 = (DoubleTapMovementChecker *)FUN_?(TypeInfo__DoubleTapMovementChecker);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KogamaControls);
    LOCK();
    UNLOCK();
    FUN_?(&_22F9E13B351DD0E6242C73AA96EAE83BAF7713684B5E8493CCED630DF6E47F09_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  array = (KogamaControls__Enum__Array *)FUN_?(TypeInfo__KogamaControls,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__22F9E13B351DD0E6242C73AA96EAE83BAF7713684B5E8493CCED630DF6E47F09_Field
             ,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  (pDVar1->fields).movementControls = array;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).doubleTap = pDVar1;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).doubleTap >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).keyAcceleration = 20.0;
  (this->fields).keyDamping = 10.0;
  (this->fields).heightAdjustSpeed = 5.0;
  (this->fields)._.buildModeAvatar = buildModeAvatar;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  (this->fields).mainCamera = pCVar9;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  (this->fields)._XZMovementSpeedScale_k__BackingField = 1.0;
  (this->fields)._YMovementSpeedScale_k__BackingField = 1.0;
  return;
}

