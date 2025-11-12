
/* Boolean DoAddLink() */

bool Assembly-CSharp.dll::ESAddLink::ESAddLink_DoAddLink(ESAddLink *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    bVar3 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddLink
                      (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
    return bVar3 != 0;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Enter
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state_started_with_multi_selecti);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Should_not_happen___links_can_on);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ESAddLink_enter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_ESAddLink_enter,(MethodInfo *)0x0);
  if (esm != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar2 != (PrefabPool *)0x0) &&
       (pMVar3 = (pPVar2->fields).logicCubeConnectorRedMaterial, pMVar3 != (Material *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::
              Material_GetFirstPropertyNameIdByAttribute
                        (pMVar3,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
      if (iVar4 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__Material);
        }
        iVar4 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
      }
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                          (&CStack_6,pMVar3,iVar4,(MethodInfo *)0x0);
      fVar7 = pCVar5->g;
      fVar8 = pCVar5->b;
      fVar9 = pCVar5->a;
      bVar10 = cRam_? == '\0';
      (this->fields).originalRedConnectorColor.r = pCVar5->r;
      (this->fields).originalRedConnectorColor.g = fVar7;
      (this->fields).originalRedConnectorColor.b = fVar8;
      (this->fields).originalRedConnectorColor.a = fVar9;
      if (bVar10) {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar2 != (PrefabPool *)0x0) &&
         (pMVar3 = (pPVar2->fields).logicCubeConnectorBlueMaterial, pMVar3 != (Material *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Material);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                Material_GetFirstPropertyNameIdByAttribute
                          (pMVar3,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
        if (iVar4 < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__Material);
          }
          iVar4 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
        }
        pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                            (&CStack_6,pMVar3,iVar4,(MethodInfo *)0x0);
        fVar7 = pCVar5->g;
        fVar8 = pCVar5->b;
        fVar9 = pCVar5->a;
        (this->fields).originalBlueConnectorColor.r = pCVar5->r;
        (this->fields).originalBlueConnectorColor.g = fVar7;
        (this->fields).originalBlueConnectorColor.b = fVar8;
        (this->fields).originalBlueConnectorColor.a = fVar9;
        if (pMVar1 == (MVWorldObjectClient *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_state_started_with_multi_selecti,(MethodInfo *)0x0);
code_?:
          FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
          return;
        }
        pLVar11 = (Link *)FUN_?(TypeInfo__MV__WorldObject__Link);
        bVar10 = iRam_? != 0;
        (pLVar11->fields).id = -1;
        (pLVar11->fields).outputWOID = -1;
        (pLVar11->fields).inputWOID = -1;
        (this->fields).tempLink = pLVar11;
        if (bVar10) {
          uVar12 = (uint)((ulonglong)&(this->fields).tempLink >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar14 == *puVar15;
            if (bVar10) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if ((pMVar1->fields).selectedConnector == 1) {
          pLVar11 = (this->fields).tempLink;
          pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                              (esm,(MethodInfo *)0x0);
          cVar17 = cRam_?;
          if ((pMVar16 == (MVWorldObjectClient *)0x0) || (pLVar11 == (Link *)0x0))
          goto code_?;
          (pLVar11->fields).inputWOID = (pMVar16->fields)._.id;
          if (cVar17 == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cVar17 = '\x01';
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          bVar10 = iRam_? != 0;
          (this->fields).materialToPulse = (pPVar2->fields).logicCubeConnectorBlueMaterial;
          if (bVar10) {
            uVar12 = (uint)((ulonglong)&(this->fields).materialToPulse >> 0xc);
            uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar14 == *puVar15;
              if (bVar10) {
                *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
              cVar17 = cRam_?;
            } while (!bVar10);
          }
          if (cVar17 == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = (pPVar2->fields).logicCubeConnectorBlueMaterial;
        }
        else {
          if ((pMVar1->fields).selectedConnector != 2) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Should_not_happen___links_can_on,(MethodInfo *)0x0);
            goto code_?;
          }
          pLVar11 = (this->fields).tempLink;
          pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                              (esm,(MethodInfo *)0x0);
          if ((pMVar16 == (MVWorldObjectClient *)0x0) || (pLVar11 == (Link *)0x0))
          goto code_?;
          (pLVar11->fields).outputWOID = (pMVar16->fields)._.id;
          lVar18 = FUN_?();
          if (lVar18 == 0) goto code_?;
          (this->fields).materialToPulse = *(Material **)(lVar18 + 0x4a8);
          func_?(&(this->fields).materialToPulse);
          lVar18 = FUN_?();
          if (lVar18 == 0) goto code_?;
          pMVar3 = *(Material **)(lVar18 + 0x4a8);
        }
        if (pMVar3 != (Material *)0x0) {
          pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              (&CStack_6,pMVar3,(MethodInfo *)0x0);
          CStack_6.r = pCVar5->r;
          fVar7 = pCVar5->g;
          CStack_6.b = pCVar5->b;
          fVar8 = pCVar5->a;
          (this->fields).startColor.r = CStack_6.r;
          (this->fields).startColor.g = 0.6;
          (this->fields).startColor.b = CStack_6.b;
          (this->fields).startColor.a = 1.0;
          CStack_6.g = 0.6;
          CStack_6.a = 1.0;
          (this->fields).endColor.r = CStack_6.r;
          (this->fields).endColor.g = fVar7;
          (this->fields).endColor.b = CStack_6.b;
          (this->fields).endColor.a = fVar8;
          pMVar19 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((pMVar19 != (MainCameraManager *)0x0) &&
             (this_00 = (pMVar19->fields).lineDrawManager, this_00 != (LineDrawManager *)0x0)) {
            pLVar11 = (this->fields).tempLink;
            LineDrawManager::LineDrawManager_SetTempLink(this_00,pLVar11,(MethodInfo *)0x0);
            (*(pMVar1->klass->vtable).HighlightConnector.methodPtr)
                      (pMVar1,CONCAT71((int7)((ulonglong)pLVar11 >> 8),1));
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 != (MVWorldObjectClientManager *)0x0) {
              pWVar20 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (this_01,(pMVar1->fields)._.id,(MethodInfo *)0x0);
              bVar10 = iRam_? == 0;
              (this->fields).woRef = pWVar20;
              if (bVar10) {
                return;
              }
              uVar12 = (uint)((ulonglong)&(this->fields).woRef >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar14 == *puVar15;
                if (bVar10) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Execute
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).woRef;
  if ((pWVar2 == (WorldObjectClientRef *)0x0) ||
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                     (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
  if (pOVar4 == (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__EditorEvent);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (esm != (EditorStateMachine *)0x0) {
      bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)esm,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(esm,(MethodInfo *)0x0);
      }
      auStackX_8[0] = 0x2f;
      pOVar4 = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
      FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,pOVar4,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  ESAddLink_PulseColor(this,(MethodInfo *)0x0);
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
  bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  VStack_6.interactionFlags = 0;
  VStack_6.point.x = 0.0;
  VStack_6.point.y = 0.0;
  VStack_6.point.z = 0.0;
  VStack_6.normal.x = 0.0;
  VStack_6.normal.y = 0.0;
  VStack_6.normal.z = 0.0;
  VStack_6.cubePos.x = 0;
  VStack_6.cubePos.y = 0;
  VStack_6.cubePos.z = 0;
  VStack_6._30_2_ = 0;
  VStack_6.face = 0;
  VStack_6.isCubeHit = 0;
  VStack_6._37_3_ = 0;
  VStack_6.woId = 0;
  VStack_6._44_4_ = 0;
  VStack_6.cube = (Cube *)0x0;
  VStack_6.distance = 0.0;
  VStack_6._60_4_ = 0;
  VStack_6.collider = (Collider *)0x0;
  VStack_6.transform = (Transform *)0x0;
  bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    (&VStack_6,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if ((bVar5 == 0) || (VStack_6.woId == -1)) goto code_?;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar3,VStack_6.woId,(MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
  if ((esm == (EditorStateMachine *)0x0) ||
     (pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0),
     pMVar7 == (MVWorldObjectClient *)0x0)) goto code_?;
  iVar8 = (pMVar7->fields).selectedConnector;
  cVar9 = (*(this_00->klass->vtable).get_HasInputConnector.methodPtr)
                    (this_00,(this_00->klass->vtable).get_HasInputConnector.method);
  if ((cVar9 == '\0') || (iVar8 != 2)) {
code_?:
    cVar9 = (*(this_00->klass->vtable).get_HasOutputConnector.methodPtr)
                      (this_00,(this_00->klass->vtable).get_HasOutputConnector.method);
    if ((cVar9 == '\0') || (iVar8 != 1)) goto code_?;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_10.x = 0.0;
    VStack_10.y = 0.0;
    VStack_10.z = 0.0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(&VStack_10);
    if (cRam_? == '\0') {
      FUN_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar9 = (*(this_00->klass->vtable).get_HasOutputConnector.methodPtr)(this_00);
    pMVar1 = 
    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
    ;
    if (cVar9 == '\0') goto code_?;
    pGVar13 = (this_00->fields).outputConnectorObject;
    if (pGVar13 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar14 = (Collider *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar13,0,((pMVar1->field7_0x38).rgctx_data)->method);
    VStack_15.z = VStack_10.z;
    VStack_15.x = VStack_10.x;
    VStack_15.y = VStack_10.y;
    bVar5 = MVWorldObjectClient::MVWorldObjectClient_DoesScreenPointHitCollider
                      (this_00,&VStack_15,pCVar14,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    pLVar16 = (this->fields).tempLink;
    if (pLVar16 == (Link *)0x0) goto code_?;
    (pLVar16->fields).outputWOID = VStack_6.woId;
  }
  else {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_10.x = 0.0;
    VStack_10.y = 0.0;
    VStack_10.z = 0.0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(&VStack_10);
    if (cRam_? == '\0') {
      FUN_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar9 = (*(this_00->klass->vtable).get_HasInputConnector.methodPtr)(this_00);
    pMVar1 = 
    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
    ;
    if (cVar9 == '\0') goto code_?;
    pGVar13 = (this_00->fields).inputConnectorObject;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar14 = (Collider *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar13,0,((pMVar1->field7_0x38).rgctx_data)->method);
    VStack_15.z = VStack_10.z;
    VStack_15.x = VStack_10.x;
    VStack_15.y = VStack_10.y;
    bVar5 = MVWorldObjectClient::MVWorldObjectClient_DoesScreenPointHitCollider
                      (this_00,&VStack_15,pCVar14,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    pLVar16 = (this->fields).tempLink;
    if (pLVar16 == (Link *)0x0) goto code_?;
    (pLVar16->fields).inputWOID = VStack_6.woId;
  }
  ESAddLink_DoAddLink(this,(MethodInfo *)0x0);
code_?:
  ESAddLink_LeaveAddLinkAndDeSelectAll(this,esm,(MethodInfo *)0x0);
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Exit
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).woRef;
  if (pWVar2 != (WorldObjectClientRef *)0x0) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                         (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
      pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
      if (pOVar4 != (Object *)0x0) {
        pWVar2 = (this->fields).woRef;
        if (pWVar2 == (WorldObjectClientRef *)0x0) goto code_?;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
        if (pOVar4 == (Object *)0x0) goto code_?;
        (**(code **)&pOVar4->klass[3]._1.element_size)();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar5 != (MainCameraManager *)0x0) &&
         (this_00 = (pMVar5->fields).lineDrawManager, this_00 != (LineDrawManager *)0x0)) {
        LineDrawManager::LineDrawManager_SetTempLink(this_00,(Link *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar6 != (PrefabPool *)0x0) &&
           (pMVar7 = (pPVar6->fields).logicCubeConnectorRedMaterial, pMVar7 != (Material *)0x0)) {
          CStack_8.r = (this->fields).originalRedConnectorColor.r;
          CStack_8.g = (this->fields).originalRedConnectorColor.g;
          CStack_8.b = (this->fields).originalRedConnectorColor.b;
          CStack_8.a = (this->fields).originalRedConnectorColor.a;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar7,&CStack_8,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar6 != (PrefabPool *)0x0) &&
             (pMVar7 = (pPVar6->fields).logicCubeConnectorBlueMaterial, pMVar7 != (Material *)0x0))
          {
            CStack_8.r = (this->fields).originalBlueConnectorColor.r;
            CStack_8.g = (this->fields).originalBlueConnectorColor.g;
            CStack_8.b = (this->fields).originalBlueConnectorColor.b;
            CStack_8.a = (this->fields).originalBlueConnectorColor.a;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (pMVar7,&CStack_8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void LeaveAddLink(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_LeaveAddLink
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (esm == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)esm,(MethodInfo *)0x0);
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(esm,(MethodInfo *)0x0);
  }
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((esm->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (esm->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(esm->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (esm->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(esm->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (esm->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((esm->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (esm->fields)._.stateName = pSVar3;
      func_?(&(esm->fields)._.stateName);
      (esm->fields)._.currentState = pIVar10;
      func_?(&(esm->fields)._.currentState);
      (esm->fields)._.nextEvent = (Object *)0x0;
      func_?(&(esm->fields)._.nextEvent);
      (esm->fields)._.prevEvent = (esm->fields)._.curEvent;
      func_?(&esm->fields);
      (esm->fields)._.curEvent = evt;
      func_?(&(esm->fields)._.curEvent);
      if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(esm->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((esm->fields)._.clearStack == 0) {
      (esm->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (esm->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void LeaveAddLinkAndDeSelectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_LeaveAddLinkAndDeSelectAll
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (esm == (EditorStateMachine *)0x0) {
code_?:
    FUN_?(this);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = (esm->fields).selectionController;
  this = (ESAddLink *)0x0;
  if (this_02 == (SelectionController *)0x0) goto code_?;
  SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)esm,(MethodInfo *)0x0);
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(esm,(MethodInfo *)0x0);
  }
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((esm->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (esm->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(esm->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (esm->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(esm->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (esm->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((esm->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (esm->fields)._.stateName = pSVar3;
      func_?(&(esm->fields)._.stateName);
      (esm->fields)._.currentState = pIVar10;
      func_?(&(esm->fields)._.currentState);
      (esm->fields)._.nextEvent = (Object *)0x0;
      func_?(&(esm->fields)._.nextEvent);
      (esm->fields)._.prevEvent = (esm->fields)._.curEvent;
      func_?(&esm->fields);
      (esm->fields)._.curEvent = evt;
      func_?(&(esm->fields)._.curEvent);
      if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(esm->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((esm->fields)._.clearStack == 0) {
      (esm->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (esm->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void PulseColor() */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_PulseColor(ESAddLink *this,MethodInfo *method)

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
  fVar4 = _UNK_?;
  fVar3 = (fVar3 - (this->fields).lastColorChangeTime) / (this->fields).FadeDuration;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  this_00 = (this->fields).materialToPulse;
  fVar5 = (this->fields).startColor.r;
  fVar6 = (this->fields).startColor.g;
  fVar7 = (this->fields).startColor.b;
  fVar8 = (this->fields).startColor.a;
  fVar9 = 0.0;
  if ((0.0 <= fVar3) && (fVar9 = _UNK_?, fVar3 <= _UNK_?)) {
    fVar9 = fVar3;
  }
  aCStack_10[0].g = ((this->fields).endColor.g - fVar6) * fVar9 + fVar6;
  aCStack_10[0].r = ((this->fields).endColor.r - fVar5) * fVar9 + fVar5;
  aCStack_10[0].a = ((this->fields).endColor.a - fVar8) * fVar9 + fVar8;
  aCStack_10[0].b = ((this->fields).endColor.b - fVar7) * fVar9 + fVar7;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,aCStack_10,(MethodInfo *)0x0);
    if (fVar3 == fVar4) {
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
      fVar7 = (float)(*pcRam_?)();
      fVar4 = (this->fields).startColor.r;
      fVar3 = (this->fields).startColor.g;
      fVar5 = (this->fields).startColor.b;
      fVar6 = (this->fields).startColor.a;
      (this->fields).lastColorChangeTime = fVar7;
      fVar7 = (this->fields).endColor.r;
      fVar8 = (this->fields).endColor.g;
      fVar9 = (this->fields).endColor.b;
      fVar11 = (this->fields).endColor.a;
      (this->fields).endColor.r = fVar4;
      (this->fields).endColor.g = fVar3;
      (this->fields).endColor.b = fVar5;
      (this->fields).endColor.a = fVar6;
      (this->fields).startColor.r = fVar7;
      (this->fields).startColor.g = fVar8;
      (this->fields).startColor.b = fVar9;
      (this->fields).startColor.a = fVar11;
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESAddLink() */

void Assembly-CSharp.dll::ESAddLink::ESAddLink__ctor(ESAddLink *this,MethodInfo *method)

{
  (this->fields).FadeDuration = 0.7;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.logger = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

