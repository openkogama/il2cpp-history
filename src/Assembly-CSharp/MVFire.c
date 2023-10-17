
/* Single CalculateDamageModifier() */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageModifier(MVFire *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (this_00 = (pFVar1->fields).fireParticleSystem, this_00 != (ParticleSystem *)0x0)) {
    this = (MVFire *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    fVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                      ((ParticleSystem_MainModule *)&this,(MethodInfo *)0x0);
    if (_UNK_? < fVar2) {
      return fVar2 / _UNK_?;
    }
    return fVar2 / _UNK_?;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single CalculateDamageRadius(Single) */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageRadius
                (MVFire *this,float intensity,MethodInfo *method)

{
  return intensity * _UNK_? * _UNK_?;
}


/* Single CalculateScale(Single) */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateScale
                (MVFire *this,float damageRadius,MethodInfo *method)

{
  return (damageRadius / _UNK_?) * _UNK_?;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVFire::MVFire_Destroy(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_);
    func_?(&MethodInfo__MVFire__OnFireObjectPlaced__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI);
      this_01 = (UnityAction_1_System_ByteEnum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
        UnityAction_1_System_ByteEnum___ctor
                  (this_01,(Object *)this,MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if ((pDVar3 == (Delegate *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
          uStack5 = 3;
          func_?();
          return;
        }
        goto code_?;
      }
    }
code_?:
    func_?();
  }
  else {
    pFVar1 = (this->fields).fireObject;
    if (pFVar1 == (FireObject *)0x0) goto code_?;
    pAVar6 = (pFVar1->fields).OnFireObjectCreated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar6 == (Action *)0x0) {
      (pFVar1->fields).OnFireObjectCreated = (Action *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar6;
    }
    if (pAVar7 != (Action *)0x0) {
      (pFVar1->fields).OnFireObjectCreated = pAVar7;
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVFire::MVFire_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVFire *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  size.y = (float)_UNK_?;
  size.x = (float)_UNK_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  size.z = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            (__return_storage_ptr__,(Vector3)ZEXT812(0),size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVFire::MVFire_Initialize(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_);
    func_?(&MethodInfo__MVFire__OnFireObjectPlaced__);
    func_?(&MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_);
    func_?(&
                    SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 == (FireObject *)0x0) {
code_?:
    func_?();
  }
  else {
    this_00 = (pFVar1->fields).fireCollider;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (this_00 == (Collider *)0x0) goto code_?;
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
                       (IEditModeUI *)0x0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
code_?:
      pFVar1 = (this->fields).fireObject;
      if (pFVar1 != (FireObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pFVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
        MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar2 == MVGameMode__Enum_Edit) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar3 != (PrefabPool *)0x0) {
            pSVar4 = (pPVar3->fields).rangeVisualizationObject;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pSVar4 = (SphereVolumeIndicator *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pSVar4,
                                SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                               );
            (this->fields).rangeVis = pSVar4;
            func_?(&(this->fields).rangeVis,pSVar4);
            pSVar4 = (this->fields).rangeVis;
            if (pSVar4 != (SphereVolumeIndicator *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pSVar4,(MethodInfo *)0x0);
              pFVar1 = (this->fields).fireObject;
              if ((pFVar1 != (FireObject *)0x0) &&
                 (value = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pFVar1,(MethodInfo *)0x0),
                 pTVar5 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar5,value,(MethodInfo *)0x0);
                pSVar4 = (this->fields).rangeVis;
                if (pSVar4 != (SphereVolumeIndicator *)0x0) {
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pSVar4,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  if (pTVar5 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar5,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                               (MethodInfo *)0x0);
                    pSVar4 = (this->fields).rangeVis;
                    if (pSVar4 != (SphereVolumeIndicator *)0x0) {
                      SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                                (pSVar4,(this->fields).damageRadius,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
        else {
code_?:
          MVFire_SetFireToData(this,(MethodInfo *)0x0);
          MVFire_SetFireHitBoxYOffset
                    (this,((this->fields).damageRadius / _UNK_?) * _UNK_? *
                          _UNK_?,(MethodInfo *)0x0);
          this_02 = (Action_2_Int32Enum_Object_ *)func_?();
          if (this_02 != (Action_2_Int32Enum_Object_ *)0x0) {
            mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                      (this_02,(Object *)this,
                       MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
                       (MethodInfo *)0x0);
            pIVar6 = LogicClientsideFactory::
                      LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                                ((MVWorldObject *)this,1,
                                 (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                 (Action_2_LogicInputState_LogicObjectManager_ *)this_02,
                                 (MethodInfo *)0x0);
            (this->fields)._InputSignalReceiver_k__BackingField = pIVar6;
            func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar6);
            pIVar6 = (this->fields)._InputSignalReceiver_k__BackingField;
            if (pIVar6 != (IInputSignalReceiver *)0x0) {
              activeFlag = func_?(1,TypeInfo__IInputSignalReceiver,pIVar6);
              MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
              pFVar1 = (this->fields).fireObject;
              if (pFVar1 != (FireObject *)0x0) {
                pAVar7 = (pFVar1->fields).OnFireObjectCreated;
                this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                if (this_03 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_03,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,
                             (MethodInfo *)0x0);
                  pAVar7 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar7,(Delegate *)this_03,(MethodInfo *)0x0);
                  if (pAVar7 == (Action *)0x0) {
                    (pFVar1->fields).OnFireObjectCreated = (Action *)0x0;
                    func_?();
                    return;
                  }
                  pAVar8 = (Action *)0x0;
                  if (pAVar7->klass == TypeInfo__System__Action) {
                    pAVar8 = pAVar7;
                  }
                  if (pAVar8 != (Action *)0x0) {
                    (pFVar1->fields).OnFireObjectCreated = pAVar8;
                    pAVar8 = (Action *)0x0;
                    if (pAVar7->klass == TypeInfo__System__Action) {
                      pAVar8 = pAVar7;
                    }
                    if (pAVar8 != (Action *)0x0) {
                      func_?();
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
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar9 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar9 == (IEditModeUI *)0x0) goto code_?;
    pDVar10 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar9);
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    if (this_01 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_,
               (MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar10,(Delegate *)this_01,(MethodInfo *)0x0);
    if ((pDVar10 == (Delegate *)0x0) || (iVar11 = func_?(), iVar11 != 0)) {
      func_?();
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVFire::MVFire_InitializeInventory(MVFire *this,MethodInfo *method)

{
  pMVar1 = this;
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar2 = (pMVar1->fields).fireObject;
  if ((pFVar2 != (FireObject *)0x0) &&
     (this_00 = (pFVar2->fields).fireParticleSystem, this_00 != (ParticleSystem *)0x0)) {
    this = (MVFire *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,0,(MethodInfo *)0x0);
    pFVar2 = (pMVar1->fields).fireObject;
    if (pFVar2 != (FireObject *)0x0) {
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pFVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVFire::MVFire_OnDataUpdate(MVFire *this,MethodInfo *method)

{
  MVFire_SetFireToData(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_OnEditModeChange
               (MVFire *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (this_00 = (pFVar1->fields).fireCollider, this_00 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    if (arg.playInEditor == 0) {
      return;
    }
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 != (FireObject *)0x0) && ((pFVar1->fields).fireCollider != (Collider *)0x0)) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnFireObjectPlaced() */

void Assembly-CSharp.dll::MVFire::MVFire_OnFireObjectPlaced(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&MethodInfo__MVFire__OnFireObjectPlaced__);
    func_?(&StringLiteral_is_active_now_after_subscribing);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    pAVar2 = (pFVar1->fields).OnFireObjectCreated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pFVar1->fields).OnFireObjectCreated = (Action *)0x0;
      }
      else {
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) goto code_?;
        (pFVar1->fields).OnFireObjectCreated = pAVar3;
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) goto code_?;
      }
      func_?();
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_is_active_now_after_subscribing,(MethodInfo *)0x0);
      pIVar4 = (this->fields)._InputSignalReceiver_k__BackingField;
      if (pIVar4 != (IInputSignalReceiver *)0x0) {
        activeFlag = func_?(1,TypeInfo__IInputSignalReceiver,pIVar4);
        MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInputStateUpdate(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVFire::MVFire_OnInputStateUpdate
               (MVFire *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    MVFire_ToggleEmitter(this,1,(MethodInfo *)0x0);
    return;
  }
  if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    MVFire_ToggleEmitter(this,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVFire::MVFire_OnUpdate(MVFire *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) &&
     (cVar1 = func_?(), cVar1 != '\0')) {
    pLVar2 = (this->fields).woList;
    if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = (pLVar2->fields)._size;
joined_?:
    iVar4 = iVar4 + -1;
    if (-1 < iVar4) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this_02->fields).woList;
      iStack_5 = iVar4;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iVar4,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
      if (this_03 != (RegexCharClass_SingleRange)0x0) {
        pOVar6 = *(Object_1 **)((int)this_03 + 0x88);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          IStack_7.impulse.x = (float)TypeInfo__UnityEngine__Object;
          IStack_7.damage = (float)&UNK_?;
          func_?();
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          pIStack_9 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                ((MVWorldObjectClient *)this_03,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pIStack_9,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            IStack_7.damage = 3.64338e-44;
            IStack_7.impulse.x = (float)this_03;
            puVar10 = (undefined8 *)func_?();
            uStack_11 = *puVar10;
            iVar4 = func_?();
            IStack_7.damage = *(float *)(iVar4 + 8);
            IStack_7.impulse._0_8_ = (ulonglong)(uint)IStack_7.impulse.y << 0x20;
            fVar12 = (float10)func_?();
            pOVar6 = *(Object_1 **)((int)this_03 + 0x8c);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              (pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              this_01 = *(Collider **)((int)this_03 + 0x8c);
              pVVar13 = (Vector3 *)func_?(auStack_14,0x1a,this_02);
              if (this_01 == (Collider *)0x0) goto code_?;
              pVVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                       Collider_ClosestPointOnBounds(&VStack_15,this_01,*pVVar13,(MethodInfo *)0x0);
              uStack_11._0_4_ = pVVar13->x;
              uStack_11._4_4_ = pVVar13->y;
              puVar16 = (undefined *)pVVar13->z;
              plVar17 = (longlong *)func_?();
              IStack_7.impulse._0_8_ = *plVar17;
              IStack_7.impulse.z = *(float *)(plVar17 + 1);
              IStack_7.interactionType = 0;
              IStack_7.playerKilledByType = 0;
              IStack_7._18_2_ = 0;
              IStack_7.damage = (float)puVar16;
              fVar12 = (float10)func_?();
            }
            this = (MVFire *)(float)fVar12;
            fVar18 = MVFire_CalculateDamageModifier(this_02,(MethodInfo *)0x0);
            uStack_11 = CONCAT44(fVar18,(undefined4)uStack_11);
            fStack_19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                  ((MethodInfo *)0x0);
            this = (MVFire *)
                   ((_UNK_? - (float)this / (this_02->fields).damageRadius) *
                    fStack_19 * (float)_UNK_? * uStack_11._4_4_);
            if ((float)this < 0.0) {
              this = (MVFire *)0x0;
            }
            else if ((float)_UNK_? < (float)this) {
              this = _UNK_?;
            }
            pVVar13 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                     MVWorldObject_get_WorldPosition
                               (aVStack_20,(MVWorldObject *)0x0,in_stack_21);
            in_stack_21 = (MethodInfo *)pVVar13->z;
            pIVar22 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                (&IStack_7,(float)this,*pVVar13,PlayerKilledByType__Enum_Fire,
                                 (MethodInfo *)0x0);
            if (pIStack_9 == (InteractionDataHandlerBase *)0x0) goto code_?;
            InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                      (pIStack_9,*pIVar22,1,(MethodInfo *)0x0);
            iVar4 = iStack_5;
          }
          goto joined_?;
        }
      }
      pLVar2 = (this_02->fields).woList;
      if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar2,iVar4,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_)
      ;
      goto joined_?;
    }
  }
  return;
}


/* Void RenewCullingSize() */

void Assembly-CSharp.dll::MVFire::MVFire_RenewCullingSize(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
    radius = (this->fields).damageRadius;
    pVVar2 = (Vector3 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)();
    position = *pVVar2;
    this_00 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    if (this_00 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (this_00,(Object *)this,(this->klass->vtable).OnStateChanged.method,
                 (MethodInfo *)0x0);
      pCVar1 = (CullingSubscriberBase *)func_?();
      if (pCVar1 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar1,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
                   (MethodInfo *)0x0);
        (this->fields)._.cullingSubscriberBase = pCVar1;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCandleAnimation() */

void Assembly-CSharp.dll::MVFire::MVFire_SetCandleAnimation(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (pPVar2 = (pFVar1->fields).fireParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (pPVar2,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
              ((ParticleSystem_EmissionModule *)&stack0xfffffff4,10.0,(MethodInfo *)0x0);
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 != (FireObject *)0x0) &&
       (pPVar2 = (pFVar1->fields).fireParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,0.4,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,0.5,(MethodInfo *)0x0);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pPVar2 = (pFVar1->fields).fireParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+ShapeModule::
        ParticleSystem_ShapeModule_set_randomDirectionAmount_Injected
                  ((ParticleSystem_ShapeModule *)&stack0xfffffff0,0.0,(MethodInfo *)0x0);
        pFVar1 = (this->fields).fireObject;
        if ((pFVar1 != (FireObject *)0x0) &&
           (pPVar2 = (pFVar1->fields).fireParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
          ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
          this_00 = (AnimationCurve *)func_?();
          if (this_00 != (AnimationCurve *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                      (this_00,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                      (this_00,0.0,0.5,(MethodInfo *)0x0);
            method = (MethodInfo *)0x3f000000;
            this = (MVFire *)0x3f19999a;
            puVar3 = &UNK_?;
            pAVar4 = this_00;
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                      (this_00,0.6,0.5,(MethodInfo *)0x0);
            uVar5._4_4_ = (float)this_00;
            uVar5._0_4_ = (float)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                      (this_00,1.0,0.1,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
            ParticleSystem_MinMaxCurve__ctor_1
                      ((ParticleSystem_MinMaxCurve *)&stack0xffffffd4,1.0,this_00,(MethodInfo *)0x0)
            ;
            fVar6 = (float)pAVar4;
            auVar7._12_4_ = (float)uVar5;
            stack0x00000010 = SUB84(uVar5,4);
            value.m_Mode = (int32_t)puVar3;
            value = (ParticleSystem_MinMaxCurve)CONCAT204(auVar7,value.m_Mode);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+SizeOverLifetimeModule
            ::ParticleSystem_SizeOverLifetimeModule_set_size
                      ((ParticleSystem_SizeOverLifetimeModule *)&stack0xffffffec,value,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetFireHitBoxYOffset(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireHitBoxYOffset
               (MVFire *this,float offset,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (((pFVar1 != (FireObject *)0x0) &&
      (this_00 = (pFVar1->fields).triggerBoxEvents, this_00 != (TriggerBoxEvents *)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    auVar3._4_8_ = 0;
    auVar3._0_4_ = offset;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
              (pTVar2,(Vector3)(auVar3 << 0x20),Space__Enum_World,(MethodInfo *)0x0);
    MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar4 != MVGameMode__Enum_Edit) {
      return;
    }
    this_01 = (this->fields).rangeVis;
    if ((this_01 != (SphereVolumeIndicator *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      auVar5._4_8_ = 0;
      auVar5._0_4_ = offset;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (pTVar2,(Vector3)(auVar5 << 0x20),Space__Enum_Self,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetFireToData() */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireToData(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_C);
    cRam_? = '\x01';
  }
  this_02 = this;
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  PStack_2.m_ParticleSystem = (ParticleSystem *)0x0;
  pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (pDVar3 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
           Object,GUILoginHandler+PlanetData]::
           Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                     (pDVar3,(Object *)StringLiteral_C,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
  if (bVar4 == 0) {
code_?:
    pFVar5 = (this_02->fields).fireObject;
    if ((pFVar5 == (FireObject *)0x0) ||
       (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 == (ParticleSystem *)0x0))
    goto code_?;
    PStack_7.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
    this = (MVFire *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
           ParticleSystem_MainModule_get_startSizeMultiplier_Injected(&PStack_7,(MethodInfo *)0x0);
    MVFire_SetFireHitBoxYOffset
              (this_02,(float)((uint)((((float)this * _UNK_? * _UNK_?) / _UNK_?
                                      ) * _UNK_?) ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              ) * _UNK_?,(MethodInfo *)0x0);
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this_02->fields)._._._.data;
    if (pDVar3 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Object,GUILoginHandler+PlanetData]::
             Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                       (pDVar3,(Object *)StringLiteral_I,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar4 != 0) {
      pFVar5 = (this_02->fields).fireObject;
      if ((pFVar5 == (FireObject *)0x0) ||
         (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 == (ParticleSystem *)0x0))
      goto code_?;
      PStack_2.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
      pDVar8 = (this_02->fields)._._._.data;
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar8,(Object *)StringLiteral_I,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar9 == (Object *)0x0) goto code_?;
      if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar10 = (float *)func_?();
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                (&PStack_2,*pfVar10,(MethodInfo *)0x0);
    }
    pFVar5 = (this_02->fields).fireObject;
    if ((pFVar5 != (FireObject *)0x0) &&
       (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 != (ParticleSystem *)0x0)) {
      PStack_7.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
      this = (MVFire *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
             ParticleSystem_MainModule_get_startSizeMultiplier_Injected(&PStack_7,(MethodInfo *)0x0)
      ;
      (this_02->fields).damageRadius = (float)this * _UNK_? * _UNK_?;
      MVar11 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar11 == MVGameMode__Enum_Edit) {
        this_00 = (this_02->fields).rangeVis;
        if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
        SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                  (this_00,(this_02->fields).damageRadius,(MethodInfo *)0x0);
      }
      PStack_12.m_ParticleSystem =
           (ParticleSystem *)(((this_02->fields).damageRadius / _UNK_?) * _UNK_?);
      MVFire_SetFireHitBoxYOffset
                (this_02,(float)PStack_12.m_ParticleSystem * _UNK_?,(MethodInfo *)0x0);
      pFVar5 = (this_02->fields).fireObject;
      if ((pFVar5 != (FireObject *)0x0) &&
         (pTVar13 = (pFVar5->fields).triggerBoxEvents, pTVar13 != (TriggerBoxEvents *)0x0)) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar13,(MethodInfo *)0x0);
        if (pTVar14 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                    ((Vector3 *)&stack0xffffffcc,pTVar14,(MethodInfo *)0x0);
          pFVar5 = (this_02->fields).fireObject;
          if ((pFVar5 != (FireObject *)0x0) &&
             (pTVar13 = (pFVar5->fields).triggerBoxEvents, pTVar13 != (TriggerBoxEvents *)0x0)) {
            PVar15.m_ParticleSystem = PStack_12.m_ParticleSystem;
            PVar16.m_ParticleSystem = PStack_12.m_ParticleSystem;
            PVar17.m_ParticleSystem = PStack_12.m_ParticleSystem;
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar13,(MethodInfo *)0x0);
            if (pTVar14 != (Transform *)0x0) {
              value_00.y = (float)PVar16.m_ParticleSystem;
              value_00.x = (float)PVar15.m_ParticleSystem;
              value_00.z = (float)PVar17.m_ParticleSystem;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar14,value_00,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              pCVar18 = (this_02->fields)._.cullingSubscriberBase;
              if (pCVar18 != (CullingSubscriberBase *)0x0) {
                CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar18,(MethodInfo *)0x0);
                radius.m_ParticleSystem = (ParticleSystem *)(this_02->fields).damageRadius;
                puVar19 = (undefined8 *)(*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)();
                PVar20.m_ParticleSystem = *(ParticleSystem **)(puVar19 + 1);
                uVar21 = (undefined4)*puVar19;
                uVar22 = (undefined4)((ulonglong)*puVar19 >> 0x20);
                PStack_12.m_ParticleSystem = (ParticleSystem *)func_?();
                if ((UnityAction_1_UnityEngine_Vector2_ *)PStack_12.m_ParticleSystem !=
                    (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::
                  Vector2]::UnityAction_1_UnityEngine_Vector2___ctor
                            ((UnityAction_1_UnityEngine_Vector2_ *)PStack_12.m_ParticleSystem,
                             (Object *)this_02,(this_02->klass->vtable).OnStateChanged.method,
                             (MethodInfo *)0x0);
                  pCVar18 = (CullingSubscriberBase *)func_?();
                  if (pCVar18 != (CullingSubscriberBase *)0x0) {
                    position.y = (float)uVar22;
                    position.x = (float)uVar21;
                    position.z = (float)PVar20.m_ParticleSystem;
                    CullingSubscriberBase::CullingSubscriberBase__ctor_2
                              (pCVar18,(float)radius.m_ParticleSystem,position,
                               (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                               PStack_12.m_ParticleSystem,(MethodInfo *)0x0);
                    (this_02->fields)._.cullingSubscriberBase = pCVar18;
                    func_?();
                    pFVar5 = (this_02->fields).fireObject;
                    if (pFVar5 != (FireObject *)0x0) {
                      this_01 = (pFVar5->fields).audioSource;
                      pAVar23 = (((this_02->fields).fireObject)->fields).soundIntensityScale;
                      if (pAVar23 != (AnimationCurve *)0x0) {
                        fVar24 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate(pAVar23,(float)this,(MethodInfo *)0x0);
                        if (this_01 != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_volume(this_01,fVar24,(MethodInfo *)0x0);
                          if ((float)this < _UNK_?) {
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pFVar5 = (this_02->fields).fireObject;
                            if ((pFVar5 != (FireObject *)0x0) &&
                               (pPVar6 = (pFVar5->fields).fireParticleSystem,
                               pPVar6 != (ParticleSystem *)0x0)) {
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                              ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::
                              ParticleSystem+EmissionModule::
                              ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                                        ((ParticleSystem_EmissionModule *)&stack0xffffffe4,10.0,
                                         (MethodInfo *)0x0);
                              pFVar5 = (this_02->fields).fireObject;
                              if ((pFVar5 != (FireObject *)0x0) &&
                                 (pPVar6 = (pFVar5->fields).fireParticleSystem,
                                 pPVar6 != (ParticleSystem *)0x0)) {
                                this = (MVFire *)
                                       UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                       ParticleSystem::ParticleSystem_get_collision
                                                 (pPVar6,(MethodInfo *)0x0);
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                ParticleSystem+MainModule::
                                ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                                          ((ParticleSystem_MainModule *)&this,0.4,(MethodInfo *)0x0)
                                ;
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                ParticleSystem+MainModule::
                                ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                                          ((ParticleSystem_MainModule *)&this,0.5,(MethodInfo *)0x0)
                                ;
                                pFVar5 = (this_02->fields).fireObject;
                                if ((pFVar5 != (FireObject *)0x0) &&
                                   (pPVar6 = (pFVar5->fields).fireParticleSystem,
                                   pPVar6 != (ParticleSystem *)0x0)) {
                                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem
                                  ::ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
                                  UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                  ParticleSystem+ShapeModule::
                                  ParticleSystem_ShapeModule_set_randomDirectionAmount_Injected
                                            ((ParticleSystem_ShapeModule *)&stack0xffffffe8,0.0,
                                             (MethodInfo *)0x0);
                                  pFVar5 = (this_02->fields).fireObject;
                                  if ((pFVar5 != (FireObject *)0x0) &&
                                     (pPVar6 = (pFVar5->fields).fireParticleSystem,
                                     pPVar6 != (ParticleSystem *)0x0)) {
                                    PStack_12.m_ParticleSystem =
                                         (ParticleSystem *)
                                         UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                         ParticleSystem::ParticleSystem_get_collision
                                                   (pPVar6,(MethodInfo *)0x0);
                                    pAVar23 = (AnimationCurve *)func_?();
                                    if (pAVar23 != (AnimationCurve *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                      AnimationCurve__ctor_1(pAVar23,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                      AnimationCurve_AddKey(pAVar23,0.0,0.5,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                      AnimationCurve_AddKey(pAVar23,0.6,0.5,(MethodInfo *)0x0);
                                      fVar25 = 0.1;
                                      fVar24 = 1.0;
                                      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                      AnimationCurve_AddKey(pAVar23,1.0,0.1,(MethodInfo *)0x0);
                                      this_03 = (ParticleSystem_MinMaxCurve *)&stack0xffffffc0;
                                      pAVar26 = (AnimationCurve *)&UNK_?;
                                      UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                      ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_1
                                                (this_03,1.0,pAVar23,(MethodInfo *)0x0);
                                      value_02.m_CurveMultiplier = fVar25;
                                      value_02.m_Mode = (int32_t)fVar24;
                                      value_02.m_CurveMin = pAVar26;
                                      value_02.m_CurveMax = (AnimationCurve *)this_03;
                                      value_02.m_ConstantMin = fVar24;
                                      value_02.m_ConstantMax = fVar25;
                                      UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                      ParticleSystem+SizeOverLifetimeModule::
                                      ParticleSystem_SizeOverLifetimeModule_set_size
                                                ((ParticleSystem_SizeOverLifetimeModule *)&PStack_12
                                                 ,value_02,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else {
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pFVar5 = (this_02->fields).fireObject;
                            if ((pFVar5 != (FireObject *)0x0) &&
                               (pPVar6 = (pFVar5->fields).fireParticleSystem,
                               pPVar6 != (ParticleSystem *)0x0)) {
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                              ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::
                              ParticleSystem+EmissionModule::
                              ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                                        ((ParticleSystem_EmissionModule *)&stack0xffffffe4,22.0,
                                         (MethodInfo *)0x0);
                              pFVar5 = (this_02->fields).fireObject;
                              if ((pFVar5 != (FireObject *)0x0) &&
                                 (pPVar6 = (pFVar5->fields).fireParticleSystem,
                                 pPVar6 != (ParticleSystem *)0x0)) {
                                this = (MVFire *)
                                       UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                       ParticleSystem::ParticleSystem_get_collision
                                                 (pPVar6,(MethodInfo *)0x0);
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                ParticleSystem+MainModule::
                                ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                                          ((ParticleSystem_MainModule *)&this,0.6,(MethodInfo *)0x0)
                                ;
                                _unity_self = (ParticleSystem_MainModule *)&this;
                                pAVar23 = (AnimationCurve *)0x0;
                                fVar24 = 1.6;
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                ParticleSystem+MainModule::
                                ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                                          (_unity_self,1.6,(MethodInfo *)0x0);
                                pFVar5 = (this_02->fields).fireObject;
                                if ((pFVar5 != (FireObject *)0x0) &&
                                   (pPVar6 = (pFVar5->fields).fireParticleSystem,
                                   pPVar6 != (ParticleSystem *)0x0)) {
                                  pAVar27 = (AnimationCurve *)&UNK_?;
                                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem
                                  ::ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
                                  puVar28 = &UNK_?;
                                  pAVar29 = TypeInfo__UnityEngine__AnimationCurve;
                                  pAVar26 = (AnimationCurve *)func_?();
                                  if (pAVar26 != (AnimationCurve *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                    AnimationCurve__ctor_1(pAVar26,(MethodInfo *)0x0);
                                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                    AnimationCurve_AddKey(pAVar26,0.0,0.4,(MethodInfo *)0x0);
                                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                    AnimationCurve_AddKey(pAVar26,0.6,1.0,(MethodInfo *)0x0);
                                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                    AnimationCurve_AddKey(pAVar26,1.0,0.1,(MethodInfo *)0x0);
                                    UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                    ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_1
                                              ((ParticleSystem_MinMaxCurve *)&stack0xffffffc0,1.0,
                                               pAVar26,(MethodInfo *)0x0);
                                    value.m_CurveMultiplier = fVar24;
                                    value.m_Mode = (int32_t)_unity_self;
                                    value.m_CurveMin = pAVar23;
                                    value.m_CurveMax = pAVar27;
                                    value.m_ConstantMin = (float)puVar28;
                                    value.m_ConstantMax = (float)pAVar29;
                                    UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                    ParticleSystem+SizeOverLifetimeModule::
                                    ParticleSystem_SizeOverLifetimeModule_set_size
                                              ((ParticleSystem_SizeOverLifetimeModule *)
                                               &stack0xffffffe8,value,(MethodInfo *)0x0);
                                    pFVar5 = (this_02->fields).fireObject;
                                    if ((pFVar5 != (FireObject *)0x0) &&
                                       (pPVar6 = (pFVar5->fields).fireParticleSystem,
                                       pPVar6 != (ParticleSystem *)0x0)) {
                                      PStack_12.m_ParticleSystem =
                                           (ParticleSystem *)
                                           UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                           ParticleSystem::ParticleSystem_get_collision
                                                     (pPVar6,(MethodInfo *)0x0);
                                      UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                      ParticleSystem+ShapeModule::
                                      ParticleSystem_ShapeModule_set_randomDirectionAmount_Injected
                                                (&PStack_12,1.0,(MethodInfo *)0x0);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pDVar8 = (this_02->fields)._._._.data;
    if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    PStack_12.m_ParticleSystem =
         (ParticleSystem *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__get_Item
                   (pDVar8,(Object *)StringLiteral_C,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    this = (MVFire *)TypeInfo__System__Single;
    if ((UnityAction_1_UnityEngine_Vector2_ *)PStack_12.m_ParticleSystem ==
        (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      iVar30 = 0;
code_?:
      pFVar5 = (this_02->fields).fireObject;
      if ((pFVar5 == (FireObject *)0x0) ||
         (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 == (ParticleSystem *)0x0))
      goto code_?;
      PStack_1.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
      if (iVar30 == 0) goto code_?;
      if (((*(int *)(iVar30 + 0xc) != 0) && (1 < *(uint *)(iVar30 + 0xc))) &&
         (2 < *(uint *)(iVar30 + 0xc))) {
        color.g = (float)*(undefined4 *)(iVar30 + 0x14);
        color.r = (float)*(undefined4 *)(iVar30 + 0x10);
        color.b = (float)*(undefined4 *)(iVar30 + 0x18);
        color.a = 1.0;
        pPVar31 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient_op_Implicit
                            ((ParticleSystem_MinMaxGradient *)&stack0xffffffac,color,
                             (MethodInfo *)0x0);
        uVar32 = (pPVar31->m_ColorMax).b;
        uVar33 = pPVar31->m_Mode;
        uVar34 = pPVar31->m_GradientMin;
        uVar35 = pPVar31->m_GradientMax;
        uVar36 = (pPVar31->m_ColorMin).r;
        uVar37 = (pPVar31->m_ColorMin).g;
        uVar38 = (pPVar31->m_ColorMin).b;
        uVar39 = (pPVar31->m_ColorMin).a;
        value_01.m_ColorMin.a = (float)uVar39;
        value_01.m_ColorMin.b = (float)uVar38;
        value_01.m_ColorMin.g = (float)uVar37;
        value_01.m_ColorMin.r = (float)uVar36;
        uVar40 = (pPVar31->m_ColorMax).r;
        uVar41 = (pPVar31->m_ColorMax).g;
        value_01.m_ColorMax.g = (float)uVar41;
        value_01.m_ColorMax.r = (float)uVar40;
        value_01.m_GradientMax = (Gradient *)uVar35;
        value_01.m_GradientMin = (Gradient *)uVar34;
        value_01.m_Mode = uVar33;
        value_01.m_ColorMax.b = (float)uVar32;
        value_01.m_ColorMax.a = (pPVar31->m_ColorMax).a;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor(&PStack_1,value_01,(MethodInfo *)0x0);
        goto code_?;
      }
      func_?();
    }
    else {
      iVar30 = func_?();
      if (iVar30 != 0) goto code_?;
    }
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
  return;
}


/* Void SetOriginalAnimation() */

void Assembly-CSharp.dll::MVFire::MVFire_SetOriginalAnimation(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pFVar2 = (this->fields).fireObject;
  if ((pFVar2 != (FireObject *)0x0) &&
     (pPVar3 = (pFVar2->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
    PStack_4.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
              (&PStack_4,22.0,(MethodInfo *)0x0);
    pFVar2 = (this->fields).fireObject;
    if ((pFVar2 != (FireObject *)0x0) &&
       (pPVar3 = (pFVar2->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
      _unity_self = (AnimationCurve *)&stack0xfffffff8;
      pAVar5 = (AnimationCurve *)0x3f19999a;
      puVar6 = &UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                ((ParticleSystem_MainModule *)_unity_self,0.6,(MethodInfo *)0x0);
      uVar7._4_4_ = (float)&stack0xfffffff8;
      uVar7._0_4_ = (float)&UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,1.6,(MethodInfo *)0x0);
      pFVar2 = (this->fields).fireObject;
      if ((pFVar2 != (FireObject *)0x0) &&
         (pPVar3 = (pFVar2->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
        PStack_4.m_ParticleSystem = (ParticleSystem *)&UNK_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
        this_00 = (AnimationCurve *)func_?();
        if (this_00 != (AnimationCurve *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                    (this_00,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                    (this_00,0.0,0.4,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                    (this_00,0.6,1.0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                    (this_00,1.0,0.1,(MethodInfo *)0x0);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
          ParticleSystem_MinMaxCurve__ctor_1
                    ((ParticleSystem_MinMaxCurve *)&puStack_1,1.0,this_00,(MethodInfo *)0x0);
          value.m_CurveMultiplier = (float)puVar6;
          value.m_Mode = (int32_t)puStack_1;
          value.m_CurveMin = _unity_self;
          value.m_CurveMax = pAVar5;
          value.m_ConstantMin = (float)uVar7;
          value.m_ConstantMax = SUB84(uVar7,4);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+SizeOverLifetimeModule::
          ParticleSystem_SizeOverLifetimeModule_set_size
                    ((ParticleSystem_SizeOverLifetimeModule *)&stack0xfffffff0,value,
                     (MethodInfo *)0x0);
          pFVar2 = (this->fields).fireObject;
          if ((pFVar2 != (FireObject *)0x0) &&
             (pPVar3 = (pFVar2->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+ShapeModule::
            ParticleSystem_ShapeModule_set_randomDirectionAmount_Injected
                      ((ParticleSystem_ShapeModule *)&stack0xffffffec,1.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ToggleEmitter(Boolean) */

void Assembly-CSharp.dll::MVFire::MVFire_ToggleEmitter
               (MVFire *this,bool activeFlag,MethodInfo *method)

{
  pMVar1 = this;
  pFVar2 = (this->fields).fireObject;
  if ((pFVar2 != (FireObject *)0x0) &&
     (this_00 = (pFVar2->fields).fireParticleSystem, this_00 != (ParticleSystem *)0x0)) {
    this = (MVFire *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,(bool)_activeFlag,(MethodInfo *)0x0);
    pFVar2 = (pMVar1->fields).fireObject;
    if (activeFlag == 0) {
      if ((pFVar2 != (FireObject *)0x0) &&
         (pMVar3 = (MVFire *)(pFVar2->fields).audioSource, pMVar3 != (MVFire *)0x0)) {
        _activeFlag = (undefined *)0x0;
        this = pMVar3;
        bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          ((AudioSource *)pMVar3,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return;
        }
        pFVar2 = (pMVar1->fields).fireObject;
        if ((pFVar2 != (FireObject *)0x0) &&
           (pMVar5 = (MethodInfo *)(pFVar2->fields).audioSource, pMVar5 != (MethodInfo *)0x0)) {
          _activeFlag = &UNK_?;
          method = pMVar5;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    ((AudioSource *)pMVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pFVar2 != (FireObject *)0x0) &&
            (pMVar3 = (MVFire *)(pFVar2->fields).audioSource, pMVar3 != (MVFire *)0x0)) {
      _activeFlag = (undefined *)0x0;
      this = pMVar3;
      bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        ((AudioSource *)pMVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pFVar2 = (pMVar1->fields).fireObject;
        if ((pFVar2 == (FireObject *)0x0) ||
           (pMVar5 = (MethodInfo *)(pFVar2->fields).audioSource, pMVar5 == (MethodInfo *)0x0))
        goto code_?;
        _activeFlag = &UNK_?;
        method = pMVar5;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  ((AudioSource *)pMVar5,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void TriggerAreaEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaEnter
               (MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woList;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TriggerAreaExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaExit
               (MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).woList;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    item = (RegexCharClass_SingleRange)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (this_00,item,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateDamageRadius(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateDamageRadius
               (MVFire *this,float intensity,MethodInfo *method)

{
  (this->fields).damageRadius = intensity * _UNK_? * _UNK_?;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    this_00 = (this->fields).rangeVis;
    if (this_00 == (SphereVolumeIndicator *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
              (this_00,(this->fields).damageRadius,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateScale(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateScale(MVFire *this,float scale,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
        uVar4 = 0;
        fVar5 = scale;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          value.y = scale;
          value.x = (float)uVar4;
          value.z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateSoundVolume(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateSoundVolume
               (MVFire *this,float intensity,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    this_00 = (pFVar1->fields).soundIntensityScale;
    this_01 = (pFVar1->fields).audioSource;
    if (this_00 != (AnimationCurve *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_00,intensity,(MethodInfo *)0x0);
      if (this_01 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVFire(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVFire::MVFire__ctor
               (MVFire *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__FireObject);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_);
    func_?(&MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_);
    cRam_? = '\x01';
  }
  this_00 = (FireObject__Class *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  if (this_00 != (FireObject__Class *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    (this->fields).woList = (List_1_MVWorldObjectClient_ *)this_00;
    func_?(&(this->fields).woList,this_00);
    (this->fields).damageRadius = 2.5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)this,data,(pPVar1->fields).mvFirePrefab,worldObjects,
                 (MethodInfo *)0x0);
      uVar2 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
      pFVar3 = (FireObject *)(this->fields)._._.component;
      *(uint *)&(this->fields)._._.interactionFlags =
           (uint)(this->fields)._._.interactionFlags | 0x18000;
      *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar2;
      this_00 = TypeInfo__FireObject;
      if (pFVar3 == (FireObject *)0x0) {
        (this->fields).fireObject = (FireObject *)0x0;
      }
      else {
        if (((((ObjectPrefab__Class *)pFVar3->klass)->_1).typeHierarchyDepth <
             (TypeInfo__FireObject->_1).typeHierarchyDepth) ||
           ((((ObjectPrefab__Class *)pFVar3->klass)->_1).typeHierarchy
            [(TypeInfo__FireObject->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__FireObject)) goto code_?;
        (this->fields).fireObject = pFVar3;
        this_00 = TypeInfo__FireObject;
        if (((((ObjectPrefab__Class *)pFVar3->klass)->_1).typeHierarchyDepth <
             (TypeInfo__FireObject->_1).typeHierarchyDepth) ||
           ((((ObjectPrefab__Class *)pFVar3->klass)->_1).typeHierarchy
            [(TypeInfo__FireObject->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__FireObject)) goto code_?;
      }
      func_?(&(this->fields).fireObject,pFVar3);
      pFVar3 = (this->fields).fireObject;
      if (pFVar3 != (FireObject *)0x0) {
        this_00 = (FireObject__Class *)(pFVar3->fields).audioSource;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                          (-0.2,0.2,(MethodInfo *)0x0);
        if (this_00 != (FireObject__Class *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    ((AudioSource *)this_00,fVar4 + _UNK_?,(MethodInfo *)0x0);
          pFVar3 = (this->fields).fireObject;
          if (pFVar3 != (FireObject *)0x0) {
            pTVar5 = (pFVar3->fields).triggerBoxEvents;
            this_00 = (FireObject__Class *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            if (this_00 != (FireObject__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                         MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_,
                         (MethodInfo *)0x0);
              if (pTVar5 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                          (pTVar5,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
                pFVar3 = (this->fields).fireObject;
                if (pFVar3 != (FireObject *)0x0) {
                  pTVar5 = (pFVar3->fields).triggerBoxEvents;
                  this_00 = (FireObject__Class *)
                            func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                  if (this_00 != (FireObject__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)this,
                               MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pTVar5 != (TriggerBoxEvents *)0x0) {
                      TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                (pTVar5,(EventHandler_1_TriggerEventArgs_ *)this_00,
                                 (MethodInfo *)0x0);
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
  }
  func_?();
  pFVar3 = extraout_EDX;
code_?:
  func_?(pFVar3,this_00);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVFire::MVFire_get_DocumentationType(MVFire *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Fire;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVFire::MVFire_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVFire *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

