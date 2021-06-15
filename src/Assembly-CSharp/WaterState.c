
/* Single ComputeAvatarWaterProximity(Vector3) */

float Assembly-CSharp.dll::WaterState::WaterState_ComputeAvatarWaterProximity
                (WaterState *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if ((pWVar1 != (WaterPlaneManager *)0x0) &&
     (this_00 = (pWVar1->fields).water, this_00 != (Water *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_01,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 0.0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar1 != (WaterPlaneManager *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pWVar1,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
          uVar4 = pVVar3->y;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            position.y = (float)TypeInfo__UnityEngine__Mathf;
            func_?();
          }
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                            (((float)uVar4 - position.y) / _UNK_?,(MethodInfo *)0x0);
          return fVar5;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WaterState::WaterState_Destroy(WaterState *this,MethodInfo *method)

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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_00,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_01 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_02,
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


/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::WaterState::WaterState_OnAvatarModeChange
               (WaterState *this,SpawnRoleModeType__Enum newSpawnRoleMode,MethodInfo *method)

{
  (this->fields).oxygen = (this->fields).oxygenMax;
  return;
}


/* Single UnderwaterJumpPowerModifierCallback() */

float Assembly-CSharp.dll::WaterState::WaterState_UnderwaterJumpPowerModifierCallback
                (WaterState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (this_00 != (WaterPlaneManager *)0x0) {
    pMVar1 = (Mathf__Class *)(this->fields).worldPosition.y;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((this_00->fields).waterPlaneLogicCube == (MVWaterPlane *)0x0) {
      fVar2 = 0.0;
    }
    else {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
      uVar4 = pVVar3->y;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        pMVar1 = TypeInfo__UnityEngine__Mathf;
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                        (((float)uVar4 - (float)pMVar1) / _UNK_?,(MethodInfo *)0x0);
    }
    this = (WaterState *)0x3f800000;
    if (_UNK_? < (double)fVar2) {
      this = (WaterState *)0x40000000;
    }
    return (float)this;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single UnderwaterModifierCallback() */

float Assembly-CSharp.dll::WaterState::WaterState_UnderwaterModifierCallback
                (WaterState *this,MethodInfo *method)

{
  fVar1 = WaterState_ComputeAvatarWaterProximity
                    (this,(this->fields).worldPosition,(MethodInfo *)0x0);
  return (_UNK_? - fVar1) * _UNK_? + _UNK_?;
}


/* Void Update(Vector3, MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_Update
               (WaterState *this,Vector3 worldPosition,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).worldPosition.x = (float)(int)worldPosition._0_8_;
  (this->fields).worldPosition.y = (float)(int)((ulonglong)worldPosition._0_8_ >> 0x20);
  (this->fields).worldPosition.z = worldPosition.z;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = (this->fields).worldPosition.y;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pWVar3 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (pWVar3 != (WaterPlaneManager *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pWVar3,(MethodInfo *)0x0);
    if (this_01 == (Transform *)0x0) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    uVar5 = pVVar4->y;
    if (fVar2 < (float)uVar5) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pWVar3 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if ((pWVar3 == (WaterPlaneManager *)0x0) ||
         (this_00 = (pWVar3->fields).water, this_00 == (Water *)0x0)) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 == (GameObject *)0x0) goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_02,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        if (avatarInteractable == (MVInteractableBase *)0x0) goto code_?;
        (*(code *)(avatarInteractable->klass->vtable).__unknown_1.method)();
        goto code_?;
      }
    }
    if (avatarInteractable != (MVInteractableBase *)0x0) {
      cVar7 = (*(code *)(avatarInteractable->klass->vtable).__unknown_2.method)();
      if (cVar7 != '\0') {
        (*(code *)(avatarInteractable->klass->vtable).__unknown_3.method)();
      }
code_?:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar2 = WaterState_ComputeAvatarWaterProximity
                        (this,(this->fields).worldPosition,(MethodInfo *)0x0);
      if ((bool)(this->fields).hasGillsNoLungs == _UNK_? <= fVar2) {
        (this->fields).oxygen = (this->fields).oxygenMax;
      }
      else {
        fVar2 = (this->fields).oxygen;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                          (0.0,fVar2 - fVar8,(MethodInfo *)0x0);
        (this->fields).oxygen = fVar2;
        if (fVar2 <= 0.0) {
          fStack9 =
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
          fStack9 = fStack9 * _UNK_?;
          pIStack10 = (avatarInteractable->klass->vtable).__unknown_1.methodPtr;
          puStack11 = (undefined *)0x0;
          (*(code *)(avatarInteractable->klass->vtable).__unknown.method)();
          return;
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateLocalAvatarOxygen(MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_UpdateLocalAvatarOxygen
               (WaterState *this,MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  pWVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = WaterState_ComputeAvatarWaterProximity
                    (this,(this->fields).worldPosition,(MethodInfo *)0x0);
  if ((bool)(this->fields).hasGillsNoLungs == _UNK_? <= fVar2) {
    (this->fields).oxygen = (this->fields).oxygenMax;
  }
  else {
    this = (WaterState *)(this->fields).oxygen;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)this);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      this = (WaterState *)&UNK_?;
      func_?();
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                      (0.0,(float)this - fVar2,(MethodInfo *)0x0);
    (pWVar1->fields).oxygen = fVar2;
    if (fVar2 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      uStack3 = 0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void UpdateModifiers(MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_UpdateModifiers
               (WaterState *this,MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).worldPosition.y;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if ((pWVar2 == (WaterPlaneManager *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pWVar2,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
  goto code_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
  uVar4 = pVVar3->y;
  if (fVar1 < (float)uVar4) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (((pWVar2 == (WaterPlaneManager *)0x0) ||
        (this_00 = (pWVar2->fields).water, this_00 == (Water *)0x0)) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_00,(MethodInfo *)0x0), this_02 == (GameObject *)0x0
       )) goto code_?;
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if (avatarInteractable != (MVInteractableBase *)0x0) {
        (*(code *)(avatarInteractable->klass->vtable).__unknown_1.method)();
        return;
      }
      goto code_?;
    }
  }
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar6 = (*(code *)(avatarInteractable->klass->vtable).__unknown_2.method)();
    if (cVar6 == '\0') {
      return;
    }
    (*(code *)(avatarInteractable->klass->vtable).__unknown_3.method)();
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* WaterState(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::WaterState::WaterState__ctor
               (WaterState *this,WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).oxygenMax = 20.0;
  (this->fields).oxygen = 20.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).worldPosition.x = pVVar1->x;
  (this->fields).worldPosition.y = fVar2;
  (this->fields).worldPosition.z = fVar3;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pAVar4 = (AvatarModifierPackage_AvatarModifier__Array *)
           func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,2);
  if (pAVar4 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar5,(Object *)this,MethodInfo__WaterState__UnderwaterModifierCallback__,
             MethodInfo__System__Func<float>__Func_System__Object__void__);
  pFStack_6 = (Func_1_Single_ *)0x0;
  uStack_7 = 0;
  func_?(&uStack_7,0,3,pUVar5,0);
  if (pAVar4->max_length == 0) {
    func_?();
    func_?();
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
    pPVar9 = extraout_ECX;
  }
  else {
    pAVar4->vector[0].avatarModifierType = (undefined4)uStack_7;
    pAVar4->vector[0].avatarModifierEffect = uStack_7._4_4_;
    pAVar4->vector[0].value = pFStack_6;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,MethodInfo__WaterState__UnderwaterJumpPowerModifierCallback__,
               MethodInfo__System__Func<float>__Func_System__Object__void__);
    pFVar10 = (Func_1_Single_ *)0x0;
    uVar11 = 0;
    func_?(&stack0xffffffe0);
    if (pAVar4->max_length < 2) goto code_?;
    pAVar4->vector[1].avatarModifierType = (int)uVar11;
    pAVar4->vector[1].avatarModifierEffect = (int)((ulonglong)uVar11 >> 0x20);
    pAVar4->vector[1].value = pFVar10;
    (this->fields).additionalUnderWaterModifiers = pAVar4;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_00 == (SpawnRoleDataMediator *)0x0) goto code_?;
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_00,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if ((this_01 == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) ||
       (Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                  (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)pUVar5,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                  ), pSVar12 = StringLiteral_OxygenSupply,
       skillDataManager == (WorldObjectSkillDataManager *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar13 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)(skillDataManager->fields).skillData;
    fVar3 = _UNK_?;
    if (pSVar13 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
code_?:
      bVar14 = cRam_? == '\0';
      (this->fields).oxygenMax = fVar3;
      (this->fields).oxygen = fVar3;
      pSVar12 = StringLiteral_BreathesWater;
      if (bVar14) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar13 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                *)(skillDataManager->fields).skillData;
      if (pSVar13 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)0x0) {
        (this->fields).hasGillsNoLungs = 0;
        return;
      }
      pDVar15 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             (pSVar13,(MethodInfo *)0x0);
      if (pDVar15 !=
          (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
           *)0x0) {
        bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (pDVar15,pSVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                          );
        (this->fields).hasGillsNoLungs = bVar16;
        return;
      }
      goto code_?;
    }
    pDVar15 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (pSVar13,(MethodInfo *)0x0);
    if (pDVar15 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar15,pSVar12,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                      );
    pSVar12 = StringLiteral_OxygenSupply;
    fVar3 = _UNK_?;
    if (bVar16 == 0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar13 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)(skillDataManager->fields).skillData;
    if (((pSVar13 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)0x0) ||
        (this_02 = (Dictionary_2_System_Type_Pool_ *)
                   System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             (pSVar13,(MethodInfo *)0x0),
        this_02 == (Dictionary_2_System_Type_Pool_ *)0x0)) ||
       (pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_02,(Type *)pSVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                            ), pPVar9 == (Pool *)0x0)) goto code_?;
    bStack_17 = (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).naturalAligment;
    bStack_18 = (pPVar9->klass->_1).naturalAligment;
    if ((bStack_18 < bStack_17) ||
       (bVar14 = true,
       (pPVar9->klass->_1).typeHierarchy[bStack_17 - 1] !=
       (Il2CppClass *)
       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) {
      bVar14 = false;
    }
    pPVar19 = (Pool *)0x0;
    if (bVar14) {
      pPVar19 = pPVar9;
    }
    if (pPVar19 != (Pool *)0x0) {
      if ((bStack_18 < bStack_17) ||
         (bVar14 = true,
         (pPVar9->klass->_1).typeHierarchy[bStack_17 - 1] !=
         (Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        bVar14 = false;
      }
      pPVar19 = (Pool *)0x0;
      if (bVar14) {
        pPVar19 = pPVar9;
      }
      if (pPVar19 != (Pool *)0x0) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                  ((KogamaSettingNumericBase_1_System_Int32_ *)pPVar19,
                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                  );
        fVar3 = (float)extraout_ST0;
        goto code_?;
      }
    }
  }
  func_?(pPVar9);
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

