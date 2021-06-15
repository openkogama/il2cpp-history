
/* Void DrawPlaneToModel(GameObject) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_DrawPlaneToModel
               (DrawPlaneControllerUUI *this,GameObject *gameObject,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos(pWVar1,(MethodInfo *)0x0);
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                (pWVar1,gameObject,(MethodInfo *)0x0);
      pWVar1 = (this->fields).worldEditorDrawPlane;
      if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
        WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                  (pWVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_GetCubePosOnDrawplane
               (DrawPlaneControllerUUI *this,GameObject *gameObject,IntVector *intVectorHitPosition,
               MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar3 = 0.0;
  fVar4 = 0.0;
  uVar5._4_4_ = 0.0;
  bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
                    (this_00,(Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  this_01 = (this_00->fields)._targetGameObject;
  if ((this_01 != (GameObject *)0x0) &&
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
    VVar7.y = uVar5._4_4_;
    VVar7.x = fVar4;
    VVar7.z = fVar3;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                       ((Vector3 *)&fStack_9,pTVar6,VVar7,(MethodInfo *)0x0);
    uVar10._0_4_ = pVVar8->x;
    uStack_11 = pVVar8->y;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    VStack_12.z = (float)&UNK_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_02 != (MainCameraManager *)0x0) &&
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_02,(MethodInfo *)0x0), this_03 != (Transform *)0x0)
       ) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd0,this_03,(MethodInfo *)0x0);
      uVar10 = uVar10 & 0xffffffff00000000;
      if (pTVar6 != (Transform *)0x0) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           ((Vector3 *)&stack0xffffffc4,pTVar6,*pVVar8,(MethodInfo *)0x0);
        uVar10 = uVar10 & 0xffffffff00000000;
        uVar13 = pVVar8->x;
        uVar14 = pVVar8->y;
        fStack_9 = (float)uVar13;
        puStack_15 = (undefined *)uVar14;
        pVVar8 = WorldEditorDrawPlane::WorldEditorDrawPlane_GetOffsetVector
                           (&VStack_12,this_00,(MethodInfo *)0x0);
        this = (DrawPlaneControllerUUI *)pVVar8->z;
        uVar16 = pVVar8->x;
        fVar4 = pVVar8->y;
        if (_UNK_? < (float)puStack_15) {
          iVar17 = 1;
        }
        else {
          iVar17 = -1;
        }
        puStack_15 = (undefined *)uVar16;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        puVar18 = puStack_15;
        fVar19 = fVar4;
        VVar7.x = (float)puVar18;
        VVar7 = (Vector3)CONCAT84(uVar20,VVar7.x);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffac,VVar7,(float)iVar17,(MethodInfo *)0x0);
        uVar5._0_4_ = pVVar8->x;
        uVar5._4_4_ = pVVar8->y;
        fVar4 = pVVar8->z;
        puStack_15 = (undefined *)(undefined4)uVar5;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          uVar5 = CONCAT44(uVar5._4_4_,puStack_15);
        }
        a.z = (float)this;
        uStack_11 = (undefined4)(uVar10 >> 0x20);
        a.x = (float)(undefined4)uVar10;
        a.y = (float)uStack_11;
        b.z = fVar4;
        b.x = (float)(int)uVar5;
        b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        fStack21 = (float)this;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffac,a,b,(MethodInfo *)0x0);
        MathFunctions::MathFunctions_RoundVector
                  ((Vector3 *)&stack0xffffffac,*pVVar8,0,(MethodInfo *)0x0);
        func_?();
        return bVar2;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void HideDrawPlane() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_HideDrawPlane
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    bVar1 = UIStack::UIStack_get_StackReady((UIStack *)this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      DrawPlaneControllerUUI_ToggleDrawPlane(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WorldEditorDrawPlane *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pWVar1,
                      WorldEditorDrawPlane_MethodInfo__UnityEngine__Object__Instantiate<WorldEditorDrawPlane>_WorldEditorDrawPlane_
                     );
  (this->fields).worldEditorDrawPlane = pWVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_00,
                         MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                        );
    if (this_01 != (MVRoundCube *)0x0) {
      value = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                  (pWVar1,(GameObject *)value,(MethodInfo *)0x0);
        pWVar1 = (this->fields).worldEditorDrawPlane;
        if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
          WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active(pWVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_MoveDrawPlane
               (DrawPlaneControllerUUI *this,int32_t dir,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 - (this_00->fields).lastMovePlaneDelta <= _UNK_?) {
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
    fVar2 = pVVar4->z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&puStack_6,pTVar3,(MethodInfo *)0x0);
      puStack_6 = (undefined *)pQVar5->x;
      fVar7 = pQVar5->y;
      fVar8 = pQVar5->z;
      fVar9 = pQVar5->w;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
      uVar10 = pVVar4->y;
      fVar11 = pVVar4->z;
      VVar12 = *pVVar4;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      puVar13 = puStack_6;
      rotation.y = fVar7;
      rotation.x = (float)puVar13;
      rotation.z = fVar8;
      rotation.w = fVar9;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffdc,rotation,VVar12,(MethodInfo *)0x0);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffdc,*pVVar4,(float)dir,(MethodInfo *)0x0);
      VVar12.y = fVar11;
      VVar12.x = (float)uVar10;
      VVar12.z = fVar2;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffdc,VVar12,*pVVar4,(MethodInfo *)0x0);
      uVar14 = pVVar4->x;
      uVar15 = pVVar4->y;
      fVar2 = pVVar4->z;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        value.y = (float)uVar15;
        value.x = (float)uVar14;
        value.z = fVar2;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                  (this_00,(MethodInfo *)0x0);
        WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this_00->fields).lastMovePlaneDelta = fVar2;
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_Pick
               (DrawPlaneControllerUUI *this,Vector3 *hit,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 == (WorldEditorDrawPlane *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar4 = (pWVar1->fields).mainCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    (pWVar1->fields).mainCamera = pCVar4;
  }
  pCVar4 = (pWVar1->fields).mainCamera;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
  StandaloneInput_MousePosition
            ((Vector3 *)&stack0xffffffc8,(StandaloneInput *)0x0,in_stack_5);
  UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
  StandaloneInput_MousePosition
            ((Vector3 *)&stack0xffffffec,(StandaloneInput *)0x0,in_stack_5);
  uVar6 = 0;
  uVar7 = 0;
  fVar8 = 0.0;
  func_?();
  if (pCVar4 != (Camera *)0x0) {
    pos.y = (float)uVar7;
    pos.x = (float)uVar6;
    pos.z = fVar8;
    pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                       ((Ray *)&pPStack_10,pCVar4,pos,(MethodInfo *)0x0);
    pIVar11 = (InputToPlayerMovementAndroid__Class *)(pRVar9->m_Origin).x;
    pMVar12 = (MonitorData *)(pRVar9->m_Origin).y;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                        ((MethodInfo *)0x0);
    if (this_00 != (EventSystem *)0x0) {
      bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
      if ((bVar3 == 0) && ((pWVar1->fields).isActive != 0)) {
        pPStack_10 = &(pWVar1->fields).editorPlane;
        pIStack_13 = pIVar11;
        pMStack_14 = pMVar12;
        cVar15 = func_?();
        if (cVar15 != '\0') {
          puVar16 = (undefined8 *)func_?();
          fVar8 = *(float *)(puVar16 + 1);
          uVar6 = (undefined4)*puVar16;
          InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                    ((Vector3 *)&stack0xffffffec,(InputToPlayerMovementAndroid *)&stack0xffffff98,
                     (MethodInfo *)0x0);
          puVar16 = (undefined8 *)func_?();
          uVar17 = *puVar16;
          fVar18 = *(float *)(puVar16 + 1);
          fVar19 = (float)uVar17;
          fVar20 = (float)((ulonglong)uVar17 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar17 = CONCAT44(fVar20,fVar19);
          }
          a.z = fVar18;
          a.x = (float)(int)uVar17;
          a.y = (float)(int)((ulonglong)uVar17 >> 0x20);
          pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffffbc,a,0.0,(MethodInfo *)0x0);
          uVar22 = pVVar21->x;
          a_00.y = (float)uVar22;
          a_00.x = (float)uVar6;
          a_00.z = fVar8;
          pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffbc,a_00,*pVVar21,(MethodInfo *)0x0);
          fVar18 = pVVar21->y;
          fVar8 = pVVar21->z;
          hit->x = pVVar21->x;
          hit->y = fVar18;
          hit->z = fVar8;
          return 1;
        }
      }
      return 0;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_ReturnDrawPlaneToLandscape
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_01,
                         MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                        );
    if (this_02 != (MVRoundCube *)0x0) {
      value_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)this_02,(MethodInfo *)0x0);
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                (this_00,(GameObject *)value_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (this_00->fields)._cachedPos;
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_03 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_03,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                  (this_00,(MethodInfo *)0x0);
        WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        fVar3 = pVVar2->y;
        fVar4 = pVVar2->z;
        (this_00->fields)._cachedPos.x = pVVar2->x;
        (this_00->fields)._cachedPos.y = fVar3;
        (this_00->fields)._cachedPos.z = fVar4;
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ToggleDrawPlane() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pWVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape(pWVar1,(MethodInfo *)0x0);
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if (bVar2 == 0) {
      if (pWVar1 == (WorldEditorDrawPlane *)0x0) goto code_?;
      WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero(pWVar1,(MethodInfo *)0x0)
      ;
    }
    else {
      if (pWVar1 == (WorldEditorDrawPlane *)0x0) goto code_?;
      WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(pWVar1,(MethodInfo *)0x0);
    }
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
      bVar2 = UIStack::UIStack_get_StackReady((UIStack *)pWVar1,(MethodInfo *)0x0);
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active(pWVar1,bVar2 == 0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Altitude() */

