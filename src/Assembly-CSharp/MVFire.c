
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
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
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
code_?:
    func_?();
  }
  else {
    pFVar1 = (this->fields).fireObject;
    if (pFVar1 == (FireObject *)0x0) goto code_?;
    pAVar6 = (pFVar1->fields).OnFireObjectCreated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
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
  (__return_storage_ptr__->m_Center).x = 0.0;
  uVar1 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = (float)uVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar1;
  (__return_storage_ptr__->m_Extents).z = 0.5;
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
  if (pFVar1 != (FireObject *)0x0) {
    this_00 = (pFVar1->fields).fireCollider;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (this_00 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_00,TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField
                         == (IEditModeUI *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
        pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
        this_01 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__System__Action<EditModeChangeArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDVar3 != (Delegate *)0x0) {
          iVar4 = func_?();
          if (iVar4 == 0) goto code_?;
        }
        func_?();
      }
      pFVar1 = (this->fields).fireObject;
      if (pFVar1 != (FireObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pFVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
        MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar5 != MVGameMode__Enum_Edit) {
          MVFire_SetFireToData(this,(MethodInfo *)0x0);
          MVFire_SetFireHitBoxYOffset
                    (this,((this->fields).damageRadius / _UNK_?) * _UNK_? *
                          _UNK_?,(MethodInfo *)0x0);
          this_02 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
          Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
                     (MethodInfo *)0x0);
          pSVar6 = (SphereVolumeIndicator *)
                   LogicClientsideFactory::
                   LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                             ((MVWorldObject *)this,1,
                              (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                              (Action_2_LogicInputState_LogicObjectManager_ *)this_02,
                              (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = (IInputSignalReceiver *)pSVar6;
          ppSVar7 = (SphereVolumeIndicator **)&(this->fields)._InputSignalReceiver_k__BackingField;
          puVar8 = &UNK_?;
code_?:
          func_?(ppSVar7,&stack0xfffffffc,puVar8,ppSVar7,pSVar6);
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar9 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar9 != (PrefabPool *)0x0) {
          pSVar6 = (pPVar9->fields).rangeVisualizationObject;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pSVar6 = (SphereVolumeIndicator *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pSVar6,
                              SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                             );
          (this->fields).rangeVis = pSVar6;
          ppSVar7 = &(this->fields).rangeVis;
          puVar8 = &UNK_?;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_is_active_now_after_subscribing,(MethodInfo *)0x0);
    pIVar4 = (this->fields)._InputSignalReceiver_k__BackingField;
    if (pIVar4 != (IInputSignalReceiver *)0x0) {
      activeFlag = func_?(1,TypeInfo__IInputSignalReceiver,pIVar4);
      MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
      return;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
            IStack_7.damage = 3.50325e-44;
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
              pVVar13 = (Vector3 *)func_?(auStack_14,0x19,this_02);
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
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
    radius = (this->fields).damageRadius;
    pVVar2 = (Vector3 *)
             (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffe4,this,(this->klass->vtable).set_WorldPosition.methodPtr);
    position = *pVVar2;
    this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_00,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
               (MethodInfo *)0x0);
    pCVar1 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar1,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = pCVar1;
    func_?();
    return;
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
          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                    (this_00,(MethodInfo *)0x0);
          if (this_00 != (AnimationCurve *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                      (this_00,0.0,0.5,(MethodInfo *)0x0);
            fVar3 = 0.5;
            iVar4 = 0x3f19999a;
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                      (this_00,0.6,0.5,(MethodInfo *)0x0);
            uVar5._0_4_ = 1.0;
            uVar5._4_4_ = 0.1;
            pAVar6 = (AnimationCurve *)&UNK_?;
            pAVar7 = this_00;
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                      (this_00,1.0,0.1,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
            ParticleSystem_MinMaxCurve__ctor_1
                      ((ParticleSystem_MinMaxCurve *)&stack0xffffffd4,1.0,this_00,(MethodInfo *)0x0)
            ;
            fVar8 = fVar3;
            iVar9 = iVar4;
            uVar10 = CONCAT44(fVar8,iVar9);
            pAVar11 = pAVar6;
            auVar12 = CONCAT48(pAVar11,uVar10);
            this = (MVFire *)(float)uVar5;
            method = (MethodInfo *)SUB84(uVar5,4);
            pAVar13 = pAVar7;
            value = (ParticleSystem_MinMaxCurve)CONCAT1212(auVar14,auVar12);
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_I);
    func_?(&StringLiteral_C);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  PStack_2.m_ParticleSystem = (ParticleSystem *)0x0;
  PStack_3.m_ParticleSystem = (ParticleSystem *)0x0;
  pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
  goto code_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                     (pDVar4,(Object *)StringLiteral_C,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
  if (bVar5 == 0) {
code_?:
    pFVar6 = (pMVar1->fields).fireObject;
    if ((pFVar6 == (FireObject *)0x0) ||
       (pPVar7 = (pFVar6->fields).fireParticleSystem, pPVar7 == (ParticleSystem *)0x0))
    goto code_?;
    PStack_8.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
    fVar9 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
             ParticleSystem_MainModule_get_startSizeMultiplier_Injected(&PStack_8,(MethodInfo *)0x0)
    ;
    MVFire_SetFireHitBoxYOffset
              (pMVar1,(float)((uint)(((fVar9 * _UNK_? * _UNK_?) / _UNK_?) *
                                     _UNK_?) ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              ) * _UNK_?,(MethodInfo *)0x0);
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pMVar1->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                       (pDVar4,(Object *)StringLiteral_I,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar5 != 0) {
      pFVar6 = (pMVar1->fields).fireObject;
      if ((pFVar6 == (FireObject *)0x0) ||
         (pPVar7 = (pFVar6->fields).fireParticleSystem, pPVar7 == (ParticleSystem *)0x0))
      goto code_?;
      PStack_3.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar1->fields)._._._.data;
      if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (pDVar4,(Object *)StringLiteral_I,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar11 = CONCAT44(TypeInfo__System__Single,TVar10.m_Index);
      if (TVar10.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar12 = (float *)func_?();
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                (&PStack_3,*pfVar12,(MethodInfo *)0x0);
    }
    pFVar6 = (pMVar1->fields).fireObject;
    if ((pFVar6 != (FireObject *)0x0) &&
       (pPVar7 = (pFVar6->fields).fireParticleSystem, pPVar7 != (ParticleSystem *)0x0)) {
      PStack_8.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
      PStack_13.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
           ParticleSystem_MainModule_get_startSizeMultiplier_Injected(&PStack_8,(MethodInfo *)0x0);
      (pMVar1->fields).damageRadius =
           (float)PStack_13.m_ParticleSystem * _UNK_? * _UNK_?;
      MVar14 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar14 == MVGameMode__Enum_Edit) {
        this_00 = (pMVar1->fields).rangeVis;
        if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
        SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                  (this_00,(pMVar1->fields).damageRadius,(MethodInfo *)0x0);
      }
      PVar15.m_ParticleSystem =
           (ParticleSystem *)(((pMVar1->fields).damageRadius / _UNK_?) * _UNK_?);
      MVFire_SetFireHitBoxYOffset
                (pMVar1,(float)PVar15.m_ParticleSystem * _UNK_?,(MethodInfo *)0x0);
      pFVar6 = (pMVar1->fields).fireObject;
      if ((pFVar6 != (FireObject *)0x0) &&
         (pTVar16 = (pFVar6->fields).triggerBoxEvents, pTVar16 != (TriggerBoxEvents *)0x0)) {
        pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar16,(MethodInfo *)0x0);
        if (pTVar17 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                    ((Vector3 *)&stack0xffffffcc,pTVar17,(MethodInfo *)0x0);
          pFVar6 = (pMVar1->fields).fireObject;
          if ((pFVar6 != (FireObject *)0x0) &&
             (pTVar16 = (pFVar6->fields).triggerBoxEvents, pTVar16 != (TriggerBoxEvents *)0x0)) {
            PVar18.m_ParticleSystem = PVar15.m_ParticleSystem;
            PVar19.m_ParticleSystem = PVar15.m_ParticleSystem;
            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar16,(MethodInfo *)0x0);
            if (pTVar17 != (Transform *)0x0) {
              value_00.y = (float)PVar18.m_ParticleSystem;
              value_00.x = (float)PVar15.m_ParticleSystem;
              value_00.z = (float)PVar19.m_ParticleSystem;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar17,value_00,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__CullingSubscriberBase);
                func_?(&
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                               );
                cRam_? = '\x01';
              }
              pCVar20 = (pMVar1->fields)._.cullingSubscriberBase;
              if (pCVar20 != (CullingSubscriberBase *)0x0) {
                CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar20,(MethodInfo *)0x0);
                radius.m_ParticleSystem = (ParticleSystem *)(pMVar1->fields).damageRadius;
                puVar21 = (undefined8 *)
                          (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                                    (&stack0xffffffcc,pMVar1,
                                     (pMVar1->klass->vtable).set_WorldPosition.methodPtr);
                PVar15.m_ParticleSystem = *(ParticleSystem **)(puVar21 + 1);
                uVar22 = (undefined4)*puVar21;
                uVar23 = (undefined4)((ulonglong)*puVar21 >> 0x20);
                this_02 = (UnityAction_1_UnityEngine_Vector2_ *)
                          func_?(
                                         TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                         );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]
                ::UnityAction_1_UnityEngine_Vector2___ctor
                          (this_02,(Object *)pMVar1,
                           (pMVar1->klass->vtable).UpdateControllerUpdate_1.methodPtr,
                           (MethodInfo *)0x0);
                pCVar20 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
                position.y = (float)uVar23;
                position.x = (float)uVar22;
                position.z = (float)PVar15.m_ParticleSystem;
                CullingSubscriberBase::CullingSubscriberBase__ctor_2
                          (pCVar20,(float)radius.m_ParticleSystem,position,
                           (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,(MethodInfo *)0x0
                          );
                pMVar1 = this;
                (this->fields)._.cullingSubscriberBase = pCVar20;
                func_?();
                pFVar6 = (pMVar1->fields).fireObject;
                if (pFVar6 != (FireObject *)0x0) {
                  this_01 = (pFVar6->fields).audioSource;
                  pAVar24 = (((pMVar1->fields).fireObject)->fields).soundIntensityScale;
                  if (pAVar24 != (AnimationCurve *)0x0) {
                    this = (MVFire *)
                           UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     (pAVar24,(float)PStack_13.m_ParticleSystem,(MethodInfo *)0x0);
                    if (this_01 != (AudioSource *)0x0) {
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                                (this_01,(float)this,(MethodInfo *)0x0);
                      if ((float)PStack_13.m_ParticleSystem < _UNK_?) {
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__UnityEngine__AnimationCurve);
                          cRam_? = '\x01';
                        }
                        pFVar6 = (pMVar1->fields).fireObject;
                        if ((pFVar6 != (FireObject *)0x0) &&
                           (pPVar7 = (pFVar6->fields).fireParticleSystem,
                           pPVar7 != (ParticleSystem *)0x0)) {
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                          ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+EmissionModule::
                          ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                                    ((ParticleSystem_EmissionModule *)&stack0xffffffe4,10.0,
                                     (MethodInfo *)0x0);
                          pFVar6 = (pMVar1->fields).fireObject;
                          if ((pFVar6 != (FireObject *)0x0) &&
                             (pPVar7 = (pFVar6->fields).fireParticleSystem,
                             pPVar7 != (ParticleSystem *)0x0)) {
                            this = (MVFire *)
                                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem
                                   ::ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
                            UnityEngine.ParticleSystemModule.dll::UnityEngine::
                            ParticleSystem+MainModule::
                            ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                                      ((ParticleSystem_MainModule *)&this,0.4,(MethodInfo *)0x0);
                            UnityEngine.ParticleSystemModule.dll::UnityEngine::
                            ParticleSystem+MainModule::
                            ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                                      ((ParticleSystem_MainModule *)&this,0.5,(MethodInfo *)0x0);
                            pFVar6 = (pMVar1->fields).fireObject;
                            if ((pFVar6 != (FireObject *)0x0) &&
                               (pPVar7 = (pFVar6->fields).fireParticleSystem,
                               pPVar7 != (ParticleSystem *)0x0)) {
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                              ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::
                              ParticleSystem+ShapeModule::
                              ParticleSystem_ShapeModule_set_randomDirectionAmount_Injected
                                        ((ParticleSystem_ShapeModule *)&stack0xffffffe8,0.0,
                                         (MethodInfo *)0x0);
                              pFVar6 = (pMVar1->fields).fireObject;
                              if ((pFVar6 != (FireObject *)0x0) &&
                                 (pPVar7 = (pFVar6->fields).fireParticleSystem,
                                 pPVar7 != (ParticleSystem *)0x0)) {
                                PStack_13.m_ParticleSystem =
                                     (ParticleSystem *)
                                     UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                     ParticleSystem::ParticleSystem_get_collision
                                               (pPVar7,(MethodInfo *)0x0);
                                pAVar24 = (AnimationCurve *)func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                AnimationCurve__ctor_1(pAVar24,(MethodInfo *)0x0);
                                if (pAVar24 != (AnimationCurve *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                  AnimationCurve_AddKey(pAVar24,0.0,0.5,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                  AnimationCurve_AddKey(pAVar24,0.6,0.5,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                  AnimationCurve_AddKey(pAVar24,1.0,0.1,(MethodInfo *)0x0);
                                  this_03 = (ParticleSystem_MinMaxCurve *)&stack0xffffffc0;
                                  pAVar25 = (AnimationCurve *)0x3f800000;
                                  puVar26 = &UNK_?;
                                  UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                  ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_1
                                            (this_03,1.0,pAVar24,(MethodInfo *)0x0);
                                  value_02.m_CurveMultiplier = (float)this_03;
                                  value_02.m_Mode = (int32_t)puVar26;
                                  value_02.m_CurveMin = pAVar25;
                                  value_02.m_CurveMax = pAVar24;
                                  value_02.m_ConstantMin = (float)pAVar25;
                                  value_02.m_ConstantMax = (float)pAVar24;
                                  UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                  ParticleSystem+SizeOverLifetimeModule::
                                  ParticleSystem_SizeOverLifetimeModule_set_size
                                            ((ParticleSystem_SizeOverLifetimeModule *)&PStack_13,
                                             value_02,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__UnityEngine__AnimationCurve);
                          cRam_? = '\x01';
                        }
                        pFVar6 = (pMVar1->fields).fireObject;
                        if ((pFVar6 != (FireObject *)0x0) &&
                           (pPVar7 = (pFVar6->fields).fireParticleSystem,
                           pPVar7 != (ParticleSystem *)0x0)) {
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                          ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+EmissionModule::
                          ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                                    ((ParticleSystem_EmissionModule *)&stack0xffffffe4,22.0,
                                     (MethodInfo *)0x0);
                          pFVar6 = (pMVar1->fields).fireObject;
                          if ((pFVar6 != (FireObject *)0x0) &&
                             (pPVar7 = (pFVar6->fields).fireParticleSystem,
                             pPVar7 != (ParticleSystem *)0x0)) {
                            this = (MVFire *)
                                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem
                                   ::ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
                            UnityEngine.ParticleSystemModule.dll::UnityEngine::
                            ParticleSystem+MainModule::
                            ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                                      ((ParticleSystem_MainModule *)&this,0.6,(MethodInfo *)0x0);
                            _unity_self = (ParticleSystem_MainModule *)&this;
                            pAVar24 = (AnimationCurve *)0x0;
                            fVar9 = 1.6;
                            UnityEngine.ParticleSystemModule.dll::UnityEngine::
                            ParticleSystem+MainModule::
                            ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                                      (_unity_self,1.6,(MethodInfo *)0x0);
                            pFVar6 = (pMVar1->fields).fireObject;
                            if ((pFVar6 != (FireObject *)0x0) &&
                               (pPVar7 = (pFVar6->fields).fireParticleSystem,
                               pPVar7 != (ParticleSystem *)0x0)) {
                              pAVar27 = (AnimationCurve *)&UNK_?;
                              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                              ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
                              puVar26 = &UNK_?;
                              pAVar28 = TypeInfo__UnityEngine__AnimationCurve;
                              pAVar25 = (AnimationCurve *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                              AnimationCurve__ctor_1(pAVar25,(MethodInfo *)0x0);
                              if (pAVar25 != (AnimationCurve *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                AnimationCurve_AddKey(pAVar25,0.0,0.4,(MethodInfo *)0x0);
                                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                AnimationCurve_AddKey(pAVar25,0.6,1.0,(MethodInfo *)0x0);
                                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                AnimationCurve_AddKey(pAVar25,1.0,0.1,(MethodInfo *)0x0);
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_1
                                          ((ParticleSystem_MinMaxCurve *)&stack0xffffffc0,1.0,
                                           pAVar25,(MethodInfo *)0x0);
                                value.m_CurveMultiplier = fVar9;
                                value.m_Mode = (int32_t)_unity_self;
                                value.m_CurveMin = pAVar24;
                                value.m_CurveMax = pAVar27;
                                value.m_ConstantMin = (float)puVar26;
                                value.m_ConstantMax = (float)pAVar28;
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                ParticleSystem+SizeOverLifetimeModule::
                                ParticleSystem_SizeOverLifetimeModule_set_size
                                          ((ParticleSystem_SizeOverLifetimeModule *)&stack0xffffffe8
                                           ,value,(MethodInfo *)0x0);
                                pFVar6 = (pMVar1->fields).fireObject;
                                if ((pFVar6 != (FireObject *)0x0) &&
                                   (pPVar7 = (pFVar6->fields).fireParticleSystem,
                                   pPVar7 != (ParticleSystem *)0x0)) {
                                  PStack_13.m_ParticleSystem =
                                       (ParticleSystem *)
                                       UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                       ParticleSystem::ParticleSystem_get_collision
                                                 (pPVar7,(MethodInfo *)0x0);
                                  UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                  ParticleSystem+ShapeModule::
                                  ParticleSystem_ShapeModule_set_randomDirectionAmount_Injected
                                            (&PStack_13,1.0,(MethodInfo *)0x0);
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
  else {
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pMVar1->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar4,(Object *)StringLiteral_C,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    PStack_13.m_ParticleSystem = (ParticleSystem *)TypeInfo__System__Single;
    if (TVar10.m_Index == 0) {
      iVar29 = 0;
code_?:
      pFVar6 = (pMVar1->fields).fireObject;
      if ((pFVar6 == (FireObject *)0x0) ||
         (pPVar7 = (pFVar6->fields).fireParticleSystem, pPVar7 == (ParticleSystem *)0x0))
      goto code_?;
      PStack_2.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar7,(MethodInfo *)0x0);
      if (iVar29 == 0) goto code_?;
      if (((*(int *)(iVar29 + 0xc) != 0) && (1 < *(uint *)(iVar29 + 0xc))) &&
         (2 < *(uint *)(iVar29 + 0xc))) {
        color.g = (float)*(undefined4 *)(iVar29 + 0x14);
        color.r = (float)*(undefined4 *)(iVar29 + 0x10);
        color.b = (float)*(undefined4 *)(iVar29 + 0x18);
        color.a = 1.0;
        pPVar30 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient_op_Implicit
                            ((ParticleSystem_MinMaxGradient *)&stack0xffffffac,color,
                             (MethodInfo *)0x0);
        uVar31 = (pPVar30->m_ColorMax).b;
        uVar32 = pPVar30->m_Mode;
        uVar33 = pPVar30->m_GradientMin;
        uVar34 = pPVar30->m_GradientMax;
        uVar35 = (pPVar30->m_ColorMin).r;
        uVar36 = (pPVar30->m_ColorMin).g;
        uVar37 = (pPVar30->m_ColorMin).b;
        uVar38 = (pPVar30->m_ColorMin).a;
        value_01.m_ColorMin.a = (float)uVar38;
        value_01.m_ColorMin.b = (float)uVar37;
        value_01.m_ColorMin.g = (float)uVar36;
        value_01.m_ColorMin.r = (float)uVar35;
        uVar39 = (pPVar30->m_ColorMax).r;
        uVar40 = (pPVar30->m_ColorMax).g;
        value_01.m_ColorMax.g = (float)uVar40;
        value_01.m_ColorMax.r = (float)uVar39;
        value_01.m_GradientMax = (Gradient *)uVar34;
        value_01.m_GradientMin = (Gradient *)uVar33;
        value_01.m_Mode = uVar32;
        value_01.m_ColorMax.b = (float)uVar31;
        value_01.m_ColorMax.a = (pPVar30->m_ColorMax).a;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor(&PStack_2,value_01,(MethodInfo *)0x0);
        goto code_?;
      }
      func_?();
    }
    else {
      iVar29 = func_?();
      if (iVar29 != 0) goto code_?;
    }
    uVar11 = func_?(TVar10.m_Index,PStack_13.m_ParticleSystem);
code_?:
    func_?(uVar11);
  }
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
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
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                  (this_00,(MethodInfo *)0x0);
        if (this_00 != (AnimationCurve *)0x0) {
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
    item = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_;
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      piVar2 = &(this_00->fields)._version;
      *piVar2 = *piVar2 + 1;
      pMVar3 = (this_00->fields)._items;
      if (pMVar3 != (MVWorldObjectClient__Array *)0x0) {
        uVar4 = (this_00->fields)._size;
        if (pMVar3->max_length <= uVar4) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_00,(Object *)item,
                     pMVar1->klass->rgctx_data[0xe].method);
          return;
        }
        (this_00->fields)._size = uVar4 + 1;
        if (uVar4 < pMVar3->max_length) {
          pMVar3->vector[uVar4] = item;
          func_?(pMVar3->vector + uVar4);
          return;
        }
        goto code_?;
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
  this_00 = (this->fields).woList;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)item,
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
  this_01 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).woList = this_01;
  func_?(&(this->fields).woList,this_01);
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
    if (pFVar3 == (FireObject *)0x0) {
      (this->fields).fireObject = (FireObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pFVar3->klass)->_1).naturalAligment <
           (TypeInfo__FireObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pFVar3->klass)->_1).typeHierarchy
          [(TypeInfo__FireObject->_1).naturalAligment - 1] != (Il2CppClass *)TypeInfo__FireObject))
      goto code_?;
      (this->fields).fireObject = pFVar3;
      if (((((ObjectPrefab__Class *)pFVar3->klass)->_1).naturalAligment <
           (TypeInfo__FireObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pFVar3->klass)->_1).typeHierarchy
          [(TypeInfo__FireObject->_1).naturalAligment - 1] != (Il2CppClass *)TypeInfo__FireObject))
      goto code_?;
    }
    func_?();
    pFVar3 = (this->fields).fireObject;
    if (pFVar3 != (FireObject *)0x0) {
      this_00 = (pFVar3->fields).audioSource;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                        (-0.2,0.2,(MethodInfo *)0x0);
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (this_00,fVar4 + _UNK_?,(MethodInfo *)0x0);
        pFVar3 = (this->fields).fireObject;
        if (pFVar3 != (FireObject *)0x0) {
          pTVar5 = (pFVar3->fields).triggerBoxEvents;
          pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_,
                     (MethodInfo *)0x0);
          if (pTVar5 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
            pFVar3 = (this->fields).fireObject;
            if (pFVar3 != (FireObject *)0x0) {
              pTVar5 = (pFVar3->fields).triggerBoxEvents;
              pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar6,(Object *)this,
                         MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_,
                         (MethodInfo *)0x0);
              if (pTVar5 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                          (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
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

