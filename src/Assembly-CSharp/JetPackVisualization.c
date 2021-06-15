
/* Void DoOverheatBlinking() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_DoOverheatBlinking
               (JetPackVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleBlinker;
  if (this_00 != (VehicleBlinker *)0x0) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EnableThruster(Boolean) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_EnableThruster
               (JetPackVisualization *this,bool enable,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).thrusters;
  puStack_8 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
    CStack_7.monitor = (MonitorData *)pLVar9->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_7,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                             );
      unaff_ESI = _enable;
      if (this_02 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      pOStack_6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (this_02,(MethodInfo *)0x0);
      func_?(&pOStack_6);
    }
    unaff_ESI = 0;
    *puStack_8 = 0x47;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                   );
    this_01 = (this->fields).moving;
    if (enable == 0) {
      if (this_01 != (AudioSource *)0x0) {
        value = 0.0;
code_?:
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_01,value,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    else if (this_01 != (AudioSource *)0x0) {
      value = 1.0;
      goto code_?;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandleJetMode() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_HandleJetMode
               (JetPackVisualization *this,MethodInfo *method)

{
  if (((this->fields).modeChanged != 0) || ((this->fields).mode == 2)) {
    (this->fields).modeChanged = 0;
  }
  return;
}


/* Void Init(Boolean, Transform, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_Init
               (JetPackVisualization *this,bool isInSpawner,Transform *jetPackCubeModel,
               MVRuntimeDataVariable *jetMode,MethodInfo *method)

{
  pOVar1 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (jetPackCubeModel != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffc8,jetPackCubeModel,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar2->x;
    uVar3._4_4_ = pVVar2->y;
    fVar4 = pVVar2->z;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffc4,jetPackCubeModel,(MethodInfo *)0x0);
    pLVar6 = (List_1_UnityEngine_Color32_ *)pQVar5->x;
    fVar7 = pQVar5->y;
    fVar8 = pQVar5->z;
    fVar9 = pQVar5->w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (jetPackCubeModel,(this->fields).JetPackRoot,(MethodInfo *)0x0);
    value.z = fVar4;
    value.x = (float)(int)uVar3;
    value.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (jetPackCubeModel,value,(MethodInfo *)0x0);
    value_00.y = fVar7;
    value_00.x = (float)pLVar6;
    value_00.z = fVar8;
    value_00.w = fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (jetPackCubeModel,value_00,(MethodInfo *)0x0);
    if (jetMode != (MVRuntimeDataVariable *)0x0) {
      pMVar10 = (jetMode->fields).OnChange;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__JetPackVisualization___Init_m__0_System__Object_
                 ,(MethodInfo *)0x0);
      pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar10,(Delegate *)this_01,(MethodInfo *)0x0);
      pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar11 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        if (pMVar11->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar10 = pMVar11;
        }
        if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          func_?();
          func_?();
          goto code_?;
        }
      }
      (jetMode->fields).OnChange = pMVar10;
      (this->fields)._.isInSpawner = isInSpawner;
      if (isInSpawner == 0) {
        pLVar6 = (List_1_UnityEngine_Color32_ *)(this->fields).thrusters;
        if (pLVar6 != (List_1_UnityEngine_Color32_ *)0x0) {
          method_01 = (MethodInfo *)&UNK_?;
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,pLVar6,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pLVar12->next;
          while (pMVar13 = 
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                , cVar14 = func_?(), cVar14 != '\0') {
            this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    &stack0xffffffa8,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                                   );
            if (this_02 ==
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (this_02,(MethodInfo *)0x0);
            fVar15 = (float10)func_?();
            (this->fields).originalMaxSize = (float)fVar15;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (this_02,(MethodInfo *)0x0);
            fVar15 = (float10)func_?();
            (this->fields).originalMaxEmission = (float)fVar15;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      ((ParticleSystem *)this_02,(MethodInfo *)0x0);
          }
          pMVar13->methodPointer = (Il2CppMethodPointer)0xcb;
          func_?();
          if ((jetMode != (MVRuntimeDataVariable *)0x0) &&
             (pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                                  (jetMode,(MethodInfo *)0x0), pOVar1 != (Object *)0x0)) {
            if ((pOVar1->klass->_0).element_class !=
                (TypeInfo__MVJetPack__JetModeType->_0).element_class) goto code_?;
            pbVar16 = (byte *)func_?();
            JetPackVisualization_OnJetModeChange(this,(uint)*pbVar16,(MethodInfo *)0x0);
            this_00 = (this->fields).moving;
            if (this_00 != (AudioSource *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_00,1,unaff_ESI);
              pTVar17 = (this->fields).JetPackRoot;
              pVVar18 = (this->fields).vehicleBlinker;
              if (((pTVar17 != (Transform *)0x0) &&
                  (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar17,method_00),
                  this_03 != (GameObject *)0x0)) &&
                 (avatarBody = (MVBody *)
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_GetComponentsInChildren_29
                                         (this_03,
                                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                         ), pVVar18 != (VehicleBlinker *)0x0)) {
                AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                          ((AccessoryPreviewPopup *)pVVar18,avatarBody,(MethodInfo *)jetPackCubeModel
                          );
                pVVar18 = (this->fields).vehicleBlinker;
                if (pVVar18 != (VehicleBlinker *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                            ((GamePassesTextBubble *)pVVar18,1,method_01);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this,1,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,0,(MethodInfo *)0x0);
code_?:
        pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar17 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffb8,pTVar17,(MethodInfo *)0x0);
          fVar7 = pVVar2->y;
          fVar4 = pVVar2->z;
          (this->fields).prevWorldPosition.x = pVVar2->x;
          (this->fields).prevWorldPosition.y = fVar7;
          (this->fields).prevWorldPosition.z = fVar4;
          *unaff_FS_OFFSET = pOVar1;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void JetPackPitch() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_JetPackPitch
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    puVar4 = &UNK_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    VVar8 = *pVVar5;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      func_?();
    }
    rotation.y = (float)uVar6;
    rotation.x = (float)puVar4;
    rotation.z = (float)uVar7;
    rotation.w = (float)puVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffc8,rotation,VVar8,(MethodInfo *)0x0);
    pVVar5 = (Vector3 *)func_?();
    VVar8 = *pVVar5;
    pVVar5 = (Vector3 *)func_?();
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                       (VVar8,*pVVar5,(MethodInfo *)0x0);
    fVar10 = (this->fields).smoothPitchFactor;
    fVar11 = (this->fields).smoothMoveSpeed;
    fVar12 = (this->fields).pitchFactor;
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar14 = (this->fields).pitchSpeedTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                       (fVar10,fVar11 * fVar9 * fVar12,fVar14 * fVar13,(MethodInfo *)0x0);
    fVar10 = (this->fields).pitchMax;
    pTVar1 = (this->fields).JetPackRoot;
    (this->fields).smoothPitchFactor = fVar11;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                       (fVar11,(float)((uint)fVar10 ^ _UNK_?),fVar10,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffb8,fVar10,*pVVar5,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void JetPackRoll() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_JetPackRoll
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffb4,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    puVar4 = &UNK_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
    uVar6._0_4_ = pVVar5->x;
    uVar6._4_4_ = pVVar5->y;
    fVar7 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      func_?();
    }
    rotation.y = (float)uVar6;
    rotation.x = (float)puVar4;
    rotation.z = (float)((ulonglong)uVar6 >> 0x20);
    rotation.w = (float)puVar3;
    point.z = fVar7;
    point.x = (float)(int)uVar6;
    point.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffc8,rotation,point,(MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    fVar7 = *(float *)(puVar8 + 1);
    uVar6._0_4_ = (undefined4)*puVar8;
    uVar6._4_4_ = (undefined4)((ulonglong)*puVar8 >> 0x20);
    pVVar5 = (Vector3 *)func_?(&stack0xffffffc8);
    lhs.y = (float)uVar6._4_4_;
    lhs.x = (float)(undefined4)uVar6;
    lhs.z = fVar7;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                       (lhs,*pVVar5,(MethodInfo *)0x0);
    fVar7 = (this->fields).smoothRollFactor;
    fVar10 = (this->fields).smoothMoveSpeed;
    fVar11 = (this->fields).pitchFactor;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar13 = (this->fields).pitchSpeedTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                       (fVar7,(float)((uint)fVar9 ^ _UNK_?) * fVar10 * fVar11,
                        fVar13 * fVar12,(MethodInfo *)0x0);
    pTVar1 = (this->fields).JetPackRoot;
    (this->fields).smoothRollFactor = fVar7;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffb4,pTVar1,(MethodInfo *)0x0);
      fVar7 = (this->fields).pitchMax;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                         ((this->fields).smoothRollFactor,(float)((uint)fVar7 ^ _UNK_?),
                          fVar7,(MethodInfo *)pQVar2->z);
      pVVar5 = (Vector3 *)&stack0xffffffc8;
      puVar3 = &UNK_?;
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                         (pVVar5,(MethodInfo *)0x0);
      pQVar2 = (Quaternion *)&stack0xffffffc4;
      puVar4 = &UNK_?;
      pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         (pQVar2,fVar7,*pVVar14,(MethodInfo *)0x0);
      lhs_00.y = (float)pVVar5;
      lhs_00.x = (float)puVar3;
      lhs_00.z = (float)puVar4;
      lhs_00.w = (float)pQVar2;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                         ((Quaternion *)&stack0xffffffb4,lhs_00,*pQVar15,(MethodInfo *)0x0);
      fStack16 = pQVar2->z;
      fStack17 = pQVar2->w;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnJetModeChange(MVJetPack+JetModeType) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_OnJetModeChange
               (JetPackVisualization *this,MVJetPack_JetModeType__Enum newMode,MethodInfo *method)

{
  uVar1 = (this->fields).mode;
  if (uVar1 != (undefined1)newMode) {
    if (uVar1 == MVJetPack_JetModeType__Enum_Overheating) {
      JetPackVisualization_SetMaxSizeForThrusters
                (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
                 (MethodInfo *)0x0);
    }
    if ((undefined1)newMode == MVJetPack_JetModeType__Enum_On) {
      JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
      (this->fields).mode = 1;
      return;
    }
    if ((undefined1)newMode == MVJetPack_JetModeType__Enum_Off) {
      JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
      (this->fields).mode = 0;
      return;
    }
    if ((undefined1)newMode == MVJetPack_JetModeType__Enum_Overheating) {
      JetPackVisualization_SetMaxSizeForThrusters(this,3.0,10.0,(MethodInfo *)0x0);
    }
  }
  (this->fields).mode = (undefined1)newMode;
  return;
}


/* Void SetMaxSizeForThrusters(Single, Single) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_SetMaxSizeForThrusters
               (JetPackVisualization *this,float maxSize,float maxEmission,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pOStack_7 = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).thrusters;
  puStack_9 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_8.monitor = (MonitorData *)pLVar10->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_9 = 0x56;
        uStack_1 = 0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                             );
      if (this_01 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) break;
      pOStack_6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (this_01,(MethodInfo *)0x0);
      func_?(&pOStack_6);
      pOStack_7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (this_01,(MethodInfo *)0x0);
      auStack_11._0_4_ = (List_1_UnityEngine_Color32_ *)0x0;
      func_?();
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowOverHeatWarning() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_ShowOverHeatWarning
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (_UNK_? < fVar1 - (this->fields).lastOverHeatNotificationTime) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).lastOverHeatNotificationTime = fVar1;
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification_1
              (NotificationType__Enum_JetPackOverheating,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_Update
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    VStack_2.y = (this->fields).prevWorldPosition.x;
    VStack_2.z = (this->fields).prevWorldPosition.y;
    fStack_3 = pVVar1->x;
    puStack_4 = (undefined *)pVVar1->y;
    fVar5 = pVVar1->z;
    fVar6 = (this->fields).prevWorldPosition.z;
    uStack_7 = _fStack_10;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      fStack_8 = (float)puStack_4;
      uStack_7._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    a.z = fVar5;
    a.x = (float)uStack_7;
    a.y = SUB84(uStack_7,4);
    b.z = fVar6;
    b.x = VStack_2.y;
    b.y = VStack_2.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
    fVar9 = pVVar1->y;
    fVar6 = pVVar1->z;
    (this->fields).posDiff.x = pVVar1->x;
    (this->fields).posDiff.y = fVar9;
    (this->fields).prevWorldPosition.x = fStack_3;
    (this->fields).prevWorldPosition.y = (float)puStack_4;
    (this->fields).posDiff.z = fVar6;
    (this->fields).prevWorldPosition.z = fVar5;
    fVar10 = (float10)func_?();
    fVar6 = (float)fVar10;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar5 = (this->fields).smoothMoveSpeed;
    _fStack_10 = CONCAT44(fVar9,fStack_3);
    VStack_2.z = fVar6 / fVar9;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar6 = (this->fields).smoothMoveSpeedTime;
    puStack_4 = (undefined *)fVar6;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar9 = (float)puStack_4 * fVar9;
    _fStack_10 = CONCAT44(&UNK_?,fStack_3);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                      (fVar5,VStack_2.z,fVar9,(MethodInfo *)0x0);
    (this->fields).smoothMoveSpeed = fVar5;
    JetPackVisualization_JetPackPitch(this,(MethodInfo *)0x0);
    JetPackVisualization_JetPackRoll(this,(MethodInfo *)0x0);
    if (((this->fields).modeChanged != 0) || ((this->fields).mode == 2)) {
      (this->fields).modeChanged = 0;
    }
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateSpartialValues() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_UpdateSpartialValues
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    VStack_2.y = (this->fields).prevWorldPosition.x;
    VStack_2.z = (this->fields).prevWorldPosition.y;
    fStack_3 = pVVar1->x;
    puStack_4 = (undefined *)pVVar1->y;
    fVar5 = pVVar1->z;
    fVar6 = (this->fields).prevWorldPosition.z;
    uStack_7 = _fStack_10;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      fStack_8 = (float)puStack_4;
      uStack_7._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    a.z = fVar5;
    a.x = (float)uStack_7;
    a.y = SUB84(uStack_7,4);
    b.z = fVar6;
    b.x = VStack_2.y;
    b.y = VStack_2.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
    fVar9 = pVVar1->y;
    fVar6 = pVVar1->z;
    (this->fields).posDiff.x = pVVar1->x;
    (this->fields).posDiff.y = fVar9;
    (this->fields).prevWorldPosition.x = fStack_3;
    (this->fields).prevWorldPosition.y = (float)puStack_4;
    (this->fields).posDiff.z = fVar6;
    (this->fields).prevWorldPosition.z = fVar5;
    fVar10 = (float10)func_?();
    fVar6 = (float)fVar10;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar5 = (this->fields).smoothMoveSpeed;
    _fStack_10 = CONCAT44(fVar9,fStack_3);
    VStack_2.z = fVar6 / fVar9;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar6 = (this->fields).smoothMoveSpeedTime;
    puStack_4 = (undefined *)fVar6;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar9 = (float)puStack_4 * fVar9;
    _fStack_10 = CONCAT44(&UNK_?,fStack_3);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                      (fVar5,VStack_2.z,fVar9,(MethodInfo *)0x0);
    (this->fields).smoothMoveSpeed = fVar5;
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Init>m__0(Object) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization__Init_m__0
               (JetPackVisualization *this,Object *jetModeVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (jetModeVal == (Object *)0x0) {
    func_?(0);
    jetModeVal = extraout_ECX;
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = TypeInfo__MVJetPack__JetModeType;
    if ((jetModeVal->klass->_0).element_class ==
        (TypeInfo__MVJetPack__JetModeType->_0).element_class) {
      puVar2 = (uint8_t *)func_?(jetModeVal);
      uVar3 = *puVar2;
      uVar4 = (this->fields).mode;
      if (uVar4 != uVar3) {
        if (uVar4 == 2) {
          JetPackVisualization_SetMaxSizeForThrusters
                    (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
                     (MethodInfo *)0x0);
        }
        if (uVar3 == 1) {
          JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
          (this->fields).mode = 1;
          return;
        }
        if (uVar3 == 0) {
          JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
          (this->fields).mode = 0;
          return;
        }
        if (uVar3 == 2) {
          JetPackVisualization_SetMaxSizeForThrusters(this,3.0,10.0,(MethodInfo *)0x0);
        }
      }
      (this->fields).mode = uVar3;
      return;
    }
  }
  func_?(jetModeVal,pMVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JetPackVisualization() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization__ctor
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).pitchMax = 60.0;
  (this->fields).pitchSpeedTime = 15.0;
  (this->fields).pitchFactor = 2.5;
  (this->fields).smoothMoveSpeedTime = 10.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).posDiff.x = pVVar1->x;
  (this->fields).posDiff.y = fVar3;
  (this->fields).posDiff.z = fVar4;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__List__);
  (this->fields).thrusters = (List_1_UnityEngine_ParticleSystem_ *)this_00;
  (this->fields).mode = 3;
  VehicleVisualizationBase::VehicleVisualizationBase__ctor
            ((VehicleVisualizationBase *)this,(MethodInfo *)0x0);
  return;
}

