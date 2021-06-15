
/* Vector3 BoundsToPosition(Bounds) */

Vector3 * Assembly-CSharp.dll::SplashController::SplashController_BoundsToPosition
                    (Vector3 *__return_storage_ptr__,Bounds b,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&b,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  pVVar5 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     (&VStack_6,(InputToPlayerMovementAndroid *)&b,(MethodInfo *)0x0);
  uVar7 = pVVar5->y;
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = uStack_3._4_4_ - (float)uVar7;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Single CalcSplashSoundVolume(Vector3) */

float Assembly-CSharp.dll::SplashController::SplashController_CalcSplashSoundVolume
                (SplashController *this,Vector3 velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    ((float)((uint)velocity.y ^ _UNK_?),0.0,30.0,(MethodInfo *)0x0);
  return (fVar1 / _UNK_?) * (this->fields).splashSoundVolume;
}


/* Void CleanUpInactiveObjectIDs() */

void Assembly-CSharp.dll::SplashController::SplashController_CleanUpInactiveObjectIDs
               (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?(TypeInfo__SplashController);
  }
  pDVar1 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar1 != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                       );
    if (pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
    {
      iVar3 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                        ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                          *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__get_Count__
                        );
      array = (Object__Array *)func_?(TypeInfo__System__Int32,iVar3);
      pDVar1 = TypeInfo__SplashController->static_fields->objectIDToData;
      if (pDVar1 != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
        pOVar4 = array;
        pDVar2 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__get_Keys
                           ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                           );
        if (pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)
                      0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__CopyTo
                    ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *
                     )pDVar2,array,0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__CopyTo_System__Int32_____int_
                    );
          uVar5 = 0;
          if (array != (Object__Array *)0x0) {
            ppOVar6 = array->vector;
            while( true ) {
              if ((int)array->max_length <= (int)uVar5) {
                return;
              }
              if (array->max_length <= uVar5) break;
              key = *ppOVar6;
              array = pOVar4;
              if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__SplashController->_1).cctor_started == 0)) {
                func_?(TypeInfo__SplashController);
                array = pOVar4;
              }
              pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)TypeInfo__SplashController->static_fields->objectIDToData;
              if (pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)0x0) goto code_?;
              pTVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar7,(int32_t)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                                 );
              iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                                ((MethodInfo *)0x0);
              if (pTVar8 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
              if (1 < iVar3 - (int)(pTVar8->fields).m_terrainTiles) {
                if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__SplashController->_1).cctor_started == 0)) {
                  func_?();
                }
                pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)TypeInfo__SplashController->static_fields->objectIDToData;
                if (pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                          (pDVar7,(int32_t)key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Remove_int_
                          );
              }
              uVar5 = uVar5 + 1;
              ppOVar6 = ppOVar6 + 1;
              pOVar4 = array;
            }
            uVar9 = func_?(0,0);
            func_?(uVar9);
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::SplashController::SplashController_Destroy
               (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?(TypeInfo__SplashController);
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
              );
    TypeInfo__SplashController->static_fields->currentObjectID = 0;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EmitWaterPillar(Vector3, Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterPillar
               (SplashController *this,Vector3 position,Vector3 impactVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).waterPillarParticles;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pPVar1,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_01,position,(MethodInfo *)0x0);
    func_?(&impactVelocity,0);
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).waterPillarParticles;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (this_02 != (WaterPlaneManager *)0x0) {
        pCVar2 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                           ((Color *)&puStack_3,this_02,(MethodInfo *)0x0);
        pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                           ((Color *)&puStack_3,*pCVar2,(this->fields).pillarTint,(MethodInfo *)0x0
                           );
        pCVar2 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Division
                                    ((Vector4 *)&puStack_3,(Vector4)*pCVar2,2.0,(MethodInfo *)0x0);
        pPVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                 ParticleSystem_MinMaxGradient_op_Implicit
                           ((ParticleSystem_MinMaxGradient *)&stack0xffffffbc,*pCVar2,
                            (MethodInfo *)0x0);
        impactVelocity.y = 0.0;
        fVar5 = (pPVar4->m_ColorMin).a;
        impactVelocity.x = (pPVar4->m_ColorMax).a;
        puStack_3 = &stack0xfffffff8;
        func_?();
        iVar6 = 1;
        fVar7 = _UNK_?;
        while( true ) {
          if (fVar5 <= fVar7) {
            return;
          }
          func_?(&stack0xfffffff8,fVar5 - fVar7);
          pPVar1 = (this->fields).waterPillarParticles;
          if (pPVar1 == (ParticleSystem *)0x0) break;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
          ParticleSystem_Emit_Internal(pPVar1,1,(MethodInfo *)0x0);
          iVar6 = iVar6 + 1;
          fVar7 = (float)iVar6;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void EmitWaterRing(Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterRing
               (SplashController *this,Vector3 position,MethodInfo *method)

{
  pPVar1 = (this->fields).waterRingParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,position,(MethodInfo *)0x0);
      pPVar1 = (this->fields).waterRingParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_Emit_Internal(pPVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EmitWaterSplash(Vector3, Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterSplash
               (SplashController *this,Vector3 position,Vector3 velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).waterSplashParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,position,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).waterSplashParticles;
      if (this_00 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                  (this_00,(MethodInfo *)0x0);
        func_?();
        func_?();
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                            ((MethodInfo *)0x0);
        if (this_02 != (WaterPlaneManager *)0x0) {
          pCVar2 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                             ((Color *)&puStack_3,this_02,(MethodInfo *)0x0);
          pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                             ((Color *)&puStack_3,*pCVar2,(this->fields).splashTint,
                              (MethodInfo *)0x0);
          pCVar2 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Division
                                      ((Vector4 *)&puStack_3,(Vector4)*pCVar2,2.0,(MethodInfo *)0x0
                                      );
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
          ParticleSystem_MinMaxGradient_op_Implicit
                    ((ParticleSystem_MinMaxGradient *)&stack0xffffffbc,*pCVar2,(MethodInfo *)0x0);
          puStack_3 = &stack0xfffffff8;
          func_?();
          pPVar1 = (this->fields).waterSplashParticles;
          fVar4 = (float10)func_?();
          if (pPVar1 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal
                      (pPVar1,(int)((this->fields).baseNumberOfSplashParticles * (float)fVar4),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SplashController+ObjectData GetObjectData(Int32) */

SplashController_ObjectData *
Assembly-CSharp.dll::SplashController::SplashController_GetObjectData
          (int32_t objectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?(TypeInfo__SplashController);
  }
  this = TypeInfo__SplashController->static_fields->objectIDToData;
  if (this != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this,objectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SplashController->_1).cctor_started == 0)) {
        func_?(TypeInfo__SplashController);
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)TypeInfo__SplashController->static_fields->objectIDToData;
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__SplashController__ObjectData);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_3);
      (this_00->fields)._._._._.m_CachedPtr = (void *)0x7f800000;
      *(undefined1 *)&(this_00->fields).target = 0;
      if (pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                (pDVar2,objectID,(TerrainUtility_TerrainMap *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
                );
    }
    if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SplashController->_1).cctor_started == 0)) {
      func_?(TypeInfo__SplashController);
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)TypeInfo__SplashController->static_fields->objectIDToData;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pSVar4 = (SplashController_ObjectData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (pDVar2,objectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                         );
      pDVar5 = (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_
                *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                            ((MethodInfo *)0x0);
      if (pSVar4 != (SplashController_ObjectData *)0x0) {
        (pSVar4->fields)._LastFrameInWater_k__BackingField = (int32_t)pDVar5;
        fVar6 = ((Vector3 *)&(pSVar4->fields)._TimeSinceLastRingEmission_k__BackingField)->x;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        ((Vector3 *)&(pSVar4->fields)._TimeSinceLastRingEmission_k__BackingField)->x = fVar7 + fVar6
        ;
        return pSVar4;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  pSVar4 = (SplashController_ObjectData *)(*pcVar8)();
  return pSVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::SplashController::SplashController_Initialize
               (SplashController *this,MethodInfo *method)

{
  pSVar1 = (this->fields).streamedSplashSound;
  if (pSVar1 != (StreamedAudioClip *)0x0) {
    (pSVar1->fields).receiver = (StreamedAudioClip_IReceiver *)this;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WaterSplash(Bounds, Vector3, Int32) */

void Assembly-CSharp.dll::SplashController::SplashController_WaterSplash
               (SplashController *this,Bounds bounds,Vector3 velocity,int32_t objectID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?(TypeInfo__SplashController);
  }
  method_00 = (MethodInfo *)0x0;
  puVar3 = (undefined8 *)func_?(&stack0xffffffdc,&stack0xffffff98);
  fVar4 = (float)((ulonglong)*puVar3 >> 0x20);
  pVVar5 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     (&VStack_6,(InputToPlayerMovementAndroid *)&stack0xffffff98,(MethodInfo *)0x0)
  ;
  uVar7 = pVVar5->y;
  uStack_8 = CONCAT44(fVar4 - (float)uVar7,(undefined4)uStack_8);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pWVar9 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (pWVar9 == (WaterPlaneManager *)0x0) goto code_?;
  fVar4 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar9,(MethodInfo *)0x0);
  VStack_6.z = fVar4;
  if (fVar4 < uStack_8._4_4_) {
    return;
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
  goto code_?;
  bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__ContainsKey
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,objectID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                    );
  if (bVar10 == 0) {
    if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SplashController->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)TypeInfo__SplashController->static_fields->objectIDToData;
    this_01 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
    (this_01->fields)._._._._.m_CachedPtr = (void *)0x7f800000;
    *(undefined1 *)&(this_01->fields).target = 0;
    if (pDVar11 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
              (pDVar11,objectID,(TerrainUtility_TerrainMap *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
              );
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?();
  }
  pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar11 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
  pTVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                      (pDVar11,objectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                      );
  pDVar13 = (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_
             *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                         ((MethodInfo *)0x0);
  if (pTVar12 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
  (pTVar12->fields).m_terrainTiles = pDVar13;
  fVar4 = (pTVar12->fields).m_patchSize.x;
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (pTVar12->fields).m_patchSize.x = fVar14 + fVar4;
  puVar3 = (undefined8 *)func_?();
  if (uStack_8._4_4_ + (float)((ulonglong)*puVar3 >> 0x20) <= VStack_6.z) {
    return;
  }
  func_?();
  fVar4 = (pTVar12->fields).m_patchSize.x;
  pfVar15 = &(this->fields).timeBeforeNewRingIsEmitted;
  uVar16 = uVar1;
  if (*pfVar15 <= fVar4 && fVar4 != *pfVar15) {
code_?:
    pPVar17 = (this->fields).waterRingParticles;
    if ((pPVar17 == (ParticleSystem *)0x0) ||
       (uVar1 = uVar16,
       pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pPVar17,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0))
    goto code_?;
    value.z = fStack_2;
    value.x = (float)(int)uVar16;
    value.y = (float)(int)(uVar16 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar18,value,(MethodInfo *)0x0);
    pPVar17 = (this->fields).waterRingParticles;
    if (pPVar17 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_Internal
              (pPVar17,1,(MethodInfo *)0x0);
    (pTVar12->fields).m_patchSize.x = 0.0;
    (pTVar12->fields).m_patchSize.y = (float)(int)uVar1;
    (pTVar12->fields).m_patchSize.z = (float)(int)(uVar1 >> 0x20);
    (pTVar12->fields).m_errorCode = 0;
  }
  else {
    fVar4 = (float)(pTVar12->fields).m_errorCode;
    VStack_6.y = (pTVar12->fields).m_patchSize.y;
    VStack_6.z = (pTVar12->fields).m_patchSize.z;
    fVar14 = 0.0;
    uStack_8 = uVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar4;
    a.x = VStack_6.y;
    a.y = VStack_6.z;
    b.z = fVar14;
    b.x = (float)(undefined4)uStack_8;
    b.y = uStack_8._4_4_;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                       (a,b,(MethodInfo *)0x0);
    pfVar15 = &(this->fields).distanceBeforeNewRingIsEmitted;
    uVar16 = uVar1;
    if (*pfVar15 <= fVar4 && fVar4 != *pfVar15) goto code_?;
  }
  if (*(char *)&pTVar12[1].klass != '\0') {
    return;
  }
  *(undefined1 *)&pTVar12[1].klass = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  VStack_6.z = (float)(this->fields).splashSound;
  uStack_8 = uVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                     ((float)((uint)velocity.y ^ _UNK_?),0.0,30.0,(MethodInfo *)0x0);
  if (this_02 != (AudioManager *)0x0) {
    position.z = 0.0;
    position.x = (float)(undefined4)uStack_8;
    position.y = uStack_8._4_4_;
    AudioManager::AudioManager_Play
              (this_02,StringLiteral_AvatarWaterSplashSound,(AudioClip *)VStack_6.z,position,
               (fVar4 / _UNK_?) * (this->fields).splashSoundVolume,
               SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
    fVar4 = (float)uVar1;
    fVar14 = (float)(uVar1 >> 0x20);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar17 = (this->fields).waterPillarParticles;
    uStack_8 = uStack_8 & 0xffffffff;
    if ((pPVar17 != (ParticleSystem *)0x0) &&
       (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pPVar17,(MethodInfo *)0x0), pTVar18 != (Transform *)0x0))
    {
      value_00.y = fVar14;
      value_00.x = fVar4;
      value_00.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar18,value_00,(MethodInfo *)0x0);
      fVar19 = (float10)func_?();
      pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).waterPillarParticles;
      VStack_6.z = (this->fields).waterPillarDensity * (float)fVar19;
      if (pDVar11 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (pDVar11,(MethodInfo *)0x0);
        uStack_8 = CONCAT44(pOVar20,(undefined4)uStack_8);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pWVar9 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0)
        ;
        if (pWVar9 != (WaterPlaneManager *)0x0) {
          pCVar21 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                              ((Color *)&stack0xffffffcc,pWVar9,(MethodInfo *)0x0);
          pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                              ((Color *)&stack0xffffffcc,*pCVar21,(this->fields).pillarTint,
                               (MethodInfo *)0x0);
          uVar22 = 0x40000000;
          pCVar21 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Division
                                       ((Vector4 *)&stack0xffffffcc,(Vector4)*pCVar21,2.0,
                                        (MethodInfo *)0x0);
          pPVar23 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              ((ParticleSystem_MinMaxGradient *)&stack0xffffff84,*pCVar21,
                               (MethodInfo *)0x0);
          VStack_6.x = (pPVar23->m_ColorMax).r;
          VStack_6.y = (pPVar23->m_ColorMax).g;
          VStack_6.z = (pPVar23->m_ColorMax).b;
          uStack_8 = (ulonglong)(uint)(pPVar23->m_ColorMax).a;
          uVar24 = CONCAT44(&UNK_?,uVar22);
          func_?();
          iVar25 = 1;
          if (_UNK_? < VStack_6.z) {
            do {
              func_?();
              pPVar17 = (this->fields).waterPillarParticles;
              if (pPVar17 == (ParticleSystem *)0x0) goto code_?;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Emit_Internal(pPVar17,1,(MethodInfo *)0x0);
              iVar25 = iVar25 + 1;
            } while ((float)iVar25 < VStack_6.z);
          }
          fVar4 = (float)uVar24;
          fVar14 = (float)((ulonglong)uVar24 >> 0x20);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar17 = (this->fields).waterSplashParticles;
          uStack_8 = uStack_8 & 0xffffffff;
          if ((pPVar17 != (ParticleSystem *)0x0) &&
             (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pPVar17,(MethodInfo *)0x0),
             pTVar18 != (Transform *)0x0)) {
            value_01.y = fVar14;
            value_01.x = fVar4;
            value_01.z = (float)((int)&uStack_8 + 4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar18,value_01,(MethodInfo *)0x0);
            pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).waterSplashParticles;
            if (pDVar11 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (pDVar11,(MethodInfo *)0x0);
              uStack_8 = CONCAT44(pOVar20,(undefined4)uStack_8);
              func_?();
              func_?();
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pWVar9 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                                 ((MethodInfo *)0x0);
              if (pWVar9 != (WaterPlaneManager *)0x0) {
                pCVar21 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                                    ((Color *)&stack0xffffffcc,pWVar9,(MethodInfo *)0x0);
                pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                                    ((Color *)&stack0xffffffcc,*pCVar21,(this->fields).splashTint,
                                     (MethodInfo *)0x0);
                pCVar21 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::
                                   Vector4_op_Division((Vector4 *)&stack0xffffffcc,(Vector4)*pCVar21
                                                       ,2.0,(MethodInfo *)0x0);
                pPVar23 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+MinMaxGradient::ParticleSystem_MinMaxGradient_op_Implicit
                                    ((ParticleSystem_MinMaxGradient *)&stack0xffffff84,*pCVar21,
                                     (MethodInfo *)0x0);
                VStack_6.x = (pPVar23->m_ColorMax).r;
                VStack_6.y = (pPVar23->m_ColorMax).g;
                VStack_6.z = (pPVar23->m_ColorMax).b;
                uStack_8 = (ulonglong)(uint)(pPVar23->m_ColorMax).a;
                func_?();
                pPVar17 = (this->fields).waterSplashParticles;
                fVar19 = (float10)func_?();
                if (pPVar17 != (ParticleSystem *)0x0) {
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_Emit_Internal
                            (pPVar17,(int)((this->fields).baseNumberOfSplashParticles * (float)fVar19
                                         ),(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* SplashController() */

void Assembly-CSharp.dll::SplashController::SplashController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__SplashController->static_fields->currentObjectID = 0;
  this = (Dictionary_2_System_Int32_SplashController_ObjectData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
  Dictionary_2_WinningConditionType_System_Object___ctor_3
            ((Dictionary_2_WinningConditionType_System_Object_ *)this,8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Dictionary_int_
            );
  TypeInfo__SplashController->static_fields->objectIDToData = this;
  return;
}


/* SplashController() */

void Assembly-CSharp.dll::SplashController::SplashController__ctor
               (SplashController *this,MethodInfo *method)

{
  (this->fields).timeBeforeNewRingIsEmitted = 1.2;
  (this->fields).distanceBeforeNewRingIsEmitted = 1.5;
  (this->fields).baseNumberOfSplashParticles = 1.0;
  (this->fields).baseSplashParticlesSpeed = 0.5;
  (this->fields).waterPillarDensity = 0.5;
  (this->fields).splashSoundVolume = 0.5;
  return;
}


/* Int32 get_NewObjectID() */

int32_t Assembly-CSharp.dll::SplashController::SplashController_get_NewObjectID
                  (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?(TypeInfo__SplashController);
  }
  TypeInfo__SplashController->static_fields->currentObjectID =
       TypeInfo__SplashController->static_fields->currentObjectID + 1;
  return TypeInfo__SplashController->static_fields->currentObjectID;
}

