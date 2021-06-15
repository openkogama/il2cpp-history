
/* Void ActivateParticles(BoostType) */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_ActivateParticles
               (BoostParticlesActivationEffect *this,BoostType__Enum typeToActivate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  pLVar3 = (this->fields).boostColors;
  while (pLVar3 != (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Count__
                       );
    if ((int)pOVar4 <= index) {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).activationStartTime = fVar5;
      return;
    }
    pLVar3 = (this->fields).boostColors;
    if (pLVar3 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
    pBVar6 = mscorlib.dll::System::Collections::Generic::
             List`1[BoostParticlesActivationEffect+BoosterColors]::
             List_1_BoostParticlesActivationEffect_BoosterColors__get_Item
                       ((BoostParticlesActivationEffect_BoosterColors *)(auStack_7 + 8),pLVar3,
                        index,
                        MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                       );
    if (pBVar6->type == typeToActivate) {
      pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).rayParticles;
      if (pDVar8 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) break;
      pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (pDVar8,(MethodInfo *)0x0);
      pLVar3 = (this->fields).boostColors;
      if (pLVar3 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
      iVar9 = func_?(auStack_7 + 8,pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                              );
      pPVar10 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit
                          ((ParticleSystem_MinMaxGradient *)auStack_7,*(Color *)(iVar9 + 4),
                           (MethodInfo *)0x0);
      uVar11._0_4_ = (pPVar10->m_ColorMax).g;
      uVar11._4_4_ = (pPVar10->m_ColorMax).b;
      func_?(&pOStack_1,pPVar10->m_Mode,pPVar10->m_GradientMin,pPVar10->m_GradientMax,
                      (pPVar10->m_ColorMin).r,(pPVar10->m_ColorMin).g,(pPVar10->m_ColorMin).b,
                      (pPVar10->m_ColorMin).a,(pPVar10->m_ColorMax).r,uVar11,(pPVar10->m_ColorMax).a,
                      0);
      pPVar12 = (this->fields).rayParticles;
      if (pPVar12 == (ParticleSystem *)0x0) break;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar12,(MethodInfo *)0x0);
      pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).bubbleParticles;
      if (pDVar8 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) break;
      pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (pDVar8,(MethodInfo *)0x0);
      pLVar3 = (this->fields).boostColors;
      if (pLVar3 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
      iVar9 = func_?(auStack_7 + 8,pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                              );
      pPVar10 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit
                          ((ParticleSystem_MinMaxGradient *)auStack_7,*(Color *)(iVar9 + 0x14),
                           (MethodInfo *)0x0);
      uVar13 = (pPVar10->m_ColorMax).g;
      uVar14 = (pPVar10->m_ColorMax).b;
      func_?(&pOStack_2,pPVar10->m_Mode,pPVar10->m_GradientMin,pPVar10->m_GradientMax,
                      (pPVar10->m_ColorMin).r,(pPVar10->m_ColorMin).g,(pPVar10->m_ColorMin).b,
                      (pPVar10->m_ColorMin).a,(pPVar10->m_ColorMax).r,uVar13,uVar14,
                      (pPVar10->m_ColorMax).a,0);
      pPVar12 = (this->fields).bubbleParticles;
      if (pPVar12 == (ParticleSystem *)0x0) break;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar12,(MethodInfo *)0x0);
    }
    index = index + 1;
    pLVar3 = (this->fields).boostColors;
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_OnAvatarModeChange
               (BoostParticlesActivationEffect *this,SpawnRoleModeType__Enum newMode,
               MethodInfo *method)

{
  iVar1 = (this->fields).previousMode;
  if ((iVar1 != 4) && (iVar1 != 2)) {
    (this->fields).previousMode = newMode;
    return;
  }
  if (newMode == SpawnRoleModeType__Enum_Playing) {
    BoostParticlesActivationEffect_OnAvatarSpawn(this,(MethodInfo *)0x0);
  }
  (this->fields).previousMode = newMode;
  return;
}


/* Void OnAvatarSpawn() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_OnAvatarSpawn
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).boostsToActivate;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<BoostType>__Clear__);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      unaff_ESI = TypeInfo__MVGameControllerBase;
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_02 != (MVNetworkGame *)0x0) &&
        (pPVar4 = (PrefabPool *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
        pPVar4 != (PrefabPool *)0x0)) &&
       (pOVar5 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           (pPVar4,(MethodInfo *)unaff_ESI), pOVar5 != (ObjectiveArrow *)0x0)) {
      this_05 = (ObjectiveArrow *)&UNK_?;
      this_03 = BoostController::BoostController_GetAllBoosts
                          ((BoostController *)pOVar5,in_stack_6);
      if (this_03 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
        method_00 = (MethodInfo *)&stack0xffffffbc;
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                    *)method_00,
                   (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)this_03,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                  );
        uStack_1 = 0;
        while( true ) {
          do {
            cVar7 = func_?();
            if (cVar7 == '\0') {
              uStack_1 = 0xffffffff;
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_04 = (Collection_1_VoxelHit_ *)func_?();
            pOVar5 = this_05;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
              pOVar5 = this_05;
            }
            pPVar4 = (PrefabPool *)
                     MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (((pPVar4 == (PrefabPool *)0x0) ||
                (this_05 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                     (pPVar4,(MethodInfo *)0x0),
                this_04 == (Collection_1_VoxelHit_ *)0x0)) ||
               (pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)pOVar5),
               this_05 == (ObjectiveArrow *)0x0)) goto code_?;
            bVar9 = BoostController::BoostController_IsBoostActive
                              ((BoostController *)this_05,(BoostType__Enum)pIVar8,method_00);
          } while (bVar9 == 0);
          this_01 = (List_1_UIPushOption_ *)(this->fields).boostsToActivate;
          pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)0x0);
          if (this_01 == (List_1_UIPushOption_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    (this_01,(UIPushOption__Enum)pIVar8,
                     MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_OnDestroy
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_00 != (PrefabPool *)0x0) &&
     (this_01 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                 *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0),
     this_01 !=
     (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)) {
    this_02 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        (this_01,(MethodInfo *)0x0);
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,unaff_EDI,
               MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
               ,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_02 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
                (this_02,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_03,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_Start
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
    {
      this_02 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          (this_01,(MethodInfo *)0x0);
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,unaff_ESI,
                 MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 ,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
                );
      if (this_02 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                  (this_02,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_03,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_Update
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).activationCooldown + (this->fields).activationStartTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 < fVar1) {
    return;
  }
  pLVar3 = (this->fields).boostsToActivate;
  if (pLVar3 != (List_1_BoostType_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<BoostType>__get_Count__);
    if ((int)pOVar4 < 1) {
      return;
    }
    pLVar3 = (this->fields).boostsToActivate;
    if (pLVar3 != (List_1_BoostType_ *)0x0) {
      typeToActivate =
           mscorlib.dll::System::Collections::Generic::List`1[BoostType]::List_1_BoostType__get_Item
                     (pLVar3,0,
                      MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
      BoostParticlesActivationEffect_ActivateParticles(this,typeToActivate,(MethodInfo *)0x0);
      pLVar3 = (this->fields).boostsToActivate;
      if (pLVar3 != (List_1_BoostType_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[BoostType]::List_1_BoostType__RemoveAt
                  (pLVar3,0,MethodInfo__System__Collections__Generic__List<BoostType>__RemoveAt_int_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* BoostParticlesActivationEffect() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect__ctor
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<BoostType>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<BoostType>__List__);
  (this->fields).boostsToActivate = (List_1_BoostType_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

