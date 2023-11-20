
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_GetCubePosOnDrawplane
               (DrawPlaneControllerUUI *this,GameObject *gameObject,IntVector *intVectorHitPosition,
               MethodInfo *method)

{
  this_03 = (this->fields).worldEditorDrawPlane;
  if (this_03 != (WorldEditorDrawPlane *)0x0) {
    fVar1 = 0.0;
    puStack_2 = (undefined *)0x0;
    stack0xffffffec = 0.0;
    bVar3 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
                      (this_03,(Vector3 *)&puStack_2,(MethodInfo *)0x0);
    this_00 = (this_03->fields)._targetGameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      position.z = fVar1;
      position.x = (float)puStack_2;
      position.y = stack0xffffffec;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                ((Vector3 *)&stack0xffffffc4,pTVar4,position,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_03,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        VStack_5.z = (float)&UNK_?;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        if ((this_02 != (Transform *)0x0) &&
           (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_5,this_02,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
        {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_InverseTransformPoint(&VStack_7,pTVar4,*pVVar6,(MethodInfo *)0x0);
          fVar1 = pVVar6->y;
          pVVar6 = (Vector3 *)&stack0xffffffa0;
          puVar8 = &UNK_?;
          pVVar9 = WorldEditorDrawPlane::WorldEditorDrawPlane_GetDirectionVector
                              (pVVar6,this_03,(MethodInfo *)0x0);
          uVar10 = pVVar9->x;
          uVar11 = pVVar9->y;
          fVar12 = (float)(int)((uint)(_UNK_? < fVar1) * 2 + -1);
          fVar1 = (float)this_03 + fVar12 * pVVar9->z * _UNK_?;
          stack0xffffffec = (float)&stack0xffffffa0;
          vector.y = (float)pVVar6 + fVar12 * (float)uVar11 * _UNK_?;
          vector.x = (float)puVar8 + fVar12 * (float)uVar10 * _UNK_?;
          vector.z._0_2_ = SUB42(fVar1,0);
          vector.z._2_2_ = (short)((uint)fVar1 >> 0x10);
          pVVar6 = MathFunctions::MathFunctions_RoundVector
                             ((Vector3 *)&stack0xffffffa0,vector,0,(MethodInfo *)0x0);
          uVar13 = pVVar6->x;
          uVar14 = pVVar6->y;
          iVar15 = (int16_t)(int)(float)uVar14;
          x = (int)(float)uVar13 & 0xffff;
          stack0xffffffec = (float)&UNK_?;
          puStack_2 = (undefined *)uVar13;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    ((IntVector *)&stack0xfffffff4,x,(int)(float)uVar14 & 0xffff,
                     (int)pVVar6->z & 0xffff,(MethodInfo *)0x0);
          intVectorHitPosition->x = (short)x;
          intVectorHitPosition->y = (short)(x >> 0x10);
          intVectorHitPosition->z = iVar15;
          return bVar3;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  bVar3 = (*pcVar16)();
  return bVar3;
}


/* Void HideDrawPlane() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_HideDrawPlane
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
    if ((pWVar1->fields).isActive == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pWVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pWVar1 = (this->fields).worldEditorDrawPlane;
    if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
      bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape(pWVar1,(MethodInfo *)0x0)
      ;
      pWVar1 = (this->fields).worldEditorDrawPlane;
      if (bVar2 == 0) {
        if (pWVar1 == (WorldEditorDrawPlane *)0x0) goto code_?;
        WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                  (pWVar1,(MethodInfo *)0x0);
      }
      else {
        if (pWVar1 == (WorldEditorDrawPlane *)0x0) goto code_?;
        WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(pWVar1,(MethodInfo *)0x0);
      }
      pWVar1 = (this->fields).worldEditorDrawPlane;
      if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active
                  ((this->fields).worldEditorDrawPlane,(pWVar1->fields).isActive == 0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    func_?(&
                    WorldEditorDrawPlane_MethodInfo__UnityEngine__Object__Instantiate<WorldEditorDrawPlane>_WorldEditorDrawPlane_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar1 = (WorldEditorDrawPlane *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pWVar1,
                      WorldEditorDrawPlane_MethodInfo__UnityEngine__Object__Instantiate<WorldEditorDrawPlane>_WorldEditorDrawPlane_
                     );
  (this->fields).worldEditorDrawPlane = pWVar1;
  func_?(&(this->fields).worldEditorDrawPlane,pWVar1);
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar2->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pOVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_01,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      if ((pOVar3 != (Object *)0x0) && (pWVar1 != (WorldEditorDrawPlane *)0x0)) {
        WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                  (pWVar1,(GameObject *)pOVar3[0x11].klass,(MethodInfo *)0x0);
        pWVar1 = (this->fields).worldEditorDrawPlane;
        if (pWVar1 != (WorldEditorDrawPlane *)0x0) {
          WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active(pWVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_MoveDrawPlane
               (DrawPlaneControllerUUI *this,int32_t dir,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 - (this_00->fields).lastMovePlaneDelta <= _UNK_?) {
      return;
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
        fVar1 = pQVar3->x;
        fVar4 = pQVar3->y;
        fVar5 = pQVar3->z;
        fVar6 = pQVar3->w;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation.y = fVar4;
        rotation.x = fVar1;
        rotation.z = fVar5;
        rotation.w = fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                  ((Vector3 *)&stack0xffffffd4,rotation,
                   TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
        fVar1 = 0.0;
        puVar7 = &UNK_?;
        pWVar8 = this_00;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          value.y = (float)pWVar8;
          value.x = (float)puVar7;
          value.z = fVar1;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,value,(MethodInfo *)0x0);
          WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                    (this_00,(MethodInfo *)0x0);
          WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
          fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this_00->fields).lastMovePlaneDelta = fVar1;
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_Pick
               (DrawPlaneControllerUUI *this,Vector3 *hit,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVInputWrapper);
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pCVar1 = (this_00->fields).mainCamera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      (this_00->fields).mainCamera = pCVar1;
      func_?(&(this_00->fields).mainCamera);
    }
    pCVar1 = (this_00->fields).mainCamera;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                        ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    pVVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                        ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    uVar5 = pVVar3->y;
    if (pCVar1 != (Camera *)0x0) {
      pos.y = (float)uVar5;
      pos.x = (float)uVar4;
      pos.z = 0.0;
      pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                          ((Ray *)&stack0xffffffcc,pCVar1,pos,(MethodInfo *)0x0);
      uVar7 = (pRVar6->m_Direction).z;
      uVar8 = (pRVar6->m_Origin).x;
      uVar9 = (pRVar6->m_Origin).y;
      uVar10 = (pRVar6->m_Origin).z;
      ray.m_Origin.z = (float)uVar10;
      ray.m_Origin.y = (float)uVar9;
      ray.m_Origin.x = (float)uVar8;
      uVar11 = (pRVar6->m_Direction).x;
      uVar12 = (pRVar6->m_Direction).y;
      ray.m_Direction.y = (float)uVar12;
      ray.m_Direction.x = (float)uVar11;
      ray.m_Direction.z = (float)uVar7;
      bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_RayCast
                         (this_00,ray,hit,0,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  bVar2 = (*pcVar13)();
  return bVar2;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_ReturnDrawPlaneToLandscape
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 != (WorldEditorDrawPlane *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                     );
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
       (pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                           (this_01,
                            MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                           ), pOVar1 != (Object *)0x0)) {
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                (this_00,(GameObject *)pOVar1[0x11].klass,(MethodInfo *)0x0);
      uVar2._0_4_ = (this_00->fields)._cachedPos.x;
      uVar2._4_4_ = (this_00->fields)._cachedPos.y;
      this = (DrawPlaneControllerUUI *)(this_00->fields)._cachedPos.z;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)(undefined4)uVar2);
      if (this_02 != (Transform *)0x0) {
        fVar3 = (float)uVar2;
        fVar4 = (float)(int)((ulonglong)uVar2 >> 0x20);
        value = (Vector3)CONCAT84(uVar5,fVar3);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_02,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                  (this_00,(MethodInfo *)0x0);
        WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          ppVStack6 = &TypeInfo__UnityEngine__Vector3;
          func_?();
          cRam_? = '\x01';
        }
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar8 = (pVVar7->zeroVector).y;
        fVar9 = (pVVar7->zeroVector).z;
        (this_00->fields)._cachedPos.x = (pVVar7->zeroVector).x;
        (this_00->fields)._cachedPos.y = fVar8;
        (this_00->fields)._cachedPos.z = fVar9;
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ToggleDrawPlane() */

void Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldEditorDrawPlane;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active
                ((this->fields).worldEditorDrawPlane,(pWVar1->fields).isActive == 0,
                 (MethodInfo *)0x0);
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
  puStack_1 = &stack0xfffffffc;
  pWVar2 = (this->fields).worldEditorDrawPlane;
  if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar2->fields)._altitude;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Boolean get_IsDrawPlaneActive() */

bool Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_IsDrawPlaneActive
               (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pWVar2 = (this->fields).worldEditorDrawPlane;
  if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar2->fields).isActive;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* DrawPlaneAxis get_Orientation() */

DrawPlaneAxis__Enum
Assembly-CSharp.dll::DrawPlaneControllerUUI::DrawPlaneControllerUUI_get_Orientation
          (DrawPlaneControllerUUI *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pWVar2 = (this->fields).worldEditorDrawPlane;
  if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
    return (pWVar2->fields).drawPlaneAxis;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  DVar6 = (*pcVar5)();
  return DVar6;
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
  this_00 = (this->fields).worldEditorDrawPlane;
  if (this_00 == (WorldEditorDrawPlane *)0x0) goto code_?;
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar2->backVector).x;
    uVar3._4_4_ = (pVVar2->backVector).y;
    fVar4 = (pVVar2->backVector).z;
code_?:
    uVar5 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = 90.0;
code_?:
    axis.y = (float)uVar6;
    axis.x = (float)uVar5;
    axis.z = fVar4;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffb0,fVar7,axis,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,*pQVar8,(MethodInfo *)0x0);
  }
  else {
    if (value == DrawPlaneAxis__Enum_Y) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar2->upVector).x;
      uVar6 = (pVVar2->upVector).y;
      fVar4 = (pVVar2->upVector).z;
      fVar7 = 0.0;
      goto code_?;
    }
    if (value == DrawPlaneAxis__Enum_Z) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar3._0_4_ = (pVVar2->rightVector).x;
      uVar3._4_4_ = (pVVar2->rightVector).y;
      fVar4 = (pVVar2->rightVector).z;
      goto code_?;
    }
  }
  bVar9 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape(this_00,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    this_01 = (this_00->fields)._targetGameObject;
    if ((this_01 != (GameObject *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar10->x;
      fVar7 = pVVar10->y;
      fVar11 = pVVar10->z;
code_?:
      pos.y = fVar7;
      pos.x = fVar4;
      pos.z = fVar11;
      WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos(this_00,pos,(MethodInfo *)0x0);
      WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                (this_00,(MethodInfo *)0x0);
      WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
      (this_00->fields).drawPlaneAxis = value;
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (this_00->fields).mainCamera;
    if ((this_02 != (Camera *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0))
    {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
      uVar12 = pVVar10->x;
      uVar13 = pVVar10->y;
      fVar4 = _UNK_?;
      if (_UNK_? < (float)uVar12) {
        fVar4 = _UNK_?;
      }
      fVar7 = _UNK_?;
      if (_UNK_? < (float)uVar13) {
        fVar7 = _UNK_?;
      }
      fVar11 = _UNK_?;
      if (pVVar10->z <= 0.0) {
        fVar11 = _UNK_?;
      }
      pSVar14 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar14 != (SpawnRoleDataMediator *)0x0) {
        pVVar10 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            ((Vector3 *)&stack0xffffffc8,
                             (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar14->fields).position,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        uVar15 = pVVar10->x;
        uVar16 = pVVar10->y;
        fVar4 = fVar4 + (float)uVar15;
        fVar7 = fVar7 + (float)uVar16;
        fVar11 = fVar11 + pVVar10->z;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

