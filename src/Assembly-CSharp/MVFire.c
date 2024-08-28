
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
      goto code_?;
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
          ppSVar7 = (SphereVolumeIndicator **)&(this->fields)._InputSignalReceiver_k__BackingField;
          *ppSVar7 = pSVar6;
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
          ppSVar7 = &(this->fields).rangeVis;
          *ppSVar7 = pSVar6;
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
  if (pFVar1 == (FireObject *)0x0) {
code_?:
    func_?();
  }
  else {
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
code_?:
      func_?();
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_is_active_now_after_subscribing,(MethodInfo *)0x0);
      pIVar3 = (this->fields)._InputSignalReceiver_k__BackingField;
      if (pIVar3 != (IInputSignalReceiver *)0x0) {
        activeFlag = func_?(1,TypeInfo__IInputSignalReceiver,pIVar3);
        MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 == (Action *)0x0) goto code_?;
    (pFVar1->fields).OnFireObjectCreated = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 != (Action *)0x0) goto code_?;
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
  ppCVar1 = &(this->fields)._.cullingSubscriberBase;
  pCVar2 = *ppCVar1;
  if (pCVar2 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar2,(MethodInfo *)0x0);
    radius = (this->fields).damageRadius;
    pVVar3 = (Vector3 *)
             (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffe4,this,(this->klass->vtable).set_WorldPosition.methodPtr);
    position = *pVVar3;
    this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_00,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
               (MethodInfo *)0x0);
    pCVar2 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar2,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    *ppCVar1 = pCVar2;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  PStack_2.m_ParticleSystem = (ParticleSystem *)0x0;
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                       (pDVar3,(Object *)StringLiteral_C,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar4 == 0) {
code_?:
      pFVar5 = (this->fields).fireObject;
      if ((pFVar5 != (FireObject *)0x0) &&
         (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 != (ParticleSystem *)0x0)) {
        PStack_7.m_ParticleSystem =
             (ParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
        fStack_8 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
                    ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                              (&PStack_7,(MethodInfo *)0x0);
        MVFire_SetFireHitBoxYOffset
                  (this,(float)((uint)(((fStack_8 * _UNK_? * _UNK_?) / _UNK_?)
                                      * _UNK_?) ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               ) * _UNK_?,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._.data;
        if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (pDVar3,(Object *)StringLiteral_I,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar4 == 0) {
code_?:
            pFVar5 = (this->fields).fireObject;
            if ((pFVar5 != (FireObject *)0x0) &&
               (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 != (ParticleSystem *)0x0)) {
              PStack_7.m_ParticleSystem =
                   (ParticleSystem *)
                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                   ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
              pSStack_9 = (Single__Array__Class *)
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+MainModule::
                          ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                                    (&PStack_7,(MethodInfo *)0x0);
              (this->fields).damageRadius = (float)pSStack_9 * _UNK_? * _UNK_?;
              MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar10 == MVGameMode__Enum_Edit) {
                this_00 = (this->fields).rangeVis;
                if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
                SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                          (this_00,(this->fields).damageRadius,(MethodInfo *)0x0);
              }
              fStack_8 = ((this->fields).damageRadius / _UNK_?) * _UNK_?;
              MVFire_SetFireHitBoxYOffset(this,fStack_8 * _UNK_?,(MethodInfo *)0x0);
              pFVar5 = (this->fields).fireObject;
              if ((pFVar5 != (FireObject *)0x0) &&
                 (pTVar11 = (pFVar5->fields).triggerBoxEvents, pTVar11 != (TriggerBoxEvents *)0x0)) {
                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pTVar11,(MethodInfo *)0x0);
                if (pTVar12 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            (&VStack_13,pTVar12,(MethodInfo *)0x0);
                  pFVar5 = (this->fields).fireObject;
                  VStack_13.x = fStack_8;
                  VStack_13.y = fStack_8;
                  VStack_13.z = fStack_8;
                  if ((pFVar5 != (FireObject *)0x0) &&
                     (pTVar11 = (pFVar5->fields).triggerBoxEvents, pTVar11 != (TriggerBoxEvents *)0x0)
                     ) {
                    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pTVar11,(MethodInfo *)0x0);
                    if (pTVar12 != (Transform *)0x0) {
                      value.y = VStack_13.y;
                      value.x = VStack_13.x;
                      value.z = VStack_13.z;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar12,value,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__CullingSubscriberBase);
                        func_?(&
                                        TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                       );
                        cRam_? = '\x01';
                      }
                      ppCStack_14 = &(this->fields)._.cullingSubscriberBase;
                      if (*ppCStack_14 != (CullingSubscriberBase *)0x0) {
                        CullingSubscriberBase::CullingSubscriberBase_Destroy
                                  (*ppCStack_14,(MethodInfo *)0x0);
                        fStack_15 = (this->fields).damageRadius;
                        puVar16 = (undefined8 *)
                                  (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                                            (&iStack_17,this,
                                             (this->klass->vtable).set_WorldPosition.methodPtr);
                        fStack_8 = *(float *)(puVar16 + 1);
                        VStack_13.y = (float)*puVar16;
                        VStack_13.z = (float)((ulonglong)*puVar16 >> 0x20);
                        this_03 = (UnityAction_1_UnityEngine_Vector2_ *)
                                  func_?(
                                                 TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                                 );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::
                        Vector2]::UnityAction_1_UnityEngine_Vector2___ctor
                                  (this_03,(Object *)this,
                                   (this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
                                   (MethodInfo *)0x0);
                        this_04 = (CullingSubscriberBase *)
                                  func_?(TypeInfo__CullingSubscriberBase);
                        position.y = VStack_13.z;
                        position.x = VStack_13.y;
                        position.z = fStack_8;
                        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                  (this_04,fStack_15,position,
                                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_03,
                                   (MethodInfo *)0x0);
                        *ppCStack_14 = this_04;
                        func_?();
                        pFVar5 = (this->fields).fireObject;
                        if (pFVar5 != (FireObject *)0x0) {
                          this_01 = (pFVar5->fields).audioSource;
                          this_02 = (pFVar5->fields).soundIntensityScale;
                          if (this_02 != (AnimationCurve *)0x0) {
                            value_01 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                       AnimationCurve_Evaluate
                                                 (this_02,(float)pSStack_9,(MethodInfo *)0x0);
                            if (this_01 != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_volume(this_01,value_01,(MethodInfo *)0x0);
                              if (_UNK_? <= (float)pSStack_9) {
                                MVFire_SetOriginalAnimation(this,(MethodInfo *)0x0);
                                return;
                              }
                              MVFire_SetCandleAnimation(this,(MethodInfo *)0x0);
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
          else {
            pFVar5 = (this->fields).fireObject;
            if ((pFVar5 != (FireObject *)0x0) &&
               (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 != (ParticleSystem *)0x0)) {
              PStack_2.m_ParticleSystem =
                   (ParticleSystem *)
                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                   ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
              pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this->fields)._._._.data;
              if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                TVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (pDVar3,(Object *)StringLiteral_I,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar19 = CONCAT44(TypeInfo__System__Single,TVar18.m_Index);
                if (TVar18.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar18.m_Index + 0x20) !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  iStack_17 = TVar18.m_Index;
                  pfVar20 = (float *)func_?();
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
                  ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                            (&PStack_2,*pfVar20,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    fStack_8 = (float)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (pDVar3,(Object *)StringLiteral_C,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
    pSStack_9 = TypeInfo__System__Single;
    if (fStack_8 == 0.0) {
      iVar21 = 0;
code_?:
      pFVar5 = (this->fields).fireObject;
      if ((pFVar5 == (FireObject *)0x0) ||
         (pPVar6 = (pFVar5->fields).fireParticleSystem, pPVar6 == (ParticleSystem *)0x0))
      goto code_?;
      PStack_1.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar6,(MethodInfo *)0x0);
      if (iVar21 == 0) goto code_?;
      uVar22 = *(uint *)(iVar21 + 0xc);
      if (((uVar22 != 0) && (1 < uVar22)) && (2 < uVar22)) {
        uStack_23 = *(undefined4 *)(iVar21 + 0x18);
        uStack_24 = 0x3f800000;
        color.g = (float)*(int32_t *)(iVar21 + 0x14);
        color.r = (float)*(undefined4 *)(iVar21 + 0x10);
        color.b = (float)uStack_23;
        color.a = 1.0;
        iStack_17 = *(int32_t *)(iVar21 + 0x14);
        pPVar25 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient_op_Implicit
                            ((ParticleSystem_MinMaxGradient *)&stack0xffffff98,color,
                             (MethodInfo *)0x0);
        uVar26 = (pPVar25->m_ColorMax).b;
        uVar27 = pPVar25->m_Mode;
        uVar28 = pPVar25->m_GradientMin;
        uVar29 = pPVar25->m_GradientMax;
        uVar30 = (pPVar25->m_ColorMin).r;
        uVar31 = (pPVar25->m_ColorMin).g;
        uVar32 = (pPVar25->m_ColorMin).b;
        uVar33 = (pPVar25->m_ColorMin).a;
        value_00.m_ColorMin.a = (float)uVar33;
        value_00.m_ColorMin.b = (float)uVar32;
        value_00.m_ColorMin.g = (float)uVar31;
        value_00.m_ColorMin.r = (float)uVar30;
        uVar34 = (pPVar25->m_ColorMax).r;
        uVar35 = (pPVar25->m_ColorMax).g;
        value_00.m_ColorMax.g = (float)uVar35;
        value_00.m_ColorMax.r = (float)uVar34;
        value_00.m_GradientMax = (Gradient *)uVar29;
        value_00.m_GradientMin = (Gradient *)uVar28;
        value_00.m_Mode = uVar27;
        value_00.m_ColorMax.b = (float)uVar26;
        value_00.m_ColorMax.a = (pPVar25->m_ColorMax).a;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor(&PStack_1,value_00,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    iVar21 = func_?();
    if (iVar21 != 0) goto code_?;
  }
  uVar19 = func_?(fStack_8,pSStack_9);
code_?:
  func_?(uVar19);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
                ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
        puVar4 = &UNK_?;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          value.y = (float)puVar4;
          value.x = scale;
          value.z = (float)pTVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSoundVolume(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateSoundVolume
               (MVFire *this,float intensity,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    this_00 = (pFVar1->fields).audioSource;
    this_01 = (pFVar1->fields).soundIntensityScale;
    if (this_01 != (AnimationCurve *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,intensity,(MethodInfo *)0x0);
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,value,(MethodInfo *)0x0);
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
  ppLVar1 = &(this->fields).woList;
  *ppLVar1 = this_01;
  func_?(ppLVar1,this_01);
  (this->fields).damageRadius = 2.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
code_?:
    func_?();
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar2->fields).mvFirePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    pFVar4 = (FireObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pFVar4 == (FireObject *)0x0) {
      (this->fields).fireObject = (FireObject *)0x0;
code_?:
      ppFVar5 = &(this->fields).fireObject;
      func_?();
      if (*ppFVar5 != (FireObject *)0x0) {
        this_00 = ((*ppFVar5)->fields).audioSource;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                           (-0.2,0.2,(MethodInfo *)0x0);
        if (this_00 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (this_00,fVar6 + _UNK_?,(MethodInfo *)0x0);
          if (*ppFVar5 != (FireObject *)0x0) {
            pTVar7 = ((*ppFVar5)->fields).triggerBoxEvents;
            pEVar8 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar8,(Object *)this,
                       MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_,
                       (MethodInfo *)0x0);
            if (pTVar7 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
              if (*ppFVar5 != (FireObject *)0x0) {
                pTVar7 = ((*ppFVar5)->fields).triggerBoxEvents;
                pEVar8 = (EventHandler_1_Object_ *)
                         func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          (pEVar8,(Object *)this,
                           MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_,
                           (MethodInfo *)0x0);
                if (pTVar7 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar9 = (TypeInfo__FireObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pFVar4->klass)->_1).naturalAligment < bVar9) ||
       ((((ObjectPrefab__Class *)pFVar4->klass)->_1).typeHierarchy[bVar9 - 1] !=
        (Il2CppClass *)TypeInfo__FireObject)) goto code_?;
    (this->fields).fireObject = pFVar4;
    bVar9 = (TypeInfo__FireObject->_1).naturalAligment;
    if ((bVar9 <= (((ObjectPrefab__Class *)pFVar4->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pFVar4->klass)->_1).typeHierarchy[bVar9 - 1] ==
        (Il2CppClass *)TypeInfo__FireObject)) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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

