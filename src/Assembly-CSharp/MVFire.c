
/* Single CalculateDamageModifier() */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageModifier(MVFire *this,MethodInfo *method)

{
  this_00 = (this->fields).fireObject;
  if (this_00 != (FireObject *)0x0) {
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)System.Core.dll::System::Linq::
                 Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                 JsonSchemaType]::
                 Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                           ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                             *)this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (this_01,(MethodInfo *)0x0);
      fVar1 = (float10)func_?();
      fVar2 = (float)fVar1;
      if (_UNK_? < fVar2) {
        return fVar2 / _UNK_?;
      }
      return fVar2 / _UNK_?;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar1 = (float10)(*pcVar3)();
  return (float)fVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 == (IEditModeUI *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 != (IEditModeUI *)0x0) {
      source = (Delegate *)func_?(2,TypeInfo__IEditModeUI);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_,
                 MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         (source,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
code_?:
        func_?(3,TypeInfo__IEditModeUI,pIVar3);
        return;
      }
      pAVar6 = (Action *)0x0;
      if ((Action_1_EditModeChangeArgs___Class *)pAVar5->klass ==
          TypeInfo__System__Action<EditModeChangeArgs>) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    pFVar1 = (this->fields).fireObject;
    if (pFVar1 != (FireObject *)0x0) {
      pAVar6 = (pFVar1->fields).OnFireObjectCreated;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pAVar6 = (Action *)0x0;
      if (pAVar5 != (Action *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
      }
      (pFVar1->fields).OnFireObjectCreated = pAVar6;
      goto code_?;
    }
  }
  func_?();
  pAVar5 = extraout_ECX;
code_?:
  func_?(pAVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVFire::MVFire_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVFire *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  uStack_3 = 0;
  uStack_4 = 0;
  func_?(&uStack_4,0x3f800000,0x3f800000,0x3f800000,0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__,uStack_2,uStack_1,uStack_4,uStack_3,0);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVFire::MVFire_Initialize(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)(this->fields).fireObject;
  if (this_00 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
    this_01 = (Collider *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (this_01 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_01,pIVar1 == (IEditModeUI *)0x0,(MethodInfo *)0x0);
      pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar1 != (IEditModeUI *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar1 == (IEditModeUI *)0x0) goto code_?;
        pDVar2 = (Delegate *)func_?();
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_,
                   MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        if (pDVar2 != (Delegate *)0x0) {
          pDVar4 = (Delegate *)0x0;
          if ((Action_1_EditModeChangeArgs___Class *)pDVar2->klass ==
              TypeInfo__System__Action<EditModeChangeArgs>) {
            pDVar4 = pDVar2;
          }
          if (pDVar4 == (Delegate *)0x0) goto code_?;
        }
        func_?();
      }
      pFVar5 = (this->fields).fireObject;
      if (pFVar5 != (FireObject *)0x0) {
        lodGameObject =
             (GameObject *)
             System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)pFVar5,(MethodInfo *)0x0);
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar6 == MVGameMode__Enum_Edit) {
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?();
          }
          this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (this_02 != (PrefabPool *)0x0) {
            pSVar7 = PrefabPool::PrefabPool_get_RangeVisualizationObject(this_02,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar7 = (SphereVolumeIndicator *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)pSVar7,
                                SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                               );
            (this->fields).rangeVis = pSVar7;
            if (pSVar7 != (SphereVolumeIndicator *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pSVar7,(MethodInfo *)0x0);
              pFVar5 = (this->fields).fireObject;
              if ((pFVar5 != (FireObject *)0x0) &&
                 (value = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pFVar5,(MethodInfo *)0x0),
                 pTVar8 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar8,value,(MethodInfo *)0x0);
                pSVar7 = (this->fields).rangeVis;
                if (pSVar7 != (SphereVolumeIndicator *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)pSVar7,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar8,*pVVar9,(MethodInfo *)0x0);
                    pSVar7 = (this->fields).rangeVis;
                    if (pSVar7 != (SphereVolumeIndicator *)0x0) {
                      SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                                (pSVar7,(this->fields).damageRadius,(MethodInfo *)0x0);
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
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
                     MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                    );
          pIVar10 = LogicClientsideFactory::
                    LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                              ((MVWorldObject *)this,1,
                               (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                               (Action_2_LogicInputState_LogicObjectManager_ *)pUVar3,
                               (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar10;
          if (pIVar10 != (IInputSignalReceiver *)0x0) {
            activeFlag = func_?();
            MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
            pFVar5 = (this->fields).fireObject;
            if (pFVar5 != (FireObject *)0x0) {
              a = (pFVar5->fields).OnFireObjectCreated;
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,
                         (MethodInfo *)0x0);
              pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
              if (pDVar2 == (Delegate *)0x0) {
                pDRam0000002c = (Delegate *)0x0;
                return;
              }
              pDVar4 = (Delegate *)0x0;
              if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
                pDVar4 = pDVar2;
              }
              if (pDVar4 != (Delegate *)0x0) {
                pDRam0000002c = pDVar4;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVFire::MVFire_InitializeInventory(MVFire *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)System.Core.dll::System::Linq::
                 Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                 JsonSchemaType]::
                 Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                           ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                             *)pFVar1,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (this_00,(MethodInfo *)0x0);
      func_?();
      pFVar1 = (this->fields).fireObject;
      if (pFVar1 != (FireObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pFVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVFire::MVFire_OnDataUpdate(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVFire_SetFireToData(this,(MethodInfo *)0x0);
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_OnEditModeChange
               (MVFire *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pTVar1 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)(this->fields).fireObject;
  if ((pTVar1 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) &&
     (this_00 = (Collider *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                          (pTVar1,(MethodInfo *)0x0), this_00 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    if (arg.playInEditor == 0) {
      return;
    }
    pTVar1 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)(this->fields).fireObject;
    if ((pTVar1 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) &&
       (pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           (pTVar1,(MethodInfo *)0x0), pOVar2 != (Object *)0x0)) {
      pcVar3 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar3 = (code *)func_?();
        if (pcVar3 == (code *)0x0) {
          puStack4 = (undefined *)0x0;
          puStack5 = (undefined *)0x0;
          func_?();
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pcRam_? = pcVar3;
      (*pcRam_?)();
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFireObjectPlaced() */

void Assembly-CSharp.dll::MVFire::MVFire_OnFireObjectPlaced(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    pAVar2 = (pFVar1->fields).OnFireObjectCreated;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar3;
      }
      pAVar4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pFVar1->fields).OnFireObjectCreated = pAVar2;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_is_active_now_after_subscribing,(MethodInfo *)0x0);
    pIVar5 = (this->fields)._InputSignalReceiver_k__BackingField;
    if (pIVar5 != (IInputSignalReceiver *)0x0) {
      activeFlag = func_?(1,TypeInfo__IInputSignalReceiver,pIVar5);
      MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
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
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    for (index = (undefined1 *)((int)&pOVar4[-1].monitor + 3); -1 < (int)index; index = index + -1)
    {
      pLVar2 = (this_00->fields).woList;
      if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      this_01 = (PrefabPool *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                           (int32_t)index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
      if (this_01 == (PrefabPool *)0x0) {
code_?:
        pLVar2 = (this_00->fields).woList;
        if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  ((List_1_MVPlayer_ *)pLVar2,(int32_t)index,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                  );
      }
      else {
        x = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                      ((DayNightCycle *)this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          aVStack_5[0].x = (float)TypeInfo__UnityEngine__Object;
          func_?();
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar6 != 0) goto code_?;
        pIStack_7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              ((MVWorldObjectClient *)this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pIStack_7,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          aVStack_5[0].x = (float)this_01;
          puVar8 = (undefined8 *)func_?();
          uStack_9 = *puVar8;
          pOStack_10 = *(ObjectPrefab **)(puVar8 + 1);
          puVar8 = (undefined8 *)func_?();
          uStack_11 = *puVar8;
          fVar12 = *(float *)(puVar8 + 1);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = (float)pOStack_10;
          a.x = (float)(undefined4)uStack_9;
          a.y = (float)uStack_9._4_4_;
          b.z = fVar12;
          b.x = (float)(undefined4)uStack_11;
          b.y = uStack_11._4_4_;
          this = (MVFire *)
                 UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                           (a,b,(MethodInfo *)0x0);
          pOStack_10 = PrefabPool::PrefabPool_get_MVNegatePrefab(this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pOStack_10,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            this_02 = PrefabPool::PrefabPool_get_MVNegatePrefab(this_01,(MethodInfo *)0x0);
            pVVar13 = (Vector3 *)func_?(auStack_14,0x19,this_00);
            if (this_02 == (ObjectPrefab *)0x0) goto code_?;
            pVVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                     Collider_ClosestPointOnBounds
                               (&VStack_15,(Collider *)this_02,*pVVar13,(MethodInfo *)0x0);
            uStack_11._0_4_ = pVVar13->x;
            uStack_11._4_4_ = pVVar13->y;
            fVar12 = pVVar13->z;
            puVar8 = (undefined8 *)func_?();
            uStack_9 = *puVar8;
            fVar16 = *(float *)(puVar8 + 1);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a_00.z = fVar12;
            a_00.x = (float)(undefined4)uStack_11;
            a_00.y = uStack_11._4_4_;
            b_00.z = fVar16;
            b_00.x = (float)(undefined4)uStack_9;
            b_00.y = (float)uStack_9._4_4_;
            this = (MVFire *)
                   UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                             (a_00,b_00,(MethodInfo *)0x0);
          }
          fVar12 = MVFire_CalculateDamageModifier(this_00,(MethodInfo *)0x0);
          uStack_11 = CONCAT44(fVar12,(undefined4)uStack_11);
          pOStack_10 = (ObjectPrefab *)
                      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
          fVar16 = _UNK_? - (float)this / (this_00->fields).damageRadius;
          fVar12 = (float)pOStack_10 * _UNK_?;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                             (fVar16 * fVar12 * uStack_11._4_4_,0.0,100.0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             (aVStack_5,(MethodInfo *)0x0);
          pIVar17 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                             ((InteractionData *)&stack0xffffff88,fVar12,*pVVar13,
                              PlayerKilledByType__Enum_Fire,(MethodInfo *)0x0);
          if (pIStack_7 == (InteractionDataHandlerBase *)0x0) goto code_?;
          InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                    (pIStack_7,*pIVar17,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void RenewCullingSize() */

void Assembly-CSharp.dll::MVFire::MVFire_RenewCullingSize(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    pCVar1 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar1,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = pCVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pAStack_2 = (AnimationCurve *)0x0;
  pFVar3 = (this->fields).fireObject;
  if (pFVar3 != (FireObject *)0x0) {
    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pFVar3,(MethodInfo *)0x0);
    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         (pDVar4,(MethodInfo *)0x0);
      uStack_1 = CONCAT44(uStack_1._4_4_,pOVar5);
      func_?();
      pFVar3 = (this->fields).fireObject;
      if (pFVar3 != (FireObject *)0x0) {
        pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)System.Core.dll::System::Linq::
                    Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                    JsonSchemaType]::
                    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                *)pFVar3,(MethodInfo *)0x0);
        if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (pDVar4,(MethodInfo *)0x0);
          uStack_1 = CONCAT44(pOVar5,(undefined4)uStack_1);
          func_?((int)&uStack_1 + 4,0x3ecccccd);
          func_?((int)&uStack_1 + 4,0x3f000000);
          pFVar3 = (this->fields).fireObject;
          if (pFVar3 != (FireObject *)0x0) {
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)System.Core.dll::System::Linq::
                        Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                        JsonSchemaType]::
                        Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                  ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                    *)pFVar3,(MethodInfo *)0x0);
            if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              pAStack_2 = (AnimationCurve *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                     (pDVar4,(MethodInfo *)0x0);
              func_?(&pAStack_2,0);
              pFVar3 = (this->fields).fireObject;
              if (pFVar3 != (FireObject *)0x0) {
                pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)System.Core.dll::System::Linq::
                            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema
                            ::JsonSchemaType]::
                            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                        *)pFVar3,(MethodInfo *)0x0);
                if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (pDVar4,(MethodInfo *)0x0);
                  this_00 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve)
                  ;
                  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                            (this_00,(MethodInfo *)0x0);
                  if (this_00 != (AnimationCurve *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                              (this_00,0.0,0.5,(MethodInfo *)0x0);
                    pMVar6 = (MonitorData *)0x3f000000;
                    pAVar7 = (AnimationCurve__Class *)0x3f19999a;
                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                              (this_00,0.6,0.5,(MethodInfo *)0x0);
                    pAVar8 = this_00;
                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                              (this_00,1.0,0.1,(MethodInfo *)0x0);
                    pAStack_2 = (AnimationCurve *)&stack0xffffffd4;
                    uStack_1 = CONCAT44(this_00,0x3f800000);
                    func_?();
                    uStack_1 = CONCAT44(pMVar6,pAVar7);
                    pAStack_2 = pAVar8;
                    func_?();
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetFireHitBoxYOffset(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireHitBoxYOffset
               (MVFire *this,float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  uVar2 = 0;
  func_?(&stack0xfffffff0,0,offset,0,0);
  this_00 = (this->fields).fireObject;
  if ((this_00 != (FireObject *)0x0) &&
     (this_02 = (Component_1 *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0),
     this_02 != (Component_1 *)0x0)) {
    uVar3 = 0;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       (this_02,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      fVar5 = 0.0;
      uVar6 = 0;
      translation_00.y = (float)uVar2;
      translation_00.x = (float)uVar3;
      translation_00.z = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (pTVar4,translation_00,Space__Enum_World,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar7 != MVGameMode__Enum_Edit) {
        return;
      }
      this_01 = (this->fields).rangeVis;
      if ((this_01 != (SphereVolumeIndicator *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_01,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)
         ) {
        translation.y = (float)uVar6;
        translation.x = fVar1;
        translation.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                  (pTVar4,translation,Space__Enum_Self,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetFireToData() */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireToData(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  pOStack_3 = (Object *)0x0;
  pOStack_4 = (Object *)0x0;
  pDVar5 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar5 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar5,StringLiteral_C,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 == 0) {
code_?:
      pFVar7 = (this->fields).fireObject;
      if (pFVar7 != (FireObject *)0x0) {
        pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)System.Core.dll::System::Linq::
                    Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                    JsonSchemaType]::
                    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                *)pFVar7,(MethodInfo *)0x0);
        if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                 (pDVar8,(MethodInfo *)0x0);
          fVar9 = (float10)func_?();
          pPStack_10 = (Pool *)(float)fVar9;
          MVFire_SetFireHitBoxYOffset
                    (this,(float)((uint)((((float)pPStack_10 * _UNK_? * _UNK_?) /
                                         _UNK_?) * _UNK_?) ^ _UNK_?) *
                          _UNK_?,(MethodInfo *)0x0);
          pDVar5 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                    *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                ((PrefabPool *)this,(MethodInfo *)0x0);
          if (pDVar5 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                         *)0x0) {
            bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              (pDVar5,StringLiteral_I,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar6 == 0) {
code_?:
              pFVar7 = (this->fields).fireObject;
              if (pFVar7 != (FireObject *)0x0) {
                pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)System.Core.dll::System::Linq::
                            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema
                            ::JsonSchemaType]::
                            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                        *)pFVar7,(MethodInfo *)0x0);
                if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)0x0) {
                  pOStack_4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,UnityEngine::Experimental::TerrainAPI::
                               TerrainUtility+TerrainMap]::
                               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                         (pDVar8,(MethodInfo *)0x0);
                  fVar9 = (float10)func_?();
                  pSStack_11 = (Single__Array__Class *)(float)fVar9;
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  (this->fields).damageRadius = (float)pSStack_11 * _UNK_? * _UNK_?;
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  MVar12 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                     ((MethodInfo *)0x0);
                  if (MVar12 == MVGameMode__Enum_Edit) {
                    this_00 = (this->fields).rangeVis;
                    if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
                    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                              (this_00,(this->fields).damageRadius,(MethodInfo *)0x0);
                  }
                  pPStack_10 = (Pool *)(((this->fields).damageRadius / _UNK_?) *
                                       _UNK_?);
                  MVFire_SetFireHitBoxYOffset
                            (this,(float)pPStack_10 * _UNK_?,(MethodInfo *)0x0);
                  pFVar7 = (this->fields).fireObject;
                  if (pFVar7 != (FireObject *)0x0) {
                    pCVar13 = (Component_1 *)
                              MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore
                              ::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                        ((KogamaSettingNumericBase_1_System_Single_ *)pFVar7,
                                         (MethodInfo *)0x0);
                    if (pCVar13 != (Component_1 *)0x0) {
                      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform(pCVar13,(MethodInfo *)0x0);
                      if (pTVar14 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  (&VStack_15,pTVar14,(MethodInfo *)0x0);
                        pFVar7 = (this->fields).fireObject;
                        VStack_15.x = (float)pPStack_10;
                        VStack_15.y = (float)pPStack_10;
                        VStack_15.z = (float)pPStack_10;
                        if (pFVar7 != (FireObject *)0x0) {
                          pCVar13 = (Component_1 *)
                                    MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                    KogamaSettingsCore::KogamaSettingTypes::
                                    KogamaSettingNumericBase`1[System::Single]::
                                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                              ((KogamaSettingNumericBase_1_System_Single_ *)pFVar7,
                                               (MethodInfo *)0x0);
                          if (pCVar13 != (Component_1 *)0x0) {
                            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform(pCVar13,(MethodInfo *)0x0);
                            if (pTVar14 != (Transform *)0x0) {
                              value.y = VStack_15.y;
                              value.x = VStack_15.x;
                              value.z = VStack_15.z;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localScale(pTVar14,value,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pCVar16 = (this->fields)._.cullingSubscriberBase;
                              if (pCVar16 != (CullingSubscriberBase *)0x0) {
                                CullingSubscriberBase::CullingSubscriberBase_Destroy
                                          (pCVar16,(MethodInfo *)0x0);
                                fStack_17 = (this->fields).damageRadius;
                                puVar18 = (undefined8 *)
                                          (*(code *)(this->klass->vtable).get_WorldPosition_1.method
                                          )();
                                pPStack_10 = *(Pool **)(puVar18 + 1);
                                VStack_15.y = (float)*puVar18;
                                VStack_15.z = (float)((ulonglong)*puVar18 >> 0x20);
                                this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (this_01,(Object *)this,
                                           (this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
                                           MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                                          );
                                pCVar16 = (CullingSubscriberBase *)func_?();
                                position.y = VStack_15.z;
                                position.x = VStack_15.y;
                                position.z = (float)pPStack_10;
                                CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                          (pCVar16,fStack_17,position,
                                           (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                                           (MethodInfo *)0x0);
                                pFVar7 = (this->fields).fireObject;
                                (this->fields)._.cullingSubscriberBase = pCVar16;
                                if (pFVar7 != (FireObject *)0x0) {
                                  this_02 = (AudioSource *)
                                            System.Core.dll::System::Linq::
                                            Enumerable+<CreateCastIterator>c__Iterator0`1[System::
                                            Int32]::
                                            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                      ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)pFVar7,(MethodInfo *)0x0);
                                  pFVar7 = (this->fields).fireObject;
                                  if (pFVar7 != (FireObject *)0x0) {
                                    this_03 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::
                                              Color]::
                                              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                                        ((NamedThemeAttribute_1_UnityEngine_Color_ *
                                                         )pFVar7,(MethodInfo *)0x0);
                                    if (this_03 != (String *)0x0) {
                                      fStack_17 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  AnimationCurve::AnimationCurve_Evaluate
                                                            ((AnimationCurve *)this_03,
                                                             (float)pSStack_11,(MethodInfo *)0x0);
                                      if (this_02 != (AudioSource *)0x0) {
                                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_set_volume(this_02,fStack_17,(MethodInfo *)0x0);
                                        if (_UNK_? <= (float)pSStack_11) {
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
                  }
                }
              }
            }
            else {
              pFVar7 = (this->fields).fireObject;
              if (pFVar7 != (FireObject *)0x0) {
                pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)System.Core.dll::System::Linq::
                            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema
                            ::JsonSchemaType]::
                            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                        *)pFVar7,(MethodInfo *)0x0);
                if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)0x0) {
                  pOStack_3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,UnityEngine::Experimental::TerrainAPI::
                               TerrainUtility+TerrainMap]::
                               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                         (pDVar8,(MethodInfo *)0x0);
                  pDVar19 = (Dictionary_2_System_Type_Pool_ *)
                           PrefabPool::PrefabPool_get_MVBatteryPrefab
                                     ((PrefabPool *)this,(MethodInfo *)0x0);
                  if (pDVar19 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                    pPVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                       (pDVar19,(Type *)StringLiteral_I,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if (pPVar20 != (Pool *)0x0) {
                      if ((pPVar20->klass->_0).element_class !=
                          (TypeInfo__System__Single->_0).element_class) goto code_?;
                      func_?();
                      func_?();
                      goto code_?;
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
      pDVar19 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pDVar19 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      pPStack_10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (pDVar19,(Type *)StringLiteral_C,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      pSStack_11 = TypeInfo__System__Single;
      if (pPStack_10 == (Pool *)0x0) {
        iVar21 = 0;
code_?:
        pFVar7 = (this->fields).fireObject;
        if (pFVar7 != (FireObject *)0x0) {
          pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)System.Core.dll::System::Linq::
                      Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                      JsonSchemaType]::
                      Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                  *)pFVar7,(MethodInfo *)0x0);
          if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (pDVar8,(MethodInfo *)0x0);
            if (iVar21 != 0) {
              uVar22 = *(uint *)(iVar21 + 0xc);
              if (uVar22 == 0) {
                func_?();
                func_?();
code_?:
                func_?();
                func_?();
              }
              else {
                if (uVar22 < 2) goto code_?;
                if (2 < uVar22) {
                  uVar22 = 0;
                  func_?();
                  pPVar23 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
                           ParticleSystem+MinMaxGradient::ParticleSystem_MinMaxGradient_op_Implicit
                                     ((ParticleSystem_MinMaxGradient *)&stack0xffffff98,
                                      (Color)ZEXT416(uVar22),(MethodInfo *)0x0);
                  VStack_15.z = 0.0;
                  uVar24 = (pPVar23->m_ColorMax).b;
                  VStack_15.y = (pPVar23->m_ColorMax).a;
                  VStack_15.x = (float)uVar24;
                  func_?();
                  goto code_?;
                }
              }
              func_?();
              func_?();
              goto code_?;
            }
          }
        }
      }
      else {
        iVar21 = func_?();
        if (iVar21 != 0) goto code_?;
code_?:
        func_?();
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void SetOriginalAnimation() */

void Assembly-CSharp.dll::MVFire::MVFire_SetOriginalAnimation(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  pAStack_3 = (AnimationCurve *)0x0;
  pFVar4 = (this->fields).fireObject;
  pOStack_5 = (Object *)0x0;
  if (pFVar4 != (FireObject *)0x0) {
    pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pFVar4,(MethodInfo *)0x0);
    if (pDVar6 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pAStack_3 = (AnimationCurve *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (pDVar6,(MethodInfo *)0x0);
      func_?(&pAStack_3);
      pFVar4 = (this->fields).fireObject;
      if (pFVar4 != (FireObject *)0x0) {
        pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)System.Core.dll::System::Linq::
                    Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                    JsonSchemaType]::
                    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                *)pFVar4,(MethodInfo *)0x0);
        if (pDVar6 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (pDVar6,(MethodInfo *)0x0);
          func_?(&pOStack_1,0x3f19999a,0);
          func_?(&pOStack_1,0x3fcccccd,0);
          pFVar4 = (this->fields).fireObject;
          if (pFVar4 != (FireObject *)0x0) {
            pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)System.Core.dll::System::Linq::
                        Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                        JsonSchemaType]::
                        Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                  ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                    *)pFVar4,(MethodInfo *)0x0);
            if (pDVar6 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                     (pDVar6,(MethodInfo *)0x0);
              this_00 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve);
              UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                        (this_00,(MethodInfo *)0x0);
              if (this_00 != (AnimationCurve *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                          (this_00,0.0,0.4,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                          (this_00,0.6,1.0,(MethodInfo *)0x0);
                pOVar7 = (Object *)0x3f800000;
                pOVar8 = (Object *)&UNK_?;
                pAVar9 = this_00;
                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                          (this_00,1.0,0.1,(MethodInfo *)0x0);
                pOStack_5 = (Object *)&stack0xffffffd4;
                pOStack_1 = (Object *)0x0;
                _pOStack_10 = CONCAT44(this_00,0x3f800000);
                func_?();
                pOStack_1 = (Object *)0x0;
                pOStack_5 = pOVar7;
                pOStack_2 = pOVar8;
                pAStack_3 = pAVar9;
                func_?();
                pFVar4 = (this->fields).fireObject;
                if (pFVar4 != (FireObject *)0x0) {
                  pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)System.Core.dll::System::Linq::
                              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::
                              Schema::JsonSchemaType]::
                              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                          *)pFVar4,(MethodInfo *)0x0);
                  if (pDVar6 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                 *)0x0) {
                    pOStack_5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,UnityEngine::Experimental::TerrainAPI::
                                 TerrainUtility+TerrainMap]::
                                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                           (pDVar6,(MethodInfo *)0x0);
                    func_?(&pOStack_5,0x3f800000,0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ToggleEmitter(Boolean) */

void Assembly-CSharp.dll::MVFire::MVFire_ToggleEmitter
               (MVFire *this,bool activeFlag,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)System.Core.dll::System::Linq::
                   Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                   JsonSchemaType]::
                   Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                             ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                               *)pFVar1,(MethodInfo *)0x0),
     this_00 !=
     (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)0x0
     )) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (this_00,(MethodInfo *)0x0);
    func_?(&stack0xfffffff8,_activeFlag);
    pFVar1 = (this->fields).fireObject;
    if (activeFlag == 0) {
      if ((pFVar1 != (FireObject *)0x0) &&
         (pAVar2 = (AudioSource *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pFVar1,
                              (MethodInfo *)0x0), pAVar2 != (AudioSource *)0x0)) {
        bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar2,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pFVar1 = (this->fields).fireObject;
        if ((pFVar1 != (FireObject *)0x0) &&
           (pAVar2 = (AudioSource *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                     Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                               ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pFVar1,
                                (MethodInfo *)0x0), pAVar2 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                    (pAVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pFVar1 != (FireObject *)0x0) &&
            (pAVar2 = (AudioSource *)
                      System.Core.dll::System::Linq::
                      Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pFVar1
                                 ,(MethodInfo *)0x0), pAVar2 != (AudioSource *)0x0)) {
      bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pAVar2 = (AudioSource *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pFVar1,
                              (MethodInfo *)0x0), pAVar2 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TriggerAreaEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaEnter
               (MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woList;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).woList;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_
      ;
      item.rgba = (int32_t)pMVar1;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove(this_00,item,(MethodInfo *)sender);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateDamageRadius(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateDamageRadius
               (MVFire *this,float intensity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).damageRadius = intensity * _UNK_? * _UNK_?;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  if (pFVar1 != (FireObject *)0x0) {
    pCVar2 = (Component_1 *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pFVar1,(MethodInfo *)0x0);
    if (pCVar2 != (Component_1 *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         (pCVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                  ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
        pFVar1 = (this->fields).fireObject;
        if (pFVar1 != (FireObject *)0x0) {
          fVar4 = scale;
          fVar5 = scale;
          pCVar2 = (Component_1 *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)pFVar1,(MethodInfo *)0x0)
          ;
          if (pCVar2 != (Component_1 *)0x0) {
            puStack6 = (undefined *)fVar5;
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               (pCVar2,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              value.y = fVar4;
              value.x = scale;
              value.z = (float)puStack6;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar3,value,(MethodInfo *)0x0);
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


/* Void UpdateSoundVolume(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateSoundVolume
               (MVFire *this,float intensity,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    this_00 = (AudioSource *)
              System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pFVar1,
                         (MethodInfo *)0x0);
    pFVar1 = (this->fields).fireObject;
    if (pFVar1 != (FireObject *)0x0) {
      this_01 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                NamedThemeAttribute_1_UnityEngine_Color__get_Name
                          ((NamedThemeAttribute_1_UnityEngine_Color_ *)pFVar1,(MethodInfo *)0x0);
      if (this_01 != (String *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          ((AnimationCurve *)this_01,intensity,(MethodInfo *)0x0);
        if (this_00 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                    (this_00,value,(MethodInfo *)0x0);
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


/* MVFire(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVFire::MVFire__ctor
               (MVFire *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).woList = (List_1_MVWorldObjectClient_ *)this_00;
  (this->fields).damageRadius = 2.5;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)this_01,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
    IVar3 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar3 | InteractionFlags__Enum_HasSettings,method_00);
    pFVar4 = (FireObject *)(this->fields)._._.component;
    if (pFVar4 == (FireObject *)0x0) {
      this_02 = (FireObject *)0x0;
    }
    else {
      bVar5 = (TypeInfo__FireObject->_1).naturalAligment;
      if (((((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32___Class *)pFVar4->klass)->_1)
           .naturalAligment < bVar5) ||
         ((((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32___Class *)pFVar4->klass)->_1).
          typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__FireObject)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      this_02 = (FireObject *)0x0;
      if (bVar6) {
        this_02 = pFVar4;
      }
      if (this_02 == (FireObject *)0x0) goto code_?;
    }
    (this->fields).fireObject = this_02;
    if (this_02 != (FireObject *)0x0) {
      this_03 = (AudioSource *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_02,
                           (MethodInfo *)0x0);
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                         (-0.2,0.2,(MethodInfo *)0x0);
      if (this_03 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (this_03,fVar7 + _UNK_?,(MethodInfo *)0x0);
        pFVar4 = (this->fields).fireObject;
        if (pFVar4 != (FireObject *)0x0) {
          pTVar8 = (TriggerBoxEvents *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)pFVar4,(MethodInfo *)0x0)
          ;
          pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar9,(Object *)this,
                     MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar8 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar8,(EventHandler_1_TriggerEventArgs_ *)pUVar9,(MethodInfo *)0x0);
            pFVar4 = (this->fields).fireObject;
            if (pFVar4 != (FireObject *)0x0) {
              pTVar8 = (TriggerBoxEvents *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pFVar4,
                                  (MethodInfo *)0x0);
              pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar9,(Object *)this,
                         MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_,
                         MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                        );
              if (pTVar8 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                          (pTVar8,(EventHandler_1_TriggerEventArgs_ *)pUVar9,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0xbf800000,0,0,0);
  return __return_storage_ptr__;
}