int32_t Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Altitude
                  (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar1->fields)._altitude;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_IsDrawPlaneActive() */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_IsDrawPlaneActive
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar1->fields).isActive;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* DrawPlaneAxis get_Orientation() */

DrawPlaneAxis__Enum
Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Orientation
          (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar1->fields).drawPlaneAxis;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  DVar3 = (*pcVar2)();
  return DVar3;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Pos
                    (Vector3 *__return_storage_ptr__,DrawPlaneControllerUUI *this,MethodInfo *method
                    )

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    pVVar1 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_set_Orientation
               (DrawPlaneControllerUUI *this,DrawPlaneAxis__Enum value,MethodInfo *method)

{
  DVar1 = value;
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                        ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
code_?:
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    value = (DrawPlaneAxis__Enum)pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    fVar7 = 90.0;
code_?:
    VVar8.y = (float)uVar6;
    VVar8.x = (float)uVar5;
    VVar8.z = (float)value;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffd4,fVar7,VVar8,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar3,*pQVar9,(MethodInfo *)0x0);
  }
  else {
    if (value == DrawPlaneAxis__Enum_Y) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      uVar10 = pVVar4->x;
      uVar11 = pVVar4->y;
      value = (DrawPlaneAxis__Enum)pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      fVar7 = 0.0;
      uVar5 = uVar10;
      uVar6 = uVar11;
      goto code_?;
    }
    if (value == DrawPlaneAxis__Enum_Z) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                          ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  bVar12 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape(this_00,(MethodInfo *)0x0);
  if (bVar12 == 0) {
    this_01 = (this_00->fields)._targetGameObject;
    if ((this_01 != (GameObject *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
code_?:
      WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
                (this_00,*pVVar4,(MethodInfo *)0x0);
      VStack_13.z = (float)&UNK_?;
      WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                (this_00,(MethodInfo *)0x0);
      VStack_13.z = (float)&UNK_?;
      WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
      (this_00->fields).drawPlaneAxis = DVar1;
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_02 = (this_00->fields).mainCamera;
    fVar7 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    if ((this_02 != (Camera *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_02,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)
       ) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
      uVar16 = pVVar4->x;
      uVar17 = pVVar4->y;
      VStack_13.z = pVVar4->z;
      uVar5 = _UNK_?;
      if ((float)uVar16 <= _UNK_?) {
        uVar5 = _UNK_?;
      }
      uVar6 = _UNK_?;
      if (_UNK_? < (float)uVar17) {
        uVar6 = _UNK_?;
      }
      uVar18 = _UNK_?;
      if (VStack_13.z <= 0.0) {
        uVar18 = _UNK_?;
      }
      VStack_13.x = (float)uVar16;
      VStack_13.y = (float)uVar17;
      func_?(&stack0xffffffd8,uVar5,uVar6,uVar18,0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (this_03 != (SpawnRoleDataMediator *)0x0) {
        s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_03,(MethodInfo *)0x0)
        ;
        pVVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            (&VStack_13,s,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        VVar8 = *pVVar4;
        VStack_13.y = fVar7;
        VStack_13.z = fVar14;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        b.y = VStack_13.z;
        b.x = VStack_13.y;
        b.z = fVar15;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_13,VVar8,b,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

